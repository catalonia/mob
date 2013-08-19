package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.AutoPopulateQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSRestaurantObj;

import com.tastesync.util.CommonFunctionsUtil;

import org.codehaus.jettison.json.JSONArray;
import org.codehaus.jettison.json.JSONException;
import org.codehaus.jettison.json.JSONObject;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import java.util.ArrayList;
import java.util.List;

public class AutoPopulateDAOImpl extends BaseDaoImpl implements AutoPopulateDAO {
    private void mapResultsetRowToJSONArrayVO(JSONObject jsonObject,
        ResultSet resultset, String idColumnName, String valueColumnName)
        throws JSONException, SQLException {
        jsonObject.put("id",
            CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                    idColumnName)));
        jsonObject.put("value",
            CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                    valueColumnName)));
    }

    public void populateLocationSearchTerms(String neighbourhood) {
        //TYPE CITIES_LOCATION_SELECT_SQL
        // TODO 
    }

    @Override
    public JSONArray populateCuisineTier1() throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AutoPopulateQueries.CUISINE_TIER1_SELECT_SQL);
            resultset = statement.executeQuery();

            JSONArray jsonArray = new JSONArray();
            String idColumnName = "cuisine_tier1_descriptor.cuisine_id";
            String valueColumnName = "cuisine_tier1_descriptor.cuisine_desc";

            while (resultset.next()) {
                JSONObject jsonObject = new JSONObject();

                mapResultsetRowToJSONArrayVO(jsonObject, resultset,
                    idColumnName, valueColumnName);
                jsonArray.put(jsonObject);
            }

            if (statement != null) {
                statement.close();
            }

            return jsonArray;
        } catch (SQLException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } catch (JSONException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public JSONArray populateCuisineTier2() throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AutoPopulateQueries.CUISINE_TIER2_SELECT_SQL);
            resultset = statement.executeQuery();

            JSONArray jsonArray = new JSONArray();
            String idColumnName = "cuisine_tier2_descriptor.cuisine_id";
            String valueColumnName = "cuisine_tier2_descriptor.cuisine_desc";

            while (resultset.next()) {
                JSONObject jsonObject = new JSONObject();

                mapResultsetRowToJSONArrayVO(jsonObject, resultset,
                    idColumnName, valueColumnName);
                jsonArray.put(jsonObject);
            }

            if (statement != null) {
                statement.close();
            }

            return jsonArray;
        } catch (SQLException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } catch (JSONException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public JSONArray populateOccasionDescriptor() throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AutoPopulateQueries.OCCASION_SELECT_SQL);
            resultset = statement.executeQuery();

            JSONArray jsonArray = new JSONArray();
            String idColumnName = "occasion_descriptor.occasion_id";
            String valueColumnName = "occasion_descriptor.occasion_desc";

            while (resultset.next()) {
                JSONObject jsonObject = new JSONObject();

                mapResultsetRowToJSONArrayVO(jsonObject, resultset,
                    idColumnName, valueColumnName);
                jsonArray.put(jsonObject);
            }

            if (statement != null) {
                statement.close();
            }

            return jsonArray;
        } catch (SQLException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } catch (JSONException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public JSONArray populatePriceDescriptor() throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AutoPopulateQueries.PRICE_SELECT_SQL);
            resultset = statement.executeQuery();

            JSONArray jsonArray = new JSONArray();
            String idColumnName = "price_descriptor.price_id";
            String valueColumnName = "price_descriptor.price_desc";

            while (resultset.next()) {
                JSONObject jsonObject = new JSONObject();

                mapResultsetRowToJSONArrayVO(jsonObject, resultset,
                    idColumnName, valueColumnName);
                jsonArray.put(jsonObject);
            }

            if (statement != null) {
                statement.close();
            }

            return jsonArray;
        } catch (SQLException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } catch (JSONException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public JSONArray populateThemeDescriptor() throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AutoPopulateQueries.THEME_SELECT_SQL);
            resultset = statement.executeQuery();

            JSONArray jsonArray = new JSONArray();
            String idColumnName = "theme_descriptor.theme_id";
            String valueColumnName = "theme_descriptor.theme_desc";

            while (resultset.next()) {
                JSONObject jsonObject = new JSONObject();

                mapResultsetRowToJSONArrayVO(jsonObject, resultset,
                    idColumnName, valueColumnName);
                jsonArray.put(jsonObject);
            }

            if (statement != null) {
                statement.close();
            }

            return jsonArray;
        } catch (SQLException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } catch (JSONException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public JSONArray populateTypeofrestDescriptor() throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AutoPopulateQueries.TYPEOFREST_SELECT_SQL);
            resultset = statement.executeQuery();

            JSONArray jsonArray = new JSONArray();
            String idColumnName = "typeofrest_descriptor.typeofrest_id";
            String valueColumnName = "typeofrest_descriptor.typeofrest_desc";

            while (resultset.next()) {
                JSONObject jsonObject = new JSONObject();

                mapResultsetRowToJSONArrayVO(jsonObject, resultset,
                    idColumnName, valueColumnName);
                jsonArray.put(jsonObject);
            }

            if (statement != null) {
                statement.close();
            }

            return jsonArray;
        } catch (SQLException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } catch (JSONException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public JSONArray populateWhoareyouwithDescriptor()
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AutoPopulateQueries.WHOAREYOUWITH_SELECT_SQL);
            resultset = statement.executeQuery();

            JSONArray jsonArray = new JSONArray();
            String idColumnName = "whoareyouwith_descriptor.whoareyouwith_id";
            String valueColumnName = "whoareyouwith_descriptor.whoareyouwith_desc";

            while (resultset.next()) {
                JSONObject jsonObject = new JSONObject();

                mapResultsetRowToJSONArrayVO(jsonObject, resultset,
                    idColumnName, valueColumnName);
                jsonArray.put(jsonObject);
            }

            if (statement != null) {
                statement.close();
            }

            return jsonArray;
        } catch (SQLException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } catch (JSONException e) {
            e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public List<TSRestaurantObj> populateRestaurantSearchTerms(String key,
        String cityId) throws TasteSyncException {
        if (cityId.equals("")) {
            List<TSRestaurantObj> listRest = new ArrayList<TSRestaurantObj>();
            TSDataSource tsDataSource = TSDataSource.getInstance();
            Connection connection = null;
            PreparedStatement statement = null;
            ResultSet resultset = null;

            try {
                connection = tsDataSource.getConnection();
                tsDataSource.begin();

                statement = connection.prepareStatement(AutoPopulateQueries.RESTAURANT_SELECT_SQL);
                statement.setString(1, "%" + key + "%");
                resultset = statement.executeQuery();

                while (resultset.next()) {
                    TSRestaurantObj restaurantObj = new TSRestaurantObj();
                    mapResultsetRowToTSRestaurantVO(restaurantObj, resultset);
                    listRest.add(restaurantObj);
                }

                if (statement != null) {
                    statement.close();
                }

                return listRest;
            } catch (SQLException e) {
                e.printStackTrace();
                throw new TasteSyncException(e.getMessage());
            } finally {
                tsDataSource.close();
                tsDataSource.closeConnection(connection, statement, resultset);
            }
        } else if (key.equals("")) {
            List<TSRestaurantObj> listRest = new ArrayList<TSRestaurantObj>();
            TSDataSource tsDataSource = TSDataSource.getInstance();
            Connection connection = null;
            PreparedStatement statement = null;
            ResultSet resultset = null;

            try {
                connection = tsDataSource.getConnection();
                tsDataSource.begin();

                System.out.println(
                    "AutoPopulateQueries.RESTAURANT_CITY_SELECT_SQL=" +
                    AutoPopulateQueries.RESTAURANT_CITY_SELECT_SQL);
                statement = connection.prepareStatement(AutoPopulateQueries.RESTAURANT_CITY_SELECT_SQL);
                statement.setString(1, cityId);
                resultset = statement.executeQuery();

                while (resultset.next()) {
                    TSRestaurantObj restaurantObj = new TSRestaurantObj();
                    mapResultsetRowToTSRestaurantVO(restaurantObj, resultset);
                    listRest.add(restaurantObj);
                }

                if (statement != null) {
                    statement.close();
                }

                return listRest;
            } catch (SQLException e) {
                e.printStackTrace();
                throw new TasteSyncException(e.getMessage());
            } finally {
                tsDataSource.close();
                tsDataSource.closeConnection(connection, statement, resultset);
            }
        } else {
            List<TSRestaurantObj> listRest = new ArrayList<TSRestaurantObj>();
            TSDataSource tsDataSource = TSDataSource.getInstance();
            Connection connection = null;
            PreparedStatement statement = null;
            ResultSet resultset = null;

            try {
                connection = tsDataSource.getConnection();
                tsDataSource.begin();

                System.out.println(
                    "AutoPopulateQueries.RESTAURANT_CITY__KEY_SELECT_SQL=" +
                    AutoPopulateQueries.RESTAURANT_CITY_KEY_SELECT_SQL);
                statement = connection.prepareStatement(AutoPopulateQueries.RESTAURANT_CITY_KEY_SELECT_SQL);
                statement.setString(1, "%" + key + "%");
                statement.setString(2, cityId);
                resultset = statement.executeQuery();

                while (resultset.next()) {
                    TSRestaurantObj restaurantObj = new TSRestaurantObj();
                    mapResultsetRowToTSRestaurantVO(restaurantObj, resultset);
                    listRest.add(restaurantObj);
                }

                if (statement != null) {
                    statement.close();
                }

                return listRest;
            } catch (SQLException e) {
                e.printStackTrace();
                throw new TasteSyncException(e.getMessage());
            } finally {
                tsDataSource.close();
                tsDataSource.closeConnection(connection, statement, resultset);
            }
        }
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
}
