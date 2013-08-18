package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.AskReplyQueries;
import com.tastesync.db.queries.RestaurantQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSCurrentRecommendedRestaurantDetailsObj;
import com.tastesync.model.objects.TSMenuObj;
import com.tastesync.model.objects.TSRestaurantDetailsObj;
import com.tastesync.model.objects.TSRestaurantExtendInfoObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantQuesionNonTsAssignedObj;
import com.tastesync.model.objects.TSRestaurantTipsAPSettingsObj;
import com.tastesync.model.objects.TSUserProfileBasicObj;
import com.tastesync.model.objects.derived.TSRestaurantRecommendersDetailsObj;

import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import java.util.ArrayList;
import java.util.List;


public class RestaurantDAOImpl extends BaseDaoImpl implements RestaurantDAO {
    @Override
    public TSRestaurantObj showRestaurantDetail(String restaurantId)
        throws TasteSyncException {
        TSRestaurantObj tsRestaurantObj = new TSRestaurantObj();

        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            System.out.println("RestaurantQueries.RESTAURANT_SELECT_SQL=" +
                RestaurantQueries.RESTAURANT_SELECT_SQL);
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_SELECT_SQL);
            statement.setString(1, restaurantId);
            resultset = statement.executeQuery();

            //only one result
            if (resultset.next()) {
                mapResultsetRowToTSRestaurantVO(tsRestaurantObj, resultset);
            }

            statement.close();
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsRestaurantObj;
    }

    private void mapResultsetRowToTSRestaurantMenuVO(TSMenuObj tsMenuObj,
        ResultSet resultset) throws SQLException {
        tsMenuObj.setRestaurantId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_menu.restaurant_id")));
        tsMenuObj.setMenuSource(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_menu.menu_source")));
        tsMenuObj.setMenuMobileUrl(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_menu.menu_mobileurl")));
    }

    private void mapResultsetRowToTSRestaurantVO(
        TSRestaurantObj tsRestaurantObj, ResultSet resultset)
        throws SQLException {
        tsRestaurantObj.setRestaurantId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_ID")));

        tsRestaurantObj.setFactualId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.FACTUAL_ID")));

        tsRestaurantObj.setRestaurantName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_NAME")));

        tsRestaurantObj.setFactualRating(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.FACTUAL_RATING")));

        tsRestaurantObj.setPriceRange(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.PRICE_RANGE")));

        tsRestaurantObj.setRestaurantCityId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_CITY_ID")));

        tsRestaurantObj.setRestaurantHours(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_HOURS")));

        //TODO
        //TODO - calculate from restaurantHours
        // e.g. {"monday":[["00:00","24:00"]],"tuesday":[["00:00","24:00"]],"wednesday":[["00:00","24:00"]],"thursday":[["00:00","24:00"]],"friday":[["00:00","24:00"]],"saturday":[["00:00","24:00"]],"sunday":[["00:00","24:00"]]}
        // e.g. {"monday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"tuesday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"wednesday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"thursday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"friday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"saturday":[["12:00","23:00","Dinner"]],"sunday":[["12:00","23:00","Dinner"]]}
        //FOR NY, Get today day and current time. check whether it falls
        tsRestaurantObj.setOpenNowFlag("1");
        tsRestaurantObj.setRestaurantLat(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_LAT")));

        tsRestaurantObj.setRestaurantLon(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_LON")));

        if ((tsRestaurantObj.getRestaurantLat() == null) &&
                (tsRestaurantObj.getRestaurantLon() == null)) {
            tsRestaurantObj.setMoreInfoFlag("1");
        } else {
            tsRestaurantObj.setMoreInfoFlag("0");
        }

        tsRestaurantObj.setSumVoteCount(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.SUM_VOTE_COUNT")));

        tsRestaurantObj.setSumVoteValue(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.SUM_VOTE_VALUE")));

        tsRestaurantObj.setTbdOpenTableId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.TBD_OPENTABLE_ID")));
    }

    private void mapResultsetRowToTSRestaurantTipsAPSettingsVO(String userId,
        TSRestaurantTipsAPSettingsObj tsRestaurantTipsAPSettingsObj,
        ResultSet resultset) throws SQLException {
        tsRestaurantTipsAPSettingsObj.setUserId(CommonFunctionsUtil.getModifiedValueString(
                userId));
        tsRestaurantTipsAPSettingsObj.setAutoPublishingSetting(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("usg_usnc_ap.usnc_yn")));

        if (TSConstants.USNC_APP_FACEBOOK.equals(resultset.getString(
                        "usg_usnc_ap.usnc_id"))) {
            tsRestaurantTipsAPSettingsObj.setApSettingType(TSRestaurantTipsAPSettingsObj.APSETTINGTYPE.FACEBOOK);
        } else if (TSConstants.USNC_APP_TWITTER.equals(resultset.getString(
                        "usg_usnc_ap.usnc_id"))) {
            tsRestaurantTipsAPSettingsObj.setApSettingType(TSRestaurantTipsAPSettingsObj.APSETTINGTYPE.TWITTER);
        }
    }

    private void mapResultsetRowToTSRestaurantPhotoObjVO(
        TSRestaurantPhotoObj tsRestaurantPhotoObj, ResultSet resultset)
        throws SQLException {
        tsRestaurantPhotoObj.setRestaurantId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.RESTAURANT_ID")));
        tsRestaurantPhotoObj.setPhotoId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.PHOTO_ID")));
        tsRestaurantPhotoObj.setPrefix(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.PREFIX")));
        tsRestaurantPhotoObj.setSuffix(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.SUFFIX")));
        tsRestaurantPhotoObj.setWidth(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.WIDTH")));
        tsRestaurantPhotoObj.setHeight(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.HEIGHT")));
        tsRestaurantPhotoObj.setUltimateSourceName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.ULTIMATE_SOURCE_NAME")));
        tsRestaurantPhotoObj.setUltimateSourceUrl(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.ULTIMATE_SOURCE_URL")));
        tsRestaurantPhotoObj.setPhotoSource(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_photo.PHOTO_SOURCE")));
    }

    //TODO
    private void mapResultsetRowToTSRestaurantExtendInfoVO(
        TSRestaurantExtendInfoObj tsRestaurantExtendInfoObj, ResultSet resultset)
        throws SQLException {
        tsRestaurantExtendInfoObj.setPhoneNumber(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.tel")));
        tsRestaurantExtendInfoObj.setWebsite(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.website")));
        tsRestaurantExtendInfoObj.setHealthyOptionsFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.options_healthy")));
        tsRestaurantExtendInfoObj.setWifiFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.wifi")));
        tsRestaurantExtendInfoObj.setPayCashonlyFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.payment_cashonly")));
        tsRestaurantExtendInfoObj.setReservationsFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.reservations")));
        tsRestaurantExtendInfoObj.setOpen24HoursFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.open_24hrs")));
        tsRestaurantExtendInfoObj.setAttire(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.attire")));
        tsRestaurantExtendInfoObj.setAttireRequiredList(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.attire_required")));
        tsRestaurantExtendInfoObj.setAttireProhibitedList(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString(
                    "restaurant_extended_info.attire_prohibited")));
        tsRestaurantExtendInfoObj.setParkingFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.parking")));
        tsRestaurantExtendInfoObj.setParkingValetFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.parking_valet")));
        tsRestaurantExtendInfoObj.setParkingFreeFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.parking_free")));
        tsRestaurantExtendInfoObj.setParkingGarageFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.parking_garage")));
        tsRestaurantExtendInfoObj.setParkingLotFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.parking_lot")));
        tsRestaurantExtendInfoObj.setParkingStreetFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.parking_street")));
        tsRestaurantExtendInfoObj.setParkingValidatedFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString(
                    "restaurant_extended_info.parking_validated")));
        tsRestaurantExtendInfoObj.setSmokingFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.smoking")));
        tsRestaurantExtendInfoObj.setAccessibleWheelchairFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString(
                    "restaurant_extended_info.accessible_wheelchair")));
        tsRestaurantExtendInfoObj.setAlcoholFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.alcohol")));
        tsRestaurantExtendInfoObj.setAlcoholBarFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.alcohol_bar")));
        tsRestaurantExtendInfoObj.setAlcoholBeerWineFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString(
                    "restaurant_extended_info.alcohol_beer_wine")));
        tsRestaurantExtendInfoObj.setAlcoholByobFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.alcohol_byob")));
        tsRestaurantExtendInfoObj.setGroupsGoodForFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.groups_goodfor")));
        tsRestaurantExtendInfoObj.setKidsGoodForFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.kids_goodfor")));
        tsRestaurantExtendInfoObj.setKidsMenuFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.kids_menu")));
        tsRestaurantExtendInfoObj.setMealBreakfastFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.meal_breakfast")));
        tsRestaurantExtendInfoObj.setMealCaterFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.meal_cater")));
        tsRestaurantExtendInfoObj.setMealDeliverFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.meal_deliver")));
        tsRestaurantExtendInfoObj.setMealDinnerFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.meal_dinner")));
        tsRestaurantExtendInfoObj.setMealLunchFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.meal_lunch")));
        tsRestaurantExtendInfoObj.setMealTakeoutFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.meal_takeout")));
        tsRestaurantExtendInfoObj.setOptionsGlutenfreeFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString(
                    "restaurant_extended_info.options_glutenfree")));
        tsRestaurantExtendInfoObj.setOptionsLowfatFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.options_lowfat")));
        tsRestaurantExtendInfoObj.setOptionsOrganicFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.options_organic")));
        tsRestaurantExtendInfoObj.setOptionsVeganFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.options_vegan")));
        tsRestaurantExtendInfoObj.setOptionsVegetarianFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString(
                    "restaurant_extended_info.options_vegetarian")));
        tsRestaurantExtendInfoObj.setRoomPrivateFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.room_private")));
        tsRestaurantExtendInfoObj.setSeatingOutdoorFlag(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_extended_info.seating_outdoor")));
        tsRestaurantExtendInfoObj.setLat(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.restaurant_lat")));
        tsRestaurantExtendInfoObj.setLon(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.restaurant_lon")));
    }

    @Override
    public List<TSRestaurantObj> showRestaurantsDetailsList()
        throws TasteSyncException {
        List<TSRestaurantObj> tsRestaurantObjs = new ArrayList<TSRestaurantObj>();

        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANTS_SELECT_SQL);
            resultset = statement.executeQuery();

            while (resultset.next()) {
                TSRestaurantObj tsRestaurantObj = new TSRestaurantObj();
                mapResultsetRowToTSRestaurantVO(tsRestaurantObj, resultset);

                tsRestaurantObjs.add(tsRestaurantObj);
            }

            statement.close();
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsRestaurantObjs;
    }

    @Override
    public TSRestaurantDetailsObj showRestaurantDetail(String userId,
        String restaurantId) throws TasteSyncException {
        TSRestaurantDetailsObj tsRestaurantDetailsObj = null;
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_SELECT_SQL);
            statement.setString(1, restaurantId);
            resultset = statement.executeQuery();

            String openNowFlag = "0";
            String moreInfoFlag = "0";

            //only one result
            if (resultset.next()) {
                String restaurantHours = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant.RESTAURANT_HOURS"));

                //TODO
                //TODO - calculate from restaurantHours
                // e.g. {"monday":[["00:00","24:00"]],"tuesday":[["00:00","24:00"]],"wednesday":[["00:00","24:00"]],"thursday":[["00:00","24:00"]],"friday":[["00:00","24:00"]],"saturday":[["00:00","24:00"]],"sunday":[["00:00","24:00"]]}
                // e.g. {"monday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"tuesday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"wednesday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"thursday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"friday":[["11:30","16:00","Lunch"],["17:00","23:00","Dinner"]],"saturday":[["12:00","23:00","Dinner"]],"sunday":[["12:00","23:00","Dinner"]]}
                //FOR NY, Get today day and current time. check whether it falls
                openNowFlag = "1";

                String restaurantLat = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant.RESTAURANT_LAT"));

                String restaurantLon = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant.RESTAURANT_LON"));

                if ((restaurantLat == null) && (restaurantLon == null)) {
                    moreInfoFlag = "1";
                }
            }

            statement.close();
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_PHOTO_SELECT_SQL);
            statement.setString(1, restaurantId);
            resultset = statement.executeQuery();

            int instgramPhoto = 0;
            int nonInstgramPhoto = 0;
            List<TSRestaurantPhotoObj> nonInstagramTsRestaurantPhotoObjs = new ArrayList<TSRestaurantPhotoObj>();
            List<TSRestaurantPhotoObj> photoList = new ArrayList<TSRestaurantPhotoObj>();

            while (resultset.next()) {
                TSRestaurantPhotoObj tsRestaurantPhotoObj = new TSRestaurantPhotoObj();
                mapResultsetRowToTSRestaurantPhotoObjVO(tsRestaurantPhotoObj,
                    resultset);

                if ("Instagram".equalsIgnoreCase(
                            CommonFunctionsUtil.getModifiedValueString(
                                resultset.getString(
                                    "restaurant_photo.ULTIMATE_SOURCE_NAME")))) {
                    photoList.add(tsRestaurantPhotoObj);
                    ++instgramPhoto;
                } else {
                    nonInstagramTsRestaurantPhotoObjs.add(tsRestaurantPhotoObj);
                    ++nonInstgramPhoto;
                }

                if (instgramPhoto == 3) {
                    break;
                }
            }

            int tsRestaurantPhotoObjsSize = photoList.size();
            int nonInstagrapmPhotoLeft = (3 - tsRestaurantPhotoObjsSize);

            int nonInstagramTsRestaurantPhotoObjsSize = nonInstagramTsRestaurantPhotoObjs.size();

            if (nonInstagramTsRestaurantPhotoObjsSize < nonInstagrapmPhotoLeft) {
                nonInstagrapmPhotoLeft = nonInstagramTsRestaurantPhotoObjsSize;
            }

            if (nonInstagrapmPhotoLeft > 0) {
                for (int i = 0; i < nonInstagrapmPhotoLeft; ++i) {
                    photoList.add(nonInstagramTsRestaurantPhotoObjs.get(i));
                }
            }

            statement.close();

            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_MENU_SELECT_SQL);
            statement.setString(1, restaurantId);
            resultset = statement.executeQuery();

            String menuFlag = "0";

            //only one result
            if (resultset.next()) {
                String mobileMenuUrl = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_menu.menu_mobileurl"));

                if (mobileMenuUrl != null) {
                    menuFlag = "1";
                } else {
                    menuFlag = "0";
                }
            }

            statement.close();

            statement = connection.prepareStatement(RestaurantQueries.USER_RESTAURANT_SAVED_DATA_EXIST_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, restaurantId);
            resultset = statement.executeQuery();

            String userRestaurantSavedFlag = "0";

            if (resultset.next()) {
                userRestaurantSavedFlag = "1";
            }

            statement.close();

            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_FAV_DATA_EXISTS_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, restaurantId);
            resultset = statement.executeQuery();

            String userRestaurantFavFlag = "0";

            if (resultset.next()) {
                userRestaurantFavFlag = "1";
            }

            statement.close();

            statement = connection.prepareStatement(RestaurantQueries.USER_RESTAURANT_TIPS_EXIST_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, restaurantId);
            
            resultset = statement.executeQuery();

            String userRestaurantTipFlag = "0";

            if (resultset.next()) {
                userRestaurantTipFlag = "1";
            }

            statement.close();

            tsRestaurantDetailsObj = new TSRestaurantDetailsObj();
            tsRestaurantDetailsObj.setOpenNowFlag(openNowFlag);
            tsRestaurantDetailsObj.setMoreInfoFlag(moreInfoFlag);
            tsRestaurantDetailsObj.setMenuFlag(menuFlag);
            tsRestaurantDetailsObj.setUserRestaurantFavFlag(userRestaurantFavFlag);
            tsRestaurantDetailsObj.setUserRestaurantSavedFlag(userRestaurantSavedFlag);
            tsRestaurantDetailsObj.setUserRestaurantTipFlag(userRestaurantTipFlag);
            tsRestaurantDetailsObj.setDealHeadline("");
            tsRestaurantDetailsObj.setPhotoList(photoList);

            return tsRestaurantDetailsObj;
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public TSCurrentRecommendedRestaurantDetailsObj showCurrentRestaurantRecommendedDetails(
        String userId, String restaurantId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public TSMenuObj showRestaurantDetailMenu(String restaurantId)
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;
        TSMenuObj tsMenuObj = null;

        try {
            connection = tsDataSource.getConnection();
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_MENU_SELECT_SQL);
            statement.setString(1, restaurantId);
            resultset = statement.executeQuery();

            //only one result
            if (resultset.next()) {
                tsMenuObj = new TSMenuObj();
                mapResultsetRowToTSRestaurantMenuVO(tsMenuObj, resultset);
            }

            statement.close();
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsMenuObj;
    }

    @Override
    public TSRestaurantExtendInfoObj showRestaurantDetailMoreInfo(
        String restaurantId) throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;
        TSRestaurantExtendInfoObj tsRestaurantExtendInfoObj = null;

        try {
            connection = tsDataSource.getConnection();
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_EXTENDED_INFO_SELECT_SQL);
            statement.setString(1, restaurantId);
            statement.setString(2, restaurantId);
            resultset = statement.executeQuery();

            String[] addressList = new String[6];

            tsRestaurantExtendInfoObj = new TSRestaurantExtendInfoObj();
            //only one result
            if (resultset.next()) {
                mapResultsetRowToTSRestaurantExtendInfoVO(tsRestaurantExtendInfoObj,
                    resultset);
                addressList[0] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_extended_info.address"));
                addressList[1] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_extended_info.address_extended"));
                addressList[5] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_extended_info.postcode"));
            } else {
            	//log the restaurant id. log ipaddress!!
            	logger.warn("showRestaurantDetailMoreInfo - restaurantId="+restaurantId);
            	return null;
            }

            statement.close();

            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_EXTENDED_INFO_CITY_SELECT_SQL);
            statement.setString(1, restaurantId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                addressList[2] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "cities.city"));
                addressList[3] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "cities.state"));
                addressList[4] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "cities.country"));
            }
            
            statement.close();

            StringBuffer addressBuffer = new StringBuffer();

            for (int i = 0; i < addressList.length; ++i) {
                if ((addressList[i] != null) && !addressList[i].isEmpty()) {
                    addressBuffer.append(addressList[i]).append(", ");
                }
            }

            //remove last , characters
            if (tsRestaurantExtendInfoObj != null) {
                String addressStr = addressBuffer.toString();

                if ((addressStr != null) && (addressStr.length() > 2)) {
                    addressStr = addressStr.substring(0, addressStr.length() -
                            2);
                }

                tsRestaurantExtendInfoObj.setAddress(addressStr);
            }
            return tsRestaurantExtendInfoObj;

        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

    }

    @Override
    public List<TSRestaurantPhotoObj> showRestaurantDetailPhotos(
        String restaurantId) throws TasteSyncException {
        List<TSRestaurantPhotoObj> tsRestaurantPhotoObjs = new ArrayList<TSRestaurantPhotoObj>();

        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_PHOTOS_SELECT_SQL);
            statement.setString(1, restaurantId);

            resultset = statement.executeQuery();

            while (resultset.next()) {
                TSRestaurantPhotoObj tsRestaurantPhotoObj = new TSRestaurantPhotoObj();
                mapResultsetRowToTSRestaurantPhotoObjVO(tsRestaurantPhotoObj,
                    resultset);

                tsRestaurantPhotoObjs.add(tsRestaurantPhotoObj);
            }

            statement.close();
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsRestaurantPhotoObjs;
    }

    @Override
    public List<TSRestaurantTipsAPSettingsObj> showRestaurantDetailTipAPSettings(
        String userId) throws TasteSyncException {
        List<TSRestaurantTipsAPSettingsObj> tsRestaurantTipsAPSettingsObjs = new ArrayList<TSRestaurantTipsAPSettingsObj>();

        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_DETAIL_TIP_APSETTINGS_SELECT_SQL);
            statement.setString(1, userId);

            resultset = statement.executeQuery();

            while (resultset.next()) {
                TSRestaurantTipsAPSettingsObj tsRestaurantTipsAPSettingsObj = new TSRestaurantTipsAPSettingsObj();
                mapResultsetRowToTSRestaurantTipsAPSettingsVO(userId,
                    tsRestaurantTipsAPSettingsObj, resultset);

                tsRestaurantTipsAPSettingsObjs.add(tsRestaurantTipsAPSettingsObj);
            }

            statement.close();
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsRestaurantTipsAPSettingsObjs;
    }

    @Override
    public void submitSaveOrUnsaveRestaurant(String userId,
        String restaurantId, String userRestaurantSavedFlag)
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();
        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        //TODO userRestaurantSavedFlag can be determined internally using count(*) as part of select
        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            if (TSConstants.INT_INSERT.equals(userRestaurantSavedFlag)) {
                statement = connection.prepareStatement(RestaurantQueries.SAVERESTAURANTFAV_INSERT_SQL);
                statement.setString(1, restaurantId);
                statement.setString(2, userId);
                statement.executeUpdate();
            } else if (TSConstants.INT_DELETE.endsWith(userRestaurantSavedFlag)) {
                statement = connection.prepareStatement(RestaurantQueries.SAVERESTAURANTFAV_DELETE_SQL);
                statement.setString(1, userId);
                statement.setString(2, restaurantId);
                statement.executeUpdate();
            } else {
                throw new TasteSyncException("Error Unknown Operation");
            }

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(RestaurantQueries.SAVERESTAURANTFAV_HISTORICAL_INSERT_SQL);

            List<String> inputKeyStr = new ArrayList<String>();
            inputKeyStr.add(userId);
            statement.setString(1,
                CommonFunctionsUtil.generateUniqueKey(inputKeyStr));
            statement.setString(2, restaurantId);
            statement.setString(3, userRestaurantSavedFlag);
            statement.setString(4, null);
            statement.setTimestamp(5,
                CommonFunctionsUtil.getCurrentDateTimestamp());
            statement.setString(6, userId);
            statement.executeUpdate();
            statement.close();
            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public void submitAddOrRemoveFromFavs(String userId, String restaurantId,
        String userRestaurantFavFlag) throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            if ("0".equals(userRestaurantFavFlag)) {
                statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_FAV_DELETE_SQL);
                statement.setString(1, restaurantId);
                statement.setString(2, userId);
                statement.executeUpdate();
                statement.close();
            } else if ("1".equals(userRestaurantFavFlag)) {
                //TODO first do select count(*). If needed, add data as fav or delete
                statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_FAV_INSERT_SQL);
                statement.setString(1, restaurantId);
                statement.setString(2, userId);
                statement.executeUpdate();
                statement.close();
            } else {
                throw new TasteSyncException(
                    "Unknown value for userRestaurantFavFlag as " +
                    userRestaurantFavFlag);
            }

            statement = connection.prepareStatement(RestaurantQueries.HISTORICAL_RESTAURANT_FAV_INSERT_SQL);

            statement.setString(1, userRestaurantFavFlag);

            List<String> inputKeyStr = new ArrayList<String>();
            inputKeyStr.add(userId);
            statement.setString(2,
                CommonFunctionsUtil.generateUniqueKey(inputKeyStr));

            statement.setString(3, restaurantId);

            statement.setTimestamp(4,
                CommonFunctionsUtil.getCurrentDateTimestamp());

            statement.setString(5, userId);

            statement.executeUpdate();
            statement.close();

            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public void submitRestaurantDetailTip(String userId, String restaurantId,
        String tipText, String shareOnFacebook, String shareOnTwitter)
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            String tipId = userId + CommonFunctionsUtil.generateUniqueKey();

            //TODO Add ALGO_STATUS column to restaurant_tips_tastesync
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_TIP_INSERT_SQL);
            statement.setString(1, restaurantId);
            statement.setString(2, tipId);
            statement.setString(3, tipText);
            statement.setString(4, userId);
            statement.executeUpdate();
            statement.close();

            statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                String facebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "users.user_fb_id"));

                if (statement != null) {
                    statement.close();
                }

                if ("1".equals(shareOnFacebook)) {
                    statement = connection.prepareStatement(AskReplyQueries.HISTORICAL_USER_SHARED_DATA_INSERT_SQL);

                    //datetime userid random number
                    statement.setString(1, facebookId);

                    List<String> inputKeyStr = new ArrayList<String>();
                    inputKeyStr.add(userId);

                    statement.setString(2,
                        CommonFunctionsUtil.generateUniqueKey(inputKeyStr));
                    statement.setTimestamp(3,
                        CommonFunctionsUtil.getCurrentDateTimestamp());
                    statement.setString(4, tipText);
                    statement.setString(5, "facebook_post");
                    statement.setString(6, userId);

                    statement.setString(1, userId);
                    statement.executeUpdate();

                    if (statement != null) {
                        statement.close();
                    }
                }

                //TODO Twitter - ph2
            }

            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public TSRestaurantRecommendersDetailsObj showRestaurantDetailAsk(
        String userId, String restaurantId) throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();
        TSRestaurantRecommendersDetailsObj tsRestaurantRecommendersDetailsObj = null;

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();

            statement = connection.prepareStatement(RestaurantQueries.RECOMMENDER_USER_DAY_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, restaurantId);
            resultset = statement.executeQuery();

            List<String> recommenderUserIdList = new ArrayList<String>();

            while (resultset.next()) {
                recommenderUserIdList.add(resultset.getString(
                        CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString(
                                "user_restaurant_reco.RECOMMENDER_USER_ID"))));
            }

            statement.close();

            String recommenderUserName = null;
            String recommenderUserPhoto = null;
            List<TSUserProfileBasicObj> recommendersDetailsList = new ArrayList<TSUserProfileBasicObj>();

            for (String recommenderUserId : recommenderUserIdList) {
                recommenderUserName = null;
                recommenderUserPhoto = null;

                statement = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                statement.setString(1, recommenderUserId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    recommenderUserName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.name"));
                    recommenderUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.picture"));
                }

                TSUserProfileBasicObj recommendeeUser = new TSUserProfileBasicObj();
                recommendeeUser.setName(recommenderUserName);
                recommendeeUser.setPhoto(recommenderUserPhoto);
                recommendeeUser.setUserId(recommenderUserId);
                recommendersDetailsList.add(recommendeeUser);
                statement.close();
            }

            tsRestaurantRecommendersDetailsObj = new TSRestaurantRecommendersDetailsObj();

            tsRestaurantRecommendersDetailsObj.setRecommendersDetailsList(recommendersDetailsList);
            tsRestaurantRecommendersDetailsObj.setRestaurantId(restaurantId);
            tsRestaurantRecommendersDetailsObj.setUserId(userId);

            return tsRestaurantRecommendersDetailsObj;
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public TSRestaurantQuesionNonTsAssignedObj submitRestaurantDetailAsk(
        String userId, String restaurantId, String questionText,
        String postQuestionOnForum, String[] recommendersUserIdList,
        String[] friendsFacebookIdList) throws TasteSyncException {
        TSRestaurantQuesionNonTsAssignedObj tsRestaurantQuesionNonTsAssignedObj = null;
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AskReplyQueries.RESTAURANT_QUESTION_INSERT_SQL);
            statement.setString(1, userId);

            statement.setString(2, postQuestionOnForum);

            statement.setTimestamp(3,
                CommonFunctionsUtil.getCurrentDateTimestamp());

            String questionId = userId +
                CommonFunctionsUtil.generateUniqueKey();

            statement.setString(4, questionId);
            statement.setString(5, questionText);
            statement.setString(6, restaurantId);
            statement.executeUpdate();
            statement.close();

            String userAssignedFriendType = null;
            String friendTrustedFlag = null;
            String questionRestaurantId = null;

            for (String recommendersUserId : recommendersUserIdList) {
                statement = connection.prepareStatement(AskReplyQueries.FRIEND_TRUSTED_FLAG_SELECT_SQL);
                statement.setString(1, userId);
                statement.setString(2, recommendersUserId);

                resultset = statement.executeQuery();

                if (resultset.next()) {
                    userAssignedFriendType = "user-assigned-friend";
                    friendTrustedFlag = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "user_friend_tastesync.FRIEND_TRUSTED_FLAG"));
                } else {
                    userAssignedFriendType = "user-assigned-non-friend";
                    friendTrustedFlag = "N";
                }

                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.QUESTION_DETAILS_RESTAURANT_SELECT_SQL);
                statement.setString(1, questionId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                questionRestaurantId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_question_user.restaurant_id"));
                }
                statement.close();

                statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_QUESTION_TS_ASSIGNED_INSERT_SQL);
                statement.setString(1, "N");
                statement.setString(2, friendTrustedFlag);
                statement.setString(3, recommendersUserId);
                statement.setString(4, userAssignedFriendType);
                statement.setString(5, recommendersUserId);
                statement.setString(6, "Y");
                statement.setString(7, questionId);
                statement.setString(8, questionRestaurantId);
                statement.executeUpdate();
                statement.close();
            }

            if (statement != null) {
                statement.close();
            }

            userAssignedFriendType = null;
            friendTrustedFlag = null;

            String friendUserId = null;
            String friendTsUserId = null;

            List<String> nonTsAssignedFacebookIdList = new ArrayList<String>();

            for (String friendsFacebookId : friendsFacebookIdList) {
                statement = connection.prepareStatement(RestaurantQueries.USERS_ID_SELECT_SQL);
                statement.setString(1, friendsFacebookId);

                resultset = statement.executeQuery();

                if (resultset.next()) {
                    friendUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "users.user_id"));
                    friendTsUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "users.TS_USER_ID"));

                    statement = connection.prepareStatement(AskReplyQueries.FRIEND_TRUSTED_FLAG_SELECT_SQL);
                    statement.setString(1, userId);
                    statement.setString(2, friendUserId);

                    resultset = statement.executeQuery();

                    if (resultset.next()) {
                        friendTrustedFlag = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "user_friend_tastesync.FRIEND_TRUSTED_FLAG"));
                    } else {
                        friendTrustedFlag = "N";
                    }

                    statement.close();

                    statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_QUESTION_TS_ASSIGNED_INSERT_SQL);
                    statement.setString(1, "N");
                    statement.setString(2, friendTrustedFlag);
                    statement.setString(3, friendTsUserId);
                    statement.setString(4, "user-assigned-friend");
                    statement.setString(5, friendUserId);
                    statement.setString(6, "Y");
                    statement.setString(7, questionId);
                    statement.setString(8, restaurantId);
                    statement.executeUpdate();
                    statement.close();
                } else {
                    nonTsAssignedFacebookIdList.add(friendsFacebookId);
                    System.out.println("friendsFacebookId="+friendsFacebookId+" questionId="+questionId+" restaurantId="+restaurantId);
                    statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_QUESTION_NON_TS_ASSIGNED_INSERT_SQL);
                    statement.setString(1, friendsFacebookId);
                    statement.setString(2, "N");
                    statement.setString(3, "N");
                    statement.setString(4, "user-assigned-friend");
                    statement.setString(5, "N");
                    statement.setString(6, questionId);
                    statement.setString(7, restaurantId);
                    statement.executeUpdate();
                    statement.close();
                }
            }

            tsRestaurantQuesionNonTsAssignedObj = new TSRestaurantQuesionNonTsAssignedObj();
            tsRestaurantQuesionNonTsAssignedObj.setQuestionId(questionId);
            tsRestaurantQuesionNonTsAssignedObj.setFriendsNonTsUserFacebookId(nonTsAssignedFacebookIdList);

            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsRestaurantQuesionNonTsAssignedObj;
    }
}
