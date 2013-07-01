package com.tastesync.db.dao;

import com.tastesync.common.GlobalVariables;
import com.tastesync.common.MySQL;
import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.UserQueries;
import com.tastesync.exception.TasteSyncException;
import com.tastesync.model.objects.TSCityObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSListFacebookUserDataObj;
import com.tastesync.model.objects.TSNotificationSettingsObj;
import com.tastesync.model.objects.TSPrivacySettingsObj;
import com.tastesync.model.objects.TSSocialSettingsObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;
import com.tastesync.model.response.UserResponse;
import com.tastesync.util.CommonFunctionsUtil;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;


public class UserDaoImpl extends BaseDaoImpl implements UserDao {
    @Override
    public UserResponse login(String email, String password) throws TasteSyncException {
    	TSUserObj tsUserObj = null;
        
        TSDataSource tsDataSource = TSDataSource.getInstance();
        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;
        String id = null;
        UserResponse response = null;
        
        try{
        	connection = tsDataSource.getConnection();
        	tsDataSource.begin();
        	System.out.println("UserQueries.USER_SELECT_LOGIN=" + UserQueries.USER_LOGIN_SELECT_SQL);
        	statement = connection.prepareStatement(UserQueries.USER_LOGIN_SELECT_SQL);
        	statement.setString(1, email);
        	statement.setString(2, password);
        	resultset = statement.executeQuery();
        	if(resultset.next())
        	{
        		tsUserObj = new TSUserObj();
        		MySQL.mapResultsetRowToTSUserVO(tsUserObj, resultset);
        	}
        	if(tsUserObj != null)
        	{
        		statement = connection.prepareStatement(UserQueries.USER_ONLINE_UPDATE_SQL);
            	statement.setString(1, "Y");
            	statement.setString(2, tsUserObj.getUserId());
            	statement.executeUpdate();
            	
            	String dateNow = CommonFunctionsUtil.getCurrentDatetime();
            	String dateNowAppend = CommonFunctionsUtil.getCurrentDatetimeAppendField();
            	connection = tsDataSource.getConnection();
            	statement = connection.prepareStatement(UserQueries.USER_LOGIN_INSERT_SQL,Statement.RETURN_GENERATED_KEYS);
            	statement.setString(1, tsUserObj.getUserId());
            	statement.setString(2, dateNow);
            	statement.setString(3, dateNow);
            	statement.executeUpdate();
            	
            	resultset = statement.getGeneratedKeys();
            	int risultato = 0;
            	if (resultset.next()){
            	    risultato = resultset.getInt(1);
            	}
            	String auto_id = String.valueOf(risultato);
				id = dateNowAppend + "-" + tsUserObj.getUserId() + "-" + risultato;
				System.out.println("USERLOG_LOGID_UPDATE_SQL: AUTO_LOG_ID:" + risultato);
				connection = tsDataSource.getConnection();
				statement = connection.prepareStatement(UserQueries.USERLOG_LOGID_UPDATE_SQL);
            	statement.setString(1, id);
            	statement.setString(2, auto_id);
            	statement.executeUpdate();
            	response = new UserResponse();
                response.setUser(tsUserObj);
                response.setUser_log_id(id);
        	}
       
        }catch(SQLException e)
        {
        	e.printStackTrace();
            throw new TasteSyncException(e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
        
        return response;
    }
    
	@Override
	public UserResponse login_fb(TSListFacebookUserDataObj list_user_profile)
			throws TasteSyncException {

		UserResponse response = null;
		String dateNow = CommonFunctionsUtil.getCurrentDatetime();
		String dateNowAppend = CommonFunctionsUtil.getCurrentDatetimeAppendField();
		//KeyHolder keyHolder = null;

		//String sql;
		// = new UserResponse();
	   //     response.setUser(user_response);
		MySQL mySQL = new MySQL();
		TSFacebookUserDataObj user_current_profile = null;
		List<TSFacebookUserDataObj> profiles = new ArrayList<TSFacebookUserDataObj>();
		List<TSUserObj> list_friends_using_TasteSync = new ArrayList<TSUserObj>();
		
		boolean is_disabled = false;
		
		String auto_id = null;
		String id = null;
		String userLogId = null;
		
		if(list_user_profile != null) {
			try {
				user_current_profile = list_user_profile.getUser_profile_current();
				profiles = list_user_profile.getList_user_profile_fb();
				
				//Get user current Facebook profile 
				if(user_current_profile != null) {
					
					boolean check_user = false;
					TSUserObj user = null;
					
					try {
						check_user = mySQL.checkEmailExist(user_current_profile.getEmail());
					} catch(Exception e) {
						e.printStackTrace();
					}
					
					//Create a new user
					if(!check_user) {
						
						String user_city_id = GlobalVariables.DEFAULT_CITY_ID;
						String city_name = GlobalVariables.DEFAULT_CITY_NAME;
						String state = GlobalVariables.DEFAULT_STATE;
						String country = GlobalVariables.DEFAULT_COUNTRY;
						
						if(!user_current_profile.getHometown().trim().equals("")) {
							TSCityObj city_infor = null;
							
							city_name = user_current_profile.getHometown();
							
							try {
								city_infor = mySQL.getCityInforByStateAndCityName(user_current_profile.getLocation(), user_current_profile.getHometown());
							} catch(Exception e) {
								e.printStackTrace();
							}
							
							if(city_infor != null) {
								user_city_id = city_infor.getCityId();
							}
						}
						
						if(!user_current_profile.getLocation().trim().equals("")) {
							state = user_current_profile.getLocation();
						}
						
						if(!user_current_profile.getLocale().trim().equals("")) {
							country = user_current_profile.getLocale();
						}
						
						TSDataSource tsDataSource = TSDataSource.getInstance();				 
				        Connection connection = null;
				        PreparedStatement statement = null;
				        ResultSet resultset = null;
				        connection = tsDataSource.getConnection();
			        	tsDataSource.begin();
				        try{
				        	statement = connection.prepareStatement(UserQueries.USER_FACEBOOK_INSERT_SQL);
			            	statement.setString(1, user_current_profile.getEmail());
			            	statement.setString(2, dateNow);
			            	statement.setString(3, user_current_profile.getFirstName());
			            	statement.setString(4, user_current_profile.getLastName());
			            	statement.setString(5, user_current_profile.getGender());
			            	statement.setString(6, user_city_id);
			            	statement.setString(7, city_name);
			            	statement.setString(8, state);
			            	statement.setString(9, country);
			            	statement.execute();
						
						try {
							
							user = mySQL.getUserInformationByEmail(user_current_profile.getEmail());
							
							//Update user_id
							String user_id = user.getUserCityId() + "-" + user.getAutoUserId();
							final String user_id_ps = user_id;
							final String dateNow_ps = dateNow;
							
							System.out.println(UserQueries.USER_ID_UPDATE_SQL);						
							connection = tsDataSource.getConnection();
							statement = connection.prepareStatement(UserQueries.USER_ID_UPDATE_SQL);
			            	statement.setString(1, user_id);
			            	statement.setString(2, user_id);
			            	statement.setString(3, user.getAutoUserId());
			            	statement.executeUpdate();
			            	
			            	System.out.println(UserQueries.USER_LOGIN_INSERT_SQL);
							//Update login time (users_log table)
			            	connection = tsDataSource.getConnection();
			            	statement = connection.prepareStatement(UserQueries.USER_LOGIN_INSERT_SQL,Statement.RETURN_GENERATED_KEYS);
			            	statement.setString(1, user_id_ps);
			            	statement.setString(2, dateNow_ps);
			            	statement.setString(3, dateNow_ps);
			            	statement.executeUpdate();
			            	
			            	//FIX HERE
			            	resultset = statement.getGeneratedKeys();
			            	int risultato = 0;
			            	if (resultset.next()){
			            	    risultato = resultset.getInt(1);
			            	}
			            	auto_id = String.valueOf(risultato);
			            	///////////////////////////////////
			            	
							id = dateNowAppend + "-" + user_id + "-" + risultato;
							userLogId = id;
							System.out.println("USERLOG_LOGID_UPDATE_SQL: AUTO_LOG_ID:" + risultato);
							connection = tsDataSource.getConnection();
							statement = connection.prepareStatement(UserQueries.USERLOG_LOGID_UPDATE_SQL);
			            	statement.setString(1, id);
			            	statement.setString(2, auto_id);
			            	statement.executeUpdate();

							//Story - Join TasteSync
			            	connection = tsDataSource.getConnection();
			            	System.out.println(UserQueries.STORY_INSERT_SQL);
							statement = connection.prepareStatement(UserQueries.STORY_INSERT_SQL,Statement.RETURN_GENERATED_KEYS);
							statement.setString(1, dateNow_ps);
							statement.setString(2, GlobalVariables.STORY_USER_JOIN_TASTESYNC);
							statement.setString(3, user_id_ps);
							statement.setString(4, dateNow_ps);
							
							//FIX HERE
			            	statement.executeUpdate();
			            	resultset = statement.getGeneratedKeys();
			            	if (resultset.next()){
			            	    risultato = resultset.getInt(1);
			            	}
			            	auto_id = String.valueOf(risultato);
			            	///////////////////////////////////
			            	
							id = GlobalVariables.DEFAULT_RESTAURANT_ID + "-" + user_id + "-" + risultato;
							System.out.println("STORY_UPDATE_SQL: AUTO_LOG_ID:" + risultato);
							
							//sql = UserQueries.STORY_UPDATE_SQL;
							System.out.println(UserQueries.STORY_UPDATE_SQL);
							connection = tsDataSource.getConnection();
							statement = connection.prepareStatement(UserQueries.STORY_UPDATE_SQL);
			            	statement.setString(1, id);
			            	statement.setString(2, auto_id);
			            	statement.executeUpdate();
							
							user = mySQL.getUserInformationByEmail(user_current_profile.getEmail());
							response = new UserResponse();
							response.setUser(user);
							response.setUser_log_id(userLogId);
							
						} catch (Exception e) {
							e.printStackTrace();
						}
						}finally{
							tsDataSource.close();
						}
				    }
					else {
						TSDataSource tsDataSource = TSDataSource.getInstance();				 
				        Connection connection = null;
				        PreparedStatement statement = null;
				        ResultSet resultset = null;
						try {
							connection = tsDataSource.getConnection();
				        	tsDataSource.begin();
							user = mySQL.getUserInformationByEmail(user_current_profile.getEmail());
							
							//Check user is disabled by Admin
							if(user != null) {
								
								System.out.println(UserQueries.USER_ONLINE_UPDATE_SQL);
								//Update Online Status
								connection = tsDataSource.getConnection();
								statement = connection.prepareStatement(UserQueries.USER_ONLINE_UPDATE_SQL);
				            	statement.setString(1, String.valueOf("y"));
				            	statement.setString(2, user.getUserId());
				            	statement.executeUpdate();
								
				            	System.out.println(UserQueries.USER_LOGIN_INSERT_SQL);
								//Update login time (users_log table)
				            	connection = tsDataSource.getConnection();
				            	statement = connection.prepareStatement(UserQueries.USER_LOGIN_INSERT_SQL,Statement.RETURN_GENERATED_KEYS);
				            	statement.setString(1, user.getUserId());
				            	statement.setString(2, dateNow);
				            	statement.setString(3, dateNow);
				            	statement.executeUpdate();
				            	
				            	resultset = statement.getGeneratedKeys();
				            	int risultato = 0;
				            	if (resultset.next()){
				            	    risultato = resultset.getInt(1);
				            	}
				            	auto_id = String.valueOf(risultato);
								id = dateNowAppend + "-" + user.getUserId() + "-" + risultato;
								userLogId = id;
								System.out.println("USERLOG_LOGID_UPDATE_SQL: AUTO_LOG_ID:" + risultato);
								connection = tsDataSource.getConnection();
								statement = connection.prepareStatement(UserQueries.USERLOG_LOGID_UPDATE_SQL);
				            	statement.setString(1, id);
				            	statement.setString(2, auto_id);
				            	statement.executeUpdate();
							}
							else {
								is_disabled = true;
							}
						} catch (Exception e) {
							e.printStackTrace();
						}finally{
							tsDataSource.close();
						}
					}
					
					if(!is_disabled) {
						
						//Insert & Update Facebook information
						boolean check_fb = false;
						TSDataSource tsDataSource = TSDataSource.getInstance();				 
				        Connection connection = null;
				        PreparedStatement statement = null;
				        //ResultSet resultset = null;
						try {
							connection = tsDataSource.getConnection();
				        	tsDataSource.begin();
							check_fb = mySQL.checkFBUserDataExist(user_current_profile.getId());
							
							if(!check_fb) {
								
								//Insert facebook data (Assume user create profile first, then user login app by connecting Facebook so we have to insert Facebook data)
								//sql = UserQueries.FACEBOOK_INSERT_SQL;
								System.out.println(UserQueries.FACEBOOK_INSERT_SQL);
								connection = tsDataSource.getConnection();
								statement = connection.prepareStatement(UserQueries.FACEBOOK_INSERT_SQL);
				            	statement.setString(1, user_current_profile.getId());
				            	statement.setString(2, user_current_profile.getName());
				            	statement.setString(3, user_current_profile.getFirstName());
				            	statement.setString(4, user_current_profile.getMiddleName());
				            	statement.setString(5, user_current_profile.getLastName());
				            	statement.setString(6, user_current_profile.getGender());
				            	statement.setString(7, user_current_profile.getLocale());
				            	statement.setString(8, user_current_profile.getLink());
				            	statement.setString(9, user_current_profile.getUserName());
				            	statement.setString(10, user_current_profile.getAgeRange());
				            	statement.setString(11, user_current_profile.getBirthday());
				            	statement.setString(12, user_current_profile.getThirdPartyId());
				            	statement.setString(13, user_current_profile.getFriendlists());
				            	statement.setString(14, user_current_profile.getInstalled());
				            	statement.setString(15, user_current_profile.getTimezone());
				            	statement.setString(16, user_current_profile.getUpdatedTime());
				            	statement.setString(17, user_current_profile.getVerified());
				            	statement.setString(18, user_current_profile.getDevices());
				            	statement.setString(19, user_current_profile.getEmail());
				            	statement.setString(20, user_current_profile.getHometown());
				            	statement.setString(21, user_current_profile.getLocation());
				            	statement.setString(22, user_current_profile.getPicture());
				            	statement.setString(23, user_current_profile.getRelationshipStatus());
				            	statement.setString(24, user_current_profile.getCheckins());
				            	statement.setString(25, user_current_profile.getFriends());
				            	statement.setString(26, user_current_profile.getLikes());
				            	statement.setString(27, user_current_profile.getPermissions());
				            	statement.setString(28, dateNow);
				            	statement.execute();
							}
							else {
								
								//Update facebook data
								//sql = UserQueries.FACEBOOK_UPDATE_SQL;
								System.out.println(UserQueries.FACEBOOK_UPDATE_SQL);
								connection = tsDataSource.getConnection();
								statement = connection.prepareStatement(UserQueries.FACEBOOK_UPDATE_SQL);
								statement.setString(1, user_current_profile.getName());
								statement.setString(2, user_current_profile.getFirstName()); 
								statement.setString(3, user_current_profile.getMiddleName());
								statement.setString(4, user_current_profile.getLastName()); 
								statement.setString(5, user_current_profile.getGender()); 
								statement.setString(6, user_current_profile.getLocale());
								statement.setString(7, user_current_profile.getLink());
								statement.setString(8, user_current_profile.getUserName());
								statement.setString(9, user_current_profile.getAgeRange());
								statement.setString(10, user_current_profile.getBirthday());
								statement.setString(11, user_current_profile.getThirdPartyId());
								statement.setString(12, user_current_profile.getFriendlists());
								statement.setString(13, user_current_profile.getInstalled());
								statement.setString(14, user_current_profile.getTimezone());
								statement.setString(15, user_current_profile.getUpdatedTime());
								statement.setString(16, user_current_profile.getVerified());
								statement.setString(17, user_current_profile.getDevices());
								statement.setString(18, user_current_profile.getEmail());
								statement.setString(19, user_current_profile.getHometown());
								statement.setString(20, user_current_profile.getLocation());
								statement.setString(21, user_current_profile.getPicture());
								statement.setString(22, user_current_profile.getRelationshipStatus());
								statement.setString(23, user_current_profile.getCheckins());
								statement.setString(24, user_current_profile.getFriends());
								statement.setString(25, user_current_profile.getLikes());
								statement.setString(26, user_current_profile.getPermissions());
								statement.setString(27, dateNow);
								statement.setString(28, user_current_profile.getId());
								statement.executeUpdate();
							}
							
							//Update Facebook ID (in the case, first user register via Signup Form then that user login via Facebook)
							connection = tsDataSource.getConnection();
							System.out.println(UserQueries.USER_FBID_UPDATE_SQL);
							statement = connection.prepareStatement(UserQueries.USER_FBID_UPDATE_SQL);
			            	statement.setString(1, user_current_profile.getId());
			            	statement.setString(2, user.getUserId());
			            	statement.executeUpdate();
							
							user = mySQL.getUserInformationByEmail(user_current_profile.getEmail());
							response = new UserResponse();
							response.setUser(user);
							response.setUser_log_id(userLogId);
							
							//Update Facebook's friend infor
							if(profiles != null && !profiles.isEmpty()) {
								
								Iterator<TSFacebookUserDataObj> it = profiles.iterator();
								while(it.hasNext()) {
									TSFacebookUserDataObj item = null;
									item = (TSFacebookUserDataObj) it.next();
									
									//Check user' friends using TasteSync
									TSUserObj user_fb = null;
									try {
										user_fb = mySQL.getUserInformationByFacebookID(item.getId());
									} catch(Exception e) {
										e.printStackTrace();
									}
									
									if(user_fb != null) {
										list_friends_using_TasteSync.add(user_fb);
									}
									
									//Insert & Update Facebook information
									boolean check_fb_friend = false;
									try {
										check_fb_friend = mySQL.checkFBUserDataExist(item.getId());
										
										if(!check_fb_friend) {
											
											System.out.println(UserQueries.FACEBOOK_INSERT_SQL);
											//Insert facebook data (Assume user create profile first, then user login app by connecting Facebook so we have to insert Facebook data)
											//sql = UserQueries.FACEBOOK_INSERT_SQL;
											connection = tsDataSource.getConnection();
											statement = connection.prepareStatement(UserQueries.FACEBOOK_INSERT_SQL);
							            	statement.setString(1, item.getId());
							            	statement.setString(2, item.getName());
							            	statement.setString(3, item.getFirstName());
							            	statement.setString(4, item.getMiddleName());
							            	statement.setString(5, item.getLastName());
							            	statement.setString(6, item.getGender());
							            	statement.setString(7, item.getLocale());
							            	statement.setString(8, item.getLink());
							            	statement.setString(9, item.getUserName());
							            	statement.setString(10, item.getAgeRange());
							            	statement.setString(11, item.getBirthday());
							            	statement.setString(12, item.getThirdPartyId());
							            	statement.setString(13, item.getFriendlists());
							            	statement.setString(14, item.getInstalled());
							            	statement.setString(15, item.getTimezone());
							            	statement.setString(16, item.getUpdatedTime());
							            	statement.setString(17, item.getVerified());
							            	statement.setString(18, item.getDevices());
							            	statement.setString(19, item.getEmail());
							            	statement.setString(20, item.getHometown());
							            	statement.setString(21, item.getLocation());
							            	statement.setString(22, item.getPicture());
							            	statement.setString(23, item.getRelationshipStatus());
							            	statement.setString(24, item.getCheckins());
							            	statement.setString(25, item.getFriends());
							            	statement.setString(26, item.getLikes());
							            	statement.setString(27, item.getPermissions());
							            	statement.setString(28, dateNow);
							            	statement.execute();
										}
										else {
											
											//Update facebook data
											System.out.println(UserQueries.FACEBOOK_UPDATE_SQL);
											//sql = UserQueries.FACEBOOK_UPDATE_SQL;
											connection = tsDataSource.getConnection();
											statement = connection.prepareStatement(UserQueries.FACEBOOK_UPDATE_SQL);
											statement.setString(1, item.getName());
											statement.setString(2, item.getFirstName()); 
											statement.setString(3, item.getMiddleName());
											statement.setString(4, item.getLastName()); 
											statement.setString(5, item.getGender()); 
											statement.setString(6, item.getLocale());
											statement.setString(7, item.getLink());
											statement.setString(8, item.getUserName());
											statement.setString(9, item.getAgeRange());
											statement.setString(10, item.getBirthday());
											statement.setString(11, item.getThirdPartyId());
											statement.setString(12, item.getFriendlists());
											statement.setString(13, item.getInstalled());
											statement.setString(14, item.getTimezone());
											statement.setString(15, item.getUpdatedTime());
											statement.setString(16, item.getVerified());
											statement.setString(17, item.getDevices());
											statement.setString(18, item.getEmail());
											statement.setString(19, item.getHometown());
											statement.setString(20, item.getLocation());
											statement.setString(21, item.getPicture());
											statement.setString(22, item.getRelationshipStatus());
											statement.setString(23, item.getCheckins());
											statement.setString(24, item.getFriends());
											statement.setString(25, item.getLikes());
											statement.setString(26, item.getPermissions());
											statement.setString(27, dateNow);
											statement.setString(28, item.getId());
											statement.executeUpdate();
										}
									} catch(Exception e) {
										e.printStackTrace();
									}
								}
							}
							
							if(list_friends_using_TasteSync != null && !list_friends_using_TasteSync.isEmpty()) {
								//user_response.setList_user(list_friends_using_TasteSync);
							}

							//TSMessage message = new TSMessage(TSMessageCode.SUCCESS.getValue(), MessageBinding.SUCCESS_LOGIN);
							//user_response.setMessage(message);
							
						} catch(Exception e) {
							e.printStackTrace();
						}
						
					}
					else {
						//TSMessage message = new TSMessage(TSMessageCode.ERROR_UNAUTHORIZED.getValue(), MessageBinding.ERROR_USERS_DISABLED);
						//user_response.setMessage(message);
					}
					
				}
			} catch(Exception e) {
				e.printStackTrace();
			}
			
		}
		return response;
	}
	
    @Override
    public boolean logout(String userLogID) throws TasteSyncException {
    	TSUserObj user = null;
		MySQL mySQL = new MySQL();
		String dateNow = CommonFunctionsUtil.getCurrentDatetime();
		
		try {
			String userID = mySQL.getAutoUserLogByUserId(userLogID);
			System.out.println("USERID"+userID);
			user = mySQL.getUserInformation(userID);
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		if(user != null) {
			TSDataSource tsDataSource = TSDataSource.getInstance();
	        Connection connection = null;
	        PreparedStatement statement = null;
	        
	        try{
	        	connection = tsDataSource.getConnection();
	        	tsDataSource.begin();
	        	
	        	//Update IS_ONLINE status 
	        	System.out.println("UserQueries.USER_ONLINE_UPDATE_SQL=" + UserQueries.USER_ONLINE_UPDATE_SQL);
	        	statement = connection.prepareStatement(UserQueries.USER_ONLINE_UPDATE_SQL);
	        	statement.setString(1, String.valueOf("n"));
	        	statement.setString(2, user.getUserId());
	        	statement.executeUpdate();
	        	
	        	connection = tsDataSource.getConnection();
	        	System.out.println("UserQueries.USERSLOG_LOGOUT_UPDATE_SQL=" + UserQueries.USERSLOG_LOGOUT_UPDATE_SQL);
	        	statement = connection.prepareStatement(UserQueries.USERSLOG_LOGOUT_UPDATE_SQL);
	        	statement.setString(1, dateNow);
	        	statement.setString(2, userLogID);
	        	statement.executeUpdate();
	        }catch(SQLException e){
	        	return false;
	        }finally{
	        	tsDataSource.close();
	        }
        	return true;
		}
		else
			return false;
    }

    @Override
    public TSUserObj selectUser(String userId) throws TasteSyncException {
        TSUserObj tsUserObj = new TSUserObj();

        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            System.out.println("UserQueries.USER_SELECT_SQL=" +
                UserQueries.USER_SELECT_SQL);
            statement = connection.prepareStatement(UserQueries.USER_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            //only one result
            if (resultset.next()) {
                MySQL.mapResultsetRowToTSUserVO(tsUserObj, resultset);
            }
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsUserObj;
    }

    /*private void mapResultsetRowToTSUserVO(TSUserObj tsUserObj,
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
    }*/

    public List<TSUserObj> selectUsers() throws TasteSyncException {
        List<TSUserObj> tsUserObjs = new ArrayList<TSUserObj>();

        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            System.out.println("UserQueries.USERS_SELECT_SQL=" +
                UserQueries.USERS_SELECT_SQL);
            statement = connection.prepareStatement(UserQueries.USERS_SELECT_SQL);
            resultset = statement.executeQuery();

            //only one result
            while (resultset.next()) {
                TSUserObj tsUserObj = new TSUserObj();
                //if bug check here
                MySQL.mapResultsetRowToTSUserVO(tsUserObj, resultset);
                tsUserObjs.add(tsUserObj);
            }
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsUserObjs;
    }

    @Override
    public void updateSettingsPrivacy(String userId, String[] idList,
        String[] flagList) {
        // TODO Auto-generated method stub
    }

    @Override
    public TSPrivacySettingsObj[] showSettingsPrivacy(String userId) {
        // TODO Auto-generated method stub
        //Array of TSNotificationSettingsObj
        return null;
    }

    @Override
    public void updateSettingsNotificationsRecoMessage(String userId,
        String[] idList, String[] phoneFlagList, String[] emailFlagList)
        throws TasteSyncException {
        // TODO Auto-generated method stub
    }

    @Override
    public TSNotificationSettingsObj[] showSettingsNotifications(String userId)
        throws TasteSyncException {
        // TODO Auto-generated method stub
        //Array of TSNotificationSettingsObj
        return null;
    }

    @Override
    public void updateSettingsAutoPublishSettings(String userId,
        String autoPublishingId, String socialNetworkId, String statusFlag) {
        // TODO Auto-generated method stub
    }

    @Override
    public TSSocialSettingsObj showSettingsSocial(String userId)
        throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public void submitUserReport(String userId, String reportText,
        String reportedUser, String reportedByUser) throws TasteSyncException {
        // TODO Auto-generated method stub
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            System.out.println("UserQueries.USER_REPORTED_INFO_INSERT_SQL=" +
                UserQueries.USER_REPORTED_INFO_INSERT_SQL);
            statement = connection.prepareStatement(UserQueries.USER_REPORTED_INFO_INSERT_SQL);
            statement.setString(1, CommonFunctionsUtil.generateUniqueKey());

            statement.setTimestamp(2,
                CommonFunctionsUtil.getCurrentDateTimestamp());

            statement.setString(3, reportText);
            statement.setString(4, reportedUser);
            statement.setString(5, reportedByUser);
            statement.executeUpdate();
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, null);
        }
    }

    @Override
    public TSUserProfileObj showMyProfileHome(String userId)
        throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public void submitMyProfileAboutMe(String userId, String aboutMeText)
        throws TasteSyncException {
        // TODO Auto-generated method stub
    }

    @Override
    public List<TSFacebookUserDataObj> showProfileFollowing(String userId)
        throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

	@Override
	public void followUserStatusChange(String followeeUserId,
			String followerUserId, String statusFlag) throws TasteSyncException {
		// TODO Auto-generated method stub
		
	}

	@Override
	public List<TSFacebookUserDataObj> showProfileFollowers(String userId)
			throws TasteSyncException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public List<TSFacebookUserDataObj> showMyProfileFriends(String userId)
			throws TasteSyncException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public List<TSUserProfileRestaurantsObj> showProfileRestaurants(
			String userId) throws TasteSyncException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public TSUserProfileObj showUserProfileHome(String userId,
			String viewerUserId) throws TasteSyncException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public List<TSFacebookUserDataObj> showProfileFriends(String userId)
			throws TasteSyncException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public void submitTrustedFriendStatusChange(String userId,
			String viewerUserId, String trustedFriendStatus)
			throws TasteSyncException {
		// TODO Auto-generated method stub
		
	}

}
