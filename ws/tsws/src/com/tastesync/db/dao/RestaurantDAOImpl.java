package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.RestaurantQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSCurrentRecommendedRestaurantDetailsObj;
import com.tastesync.model.objects.TSMenuObj;
import com.tastesync.model.objects.TSRestaurantExtendInfoObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantTipsAPSettingsObj;
import com.tastesync.model.objects.derived.TSRestaurantCusineTier2Obj;
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

        tsRestaurantObj.setRestaurantLat(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_LAT")));

        tsRestaurantObj.setRestaurantLon(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_LON")));

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
                        "usg_usnc_ap.usnc_yn"))) {
            tsRestaurantTipsAPSettingsObj.setApSettingType(TSRestaurantTipsAPSettingsObj.APSETTINGTYPE.FACEBOOK);
        } else if (TSConstants.USNC_APP_TWITTER.equals(resultset.getString(
                        "usg_usnc_ap.usnc_yn"))) {
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
            tsDataSource.begin();
            System.out.println("RestaurantQueries.RESTAURANTS_SELECT_SQL=" +
                RestaurantQueries.RESTAURANTS_SELECT_SQL);
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANTS_SELECT_SQL);
            resultset = statement.executeQuery();

            //only one result
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
    public TSRestaurantCusineTier2Obj showRestaurantDetail(String userId,
        String restaurantId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
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
            tsDataSource.begin();
            System.out.println("RestaurantQueries.RESTAURANT_MENU_SELECT_SQL=" +
                RestaurantQueries.RESTAURANT_MENU_SELECT_SQL);
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
        // TODO Auto-generated method stub
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;
        TSRestaurantExtendInfoObj tsRestaurantExtendInfoObj = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_EXTENDED_INFO_SELECT_SQL);
            statement.setString(1, restaurantId);
            statement.setString(2, restaurantId);
            resultset = statement.executeQuery();

            String[] addressList = new String[6];

            //only one result
            if (resultset.next()) {
                tsRestaurantExtendInfoObj = new TSRestaurantExtendInfoObj();
                mapResultsetRowToTSRestaurantExtendInfoVO(tsRestaurantExtendInfoObj,
                    resultset);
                addressList[0] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_extended_info.address"));
                addressList[1] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_extended_info.address_extended"));
                addressList[5] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_extended_info.postcode"));
            }

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_EXTENDED_INFO_CITY_SELECT_SQL);
            statement.setString(1, restaurantId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                if (tsRestaurantExtendInfoObj == null) {
                    tsRestaurantExtendInfoObj = new TSRestaurantExtendInfoObj();
                }

                addressList[2] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "cities.city"));
                addressList[3] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "cities.state"));
                addressList[4] = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "cities.country"));
            }

            if (statement != null) {
                statement.close();
            }

            StringBuffer addressBuffer = new StringBuffer();

            for (int i = 0; i < addressList.length; ++i) {
                if ((addressList[i] != null) && !addressList[i].isEmpty()) {
                    addressBuffer.append(addressList[i]).append(", ");
                }
            }

            //TODO remove last , characters
            if (tsRestaurantExtendInfoObj != null) {
                String addressStr = addressBuffer.toString();

                if ((addressStr != null) && (addressStr.length() > 2)) {
                    addressStr = addressStr.substring(0, addressStr.length() -
                            2);
                }

                tsRestaurantExtendInfoObj.setAddress(addressStr);
            }
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsRestaurantExtendInfoObj;
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
                statement.setString(1, restaurantId);
                statement.setString(2, userId);
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
            } else {
                //TODO first do select count(*). If needed, add data as fav or delete
                statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_FAV_INSERT_SQL);
                statement.setString(1, restaurantId);
                statement.setString(2, userId);
                statement.executeUpdate();
                statement.close();
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
        String tipText) throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            List<String> inputKeyStr = new ArrayList<String>();
            inputKeyStr.add(userId);

            String tipId = CommonFunctionsUtil.generateUniqueKey(inputKeyStr);

            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_TIP_INSERT_SQL);
            statement.setString(1, restaurantId);
            statement.setString(2, tipId);
            statement.setString(3, tipText);
            statement.setString(4, userId);
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
    public TSRestaurantRecommendersDetailsObj showRestaurantDetailAsk(
        String userId, String restaurantId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public void submitRestaurantDetailAsk(String userId, String restaurantId,
        String questionText, String postQuestionOnForum,
        String recommendersUserIdList, String friendsFacebookIdList)
        throws TasteSyncException {
        // TODO Auto-generated method stub
    }
}
