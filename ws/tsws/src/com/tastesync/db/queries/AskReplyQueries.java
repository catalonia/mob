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
    public static final String USER_RECO_SUPPPLY_TIER_INSERT_SQL = "" +
        "INSERT INTO user_reco_supply_tier " +
        "            (user_reco_supply_tier.user_id, " +
        "             user_reco_supply_tier.user_supply_inv_tier, " +
        "             user_reco_supply_tier.user_tier_calc_flag) " +
        "VALUES      ( ?, " + "              0, " + "              1 )" +
        "ON DUPLICATE KEY UPDATE " +
        "user_reco_supply_tier.user_supply_inv_tier = user_reco_supply_tier.user_supply_inv_tier, " +
        "user_reco_supply_tier.user_tier_calc_flag = 1 ";
    public static final String USER_RECO_DEMAND_TIER_INSERT_SQL = "" +
        "INSERT INTO user_reco_demand_tier_precalc " +
        "            (user_reco_demand_tier_precalc.calc_flag, " +
        "             user_reco_demand_tier_precalc.demand_tier_precalc, " +
        "             user_reco_demand_tier_precalc.user_id) " +
        "VALUES      ( 1, " + "              0, " + "              ? )" +
        "ON DUPLICATE KEY UPDATE " +
        "user_reco_demand_tier_precalc.demand_tier_precalc = user_reco_demand_tier_precalc.demand_tier_precalc, " +
        "user_reco_demand_tier_precalc.calc_flag = 1 ";
    public static final String RECOREQUEST_TEMPLATE_SENTENCES_SELECT_SQL = "SELECT recorequest_user.reco_request_template_sentences " +
        "FROM   recorequest_user " +
        "WHERE  recorequest_user.recorequest_id = ? ";
    public static final String RECOREQUEST_NON_TS_ASSIGNED_INSERT_SQL = "" +
        "INSERT INTO recorequest_non_ts_assigned " +
        "            (recorequest_non_ts_assigned.recorequest_id, " +
        "             recorequest_non_ts_assigned.assigned_fb_user_id, " +
        "             recorequest_non_ts_assigned.assigned_usertype, " +
        "             recorequest_non_ts_assigned.assigned_trusted_type, " +
        "             recorequest_non_ts_assigned.assigned_prepopulated_yn, " +
        "             recorequest_non_ts_assigned.assigned_user_registered_yn) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ?, " + "              ? )";
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
    public static final String FB_ID_FRM_USER_ID_SELECT_SQL = "" +
        "SELECT users.user_fb_id " + "FROM   users " +
        "WHERE  users.user_id = ? ";
    public static final String CHECK_FB_USER_AS_TS_USER_SELECT_SQL = "" +
        "SELECT users.user_fb_id " + "FROM   users " +
        "WHERE  users.user_fb_id = ?";
    public static final String USER_ID_FRM_FB_ID_SELECT_SQL = "" +
        "SELECT users.user_id " + "FROM   users " + "WHERE  user_fb_id = ?";
    
    public static final String FACEBOOK_USER_DATA_SELECT_SQL = ""
    		+ "SELECT facebook_user_data.name, "
    		+ "       facebook_user_data.picture "
    		+ "FROM   facebook_user_data "
    		+ "WHERE  facebook_user_data.user_fb_id = ? ";

    
    public static final String FRIEND_TRUSTED_FLAG_SELECT_SQL = "" +
        "SELECT user_friend_tastesync.friend_trusted_flag " +
        "FROM   user_friend_tastesync " +
        "WHERE  user_friend_tastesync.user_id = ? " +
        "       AND user_friend_tastesync.friend_id = ?";
    public static final String RECOREQUEST_USER_UPDATE_SQL = "" +
        "UPDATE recorequest_user " +
        "SET    recorequest_user.recorequest_free_text = ? " +
        "WHERE  recorequest_user.recorequest_id = ? " +
        "       AND recorequest_user.initiator_user_id = ?";
    
    public static final String RECOREQUEST_USER_FRIEND_SELECT_SQL = "" +
    		  "SELECT recorequest_user.initiator_user_id, "
    		+ "       recorequest_user.recorequest_free_text "
    		+ "FROM   recorequest_user "
    		+ "WHERE  recorequest_user.recorequest_id = ? ";

    public static final String RECOREQUEST_USER_OTHER_SELECT_SQL = "" +
    		  "SELECT recorequest_user.initiator_user_id, "
    		+ "       recorequest_user.reco_request_template_sentences "
    		+ "FROM   recorequest_user "
    		+ "WHERE  recorequest_user.recorequest_id = ? ";
    		
    public static final String RECOREQUEST_USER_FOLLOWEEFLAG_SELECT_SQL = "" +
    		  "SELECT user_follow_data.id "
    		+ "FROM   user_follow_data "
    		+ "WHERE  user_follow_data.followee_user_id = ? "
    		+ "       AND user_follow_data.follower_user_id = ? ";
    
    public static final String HISTORICAL_USER_SHARED_DATA_INSERT_SQL = "" +
        "INSERT INTO historical_user_shared_data " +
        "            (historical_user_shared_data.app_user_id, " +
        "             historical_user_shared_data.id, " +
        "             historical_user_shared_data.msg_datetime, " +
        "             historical_user_shared_data.msg_text, " +
        "             historical_user_shared_data.shared_object_type, " +
        "             historical_user_shared_data.user_id) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ?, " + "              ? )";
    public static final String RECOREQUEST_TS_ASSIGNED_UPDATE_SQL = "" +
        "UPDATE recorequest_ts_assigned " +
        "SET    recorequest_ts_assigned.recorequest_assigned_viewed = 1 " +
        "WHERE  recorequest_ts_assigned.recorequest_id = ? " +
        "       AND recorequest_ts_assigned.assigned_user_id = ? ";
    public static final String RECOREQUEST_TS_ASSIGNED_SELECT_SQL = "" +
        "SELECT recorequest_ts_assigned.assigned_usertype " +
        "FROM   recorequest_ts_assigned " +
        "WHERE  recorequest_ts_assigned.recorequest_id = ? " +
        "       AND recorequest_ts_assigned.assigned_user_id = ? ";
}
