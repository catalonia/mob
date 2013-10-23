package com.tastesync.db.queries;

public interface AskReplyQueries extends TSDBCommonQueries {
    public static final String RECOREQUEST_USER_INSERT_SQL = "insert into recorequest_user (" +
        "recorequest_user.RECOREQUEST_ID," +
        "recorequest_user.INITIATOR_USER_ID," +
        "recorequest_user.RECOREQUEST_SENT_DATETIME," +
        "recorequest_user.RECOREQUEST_FREE_TEXT," +
        "recorequest_user.RECOREQUEST_PARAMETER_SELECTION_MERGED," +
        "recorequest_user.RECO_REQUEST_TEMPLATE_SENTENCES," +
        "recorequest_user.ALGO1_IND" + ")    VALUES    (" + "?," + "?," + "?," +
        "?," + "?," + "?, " + "?" + ")";
    public static final String RECOREQUEST_CUISINE_TIER1_INSERT_SQL = "insert into recorequest_cuisine_tier1 (" +
        "recorequest_cuisine_tier1.RECOREQUEST_ID," +
        "recorequest_cuisine_tier1.Cuisine_Tier1_ID" + ")  VALUES (" + "?," +
        "?" + ")";
    public static final String RECOREQUEST_CUISINE_TIER2_INSERT_SQL = "insert into recorequest_cuisine_tier2 (" +
        "recorequest_cuisine_tier2.RECOREQUEST_ID," +
        "recorequest_cuisine_tier2.Cuisine_Tier2_ID" + ")  VALUES (" + "?," +
        "?" + ")";
    public static final String RECOREQUEST_PRICE_INSERT_SQL = "insert into recorequest_price (" +
        "recorequest_price.RECOREQUEST_ID," + "recorequest_price.price_ID" +
        ")  VALUES (" + "?," + "?" + ")";
    public static final String RECOREQUEST_OCCASION_INSERT_SQL = "insert into recorequest_occasion (" +
        "recorequest_occasion.RECOREQUEST_ID," +
        "recorequest_occasion.Occasion_ID" + ")  VALUES (" + "?," + "?" + ")";
    public static final String RECOREQUEST_WHOAREYOUWITH_INSERT_SQL = "insert into recorequest_whoareyouwith (" +
        "recorequest_whoareyouwith.RECOREQUEST_ID," +
        "recorequest_whoareyouwith.whoareyouwith_ID" + ")  VALUES (" + "?," +
        "?" + ")";
    public static final String RECOREQUEST_TYPEOFREST_INSERT_SQL = "insert into recorequest_typeofrest (" +
        "recorequest_typeofrest.RECOREQUEST_ID," +
        "recorequest_typeofrest.typeofrest_ID" + ")  VALUES (" + "?," + "?" +
        ")";
    public static final String RECOREQUEST_THEME_INSERT_SQL = "insert into recorequest_theme (" +
        "recorequest_theme.RECOREQUEST_ID," + "recorequest_theme.theme_ID" +
        ")  VALUES (" + "?," + "?" + ")";
    public static final String RECOREQUEST_LOCATION_INSERT_SQL = "" +
        "INSERT INTO recorequest_location " +
        "            (recorequest_location.city_id, " +
        "             recorequest_location.neighbourhood_id, " +
        "             recorequest_location.recorequest_id) " +
        "VALUES      ( ?, " + "              ?, " + "              ? )" +
        "ON DUPLICATE KEY UPDATE " +
        "recorequest_location.RECOREQUEST_ID = recorequest_location.RECOREQUEST_ID";
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
        "             recorequest_ts_assigned.recorequest_id, " +
        "             recorequest_ts_assigned.algo1_ind) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ?, " + "              ?, " +
        "              ? )";
    public static final String FB_ID_FRM_USER_ID_SELECT_SQL = "" +
        "SELECT users.user_fb_id " + "FROM   users " +
        "WHERE  users.user_id = ? ";
    public static final String CHECK_FB_USER_AS_TS_USER_SELECT_SQL = "" +
        "SELECT users.user_fb_id " + "FROM   users " +
        "WHERE  users.user_fb_id = ?";
    public static final String USER_ID_FRM_FB_ID_SELECT_SQL = "" +
        "SELECT users.user_id " + "FROM   users " + "WHERE  user_fb_id = ?";
    public static final String FACEBOOK_USER_DATA_SELECT_SQL = "" +
        "SELECT facebook_user_data.name, " +
        "       facebook_user_data.picture " + "FROM   facebook_user_data " +
        "WHERE  facebook_user_data.user_fb_id = ? ";
    public static final String FRIEND_TRUSTED_FLAG_SELECT_SQL = "" +
        "SELECT user_friend_tastesync.friend_trusted_flag, " +
        "       user_friend_tastesync.id " + "FROM   user_friend_tastesync " +
        "WHERE  user_friend_tastesync.user_id = ? " +
        "       AND user_friend_tastesync.friend_id = ?";
    public static final String RECOREQUEST_USER_UPDATE_SQL = "" +
        "UPDATE recorequest_user " +
        "SET    recorequest_user.recorequest_free_text = ? " +
        "WHERE  recorequest_user.recorequest_id = ? " +
        "       AND recorequest_user.initiator_user_id = ?";
    public static final String RECOREQUEST_USER_FRIEND_SELECT_SQL = "" +
        "SELECT recorequest_user.initiator_user_id, " +
        "       recorequest_user.recorequest_free_text " +
        "FROM   recorequest_user " +
        "WHERE  recorequest_user.recorequest_id = ? ";
    public static final String RECOREQUEST_USER_OTHER_SELECT_SQL = "" +
        "SELECT recorequest_user.initiator_user_id, " +
        "       recorequest_user.reco_request_template_sentences " +
        "FROM   recorequest_user " +
        "WHERE  recorequest_user.recorequest_id = ? ";
    public static final String RECOREQUEST_USER_FOLLOWEEFLAG_SELECT_SQL = "" +
        "SELECT user_follow_data.id " + "FROM   user_follow_data " +
        "WHERE  user_follow_data.followee_user_id = ? " +
        "       AND user_follow_data.follower_user_id = ? ";
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
    public static final String RECOREQUEST_TS_ASSIGNED_ALL_SELECT_SQL = "" +
        "SELECT recorequest_ts_assigned.recorequest_id, " +
        "       recorequest_ts_assigned.assigned_datetime, " +
        "       recorequest_ts_assigned.recorequest_assigned_viewed " +
        "FROM   recorequest_ts_assigned " +
        "WHERE  recorequest_ts_assigned.assigned_user_id = ? " +
        "       AND recorequest_ts_assigned.recorequest_id = ? ";
    public static String QUESTION_DETAILS_RESTAURANT_SELECT_SQL = "" +
        "SELECT restaurant_question_user.initiator_user_id, " +
        "       restaurant_question_user.restaurant_id, " +
        "       restaurant_question_user.question_text " +
        "FROM   restaurant_question_user " +
        "WHERE  restaurant_question_user.question_id = ? ";
    public static String RESTAURANT_NAME_SELECT_SQL = "" +
        "SELECT restaurant.restaurant_name " + "FROM   restaurant " +
        "WHERE  restaurant.restaurant_id = ? ";
    public static String USER_FOLLOW_DATA_SELECT = "" +
        "SELECT user_follow_data.id " + "FROM   user_follow_data " +
        "WHERE  user_follow_data.followee_user_id = ? " +
        "       AND user_follow_data.follower_user_id = ? ";
    public static String QUESTION_REPLY_USER_INSERT_SQL = "" +
        "INSERT INTO question_reply_user " +
        "            (question_reply_user.question_id, " +
        "             question_reply_user.reply_datetime, " +
        "             question_reply_user.reply_id, " +
        "             question_reply_user.reply_text, " +
        "             question_reply_user.reply_ts_id, " +
        "             question_reply_user.reply_user_id) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ?, " + "              ? )";
    public static String QUESTION_RECIPIENT_SELECT_SQL = "" +
        "SELECT restaurant_question_user.initiator_user_id " +
        "FROM   restaurant_question_user " +
        "WHERE  restaurant_question_user.question_id = ?";
    public static String RESTAURANT_QUESTION_INSERT_SQL = "" +
        "INSERT INTO restaurant_question_user " +
        "            (restaurant_question_user.initiator_user_id, " +
        "             restaurant_question_user.posted_onforum_flag, " +
        "             restaurant_question_user.question_datetime, " +
        "             restaurant_question_user.question_id, " +
        "             restaurant_question_user.question_text, " +
        "             restaurant_question_user.restaurant_id) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ?, " + "              ? )";
    public static String USER_MESSAGE_INSERT_SQL = "" +
        "INSERT INTO user_message " + "            (user_message.content, " +
        "             user_message.created, " +
        "             user_message.message_id, " +
        "             user_message.previous_message_id, " +
        "             user_message.question_id, " +
        "             user_message.recipient_id, " +
        "             user_message.recorequest_id, " +
        "             user_message.sender_id) " + "VALUES      ( ?, " +
        "              ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ?, " + "              ?, " +
        "              ? )";
    public static String USER_MESSAGE_UPDATE_SQL = "" + "UPDATE user_message " +
        "SET    user_message.message_recipient_viewed = 1 " +
        "WHERE  user_message.message_id = ? " +
        "       AND user_message.recipient_id = ? ";
    public static String USER_MESSAGE_SELECT_SQL = "" +
        "SELECT user_message.sender_id, " + "       user_message.content " +
        "FROM   user_message " + "WHERE  user_message.recipient_id = ? " +
        "       AND user_message.message_id = ? ";
    public static String MESSAGE_RESTAURANT_INSERT_SQL = "" +
        "INSERT INTO message_restaurant " +
        "            (message_restaurant.message_id, " +
        "             message_restaurant.restaurant_id) " +
        "VALUES      ( ?, " + "              ? )";
    public static String RECO_LIKE_UPDATE_SQL = "" + "UPDATE reco_like " +
        "SET    reco_like.like_recommender_viewed = 1 " +
        "WHERE  reco_like.id = ? ";
    public static String RECO_LIKE_SELECT_SQL = "" +
        "SELECT reco_like.reply_id, " + "       reco_like.like_user_id " +
        "FROM   reco_like " + "WHERE  reco_like.id = ? " +
        "       AND reco_like.status_y_n = 1 ";
    public static String RECOREQUEST_REPLY_USER_SELECT_SQL = "" +
        "SELECT recorequest_reply_user.reply_text " +
        "FROM   recorequest_reply_user " +
        "WHERE  recorequest_reply_user.reply_id = ? ";
    public static String RECOREQUEST_REPLY_USER_LATEST_INFO_SELECT_SQL = "" +
        "SELECT recorequest_reply_user.reply_id, " +
        "       recorequest_reply_user.reply_send_datetime, " +
        "       recorequest_reply_user.reply_viewed_initiator " +
        "FROM   recorequest_reply_user " +
        "WHERE  recorequest_reply_user.recorequest_id = ? " +
        "ORDER  BY recorequest_reply_user.reply_send_datetime DESC " +
        "LIMIT  1 ";
    public static String RECOREQUEST_REPLY_USER_ALL_REPLIES_SELECT_SQL = "" +
        "SELECT recorequest_reply_user.reply_id " +
        "FROM   recorequest_reply_user " +
        "WHERE  recorequest_reply_user.recorequest_id = ? ";
    public static String COUNT_RECOREQUEST_REPLY_USER_ALL_REPLIES_SELECT_SQL = "" +
        "SELECT Count(*) " + "FROM   recorequest_reply_user, " +
        "       user_message " + "WHERE  user_message.recorequest_id = ? " +
        "       AND recorequest_reply_user.recorequest_id = ? " +
        "       AND recorequest_reply_user.reply_id = ? " +
        "       AND user_message.sender_id = ? " +
        "       AND user_message.recipient_id = recorequest_reply_user.reply_user_id ";
    public static String RECOREQUEST_REPLY_USER_RECO_SELECT_SQL = "" +
        "SELECT recorequest_reply_user.reply_text, " +
        "       recorequest_reply_user.reply_id " +
        "FROM   recorequest_reply_user " +
        "WHERE  recorequest_reply_user.RECOREQUEST_ID = ? ";
    public static String RECOREQUEST_REPLY_USER_RECO_REST_SELECT_SQL = "" +
        "SELECT y.restaurant_id, " + "       y.recommender_user_id, " +
        "       x.reply_text " +
        "FROM   (SELECT recorequest_reply_user.reply_id, " +
        "               recorequest_reply_user.reply_text " +
        "        FROM   recorequest_reply_user " +
        "        WHERE  recorequest_reply_user.recorequest_id = ?) x, " +
        "       user_restaurant_reco y " + "WHERE  x.reply_id = y.reply_id " +
        "       order by y.UPDATED_DATETIME ASC";
    public static String USER_RESTAURANT_INSERT_SQL = "" +
        "INSERT INTO user_restaurant_reco " +
        "            (user_restaurant_reco.recommendee_user_id, " +
        "             user_restaurant_reco.recommender_user_id, " +
        "             user_restaurant_reco.reply_id, " +
        "             user_restaurant_reco.restaurant_id, " +
        "             user_restaurant_reco.updated_datetime) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ? )";
    public static String USER_POINTS_UPDATE_SQL = "" + "UPDATE users " +
        "SET    users.user_points = users.user_points + ? " +
        "WHERE  users.user_id = ? ";
    public static String USER_POINTS_INSERT_SQL = "" +
        "INSERT INTO user_points_log " +
        "            (user_points_log.points_added, " +
        "             user_points_log.recommendee_user_id, " +
        "             user_points_log.restaurant_id, " +
        "             user_points_log.updated_datetime, " +
        "             user_points_log.user_id) " + "VALUES      ( ?, " +
        "              ?, " + "              ?, " + "              ?, " +
        "              ? )";
    public static String COUNT_REPLIES_RECOREQUEST_REPLY_USER_SELECT_SQL = "" +
        "SELECT Count(*) " + "FROM   recorequest_reply_user " +
        "WHERE  recorequest_reply_user.recorequest_id = ? " +
        "       AND recorequest_reply_user.reply_user_id = ?";
    public static String COUNT_USER_POINTS_LOG_SELECT_SQL = "" +
        "SELECT Count(*) " + "FROM   user_points_log " +
        "WHERE  user_points_log.user_id = ? " +
        "       AND user_points_log.recommendee_user_id = ? " +
        "       AND user_points_log.restaurant_id = ? ";
    public static String RECOREQUEST_REPLY_USER_INSERT_SQL = "" +
        "INSERT INTO recorequest_reply_user " +
        "            (recorequest_reply_user.recorequest_id, " +
        "             recorequest_reply_user.reply_id, " +
        "             recorequest_reply_user.reply_like_initiator, " +
        "             recorequest_reply_user.reply_send_datetime, " +
        "             recorequest_reply_user.reply_text, " +
        "             recorequest_reply_user.reply_ts_user_id, " +
        "             recorequest_reply_user.reply_user_id, " +
        "             recorequest_reply_user.algo1_ind, " +
        "             recorequest_reply_user.algo2_ind) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, ?, " + "              ?,?,?, " + "              ? )";
    public static String RECOREQUEST_REPLY_USER_UPDATE_SQL = "" +
        "UPDATE recorequest_reply_user " +
        "SET    recorequest_reply_user.reply_viewed_initiator = 1 " +
        "WHERE  recorequest_reply_user.reply_id = ? ";
    public static String RECOREQUEST_RESTAURANT_SELECT_SQL = "" +
        "SELECT DISTINCT y.restaurant_id " +
        "FROM   (SELECT recorequest_reply_user.reply_id " +
        "        FROM   recorequest_reply_user " +
        "        WHERE  recorequest_reply_user.recorequest_id = ?) x, " +
        "       restaurant_reply y " + "WHERE  x.reply_id = y.reply_id ";
    public static String RESTAURANT_REPLY_INSERT_SQL = "" +
        "INSERT INTO restaurant_reply " +
        "            (restaurant_reply.created, " +
        "             restaurant_reply.initiator_went_yn, " +
        "             restaurant_reply.reply_id, " +
        "             restaurant_reply.restaurant_id) " + "VALUES      ( ?, " +
        "              ?, " + "              ?, " + "              ? )";
    public static String CITY_RESTAURANT_SELECT_SQL = "" +
        "SELECT restaurant.restaurant_name, " +
        "       restaurant.price_range, " +
        "       restaurant.restaurant_city_id, " +
        "       restaurant.restaurant_lat, " +
        "       restaurant.restaurant_lon, " +
        "       restaurant.factual_rating, " + "       cities.city " +
        "FROM   restaurant, " + "       cities " +
        "WHERE  restaurant.restaurant_id = ? " +
        "       AND cities.city_id = restaurant.restaurant_city_id ";
    public static String CUISINE_DESC_ONE_RESTAURANT_SELECT_SQL = "" +
        "SELECT b.cuisine_desc " +
        "FROM   (SELECT restaurant_cuisine.tier2_cuisine_id " +
        "        FROM   restaurant_cuisine " +
        "        WHERE  restaurant_cuisine.restaurant_id = ? " +
        "        LIMIT  1) a, " + "       cuisine_tier2_descriptor b " +
        "WHERE  a.tier2_cuisine_id = b.cuisine_id ";
    public static String RECO_LIKE_INSERT_SQL = "" + "INSERT INTO reco_like " +
        "            (reco_like.id, " +
        "             reco_like.like_user_id, " +
        "             reco_like.reply_id, " +
        "             reco_like.status_y_n, " +
        "             reco_like.like_datetime) " + "VALUES      ( ?, " +
        "              ?, " + "              ?, " + "              ?, " +
        "              ? )";
    public static String HISTORICAL_RECO_LIKE_INSERT_SQL = "" +
        "INSERT INTO historical_reco_like " +
        "            (historical_reco_like.id, " +
        "             historical_reco_like.like_user_id, " +
        "             historical_reco_like.reply_id, " +
        "             historical_reco_like.status, " +
        "             historical_reco_like.updated) " + "VALUES      ( ?, " +
        "              ?, " + "              ?, " + "              ?, " +
        "              ? )";
    public static String RESTAURANT_QUESTION_TS_ASSIGNED_NOTIF_SELECT_SQL = "" +
        "SELECT restaurant_question_ts_assigned.question_id, " +
        "       restaurant_question_ts_assigned.assigned_datetime, " +
        "       restaurant_question_ts_assigned.question_assigned_viewed " +
        "FROM   restaurant_question_ts_assigned " +
        "WHERE  restaurant_question_ts_assigned.assigned_user_id = ? " +
        "       AND restaurant_question_ts_assigned.question_id = ? ";
    public static String COUNT_QUESTION_REPLY_USER_SELECT_SQL = "" +
        "SELECT count(*) " + "FROM   question_reply_user " +
        "WHERE  question_reply_user.question_id = ? " +
        "       AND question_reply_user.reply_user_id = ? ";
    public static String USER_MESSAGE_RECIPIENT_SELECT_SQL = "" +
        "SELECT user_message.message_id, " + "       user_message.created, " +
        "       user_message.message_recipient_viewed " +
        "FROM   user_message " + "WHERE  user_message.recipient_id = ? " +
        "       AND user_message.message_id = ? ";
    public static String COUNT_USER_MESSAGE_SELECT_SQL = "" +
        "SELECT Count(*) " + "FROM   user_message " +
        "WHERE  user_message.previous_message_id = ? " +
        "       AND  user_message.sender_id = ? ";
    public static String RECO_LIKE_NOTIF_SELECT_SQL = "" +
        "SELECT reco_like.id, " + "       reco_like.like_datetime, " +
        "       reco_like.like_recommender_viewed, " +
        "       reco_like.like_user_id " + "FROM   reco_like " +
        "WHERE  reco_like.id = ? ";
    public static String CUISINE_TIER1_DESCRIPTOR_ALL_SELECT_SQL = "SELECT CUISINE_DESC " +
        "FROM cuisine_tier1_descriptor WHERE CUISINE_VALID_CURRENT = '1' " +
        "AND CUISIINE_ID = ? ";
    public static String CUISINE_TIER2_DESCRIPTOR_ALL_SELECT_SQL = "SELECT CUISINE_DESC " +
        "FROM cuisine_tier2_descriptor  WHERE CUISINE_VALID_CURRENT = '1' " +
        "CUISIINE_ID = ?";
    public static String OCCASION_DESCRIPTOR_SELECT_SQL = "SELECT occasion_desc " +
        "FROM occasion_descriptor WHERE Occasion_VALID_CURRENT = '1' " +
        "AND occasion_desc = ? ";
    public static String PRICE_DESCRIPTOR_SELECT_SQL = "SELECT price_desc " +
        "FROM price_descriptor WHERE price_VALID_CURRENT = '1' " +
        "AND PRICE_ID = ?";
    public static String THEME_DESCRIPTOR_SELECT_SQL = "SELECT THEME_DESC " +
        "FROM theme_descriptor WHERE theme_VALID_CURRENT = '1' " +
        "AND THEME_ID = ? ";
    public static String TYPEOFREST_DESCRIPTOR_SELECT_SQL = "SELECT typeofrest_desc " +
        "FROM typeofrest_descriptor WHERE typeofrest_VALID_CURRENT = '1' " +
        "AND typeofrest_id = ? ";
    public static String WHOAREYOUWITH_DESCRIPTOR_SELECT_SQL = "SELECT whoareyouwith_desc " +
        "FROM whoareyouwith_descriptor WHERE whoareyouwith_VALID_CURRENT = '1' " +
        "AND whoareyouwith_id = ? ";
    public String RECOREPLY_DIDIYOULIKE_SELECT_SQL = "" +
        "SELECT recoreply_didyoulike_notif.recorequest_id, " +
        "       recoreply_didyoulike_notif.notif_datetime, " +
        "       recoreply_didyoulike_notif.notif_viewed " +
        "FROM   recoreply_didyoulike_notif " +
        "WHERE  recoreply_didyoulike_notif.recorequest_id = ? ";
    public String COUNT_NOTIFICATIONS_ALL_SELECT_SQL = "" +
        "SELECT notifications_all.notification_type, " +
        "       notifications_all.linked_id, " +
        "       notifications_all.datetime " + "FROM   notifications_all " +
        "WHERE  notifications_all.user_id = ? ";
    public String NOTIFICATIONS_ALL_SELECT_SQL = "" +
        "SELECT notifications_all.notification_type, " +
        "       notifications_all.linked_id, " +
        "       notifications_all.datetime " + "FROM   notifications_all " +
        "WHERE  notifications_all.user_id = ? " +
        "ORDER  BY notifications_all.datetime DESC " + "LIMIT  ?, ? ";
    public String RECOREQUEST_USER_LOCATION_SELECT_SQL = "" +
        "SELECT recorequest_user.initiator_user_id, " +
        "       recorequest_location.city_id, " +
        "       recorequest_location.neighbourhood_id " +
        "FROM   recorequest_user, " + "       recorequest_location " +
        "WHERE  recorequest_user.recorequest_id = ? " +
        "       AND recorequest_user.recorequest_id = recorequest_location.recorequest_id ";
    public String RECOREQUEST_CUISINE_TIER1_SELECT_SQL = "" +
        "SELECT recorequest_cuisine_tier1.cuisine_tier1_id " +
        "FROM   recorequest_cuisine_tier1 " +
        "WHERE  recorequest_cuisine_tier1.recorequest_id = ? ";
    public String RECOREQUEST_CUISINE_TIER2_SELECT_SQL = "" +
        "SELECT recorequest_cuisine_tier2.cuisine_tier2_id " +
        "FROM   recorequest_cuisine_tier2 " +
        "WHERE  recorequest_cuisine_tier2.recorequest_id = ? ";
    public String RECOREQUEST_PRICE_SELECT_SQL = "" +
        "SELECT recorequest_price.price_id " + "FROM   recorequest_price " +
        "WHERE  recorequest_price.recorequest_id = ?" + "";
    public String RECOREQUEST_THEME_SELECT_SQL = "" +
        "SELECT recorequest_theme.theme_id " + "FROM   recorequest_theme " +
        "WHERE  recorequest_theme.recorequest_id = ? ";
    public String RECOREQUEST_WHOAREYOUWITH_SELECT_SQL = "" +
        "SELECT recorequest_whoareyouwith.whoareyouwith_id " +
        "FROM   recorequest_whoareyouwith " +
        "WHERE  recorequest_whoareyouwith.recorequest_id = ? ";
    public String RECOREQUEST_TYPEOFREST_SELECT_SQL = "" +
        "SELECT recorequest_typeofrest.typeofrest_id " +
        "FROM   recorequest_typeofrest " +
        "WHERE  recorequest_typeofrest.recorequest_id = ? ";
    public String RECOREQUEST_OCCASION_SELECT_SQL = "" +
        "SELECT recorequest_occasion.occasion_id " +
        "FROM   recorequest_occasion " +
        "WHERE  recorequest_occasion.recorequest_id = ? ";
}
