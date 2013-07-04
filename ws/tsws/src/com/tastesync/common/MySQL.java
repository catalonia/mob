package com.tastesync.common;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.CityQueries;
import com.tastesync.db.queries.UserQueries;
import com.tastesync.model.objects.TSCityObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.util.CommonFunctionsUtil;

public class MySQL {
//
//	public MySQL() {
//		context = new ClassPathXmlApplicationContext("/spring/database/DataSource.xml");
//		dataSource = (DriverManagerDataSource) context.getBean("dataSource");
//		jdbcTemplate = new JdbcTemplate();
//		jdbcTemplate.setDataSource(dataSource);
//	}
//
//	//Get Last Id in tables
//	public int getLastId(int order) {
//		int last_id = 0;
//		String query = null;
//		
//		//Get Last user_id 
//		if(order == 1) {
//			
//			//Table users
//			query = "SELECT USER_ID FROM users ORDER BY USER_ID DESC LIMIT 0, 1";
//			
//			SqlRowSet srs = jdbcTemplate.queryForRowSet(query, new Object[] {});
//			while (srs.next()) {
//				last_id = Integer.parseInt(srs.getString("USER_ID"));
//			}
//		}
//		else if(order == 2) {
//			
//			//Table user_friend_fb_data
//			query = "SELECT FRIEND_USER_ID FROM user_friend_fb_data ORDER BY FRIEND_USER_ID DESC LIMIT 0, 1";
//			
//			SqlRowSet srs = jdbcTemplate.queryForRowSet(query, new Object[] {});
//			while (srs.next()) {
//				last_id = Integer.parseInt(srs.getString("FRIEND_USER_ID"));
//			}
//		}
//		else if(order == 3) {
//			
//			//Table story
//			query = "SELECT STORY_ID FROM story ORDER BY STORY_ID DESC LIMIT 0, 1";
//			
//			SqlRowSet srs = jdbcTemplate.queryForRowSet(query, new Object[] {});
//			while (srs.next()) {
//				last_id = Integer.parseInt(srs.getString("STORY_ID"));
//			}
//		}
//		
//		return last_id;
//	}
//	
//	//Check user_id exist in the system
//	public boolean checkUserIDExist(String user_id) {
//		boolean check = false;
//		TSUser user = null;
//			
//		String query = "SELECT * FROM users WHERE USER_ID = ?";
//		try {
//			user = (TSUser) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {user_id},
//					new UserRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//			
//		if(user != null) check = true;
//
//		return check;
//	}
//	
	//Check email exist in the system
	public boolean checkEmailExist(String email) {
		boolean check = false;
		TSUserObj user = null;
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
        try{
        	connection = tsDataSource.getConnection();
        	tsDataSource.begin();
        	System.out.println("UserQueries.USER_CHECK_EMAIL_SELECT_SQL=" + UserQueries.USER_CHECK_EMAIL_SELECT_SQL);
        	statement = connection.prepareStatement(UserQueries.USER_CHECK_EMAIL_SELECT_SQL);
        	statement.setString(1, email);
        	resultset = statement.executeQuery();
        	System.out.println("1");
        	if(resultset.next())
        	{
        		user = new TSUserObj();
        		MySQL.mapResultsetRowToTSUserVO(user, resultset);
        	}
        	System.out.println("2");
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		
		if(user != null) 
			check = true;

		return check;
	}
	
	//Get city information (by city id)
	public TSCityObj getCityInforByStateAndCityName(String state, String city_name) {
		TSCityObj city = null;
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
		try {
			connection = tsDataSource.getConnection();
        	tsDataSource.begin();
        	System.out.println("CityQueries.CITY_STATE_SELECT_SQL" + CityQueries.CITY_STATE_SELECT_SQL);
        	statement = connection.prepareStatement(CityQueries.CITY_STATE_SELECT_SQL);
        	statement.setString(1, state);
        	statement.setString(2, city_name);
        	resultset = statement.executeQuery();
        	if(resultset.next())
        	{
        		city = new TSCityObj();
        		MySQL.mapResultsetRowToTSCityVO(city, resultset);
        	}
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		
		return city;
	}
	public TSUserObj getUserInformationByEmail(String email) {
		
		TSUserObj user = null;
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
        try{
        	connection = tsDataSource.getConnection();
        	tsDataSource.begin();
        	System.out.println("UserQueries.USER_CHECK_EMAIL_SELECT_SQL=" + UserQueries.USER_CHECK_EMAIL_STATUS_SELECT_SQL);
        	statement = connection.prepareStatement(UserQueries.USER_CHECK_EMAIL_STATUS_SELECT_SQL);
        	statement.setString(1, email);
        	statement.setString(2, String.valueOf("e"));
        	resultset = statement.executeQuery();
        	if(resultset.next())
        	{
        		user = new TSUserObj();
        		MySQL.mapResultsetRowToTSUserVO(user, resultset);
        	}
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		return user;
	}
	
	public String getUserIDFromUserLogID(String userLogID)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
        try{
        	connection = tsDataSource.getConnection();
        	tsDataSource.begin();
        	System.out.println("UserQueries.USER_ID_FROM_USERLOG_SELECT_SQL=" + UserQueries.USER_ID_FROM_USERLOG_SELECT_SQL);
        	statement = connection.prepareStatement(UserQueries.USER_ID_FROM_USERLOG_SELECT_SQL);
        	statement.setString(1, userLogID);
        	resultset = statement.executeQuery();
        	if(resultset.next())
        	{
        		return CommonFunctionsUtil.getModifiedValueString(resultset.getString("users_log.USER_ID"));
        	}
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		return null;
	}
	
	public String getAutoUserLogByUserId(String UserId) {
		
		String userId = "";
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
        try{
        	connection = tsDataSource.getConnection();
        	tsDataSource.begin();
        	statement = connection.prepareStatement(UserQueries.USER_ID_FROM_USERLOG_SELECT_SQL);
        	statement.setString(1, UserId);
        	resultset = statement.executeQuery();
        	if(resultset.next())
        	{
        		userId = CommonFunctionsUtil.getModifiedValueString(resultset.getString("users_log.USER_ID"));
        	}
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		return userId;
	}
	public boolean checkFBUserDataExist(String user_fb_id) {
	boolean check = false;
	TSFacebookUserDataObj fb_user_data = null;
	TSDataSource tsDataSource = TSDataSource.getInstance();
    Connection connection = null;
	PreparedStatement statement = null;
    ResultSet resultset = null;
	try{
    	connection = tsDataSource.getConnection();
    	tsDataSource.begin();
    	System.out.println("UserQueries.USER_CHECK_EMAIL_SELECT_SQL=" + UserQueries.FACEBOOK_SELECT_SQL);
    	statement = connection.prepareStatement(UserQueries.FACEBOOK_SELECT_SQL);
    	statement.setString(1, user_fb_id);
    	resultset = statement.executeQuery();
    	if(resultset.next())
    	{
    		fb_user_data = new TSFacebookUserDataObj();
    		MySQL.mapResultsetRowToTSFacebookVO(fb_user_data, resultset);
    	}
	} catch (Exception e) {
		e.printStackTrace();
	}finally{
		tsDataSource.close();
	}
	if(fb_user_data != null) check = true;

	return check;
	}
	public TSUserObj getUserInformationByFacebookID(String user_fb_id) {
		TSUserObj user = null;
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	System.out.println("UserQueries.USER_FBID_SELECT_SQL=" + UserQueries.USER_FBID_SELECT_SQL);
	    	statement = connection.prepareStatement(UserQueries.USER_FBID_SELECT_SQL);
	    	statement.setString(1, user_fb_id);
	    	statement.setString(2, String.valueOf("e"));
	    	resultset = statement.executeQuery();
	    	if(resultset.next())
	    	{
	    		user = new TSUserObj();
	    		MySQL.mapResultsetRowToTSUserVO(user, resultset);
	    	}
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		return user;
	}
	//Get user information (by user_id)
	public TSUserObj getUserInformation(String user_id) {
		TSUserObj user = null;
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	System.out.println("UserQueries.USER_STATUS_SELECT_SQL=" + UserQueries.USER_STATUS_SELECT_SQL);
	    	statement = connection.prepareStatement(UserQueries.USER_STATUS_SELECT_SQL);
	    	statement.setString(1, user_id);
	    	statement.setString(2, String.valueOf("e"));
	    	resultset = statement.executeQuery();
	    	if(resultset.next())
	    	{
	    		user = new TSUserObj();
	    		MySQL.mapResultsetRowToTSUserVO(user, resultset);
	    	}
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		return user;
	}
	public int getIDUserSocialNetworkConnection(String usncDesc)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	System.out.println(UserQueries.USER_SOCIAL_NETWORK_CONNECTION_ID_SELECT_SQL);
	    	statement = connection.prepareStatement(UserQueries.USER_SOCIAL_NETWORK_CONNECTION_ID_SELECT_SQL);
	    	statement.setString(1, usncDesc);
	    	resultset = statement.executeQuery();
    	if(resultset.next())
    	{
    		return Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_social_network_connection.USNC_ID")));
    	}
	} catch (Exception e) {
		e.printStackTrace();
	}finally{
		tsDataSource.close();
	}
		return 0;
	}
	public int getIDAutoPublishing(String apDesc)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_SOCIAL_APID_SELECT_SQL);
	    	statement.setString(1, apDesc);
	    	resultset = statement.executeQuery();
    	if(resultset.next())
    	{
    		return Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(resultset.getString("auto_publishing.AP_ID")));
    	}
	} catch (Exception e) {
		e.printStackTrace();
	}finally{
		tsDataSource.close();
	}
		return 0;
	}
	public boolean checkUserUSNC(String userId)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_USNC_SELECT_SQL);
	    	statement.setString(1, userId);
	    	resultset = statement.executeQuery();
	    	int  i = 0;
	    	if(resultset.next())
	    	{
	    		i++;
	    	}
	    	System.out.println("Number row:"+i);
	    	if(i != 0)
	    		return true;
	    	else
	    		return false;
    		
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		return false;
	}
	public String[] getDataUserUSNC()
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    String[] array;
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_SOCIAL_NETWORK_CONNECTION_SELECT_SQL);
	    	resultset = statement.executeQuery();
	    	int  i = 1;
	    	while(resultset.next())
	    	{
	    		i++;
	    	}
	    	array = new String[i];
	    	resultset = statement.executeQuery();
	    	
	    	while(resultset.next())
	    	{
	    		array[Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_social_network_connection.USNC_ID")))]
	    				= CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_social_network_connection.USNC_DESC"));
	    	}
	    	return array;
	    	
    		
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
	    array = null;
		return array;
	}
	public boolean checkUserUSNC_AP(String userId)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_SOCIAL_APID_USERID_SELECT_SQL);
	    	statement.setString(1, userId);
	    	resultset = statement.executeQuery();
	    	int  i = 0;
	    	if(resultset.next())
	    	{
	    		i++;
	    	}
	    	System.out.println("Number row:"+i);
	    	if(i != 0)
	    		return true;
	    	else
	    		return false;
    		
	} catch (Exception e) {
		e.printStackTrace();
	}finally{
		tsDataSource.close();
	}
		return false;
	}
	public String[] getDataUserUSNC_AP()
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    String[] array;
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_SOCIAL_AP_SELECT_SQL);
	    	resultset = statement.executeQuery();
	    	int  i = 1;
	    	while(resultset.next())
	    	{
	    		i++;
	    	}
	    	array = new String[i];
	    	resultset = statement.executeQuery();
	    	
	    	while(resultset.next())
	    	{
	    		array[Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(resultset.getString("auto_publishing.AP_ID")))]
	    				= CommonFunctionsUtil.getModifiedValueString(resultset.getString("auto_publishing.AP_DESC"));
	    	}
	    	return array;
	    	
    		
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
	    array = null;
		return array;
	}
	public boolean checkNotificationDescriptor(String userId)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_NOTIFICATION_SETTINGS_ID_SELECT_SQL);
	    	statement.setString(1, userId);
	    	resultset = statement.executeQuery();
	    	int  i = 0;
	    	if(resultset.next())
	    	{
	    		i++;
	    	}
	    	System.out.println("Number row:"+i);
	    	if(i != 0)
	    		return true;
	    	else
	    		return false;
    		
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		return false;
	}
	public int getIDNotificationDescriptor(int nsId_Order)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	System.out.println(UserQueries.NOTIFICATION_DESCRIPTOR_SELECT_SQL);
	    	statement = connection.prepareStatement(UserQueries.NOTIFICATION_DESCRIPTOR_SELECT_SQL);
	    	statement.setInt(1, nsId_Order);
	    	resultset = statement.executeQuery();
    	if(resultset.next())
    	{
    		return Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(resultset.getString("notification_descriptor.NSID")));
    	}
	} catch (Exception e) {
		e.printStackTrace();
	}finally{
		tsDataSource.close();
	}
		return 0;
	}
	public boolean checkPrivacyDescriptor(String userId)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_PRIVACY_SETTINGS_ID_SELECT_SQL);
	    	statement.setString(1, userId);
	    	resultset = statement.executeQuery();
	    	int  i = 0;
	    	if(resultset.next())
	    	{
	    		i++;
	    	}
	    	System.out.println("Number row:"+i);
	    	if(i != 0)
	    		return true;
	    	else
	    		return false;
    		
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			tsDataSource.close();
		}
		return false;
	}
	public int getIDPrivacySettings(int privacyIdOrder)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	System.out.println(UserQueries.PRIVACY_DESCRIPTOR_SELECT_SQL);
	    	statement = connection.prepareStatement(UserQueries.PRIVACY_DESCRIPTOR_SELECT_SQL);
	    	statement.setInt(1, privacyIdOrder);
	    	resultset = statement.executeQuery();
    	if(resultset.next())
    	{
    		System.out.println(CommonFunctionsUtil.getModifiedValueString(resultset.getString("privacy_descriptor.PRIVACY_ID")));
    		return Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(resultset.getString("privacy_descriptor.PRIVACY_ID")));
    	}
	} catch (Exception e) {
		e.printStackTrace();
	}finally{
		tsDataSource.close();
	}
		return 0;
	}
	public int getIDPrivacyOrderSettings(int privacyId)
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;
	    ResultSet resultset = null;
	    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	System.out.println(UserQueries.PRIVACY_DESCRIPTOR_ORDER_SELECT_SQL);
	    	statement = connection.prepareStatement(UserQueries.PRIVACY_DESCRIPTOR_ORDER_SELECT_SQL);
	    	statement.setInt(1, privacyId);
	    	resultset = statement.executeQuery();
    	if(resultset.next())
    	{
    		System.out.println(CommonFunctionsUtil.getModifiedValueString(resultset.getString("privacy_descriptor.PRIVACY_ID_ORDER")));
    		return Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(resultset.getString("privacy_descriptor.PRIVACY_ID_ORDER")));
    	}
	} catch (Exception e) {
		e.printStackTrace();
	}finally{
		tsDataSource.close();
	}
		return 0;
	}
//	//Check facebook id in the system
//	public boolean checkFacebookIDExist(String user_fb_id) {
//		boolean check = false;
//		TSUser user = null;
//		
//		String query = "SELECT * FROM users WHERE User_FB_ID = ?";
//		try {
//			user = (TSUser) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {user_fb_id},
//					new UserRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		if(user != null) check = true;
//
//		return check;
//	}
//	
//	
//	//Get user information (by ts_user_id)
//	public TSUser getUserInformationByTSUserID(int ts_user_id) {
//		TSUser user = null;
//		try {
//			user = (TSUser) jdbcTemplate.queryForObject(
//					"SELECT * FROM users WHERE TS_USER_ID = ? AND CURRENT_STATUS = ?",
//					new Object[] {ts_user_id, String.valueOf("e")},
//					new UserRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		return user;
//	}
//	
//	//Get user information (by email)
//	
//	//Get user information (by user_fb_id)
//	
//	//Check user photo already exist in the system
//	public boolean checkUserPhotoExist(String user_id) {
//		boolean check = false;
//		TSUserPhoto user_photo = null;
//		
//		String query = "SELECT * FROM user_photo WHERE USER_ID = ?";
//		try {
//			user_photo = (TSUserPhoto) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {user_id},
//					new UserPhotoRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		if(user_photo != null) check = true;
//
//		return check;
//	}
//	
//	//Get user photo (by user_id)
//	public TSUserPhoto getUserPhoto(String user_id) {
//		TSUserPhoto user_photo = null;
//		try {
//			user_photo = (TSUserPhoto) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_photo WHERE USER_ID = ?",
//					new Object[] {user_id},
//					new UserPhotoRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		return user_photo;
//	}
//	
//	//Insert new user photo
//	public void insert_user_photo(String user_id, String fileName) {
//		String dateNow = CommonHelper.getCurrentDatetime();
//		String link = GlobalVariables.LINK_DIRECT_USER_IMAGE + fileName;
//		String sql = "INSERT INTO user_photo (USER_ID, FILENAME, LINK, CREATED) VALUES (?, ?, ?, ?)";
//		
//		final String sql_user_log_ps = sql;
//		final String user_id_ps = user_id;
//		final String fileName_ps = fileName;
//		final String link_ps = link;
//		final String dateNow_ps = dateNow;
//
//		KeyHolder keyHolder = new GeneratedKeyHolder();
//		jdbcTemplate.update(new PreparedStatementCreator() {
//		
//			@Override
//			public PreparedStatement createPreparedStatement(Connection connection) throws SQLException {
//				PreparedStatement ps = connection.prepareStatement(sql_user_log_ps, new String[] {"Auto_User_Photo_ID"});
//				ps.setString(1, user_id_ps);
//				ps.setString(2, fileName_ps);
//				ps.setString(3, link_ps);
//				ps.setString(4, dateNow_ps);
//				return ps;
//			}
//		}, keyHolder);
//	
//		String auto_user_photo_id = String.valueOf(keyHolder.getKey().intValue());
//		String user_photo_id = user_id + "-" + auto_user_photo_id;
//		
//		sql = "UPDATE user_photo SET USER_PHOTO_ID = ? WHERE Auto_User_Photo_ID = ?";
//		jdbcTemplate.update(sql, new Object[] {user_photo_id, auto_user_photo_id});
//	}
//	
//	//Update user photo
//	public void update_user_photo(String user_id, String fileName) {
//		String dateNow = CommonHelper.getCurrentDatetime();
//		String link = GlobalVariables.LINK_DIRECT_USER_IMAGE + fileName;
//		String sql = "UPDATE user_photo SET FILENAME = ?, LINK = ?, CREATED = ? WHERE USER_ID = ?";
//		jdbcTemplate.update(sql, new Object[] {fileName, link, dateNow, user_id});
//	}
//	
//	//Check user's Facebook data exist in the system
//	//Get Facebook user data
//	public TSFacebookUserData getFBUserData(String user_fb_id) {
//		TSFacebookUserData user = null;
//		try {
//			user = (TSFacebookUserData) jdbcTemplate.queryForObject(
//					"SELECT * FROM facebook_user_data WHERE User_FB_ID = ?",
//					new Object[] {user_fb_id},
//					new FacebookUserDataRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		return user;
//	}
//	
//	//Check user log
//	public boolean checkUserLogExist(String user_id) {
//		boolean check = false;
//		TSUserLog user_log = null;
//		
//		String query = "SELECT * FROM users_log WHERE USER_ID = ?";
//		try {
//			user_log = (TSUserLog) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {user_id},
//					new UserLogRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		if(user_log != null) check = true;
//		
//		return check;
//	}
//	
//	//Get story information
//	public TSStory getStoryInformation(String user_id, String action_id_type, String link) {
//		TSStory story = null;
//		try {
//			story = (TSStory) jdbcTemplate.queryForObject(
//					"SELECT * FROM story WHERE USER_ID = ? AND ACTION_ID_TYPE = ? AND LINK = ?",
//					new Object[] {user_id, action_id_type, link},
//					new StoryRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		return story;
//	}
//	
//	//Get story information by Restaurant (in this case, field "LINK" is null)
//	public TSStory getStoryInformationByRestaurant(String user_id, String restaurant_id, String action_id_type) {
//		TSStory story = null;
//		try {
//			story = (TSStory) jdbcTemplate.queryForObject(
//					"SELECT * FROM story WHERE USER_ID = ? AND RESTAURANT_ID = ? AND ACTION_ID_TYPE = ?",
//					new Object[] {user_id, restaurant_id, action_id_type},
//					new StoryRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		return story;
//	}
//	
//	//Get historical follow data
//	public TSHistoricalFollowData getHistoricalFollowData(String follower, String followee) {
//		TSHistoricalFollowData historical = null;
//		try {
//			historical = (TSHistoricalFollowData) jdbcTemplate.queryForObject(
//					"SELECT * FROM historical_follow_data WHERE FOLLOWER_USER_ID = ? AND FOLLOWEE_USER_ID = ?",
//					new Object[] {follower, followee},
//					new HistoricalFollowDataRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		return historical;
//	}
//	
//	//Get User follow data
//	public TSUserFollowData getUserFollowData(String follower, String followee) {
//		TSUserFollowData user = null;
//		try {
//			user = (TSUserFollowData) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_follow_data WHERE FOLLOWER_USER_ID = ? AND FOLLOWEE_USER_ID = ?",
//					new Object[] {follower, followee},
//					new UserFollowDataRowMapper());
//		} catch(Exception e) {
//			e.printStackTrace();
//		}
//		
//		return user;
//	}
//	
//	//Check user cuisine (Native - Favourite) exist in the database
//	public boolean checkNativeFavouriteExist(String user_id, int cuisine_id, String type) {
//		boolean check = false;
//		TSUserCuisine user_cuisine = null;
//		
//		String query = "SELECT * FROM user_cuisine WHERE USER_ID = ? AND CUISINE_ID = ? AND TYPE = ?";
//		try {
//			user_cuisine = (TSUserCuisine) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {user_id, cuisine_id, type},
//					new UserCuisineRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		if(user_cuisine != null) check = true;
//
//		return check;
//	}
//	
//	//Check user reported
//	public boolean checkUserReported(String user_id, String reported_user_id) {
//		boolean check = false;
//		TSUserReportedInfo reported = null;
//			
//		String query = "SELECT * FROM user_reported_info WHERE USER_ID = ? AND REPORTED_USER_ID = ?";
//		try {
//			reported = (TSUserReportedInfo) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {user_id, reported_user_id},
//					new UserReportedInfoRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//			
//		if(reported != null) check = true;
//
//		return check;
//	}
//	
//	//Check user restaurant favourite
//	public boolean checkUserRestaurantFav(String user_id, String restaurant_id) {
//		boolean check = false;
//		TSUserRestaurantFav user_restaurant_fav = null;
//				
//		String query = "SELECT * FROM user_restaurant_fav WHERE USER_ID = ? AND RESTAURANT_ID = ?";
//		try {
//			user_restaurant_fav = (TSUserRestaurantFav) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {user_id, restaurant_id},
//					new UserRestaurantFavRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//				
//		if(user_restaurant_fav != null) check = true;
//
//		return check;
//	}
//	
//	//Check user friend fb data
//	public boolean checkUserFriendFbData(String user_id, String friend_user_id) {
//		boolean check = false;
//		TSUserFriendFb user_friend_fb_data = null;
//					
//		String query = "SELECT * FROM user_friend_fb_data WHERE USER_ID = ? AND FRIEND_USER_ID = ?";
//		try {
//			user_friend_fb_data = (TSUserFriendFb) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {user_id, friend_user_id},
//					new UserFriendFbRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//					
//		if(user_friend_fb_data != null) check = true;
//
//		return check;
//	}
//	
//	//Check recommendations from user
//	public boolean checkRecorequestUser(String recorequest_id) {
//		boolean check = false;
//		TSRecorequestUser recorequest_user = null;
//					
//		String query = "SELECT * FROM recorequest_user WHERE RECOREQUEST_ID = ?";
//		try {
//			recorequest_user = (TSRecorequestUser) jdbcTemplate.queryForObject(
//					query,
//					new Object[] {recorequest_id},
//					new RecorequestUserRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//					
//		if(recorequest_user != null) check = true;
//
//		return check;
//	}
//	
//	//Get restaurant information
//	public TSRestaurant getRestaurantInformation(String restaurant_id) {
//		TSRestaurant restaurant = null;
//		try {
//			restaurant = (TSRestaurant) jdbcTemplate.queryForObject(
//					"SELECT * FROM restaurant WHERE RESTAURANT_ID = ?",
//					new Object[] {restaurant_id},
//					new RestaurantRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		return restaurant;
//	}
//	
//	//Get user photo (by user_id)
//	public TSRestaurantPhoto getRestaurantPhoto(String restaurant_id) {
//		TSRestaurantPhoto restaurant_photo = null;
//		try {
//			restaurant_photo = (TSRestaurantPhoto) jdbcTemplate.queryForObject(
//					"SELECT * FROM restaurant_photo WHERE RESTAURANT_ID = ? AND ULTIMATE_SOURCE_NAME = ? GROUP BY RESTAURANT_ID LIMIT 0, 1",
//					new Object[] {restaurant_id, GlobalVariables.RESTAURANT_ULTIMATE_SOURCE_NAME},
//					new RestaurantPhotoRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		return restaurant_photo;
//	}
//	
//	//Get user restaurant saved
//	public TSUserRestaurantSaved getUserRestaurantSaved(String user_id, String restaurant_id) {
//		TSUserRestaurantSaved user_restaurant_saved = null;
//		try {
//			user_restaurant_saved = (TSUserRestaurantSaved) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_restaurant_saved WHERE USER_ID = ? AND RESTAURANT_ID = ? LIMIT 0, 1",
//					new Object[] {user_id, restaurant_id},
//					new UserRestaurantSavedRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//			
//		return user_restaurant_saved;
//	}
//	
//	//Get user restaurant saved (by user_id)
//	public TSUserRestaurantSaved getUserRestaurantSavedByUserID(String user_id) {
//		TSUserRestaurantSaved user_restaurant_saved = null;
//		try {
//			user_restaurant_saved = (TSUserRestaurantSaved) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_restaurant_saved WHERE USER_ID = ?",
//					new Object[] {user_id},
//					new UserRestaurantSavedRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//			
//		return user_restaurant_saved;
//	}
//	
//	//Get user restaurant saved (by restaurant_id)
//	public TSUserRestaurantSaved getUserRestaurantSavedByRestaurantID(String restaurant_id) {
//		TSUserRestaurantSaved user_restaurant_saved = null;
//		try {
//			user_restaurant_saved = (TSUserRestaurantSaved) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_restaurant_saved WHERE RESTAURANT_ID = ?",
//					new Object[] {restaurant_id},
//					new UserRestaurantSavedRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//				
//		return user_restaurant_saved;
//	}
//	
//	//Get user restaurant tips (by tip_id)
//	public TSRestaurantTipsTasteSync getRestaurantTipsTasteSync(String tip_id) {
//		TSRestaurantTipsTasteSync tips = null;
//		try {
//			tips = (TSRestaurantTipsTasteSync) jdbcTemplate.queryForObject(
//					"SELECT * FROM restaurant_tips_tastesync WHERE TIP_ID = ?",
//					new Object[] {tip_id},
//					new RestaurantTipsTasteSyncRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//					
//		return tips;
//	}
//	
//	//Get user restaurant tips (by user_id & restaurant_id)
//	public TSRestaurantTipsTasteSync getRestaurantTipsTasteSyncByUserIDAndRestaurantID(String user_id, String restaurant_id) {
//		TSRestaurantTipsTasteSync tips = null;
//		try {
//			tips = (TSRestaurantTipsTasteSync) jdbcTemplate.queryForObject(
//					"SELECT * FROM restaurant_tips_tastesync WHERE USER_ID = ? AND RESTAURANT_ID = ? LIMIT 0, 1",
//					new Object[] {user_id, restaurant_id},
//					new RestaurantTipsTasteSyncRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//						
//		return tips;
//	}
//
//	//Get user restaurant tips (by user_id)
//	public TSRestaurantTipsTasteSync getRestaurantTipsTasteSyncByUserID(String user_id) {
//		TSRestaurantTipsTasteSync tips = null;
//		try {
//			tips = (TSRestaurantTipsTasteSync) jdbcTemplate.queryForObject(
//					"SELECT * FROM restaurant_tips_tastesync WHERE USER_ID = ?",
//					new Object[] {user_id},
//					new RestaurantTipsTasteSyncRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//						
//		return tips;
//	}
//	
//	//Get user restaurant tips (by restaurant_id)
//	public TSRestaurantTipsTasteSync getRestaurantTipsTasteSyncByRestaurantID(String restaurant_id) {
//		TSRestaurantTipsTasteSync tips = null;
//		try {
//			tips = (TSRestaurantTipsTasteSync) jdbcTemplate.queryForObject(
//					"SELECT * FROM restaurant_tips_tastesync WHERE RESTAURANT_ID = ?",
//					new Object[] {restaurant_id},
//					new RestaurantTipsTasteSyncRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//							
//		return tips;
//	}
//	
//	//Get user restaurant favourite
//	public TSUserRestaurantFav getUserRestaurantFav(String user_id, String restaurant_id) {
//		TSUserRestaurantFav fav = null;
//		try {
//			fav = (TSUserRestaurantFav) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_restaurant_fav WHERE USER_ID = ? AND RESTAURANT_ID = ? LIMIT 0, 1",
//					new Object[] {user_id, restaurant_id},
//					new UserRestaurantFavRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//									
//		return fav;
//	}
//	
//	//Get user restaurant favourite (by user_id)
//	public TSUserRestaurantFav getUserRestaurantFavByUserID(String user_id) {
//		TSUserRestaurantFav fav = null;
//		try {
//			fav = (TSUserRestaurantFav) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_restaurant_fav WHERE USER_ID = ?",
//					new Object[] {user_id},
//					new UserRestaurantFavRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//										
//		return fav;
//	}
//	
//	//Get user restaurant favourite (by restaurant_id)
//	public TSUserRestaurantFav getUserRestaurantFavByRestaurantID(String restaurant_id) {
//		TSUserRestaurantFav fav = null;
//		try {
//			fav = (TSUserRestaurantFav) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_restaurant_fav WHERE RESTAURANT_ID = ?",
//					new Object[] {restaurant_id},
//					new UserRestaurantFavRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//								
//		return fav;
//	}
//	
//	//Get user restaurant reco (by recommender_user_id and restaurant_id)
//	public TSUserRestaurantReco getUserRestaurantRecoByRecommenderAndRestaurant(String recommender_user_id, String restaurant_id) {
//		TSUserRestaurantReco reco = null;
//		try {
//			reco = (TSUserRestaurantReco) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_restaurant_reco WHERE RECOMMENDER_USER_ID = ? AND RESTAURANT_ID = ? LIMIT 0, 1",
//					new Object[] {recommender_user_id, restaurant_id},
//					new UserRestaurantRecoRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//								
//		return reco;
//	}
//	
//	//Get contact descriptor
//	public TSContactSettingsDescriptor getContactSettingsDescriptor(int contact_id) {
//		TSContactSettingsDescriptor contact = null;
//		try {
//			contact = (TSContactSettingsDescriptor) jdbcTemplate.queryForObject(
//					"SELECT * FROM contact_settings_descriptor WHERE CONTACT_ID = ?",
//					new Object[] {contact_id},
//					new ContactSettingsDescriptorRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//								
//		return contact;
//	}
//	
//	//Get user friend on TasteSync
//	public TSUserFriendTasteSync getUserFriendInfor(String user_id, String friend_id) {
//		TSUserFriendTasteSync friend = null;
//		try {
//			friend = (TSUserFriendTasteSync) jdbcTemplate.queryForObject(
//					"SELECT * FROM user_friend_tastesync WHERE USER_ID = ? AND FRIEND_ID = ?",
//					new Object[] {user_id, friend_id},
//					new UserFriendTasteSyncRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//								
//		return friend;
//	}
//	
//	//Get notification descriptor
//	public TSNotificationDescriptor getNotificationDescriptor(int nsid) {
//		TSNotificationDescriptor notification = null;
//		try {
//			notification = (TSNotificationDescriptor) jdbcTemplate.queryForObject(
//					"SELECT * FROM notification_descriptor WHERE NSID = ?",
//					new Object[] {nsid},
//					new NotificationDescriptorRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//								
//		return notification;
//	}
//	
//	//Get factual restaurant deals infor
//	public TSFactualRestaurantDeals getFactualRestaurantDealsByRestaurantID(String restaurant_id) {
//		TSFactualRestaurantDeals deals = null;
//		try {
//			deals = (TSFactualRestaurantDeals) jdbcTemplate.queryForObject(
//					"SELECT * FROM factual_restaurant_deals WHERE RESTAURANT_ID = ?",
//					new Object[] {restaurant_id},
//					new FactualRestaurantDealsRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//								
//		return deals;
//	}
//	
//	//Get 4sq Checkin
//	public TS4sqCheckin get4sqCheckinByRestaurantID(String restaurant_id) {
//		TS4sqCheckin checkin = null;
//		try {
//			checkin = (TS4sqCheckin) jdbcTemplate.queryForObject(
//					"SELECT * FROM 4sq_checkin WHERE RESTAURANT_ID = ?",
//					new Object[] {restaurant_id},
//					new FoursqCheckinRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//								
//		return checkin;
//	}
//	
//	//Get city information (by city name)
//	public TSCity getCityInforByName(String city_name) {
//		TSCity city = null;
//		try {
//			city = (TSCity) jdbcTemplate.queryForObject(
//					"SELECT * FROM cities WHERE city = ?",
//					new Object[] {city_name},
//					new CityRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		return city;
//	}
//	
//	//Get city information (by city id)
//	public TSCity getCityInforByID(String city_id) {
//		TSCity city = null;
//		try {
//			city = (TSCity) jdbcTemplate.queryForObject(
//					"SELECT * FROM cities WHERE city_id = ?",
//					new Object[] {city_id},
//					new CityRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		return city;
//	}
//	
//		
//	//Get recorequest assigned by recorequest_id
//	public TSRecorequestTSAssigned getRecorequestAssignedByRecorequestID(String recorequest_id) {
//		TSRecorequestTSAssigned reco = null;
//		try {
//			reco = (TSRecorequestTSAssigned) jdbcTemplate.queryForObject(
//					"SELECT * FROM recorequest_ts_assigned WHERE RECOREQUEST_ID = ?",
//					new Object[] {recorequest_id},
//					new RecorequestTSAssignedRowMapper());
//		} catch (EmptyResultDataAccessException e) {
//			e.printStackTrace();
//		}
//		
//		return reco;
//	}
//	
//	//Check restaurant exist in list
//	public boolean checkRestaurantInList(List<TSRestaurant> list_restaurants, String restaurant_id) {
//		boolean check = false;
//		
//		if(list_restaurants != null && !list_restaurants.isEmpty()) {
//			for(int i = 0; i < list_restaurants.size(); i++) {
//				TSRestaurant restaurant = list_restaurants.get(i);
//				if(restaurant.getRestaurant_id().equals(restaurant_id)) {
//					check = true;
//					break;
//				}
//			}
//		}
//		
//		return check;
//	}
        public static void mapResultsetRowToTSUserVO(TSUserObj tsUserObj,
                ResultSet resultset) throws SQLException {
                tsUserObj.setUserId(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_ID")));
                tsUserObj.setTsUserId(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.TS_USER_ID")));
                tsUserObj.setTsUserEmail(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.TS_USER_EMAIL")));
                tsUserObj.setTsUserPw(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.TS_USER_PW")));
                tsUserObj.setTsFirstName(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.TS_FIRST_NAME")));
                tsUserObj.setTsLastName(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.TS_LAST_NAME")));
                tsUserObj.setMaxInvites(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.MAX_INVITES")));
                tsUserObj.setUserCreatedInitialDatetime(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_CREATED_INITIAL_DATETIME")));
                tsUserObj.setUserPoints(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_POINTS")));
                tsUserObj.setTwitterUsrUrl(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.TWITTER_USR_URL")));
                tsUserObj.setUserDisabledFlag(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_DISABLED_FLAG")));
                tsUserObj.setUserActivationKey(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_ACTIVATION_KEY")));
                tsUserObj.setUserGender(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_GENDER")));
                tsUserObj.setUserCityId(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_CITY_ID")));
                tsUserObj.setUserState(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_STATE")));
                tsUserObj.setIsOnline(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.IS_ONLINE")));
                tsUserObj.setUserCountry(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_COUNTRY")));
                tsUserObj.setAbout(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.ABOUT")));
                tsUserObj.setCurrentStatus(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.CURRENT_STATUS")));
                tsUserObj.setUserFbId(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("users.USER_FB_ID")));
            }
        public static void mapResultsetRowToTSCityVO(TSCityObj tsCityObj,
                ResultSet resultset) throws SQLException {
        	tsCityObj.setCityId(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("cities.city_id")));
        	tsCityObj.setCountry(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("cities.country")));
        	tsCityObj.setState(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("cities.state")));
        	tsCityObj.setCity(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("cities.city")));
            }
        public static void mapResultsetRowToTSFacebookVO(TSFacebookUserDataObj tsFacebookUserDataObj,
                ResultSet resultset) throws SQLException {
        	tsFacebookUserDataObj.setId(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.User_FB_ID")));
        	tsFacebookUserDataObj.setName(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.NAME")));
        	tsFacebookUserDataObj.setFirstName(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.FIRST_NAME")));
        	tsFacebookUserDataObj.setMiddleName(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.MIDDLE_NAME")));
        	tsFacebookUserDataObj.setLastName(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.LAST_NAME")));
        	tsFacebookUserDataObj.setGender(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.GENDER")));
        	tsFacebookUserDataObj.setLocale(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.LOCALE")));
        	tsFacebookUserDataObj.setLink(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.LINK")));
        	tsFacebookUserDataObj.setUserName(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.USERNAME")));
        	tsFacebookUserDataObj.setAgeRange(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.AGE_RANGE")));
        	tsFacebookUserDataObj.setBirthday(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.BIRTHDAY")));
        	tsFacebookUserDataObj.setThirdPartyId(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.THIRD_PARTY_ID")));
        	tsFacebookUserDataObj.setFriendlists(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.FRIENDLISTS")));
        	tsFacebookUserDataObj.setInstalled(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.INSTALLED")));
        	tsFacebookUserDataObj.setTimezone(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.TIMEZONE")));
        	tsFacebookUserDataObj.setUpdatedTime(CommonFunctionsUtil.getModifiedValueString(
                    resultset.getString("facebook_user_data.UPDATE_TIME")));
        	tsFacebookUserDataObj.setVerified(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.VERIFIED")));
        	tsFacebookUserDataObj.setDevices(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.DEVICES")));
        	tsFacebookUserDataObj.setEmail(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.EMAIL")));
        	tsFacebookUserDataObj.setHometown(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.HOMETOWN")));
        	tsFacebookUserDataObj.setLocation(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.LOCATION")));
        	tsFacebookUserDataObj.setPicture(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.PICTURE")));
        	tsFacebookUserDataObj.setRelationshipStatus(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.RELATIONSHIP_STATUS")));
        	tsFacebookUserDataObj.setCheckins(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.CHECKINS")));
        	tsFacebookUserDataObj.setFriends(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.FRIENDS")));
        	tsFacebookUserDataObj.setLikes(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.LIKES")));
        	tsFacebookUserDataObj.setPermissions(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.PERMISSIONS")));
        	tsFacebookUserDataObj.setPermissions(CommonFunctionsUtil.getModifiedValueString(
        			resultset.getString("facebook_user_data.PERMISSIONS")));
            }
}
