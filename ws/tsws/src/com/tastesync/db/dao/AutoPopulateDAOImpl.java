package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.AutoPopulateQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.util.CommonFunctionsUtil;

import org.codehaus.jettison.json.JSONArray;
import org.codehaus.jettison.json.JSONException;
import org.codehaus.jettison.json.JSONObject;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;


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

    @Override
    public JSONArray populateCuisineTier1() throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            System.out.println("AutoPopulateQueries.CUISINE_TIER1_SELECT_SQL=" +
            		AutoPopulateQueries.CUISINE_TIER1_SELECT_SQL);
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

            System.out.println("AutoPopulateQueries.CUISINE_TIER2_SELECT_SQL=" +
            		AutoPopulateQueries.CUISINE_TIER2_SELECT_SQL);
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

            System.out.println("AutoPopulateQueries.OCCASION_SELECT_SQL=" +
                AutoPopulateQueries.OCCASION_SELECT_SQL);
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

            System.out.println("AutoPopulateQueries.PRICE_SELECT_SQL=" +
                AutoPopulateQueries.PRICE_SELECT_SQL);
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

            System.out.println("AutoPopulateQueries.THEME_SELECT_SQL=" +
                AutoPopulateQueries.THEME_SELECT_SQL);
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

            System.out.println("AutoPopulateQueries.TYPEOFREST_SELECT_SQL=" +
                AutoPopulateQueries.TYPEOFREST_SELECT_SQL);
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

            System.out.println("AutoPopulateQueries.WHOAREYOUWITH_SELECT_SQL=" +
                AutoPopulateQueries.WHOAREYOUWITH_SELECT_SQL);
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
}
