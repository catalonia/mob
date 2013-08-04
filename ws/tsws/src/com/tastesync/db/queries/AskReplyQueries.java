package com.tastesync.db.queries;

public interface AskReplyQueries extends TSDBCommonQueries {
    //createRecoRequestSearch
    public static final String RECOREQUEST_USER_INSERT_SQL = "insert into recorequest_user (" +
        "recorequest_user.RECOREQUEST_ID," +
        "recorequest_user.INITIATOR_USER_ID," +
        "recorequest_user.RECOREQUEST_SENT_DATETIME," +
        "recorequest_user.RECOREQUEST_FREE_TEXT," +
        "recorequest_user.RECOREQUEST_PARAMETER_SELECTION_MERGED," +
        "recorequest_user.RECOREQUEST_FREE_TEXT" + ")    VALUES    (" + "?," +
        "?," + "?," + "?," + "?," + "?" + ")";

    //createRecoRequestSearch - sub
    public static final String RECOREQUEST_CUISINE_TIER1_INSERT_SQL = "insert into recorequest_cuisine_tier1 (" +
        "recorequest_cuisine_tier1.RECOREQUEST_ID," +
        "recorequest_cuisine_tier1.Cuisine_Tier1_ID" + ")  VALUES (" + "?," +
        "?" + ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_CUISINE_TIER2_INSERT_SQL = "insert into recorequest_cuisine_tier2 (" +
        "recorequest_cuisine_tier2.RECOREQUEST_ID," +
        "recorequest_cuisine_tier2.Cuisine_Tier2_ID" + ")  VALUES (" + "?," +
        "?" + ")";

    //createRecoRequestSearch - sub
    public static final String RECOREQUEST_PRICE_INSERT_SQL = "insert into recorequest_price (" +
        "recorequest_price.RECOREQUEST_ID," + "recorequest_price.price_ID" +
        ")  VALUES (" + "?," + "?" + ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_OCCASION_INSERT_SQL = "insert into recorequest_occasion (" +
        "recorequest_occasion.RECOREQUEST_ID," +
        "recorequest_occasion.Occasion_ID" + ")  VALUES (" + "?," + "?" + ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_WHOAREYOUWITH_INSERT_SQL = "insert into recorequest_whoareyouwith (" +
        "recorequest_whoareyouwith.RECOREQUEST_ID," +
        "recorequest_whoareyouwith.whoareyouwith_ID" + ")  VALUES (" + "?," +
        "?" + ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_TYPEOFREST_INSERT_SQL = "insert into recorequest_typeofrest (" +
        "recorequest_typeofrest.RECOREQUEST_ID," +
        "recorequest_typeofrest.typeofrest_ID" + ")  VALUES (" + "?," + "?" +
        ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_THEME_INSERT_SQL = "insert into recorequest_theme (" +
        "recorequest_theme.RECOREQUEST_ID," + "recorequest_theme.theme_ID" +
        ")  VALUES (" + "?," + "?" + ")";
    public static final String RECOREQUEST_TEMPLATE_SENTENCES_SELECT_SQL = "SELECT `recorequest_user`.`reco_request_template_sentences` " +
        "FROM   `recorequest_user` " +
        "WHERE  `recorequest_user`.`recorequest_id` = ? ";
    public static final String RECOREQUEST_NON_TS_ASSIGNED_INSERT_SQL = "" +
    		  "INSERT INTO recorequest_non_ts_assigned "
    		+ "            (recorequest_non_ts_assigned.recorequest_id, "
    		+ "             recorequest_non_ts_assigned.assigned_fb_user_id, "
    		+ "             recorequest_non_ts_assigned.assigned_usertype, "
    		+ "             recorequest_non_ts_assigned.assigned_trusted_type, "
    		+ "             recorequest_non_ts_assigned.assigned_prepopulated_yn, "
    		+ "             recorequest_non_ts_assigned.assigned_user_registered_yn) "
    		+ "VALUES      ( ?, "
    		+ "              ?, "
    		+ "              ?, "
    		+ "              ?, "
    		+ "              ?, "
    		+ "              ? )";

    
    public static final String RECOREQUEST_TS_ASSIGNED_INSERT_SQL = "" +
        "INSERT INTO recorequest_ts_assigned " +
        "            (recorequest_ts_assigned.assigned_prepopulated_yn, " +
        "             recorequest_ts_assigned.assigned_trusted_type, " +
        "             recorequest_ts_assigned.assigned_usertype, " +
        "             recorequest_ts_assigned.assigned_user_id, " +
        "             recorequest_ts_assigned.assigned_user_registered_yn, " +
        "             recorequest_ts_assigned.recorequest_id) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ?, " + "              ? )";
    public static final String USER_ID_FROM_FB_ID_SELECT_SQL = "" +
        "SELECT users.user_id " + "FROM   users " + "WHERE  user_fb_id = ? ";
    public static final String CHECK_FB_USER_AS_TS_USER_SELECT_SQL = "" +
        "SELECT users.user_fb_id " + "FROM   users " +
        "WHERE  users.user_fb_id = ?";
    public static final String USER_ID_FRM_FB_ID_SELECT_SQL = "" +
        "SELECT users.user_id " + "FROM   users " + "WHERE  user_fb_id = ?";
    public static final String FRIEND_TRUSTED_FLAG_SELECT_SQL = "" +
        "SELECT user_friend_tastesync.friend_trusted_flag " +
        "FROM   user_friend_tastesync " +
        "WHERE  user_friend_tastesync.user_id = ? " +
        "       AND user_friend_tastesync.friend_id = ?";
}
