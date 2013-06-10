package com.tastesync.db.queries;

public interface AutoPopulateQueries extends TSDBCommonQueries {

	//auto populate queries
    public static final String CUISINE_TIER1_SELECT_SQL = "" +
        "SELECT cuisine_tier1_descriptor.cuisine_id, " +
        "       cuisine_tier1_descriptor.cuisine_desc " +
        "FROM   cuisine_tier1_descriptor " +
        "WHERE  cuisine_tier1_descriptor.cuisine_valid_current = 1 " +
        "ORDER BY cuisine_tier1_descriptor.cuisine_desc ASC";
    public static final String CUISINE_TIER2_SELECT_SQL = "" +
        "SELECT cuisine_tier2_descriptor.cuisine_id, " +
        "       cuisine_tier2_descriptor.cuisine_desc " +
        "FROM   cuisine_tier2_descriptor " +
        "WHERE  cuisine_tier2_descriptor.cuisine_valid_current = 1 " +
        "ORDER BY cuisine_tier2_descriptor.cuisine_desc ASC";
    public static final String OCCASION_SELECT_SQL = "" +
        "SELECT occasion_descriptor.occasion_id, " +
        "       occasion_descriptor.occasion_desc " +
        "FROM   occasion_descriptor " +
        "WHERE  occasion_descriptor.occasion_valid_current = 1 " +
        "ORDER BY occasion_descriptor.occasion_desc ASC";
    public static final String PRICE_SELECT_SQL = "" +
        "SELECT price_descriptor.price_id, " +
        "       price_descriptor.price_desc " + "FROM   price_descriptor " +
        "WHERE  price_descriptor.price_valid_current = 1 " +
        "ORDER BY price_descriptor.price_desc ASC";
    public static final String THEME_SELECT_SQL = "" +
        "SELECT theme_descriptor.theme_id, " +
        "       theme_descriptor.theme_desc " + "FROM   theme_descriptor " +
        "WHERE  theme_descriptor.theme_valid_current = 1 " +
        "ORDER BY theme_descriptor.theme_desc ASC";
    public static final String TYPEOFREST_SELECT_SQL = "" +
        "SELECT typeofrest_descriptor.typeofrest_id, " +
        "       typeofrest_descriptor.typeofrest_desc " +
        "FROM   typeofrest_descriptor " +
        "WHERE  typeofrest_descriptor.typeofrest_valid_current = 1 " +
        "ORDER BY typeofrest_descriptor.typeofrest_desc ASC";
    public static final String WHOAREYOUWITH_SELECT_SQL = "" +
        "SELECT whoareyouwith_descriptor.whoareyouwith_id, " +
        "       whoareyouwith_descriptor.whoareyouwith_desc " +
        "FROM   whoareyouwith_descriptor " +
        "WHERE  whoareyouwith_descriptor.whoareyouwith_valid_current = 1 " +
        "ORDER BY whoareyouwith_descriptor.whoareyouwith_desc ASC";
}
