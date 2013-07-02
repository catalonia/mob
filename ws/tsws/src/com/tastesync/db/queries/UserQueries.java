package com.tastesync.db.queries;

public interface UserQueries extends TSDBCommonQueries {
	
	//USERS
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
    public static String USER_LOGIN_SELECT_SQL = "SELECT " +
    		" users.Auto_User_ID," + " users.USER_ID," + " users.TS_USER_ID," + " users.TS_USER_EMAIL," +
            " users.TS_USER_PW," + " users.TS_FIRST_NAME," +
            " users.TS_LAST_NAME," + " users.MAX_INVITES," +
            " users.USER_CREATED_INITIAL_DATETIME," + " users.USER_POINTS," +
            " users.TWITTER_USR_URL," + " users.USER_DISABLED_FLAG," +
            " users.USER_ACTIVATION_KEY," + " users.USER_GENDER," +
            " users.USER_CITY_ID," + " users.USER_STATE," + " users.IS_ONLINE," +
            " users.USER_COUNTRY," + " users.ABOUT," + " users.CURRENT_STATUS," +
            " users.USER_FB_ID" + " FROM " + " users " + 
            " WHERE TS_USER_EMAIL = ? " + "AND TS_USER_PW = ?";
    public static String USER_ONLINE_UPDATE_SQL = "UPDATE users " + "SET IS_ONLINE = ? " + "WHERE USER_ID = ?";
    public static String USER_STATUS_SELECT_SQL = "SELECT * FROM users WHERE USER_ID = ? AND CURRENT_STATUS = ?";
    public static String USER_CHECK_EMAIL_SELECT_SQL = "SELECT * FROM users WHERE TS_USER_EMAIL = ?";
    public static String USER_CHECK_EMAIL_STATUS_SELECT_SQL = "SELECT * FROM users WHERE TS_USER_EMAIL = ? " +
    	"AND CURRENT_STATUS = ?";
    public static String USER_FBID_SELECT_SQL = "SELECT * FROM users WHERE User_FB_ID = ? AND CURRENT_STATUS = ?";
    public static String USER_FBID_UPDATE_SQL = "UPDATE users SET USER_FB_ID = ? WHERE USER_ID = ?";
    public static String USER_ID_UPDATE_SQL = "UPDATE users SET USER_ID = ?"+ ", TS_USER_ID = ?" +" WHERE Auto_User_ID = ?";
    public static String USER_FACEBOOK_INSERT_SQL = "INSERT INTO users " + "(TS_USER_EMAIL, " + 
    	"USER_CREATED_INITIAL_DATETIME, " + "TS_FIRST_NAME, " + "TS_LAST_NAME, " + 
    	"USER_GENDER, " + "USER_CITY_ID, " + "USER_CITY, " + "USER_STATE, " + "USER_COUNTRY) " + 
    	"VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)";
    
    //FACEBOOK_USER_DATA
    public static String FACEBOOK_SELECT_SQL = "SELECT * FROM facebook_user_data WHERE User_FB_ID = ?";
    public static String FACEBOOK_INSERT_SQL = "INSERT INTO facebook_user_data " + "(User_FB_ID, " + "NAME, " + "FIRST_NAME, " + "MIDDLE_NAME, " +
	"LAST_NAME, " + "GENDER, " + "LOCALE, " + "LINK, " + "USERNAME, " + "AGE_RANGE, " + "BIRTHDAY, " +
	"THIRD_PARTY_ID, " + "FRIENDLISTS, " + "INSTALLED, " + "TIMEZONE, " + "UPDATE_TIME, " + "VERIFIED, " +
	"DEVICES, " + "EMAIL, " + "HOMETOWN, " + "LOCATION, " + "PICTURE, " + "RELATIONSHIP_STATUS, " + 
	"CHECKINS, " + "FRIENDS, " + "LIKES, " + "PERMISSIONS, " + "CREATED)" +
	"VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";
    public static String FACEBOOK_UPDATE_SQL = "UPDATE facebook_user_data SET " + "NAME = ?, " +
	"FIRST_NAME = ?, " + "MIDDLE_NAME = ?, " + "LAST_NAME = ?, " + "GENDER = ?, " + "LOCALE = ?, " +
	"LINK = ?, " + "USERNAME = ?, " + "AGE_RANGE = ?, " + "BIRTHDAY = ?, " + "THIRD_PARTY_ID = ?, " + 
	"FRIENDLISTS = ?, " + "INSTALLED = ?, " + "TIMEZONE = ?, " + "UPDATE_TIME = ?, " + "VERIFIED = ?, " +
	"DEVICES = ?, " + "EMAIL = ?, " + "HOMETOWN = ?, " + "LOCATION = ?, " + "PICTURE = ?, " + "RELATIONSHIP_STATUS = ?, " +
	"CHECKINS = ?, " + "FRIENDS = ?, " + "LIKES = ?, " + "PERMISSIONS = ?, " + "CREATED = ? " + "WHERE User_FB_ID = ?";
    
    //USERS_LOG
    public static String USER_LOGIN_INSERT_SQL = "INSERT INTO users_log (USER_ID, LOGIN_DATETIME, " +
    	"USERS_CREATED_LATEST_DATETIME) VALUES (?, ?, ?)";
    public static String USERLOG_EMAIL_SELECT_SQL = "SELECT * FROM users_log WHERE USER_ID = ?";
    public static String USER_LOGIN_UPDATE_SQL = "UPDATE users_log " + "SET LOGIN_DATETIME = ? " + 
        	"WHERE USER_ID = ?";
    public static String USERSLOG_LOGOUT_UPDATE_SQL = "UPDATE users_log " + "SET LOGOUT_DATETIME = ? " + 
            	"WHERE LOG_ID = ?";
  	public static String USER_ID_FROM_USERLOG_SELECT_SQL = "SELECT * FROM users_log WHERE LOG_ID = ?";
  	public static String USER_LOGOUT_INSERT_SQL = "" +
  	        "INSERT INTO `users_log` " + "            (`users_log`.`log_id`, " +
  	        "             `users_log`.`login_datetime`, " +
  	        "             `users_log`.`logout_datetime`, " +
  	        "             `users_log`.`user_id`, " +
  	        "             `users_log`.`users_created_latest_datetime`) " +
  	        "VALUES      ( ?, " + "              ?, " + "              ?, " +
  	        "              ?, " + "              ? )";
  	public static String USER_LOGOUT_UPDATE_SQL = "UPDATE users_log " + "SET LOGOUT_DATETIME = ? " + "WHERE USER_ID = ?"
  	        + " AND LOGOUT_DATETIME IS NULL";
    public static String USERLOG_LOGID_UPDATE_SQL = "UPDATE users_log SET LOG_ID = ? WHERE Auto_Log_ID = ?";
    
    //STORY
    public static String STORY_INSERT_SQL = "INSERT INTO story (STORY_CREATED_DATETIME, ACTION_ID_TYPE, USER_ID, UPDATED_DATETIME) VALUES (?, ?, ?, ?)";
    public static String STORY_UPDATE_SQL = "UPDATE story SET STORY_ID = ? WHERE Auto_Story_ID = ?";
    
    //USER_USNC
    public static String USER_SOCIAL_SETTINGS_SELECT_SQL = "" +
        "SELECT `user_usnc`.`usnc_yn`" + "FROM   user_usnc " +
        "WHERE  `user_usnc`.`user_id` = ? " + "       AND -- userId " +
        "       `user_usnc`.`usnc_id` = ? ";
    public static String USER_SOCIAL_APID_SETTINGS_SELECT_SQL = "" +
        "SELECT `user_usnc`.`usnc_yn`" + "FROM   user_usnc " +
        "WHERE  `user_usnc`.`user_id` = ? " + "       AND -- userId " +
        "       `user_usnc`.`usnc_id` = ? " + "AND `usg_usnc_ap`.`AP_ID` = ?";
    public static String USER_USNC_UPDATE_SQL = "UPDATE user_usnc SET USNC_ID = ?, USNC_YN = ? WHERE USER_ID = ?";
    public static String USER_USNC_INSERT_SQL = "INSERT INTO user_usnc (USNC_ID, USNC_YN, USER_ID) value (?, ?, ?)";
    public static String USER_USNC_SELECT_SQL = "SELECT * FROM user_usnc WHERE USER_ID = ?";
    
    //USG_USNC_AP
    public static String USER_SOCIAL_APID_SETTINGS_UPDATE_SQL = "" +
        "UPDATE `usg_usnc_ap` " +
        "SET    `usg_usnc_ap`.`usnc_yn` = ? -- statusFlag " +
        "WHERE  `usg_usnc_ap`.`user_id` = ? " + "       AND -- userId " +
        "       `usg_usnc_ap`.`ap_id` = ? " +
        "       AND -- autoPublishingId " +
        "       `usg_usnc_ap`.`usnc_id` = ?-- socialNetworkId " + "";
    public static String USER_SOCIAL_APID_SELECT_SQL = "SELECT * FROM auto_publishing WHERE AP_DESC = ?";
    public static String USER_SOCIAL_AP_SELECT_SQL = "SELECT * FROM auto_publishing";
    public static String USER_SOCIAL_APID_UPDATE_SQL = "UPDATE usg_usnc_ap SET USNC_ID = ?" + ", AP_ID = ?, USNC_YN = ?" + " WHERE USER_ID = ?";
    public static String USER_SOCIAL_APID_INSERT_SQL = "INSERT INTO usg_usnc_ap (USNC_ID, AP_ID, USNC_YN, USER_ID) value (?, ?, ?, ?)";
    public static String USER_SOCIAL_APID_USERID_SELECT_SQL = "SELECT * FROM usg_usnc_ap WHERE USER_ID = ?";
    
    //USER_NOTIFICATION_SETTINGS
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
    
    //USER_PRIVACY_SETTINGS
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
    
    //USER_REPORTED_INFO
    public static String USER_REPORTED_INFO_INSERT_SQL = "" +
        "INSERT INTO `user_reported_info` " + "            (" +
        "             `user_reported_info`.`id`, " +
        "             `user_reported_info`.`reported_datetime`, " +
        "             `user_reported_info`.`reported_reason`, " +
        "             `user_reported_info`.`reported_user_id`, " +
        "             `user_reported_info`.`user_id`) " + "VALUES      ( " +
        "?," + "?," + "?," + "?," + "?" + ")";
    
    //USER_SOCIAL_NETWORK_CONNECTION
    public static String USER_SOCIAL_NETWORK_CONNECTION_ID_SELECT_SQL = "SELECT * FROM user_social_network_connection WHERE USNC_DESC = ?";
    public static String USER_SOCIAL_NETWORK_CONNECTION_SELECT_SQL = "SELECT * FROM user_social_network_connection";
}
