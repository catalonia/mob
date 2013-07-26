package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.RestaurantQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSCurrentRecommendedRestaurantDetailsObj;
import com.tastesync.model.objects.TSMenuObj;
import com.tastesync.model.objects.TSRestaurantDetailsObj;
import com.tastesync.model.objects.TSRestaurantExtendInfoObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantTipsAPSettingsObj;

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
    public TSRestaurantObj selectRestaurant(String restaurantId)
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
        tsMenuObj.setMenuMobileUrl(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_menu.restaurant_id")));
        tsMenuObj.setMenuSource(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_menu.menu_source")));
        tsMenuObj.setRestaurantId(CommonFunctionsUtil.getModifiedValueString(
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
        String restaurantId,
        TSRestaurantTipsAPSettingsObj tsRestaurantTipsAPSettingsObj,
        ResultSet resultset) throws SQLException {
        tsRestaurantTipsAPSettingsObj.setRestaurantId(CommonFunctionsUtil.getModifiedValueString(
                restaurantId));
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

    private void mapResultsetRowToTSRestaurantPhotoObjVO(TSRestaurantPhotoObj tsRestaurantPhotoObj,
            ResultSet resultset) throws SQLException {
    	tsRestaurantPhotoObj.setRestaurantId(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.RESTAURANT_ID"));
    	tsRestaurantPhotoObj.setPhotoId(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.PHOTO_ID"));
    	tsRestaurantPhotoObj.setPrefix(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.PREFIX"));
    	tsRestaurantPhotoObj.setSuffix(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.SUFFIX"));
    	tsRestaurantPhotoObj.setWidth(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.WIDTH"));
    	tsRestaurantPhotoObj.setHeight(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.HEIGHT"));
    	tsRestaurantPhotoObj.setUltimateSourceName(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.ULTIMATE_SOURCE_NAME"));
    	tsRestaurantPhotoObj.setUltimateSourceUrl(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.ULTIMATE_SOURCE_URL"));
    	tsRestaurantPhotoObj.setPhotoSource(CommonFunctionsUtil.getModifiedValueString("restaurant_photo.PHOTO_SOURCE"));
    }
    
    @Override
    public List<TSRestaurantObj> selectRestaurants() throws TasteSyncException {
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
    public TSRestaurantDetailsObj selectRestaurantDetails(String userId,
        String restaurantId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public TSCurrentRecommendedRestaurantDetailsObj selectCurrentRestaurantRecommendedDetails(
        String userId, String restaurantId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public TSMenuObj selectRestaurantMenu(String restaurantId)
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
    public TSRestaurantExtendInfoObj selectRestaurantExtendedInfo(
        String restaurantId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public List<TSRestaurantPhotoObj> selectRestaurantPhotos(String restaurantId)
        throws TasteSyncException {
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
                mapResultsetRowToTSRestaurantPhotoObjVO(tsRestaurantPhotoObj, resultset);

                tsRestaurantPhotoObjs.add(tsRestaurantPhotoObj);
            }
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
    public List<TSRestaurantTipsAPSettingsObj> selectRestaurantDetailTipAPSettings(
        String userId, String restaurantId) throws TasteSyncException {
        List<TSRestaurantTipsAPSettingsObj> tsRestaurantTipsAPSettingsObjs = new ArrayList<TSRestaurantTipsAPSettingsObj>();

        //TODO use of restaurantId ??
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
                    restaurantId, tsRestaurantTipsAPSettingsObj, resultset);

                tsRestaurantTipsAPSettingsObjs.add(tsRestaurantTipsAPSettingsObj);
            }
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
    public void insertDeleteSaveOrUnsaveRestaurant(String userId,
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
    public void insertDeleteSaveRestaurantFav(String userId,
        String restaurantId)
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            //TODO first do select count(*). If needed, add data as fav or delete
            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_FAV_INSERT_SQL);
            statement.setString(1, restaurantId);
            statement.setString(2, userId);
            statement.executeUpdate();

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
    public void insertRestaurantTips(String userId, String restaurantId,
        String tipText) throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            String tipId = userId + CommonFunctionsUtil.generateUniqueKey();

            statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_TIP_INSERT_SQL);
            statement.setString(1, restaurantId);
            statement.setString(2, tipId);
            statement.setString(3, tipText);
            statement.setString(4, userId);
            statement.executeUpdate();

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
}
