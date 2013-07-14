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

    
    private void mapResultsetRowToTSRestaurantMenuVO(
    		TSMenuObj tsMenuObj, ResultSet resultset)
            throws SQLException {
    	tsMenuObj.setMenuMobileUrl(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_menu.restaurant_id")));
    	tsMenuObj.setMenuSource(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_menu.menu_source")));
    	tsMenuObj.setRestaurantId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant_menu.restaurant_id")));
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
    public TSRestaurantPhotoObj selectRestaurantPhotos(String restaurantId)
        throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

	@Override
	public TSRestaurantTipsAPSettingsObj selectRestaurantDetailTipAPSettings(String userId, String restaurantId)
			throws TasteSyncException {
		// TODO Auto-generated method stub
		return null;
	}
	
    @Override
    public void insertDeleteSaveOrUnsaveRestaurant(String userId,
        String restaurantId, String userRestaurantSavedFlag)
        throws TasteSyncException {
        // TODO Auto-generated method stub
    }

    @Override
    public void insertDeleteSaveRestaurantFav(String userId,
        String restaurantId, String userRestaurantFavFlag) throws TasteSyncException {
        // TODO Auto-generated method stub
    }

	@Override
	public void insertRestaurantTips(String userId, String restaurantId,
			String tipText) throws TasteSyncException {
		// TODO Auto-generated method stub
		
	}


}
