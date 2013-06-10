package com.tastesync.db.queries;

public interface UserQueries extends TSDBCommonQueries {
    //selectUser
    public static final String USER_SELECT_SQL = "SELECT " + " users.USER_ID," +
        " users.TS_USER_ID," + " users.TS_USER_EMAIL," + " users.TS_USER_PW," +
        " users.TS_FIRST_NAME," + " users.TS_LAST_NAME," +
        " users.MAX_INVITES," + " users.USER_CREATED_INITIAL_DATETIME," +
        " users.USER_POINTS," + " users.TWITTER_USR_URL," +
        " users.USER_DISABLED_FLAG," + " users.USER_ACTIVATION_KEY," +
        " users.USER_GENDER," + " users.USER_CITY_ID," + " users.USER_STATE," +
        " users.IS_ONLINE," + " users.USER_COUNTRY," + " users.ABOUT," +
        " users.CURRENT_STATUS," + " users.USER_FB_ID" + " FROM " + " users " +
        "WHERE users.USER_ID= " + " ?";

    //selectUsers
    public static final String USERS_SELECT_SQL = "SELECT " +
        " users.USER_ID," + " users.TS_USER_ID," + " users.TS_USER_EMAIL," +
        " users.TS_USER_PW," + " users.TS_FIRST_NAME," +
        " users.TS_LAST_NAME," + " users.MAX_INVITES," +
        " users.USER_CREATED_INITIAL_DATETIME," + " users.USER_POINTS," +
        " users.TWITTER_USR_URL," + " users.USER_DISABLED_FLAG," +
        " users.USER_ACTIVATION_KEY," + " users.USER_GENDER," +
        " users.USER_CITY_ID," + " users.USER_STATE," + " users.IS_ONLINE," +
        " users.USER_COUNTRY," + " users.ABOUT," + " users.CURRENT_STATUS," +
        " users.USER_FB_ID" + " FROM " + " users ";
    public static final String USERS_INSERT_SQL = "INSERT INTO users (" +
        " users.USER_ID, " + "users.TS_USER_ID, " + "users.TS_USER_EMAIL, " +
        "users.TS_USER_PW, " + "users.TS_FIRST_NAME, " +
        "users.TS_LAST_NAME, " + "users.MAX_INVITES, " +
        "users.USER_CREATED_INITIAL_DATETIME, " + "users.USER_POINTS, " +
        "users.TWITTER_USR_URL, " + "users.USER_DISABLED_FLAG, " +
        "users.USER_ACTIVATION_KEY, " + "users.USER_GENDER, " +
        "users.USER_CITY_ID, " + "users.USER_STATE, " + "users.IS_ONLINE, " +
        "users.USER_COUNTRY, " + "users.ABOUT, " + "users.CURRENT_STATUS, " +
        "users.USER_FB_ID " + ") VALUES (" + "?," + // users.USER_ID",
        "?," + // "users.TS_USER_ID",
        "?," + // "users.TS_USER_EMAIL",
        "?," + // "users.TS_USER_PW",
        "?," + // "users.TS_FIRST_NAME",
        "?," + // "users.TS_LAST_NAME",
        "?," + // "users.MAX_INVITES",
        "?," + // "users.USER_CREATED_INITIAL_DATETIME",
        "?," + // "users.USER_POINTS",
        "?," + // "users.TWITTER_USR_URL",
        "?," + // "users.USER_DISABLED_FLAG",
        "?," + // "users.USER_ACTIVATION_KEY",
        "?," + // "users.USER_GENDER",
        "?," + // "users.USER_CITY_ID",
        "?," + // "users.USER_STATE",
        "?," + // "users.IS_ONLINE",
        "?," + // "users.USER_COUNTRY",
        "?," + // "users.ABOUT",
        "?," + // "users.CURRENT_STATUS"
        "?" + // "users.USER_FB_ID",
        ")";
    public static String USER_SOCIAL_SETTINGS_SELECT_SQL = "" +
        "SELECT `user_usnc`.`usnc_yn`" + "FROM   user_usnc " +
        "WHERE  `user_usnc`.`user_id` = ? " + "       AND -- userId " +
        "       `user_usnc`.`usnc_id` = ? ";
    public static String USER_SOCIAL_APID_SETTINGS_SELECT_SQL = "" +
        "SELECT `user_usnc`.`usnc_yn`" + "FROM   user_usnc " +
        "WHERE  `user_usnc`.`user_id` = ? " + "       AND -- userId " +
        "       `user_usnc`.`usnc_id` = ? " + "AND `usg_usnc_ap`.`AP_ID` = ?";
    public static String USER_SOCIAL_APID_SETTINGS_UPDATE_SQL = "" +
        "UPDATE `usg_usnc_ap` " +
        "SET    `usg_usnc_ap`.`usnc_yn` = ? -- statusFlag " +
        "WHERE  `usg_usnc_ap`.`user_id` = ? " + "       AND -- userId " +
        "       `usg_usnc_ap`.`ap_id` = ? " +
        "       AND -- autoPublishingId " +
        "       `usg_usnc_ap`.`usnc_id` = ?-- socialNetworkId " + "";
    public static String USER_NOTIFICATION_SETTINGS_SELECT_SQL = "" +
        "SELECT `user_notification_settings`.`nsid`,-- notificationSettingsId " +
        "       `user_notification_settings`.`ns_mobile_flag`,-- phoneFlag " +
        "       `user_notification_settings`.`ns_email_flag` -- emailFlag " +
        "FROM   `user_notification_settings` " +
        "WHERE  `user_notification_settings`.`user_id` = ? -- userId " + "";
    public static String USER_NOTIFICATION_SETTINGS_UPDATE_SQL = "" +
        "UPDATE `user_notification_settings` " +
        "SET    `user_notification_settings`.`ns_mobile_flag` = ?,--  " +
        "       `user_notification_settings`.`ns_email_flag` = ? " +
        "WHERE  `user_notification_settings`.`user_id` = ? " +
        "       AND `user_notification_settings`.`nsid` = ? ";
    public static String USER_PRIVACY_SETTINGS_SELECT_SQL = "" +
        "SELECT `user_privacy_settings`.`privacy_id`,-- privacySettingsId " +
        "       `user_privacy_settings`.`privacy_flag` -- privacyUserFlag " +
        "FROM   `user_privacy_settings` " +
        "WHERE  `user_privacy_settings`.`user_id` = ? -- userId " + "";
    public static String USER_PRIVACY_SETTINGS_UPDATE_SQL = "" +
        "UPDATE `user_privacy_settings` " +
        "SET    `user_privacy_settings`.`privacy_flag` = ? " +
        "WHERE  `user_privacy_settings`.`user_id` = ? " +
        "       `user_privacy_settings`.`privacy_id` = ?" + "";
    public static String USER_LOGOUT_INSERT_SQL = "" +
        "INSERT INTO `users_log` " + "            (`users_log`.`log_id`, " +
        "             `users_log`.`login_datetime`, " +
        "             `users_log`.`logout_datetime`, " +
        "             `users_log`.`user_id`, " +
        "             `users_log`.`users_created_latest_datetime`) " +
        "VALUES      ( ?, " + "              ?, " + "              ?, " +
        "              ?, " + "              ? )";
    public static String USER_REPORTED_INFO_INSERT_SQL = "" +
        "INSERT INTO `user_reported_info` " + "            (" +
        "             `user_reported_info`.`id`, " +
        "             `user_reported_info`.`reported_datetime`, " +
        "             `user_reported_info`.`reported_reason`, " +
        "             `user_reported_info`.`reported_user_id`, " +
        "             `user_reported_info`.`user_id`) " + "VALUES      ( " +
        "?," + "?," + "?," + "?," + "?" + ")";
}
