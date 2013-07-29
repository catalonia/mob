package com.tastesync.db.dao;

import com.tastesync.common.GlobalVariables;
import com.tastesync.common.MySQL;
import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.RestaurantQueries;
import com.tastesync.db.queries.UserQueries;
import com.tastesync.exception.TasteSyncException;
import com.tastesync.model.objects.TSAboutObj;
import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSCityObj;
import com.tastesync.model.objects.TSErrorObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSListFacebookUserDataObj;
import com.tastesync.model.objects.TSListNotificationSettingsObj;
import com.tastesync.model.objects.TSListPrivacySettingsObj;
import com.tastesync.model.objects.TSListSocialSettingObj;
import com.tastesync.model.objects.TSNotificationSettingsObj;
import com.tastesync.model.objects.TSPrivacySettingsObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantView;
import com.tastesync.model.objects.TSSocialAutoPubSettingsObj;
import com.tastesync.model.objects.TSSocialSettingsObj;
import com.tastesync.model.objects.TSSuccessObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;
import com.tastesync.model.response.UserResponse;
import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;
import com.tastesync.util.TSResponseStatusCode;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import java.util.ArrayList;
import java.util.Dictionary;
import java.util.Enumeration;
import java.util.Hashtable;
import java.util.Iterator;
import java.util.List;

import javax.ws.rs.core.Response;


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
            	//tsDataSource.commit();
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
		MySQL mySQL = new MySQL();
		TSFacebookUserDataObj user_current_profile = null;
		List<TSFacebookUserDataObj> profiles = new ArrayList<TSFacebookUserDataObj>();
		List<TSUserObj> list_friends_using_TasteSync = new ArrayList<TSUserObj>();
		
		boolean is_disabled = false;
		boolean check_user = false;
		
		String id = null;
		String userLogId = null;
		String userID = null;
		String user_city_id = GlobalVariables.DEFAULT_CITY_ID;
		String state = GlobalVariables.DEFAULT_STATE;
		String country = GlobalVariables.DEFAULT_COUNTRY;
		
		if(list_user_profile != null) {
			try {
				user_current_profile = list_user_profile.getUser_profile_current();
				profiles = list_user_profile.getList_user_profile_fb();
				
				//Get user current Facebook profile 
				if(user_current_profile != null) {
					

					TSUserObj user = mySQL.getUserInformationByEmail(user_current_profile.getEmail());
					try {
						check_user = mySQL.checkEmailExist(user_current_profile.getEmail());
						
					} catch(Exception e) {
						e.printStackTrace();
					}
					if(check_user && user == null) {
						is_disabled = true;
					}
							
					if(!user_current_profile.getHometown().trim().equals("")) {
						TSCityObj city_infor = null;
						
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
					
					if(user != null)
						userID = user.getUserId();
					else
						userID = user_city_id +"-" + dateNowAppend + "-" + CommonFunctionsUtil.generateRandomString(4, 5);							
				
					
					
					if(!is_disabled) {
						
						//Insert & Update Facebook information
						
						TSDataSource tsDataSource = TSDataSource.getInstance();				 
				        Connection connection = null;
				        PreparedStatement statement = null;
						try {
							connection = tsDataSource.getConnection();
				        	tsDataSource.begin();

							boolean check_fb = false;
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
				            	statement.setString(16, dateNow);
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
								statement.setString(15, dateNow);
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
							            	statement.setString(16, dateNow);
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
											statement.setString(15, dateNow);
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
										throw new TasteSyncException("login_fb "+e.getMessage());
									}
									finally
									{
										tsDataSource.close();
										tsDataSource.closeConnection(connection, statement, null);
									}
								}
							}
							//tsDataSource.commit();
							
						} catch(Exception e) {
							e.printStackTrace();
							throw new TasteSyncException("login_fb "+e.getMessage());
						}
						finally
						{
							tsDataSource.close();
							tsDataSource.closeConnection(connection, statement, null);
						}
					}
					else {
						//TSMessage message = new TSMessage(TSMessageCode.ERROR_UNAUTHORIZED.getValue(), MessageBinding.ERROR_USERS_DISABLED);
						//user_response.setMessage(message);
					}
					
					//Create a new user
					if(!check_user) {
						
						TSDataSource tsDataSource = TSDataSource.getInstance();				 
				        Connection connection = null;
				        PreparedStatement statement = null;
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
			            	statement.setString(7, state);
			            	statement.setString(8, country);
			            	statement.setString(9, user_current_profile.getId());
			            	statement.setString(10, userID);
			            	statement.setString(11, userID);
			            	statement.execute();
						
						try {
							
							user = mySQL.getUserInformationByEmail(user_current_profile.getEmail());
							
							//Update user_id
							final String user_id_ps = userID;
							final String dateNow_ps = dateNow;
							
							id = dateNowAppend + "-" + userID + "-" + CommonFunctionsUtil.generateRandomString(4, 5);
							userLogId = id;
			            	System.out.println(UserQueries.USER_LOGIN_INSERT_SQL);
							//Update login time (users_log table)
			            	connection = tsDataSource.getConnection();
			            	statement = connection.prepareStatement(UserQueries.USER_LOGIN_INSERT_SQL);
			            	statement.setString(1, user_id_ps);
			            	statement.setString(2, dateNow_ps);
			            	statement.setString(3, dateNow_ps);
			            	statement.setString(4, userLogId);
			            	statement.execute();
						
							user = mySQL.getUserInformationByEmail(user_current_profile.getEmail());
							response = new UserResponse();
							if(check_user)
								response.setIs_have_account("1");
							else
								response.setIs_have_account("0");
							response.setUser(user);
							response.setUser_log_id(userLogId);
							//tsDataSource.commit();
						} catch (Exception e) {
							e.printStackTrace();
							throw new TasteSyncException("login_fb "+e.getMessage());
						}
						}finally{
							tsDataSource.close();
							tsDataSource.closeConnection(connection, statement, null);
						}
				    }
					else {
						TSDataSource tsDataSource = TSDataSource.getInstance();				 
				        Connection connection = null;
				        PreparedStatement statement = null;
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
								
				            	id = dateNowAppend + "-" + user.getUserId() + "-" + CommonFunctionsUtil.generateRandomString(4, 5);
								userLogId = id;
				            	System.out.println(UserQueries.USER_LOGIN_INSERT_SQL);
								//Update login time (users_log table)
				            	connection = tsDataSource.getConnection();
				            	statement = connection.prepareStatement(UserQueries.USER_LOGIN_INSERT_SQL);
				            	statement.setString(1, user.getUserId());
				            	statement.setString(2, dateNow);
				            	statement.setString(3, dateNow);
				            	statement.setString(4, userLogId);
				            	statement.executeUpdate();

							}
							//tsDataSource.commit();
						} catch (Exception e) {
							e.printStackTrace();
							throw new TasteSyncException("login_fb "+e.getMessage());
						}finally{
							tsDataSource.close();
							tsDataSource.closeConnection(connection, statement, null);
						}
					}
					
					if(!is_disabled) {
						
						TSDataSource tsDataSource = TSDataSource.getInstance();				 
				        Connection connection = null;
				        PreparedStatement statement = null;
				        tsDataSource.begin();
				        
						if(list_friends_using_TasteSync != null && !list_friends_using_TasteSync.isEmpty()) {
	
							for(int i = 0; i < list_friends_using_TasteSync.size(); i++)
							{
								TSUserObj obj = list_friends_using_TasteSync.get(i);
								connection = tsDataSource.getConnection();
								statement = connection.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_DATETIME_UPDATE_SQL);
								statement.setString(1, dateNow);
								statement.setString(2, userID); 
								statement.setString(3, obj.getUserId());
								int query = statement.executeUpdate();
								if(query == 0)
								{
									String indexFB = userID + "-" + dateNowAppend + "-" + CommonFunctionsUtil.generateRandomString(4, 5);
									System.out.print("index:"+indexFB);
									statement = connection.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_INSERT_SQL);
									statement.setString(1, indexFB);
									statement.setString(2, userID); 
									statement.setString(3, obj.getUserId());
									statement.setString(4, "0");
									statement.setString(5, dateNow);
									statement.execute();
								}
							}
							
							statement = connection.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_DATETIME_DELETE_SQL);
							statement.setString(1, userID);
							statement.setString(2, dateNow);
							statement.execute();
						}
	
						List<TSFacebookUserDataObj> listFBObj = list_user_profile.getList_user_profile_fb();
						
						if(listFBObj != null && !listFBObj.isEmpty()) {
	
							for(int i = 0; i < listFBObj.size(); i++)
							{
								TSFacebookUserDataObj obj = listFBObj.get(i);
								connection = tsDataSource.getConnection();
								statement = connection.prepareStatement(UserQueries.USER_FRIEND_SIGNUP_DATETIME_FB_UPDATE_SQL);
								statement.setString(1, dateNow);
								statement.setString(2, userID); 
								statement.setString(3, obj.getId());
								int query = statement.executeUpdate();
								System.out.println("query: "+query);
								if(query == 0)
								{
									System.out.println("Insert:" + i);
									statement = connection.prepareStatement(UserQueries.USER_FRIEND_SIGNUP_FB_INSERT_SQL);
									statement.setString(1, userID); 
									statement.setString(2, obj.getId());
									statement.setString(3, dateNow);
									statement.setString(4, "0");
									statement.execute();
								}
							}
							
							statement = connection.prepareStatement(UserQueries.USER_FRIEND_FB_DATETIME_DELETE_SQL);
							statement.setString(1, userID);
							statement.setString(2, dateNow);
							statement.execute();
						}
						//tsDataSource.commit();
						tsDataSource.close();
						tsDataSource.closeConnection(connection, statement, null);
					}
					
					if(!is_disabled) {
						user = mySQL.getUserInformationByEmail(user_current_profile.getEmail());
						response = new UserResponse();
						if(check_user)
							response.setIs_have_account("1");
						else
							response.setIs_have_account("0");
						response.setUser(user);
						response.setUser_log_id(userLogId);
					}
				}
			} catch(Exception e) {
				e.printStackTrace();
				throw new TasteSyncException("login_fb "+e.getMessage());
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
	        	//tsDataSource.commit();
	        }catch(SQLException e){
	        	return false;
	        }finally{
	        	tsDataSource.close();
	        	tsDataSource.closeConnection(connection, statement, null);
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
    public boolean updateSettingsPrivacy(TSListPrivacySettingsObj privacySettingObj) throws TasteSyncException{
    	boolean responseDone = false;
	    MySQL mySQL = new MySQL();
	    Dictionary<Integer, String> array = new Hashtable<Integer, String>();
	    
	    TSPrivacySettingsObj[] privacyArray = privacySettingObj.getPrivacy();
	    for(int i = 1; i <= privacyArray.length; i++)
	    {
	    	TSPrivacySettingsObj privacy = privacyArray[i - 1];
	    	array.put(mySQL.getIDPrivacySettings(Integer.parseInt(privacy.getPrivacy_id_order())),privacy.getPrivacy_flag());
	    }
	    
	    System.out.println("Size:"+ array.size());
	    
	    String userId = privacySettingObj.getUserId();
	    boolean isCheckUSNC = mySQL.checkPrivacyDescriptor(userId);
	    TSDataSource tsDataSource = TSDataSource.getInstance();
        Connection connection = null;
        PreparedStatement statement = null;
	    
        try{
        	tsDataSource.begin();
		    if(!isCheckUSNC)
		    {
		    	for (Enumeration<Integer> e = array.keys(); e.hasMoreElements();)
		    	 {
		    		 Integer data = (Integer)e.nextElement();
		    		 String index = (String)array.get(data);
		    		 System.out.println(index);
		    		 System.out.println("UserQueries.USER_PRIVACY_SETTINGS_INSERT_SQL=" + UserQueries.USER_PRIVACY_SETTINGS_INSERT_SQL);

		         	 connection = tsDataSource.getConnection();
		    		 statement = connection.prepareStatement(UserQueries.USER_PRIVACY_SETTINGS_INSERT_SQL);
		         	 statement.setString(1, userId);
		         	 statement.setInt(2, data);
		         	 statement.setString(3, index);
		         	 statement.execute();
		    	 }
		    }
		    else
		    {
		    	for (Enumeration<Integer> e = array.keys(); e.hasMoreElements();)
		    	 {
		    		Integer data = (Integer)e.nextElement();
		    		 String index = (String)array.get(data);
		    		 System.out.println(index);
		    		 System.out.println("UserQueries.USER_PRIVACY_SETTINGS_ID_UPDATE_SQL = " + UserQueries.USER_PRIVACY_SETTINGS_ID_UPDATE_SQL);
		         	 connection = tsDataSource.getConnection();
		    		 statement = connection.prepareStatement(UserQueries.USER_PRIVACY_SETTINGS_ID_UPDATE_SQL);
		         	 statement.setString(1, index);
		         	 statement.setString(2, userId);
		         	 statement.setInt(3, data);
		         	 statement.executeUpdate();
		    	 }
		    }
		    responseDone = true;
		    //tsDataSource.commit();
        }catch(Exception e)
        {
        	e.printStackTrace();
        	responseDone = false;
        }
        finally{
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, null);
        }
        return responseDone;
    }

    @Override
    public TSListPrivacySettingsObj showSettingsPrivacy(String userId) throws TasteSyncException {
    	TSListPrivacySettingsObj privacySettingsObj = null;
    	MySQL mySQL = new MySQL();
	    Dictionary<Integer, Integer> array = new Hashtable<Integer, Integer>();
	    boolean isCheck = mySQL.checkPrivacyDescriptor(userId);
	    
	    int count = 0;
	    for(int i = 1; mySQL.getIDPrivacySettings(i) != 0; i++)
	    {
	    	count++;
	    	array.put(mySQL.getIDPrivacySettings(i)	,i);
	    }
	    
        if (!isCheck) {
			return privacySettingsObj;
		} else {
			TSDataSource tsDataSource = TSDataSource.getInstance();
			Connection connection = null;
	        ResultSet resultset = null;
			PreparedStatement statement = null;
			try{
				privacySettingsObj = new TSListPrivacySettingsObj();
				TSPrivacySettingsObj[] arrayPrivacy = new TSPrivacySettingsObj[count];
				for(int i = 1; i <= count; i++)
				{
					TSPrivacySettingsObj obj = new TSPrivacySettingsObj();
					obj.setPrivacy_id_order(String.valueOf(i));
					arrayPrivacy[i - 1] = obj;
				}
				privacySettingsObj.setUserId(userId);
				connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	statement = connection.prepareStatement(UserQueries.USER_PRIVACY_SETTINGS_ID_SELECT_SQL);
		    	statement.setString(1, userId);
		    	resultset = statement.executeQuery();
		    	while(resultset.next())
		    	{
		    		String index_str = CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_privacy_settings.PRIVACY_ID"));
		    		int index = Integer.parseInt(index_str);
		    		String privacy_flag = CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_privacy_settings.PRIVACY_FLAG"));
		 	
		    		TSPrivacySettingsObj obj = arrayPrivacy[array.get(index) - 1];
		    		obj.setPrivacy_flag(privacy_flag);		    		
		    	}
		    	
		    	privacySettingsObj.setPrivacy(arrayPrivacy);
		    	return privacySettingsObj;
			}catch(Exception e)
			{
				e.printStackTrace();
				throw new TasteSyncException(e.getMessage());
			}
	        finally{
	        	if (tsDataSource != null) {
	            tsDataSource.close();
	            tsDataSource.closeConnection(connection, statement, resultset);
	        	}
	        }
		}
        //return privacySettingsObj;
    }

    @Override
    public boolean updateSettingsNotificationsRecoMessage(TSListNotificationSettingsObj notificationSetting)
        throws TasteSyncException {
        boolean responseDone = false;
	    MySQL mySQL = new MySQL();
	    TSNotificationSettingsObj[] arrayNotification = notificationSetting.getNotification();	    
	    Dictionary<TSNotificationSettingsObj, Integer> array = new Hashtable<TSNotificationSettingsObj, Integer>();
	    for(int i = 1; i <= arrayNotification.length; i++)
	    {
	    	array.put(arrayNotification[i - 1], mySQL.getIDNotificationDescriptor(i));
	    }
        String userId = notificationSetting.getUserId();
	    boolean isCheckUSNC = mySQL.checkNotificationDescriptor(userId);
	    TSDataSource tsDataSource = TSDataSource.getInstance();
        Connection connection = null;
        PreparedStatement statement = null;
        
        try{
        	tsDataSource.begin();
		    if(!isCheckUSNC)
		    {
		    	for (Enumeration<TSNotificationSettingsObj> e = array.keys(); e.hasMoreElements();)
		    	 {
		    		 TSNotificationSettingsObj data = (TSNotificationSettingsObj)e.nextElement();
		    		 int index = array.get(data);
		    		 System.out.println(index);
		    		 System.out.println("UserQueries.USER_NOTIFICATION_SETTINGS_INSERT_SQL=" + UserQueries.USER_NOTIFICATION_SETTINGS_INSERT_SQL);

		         	 connection = tsDataSource.getConnection();
		    		 statement = connection.prepareStatement(UserQueries.USER_NOTIFICATION_SETTINGS_INSERT_SQL);
		         	 statement.setString(1, userId);
		         	 statement.setInt(2, index);
		         	 statement.setString(3, data.getPhoneFlag());
		         	 statement.setString(4, data.getEmailFlag());
		         	 statement.execute();
		    	 }
		    }
		    else
		    {
		    	for (Enumeration<TSNotificationSettingsObj> e = array.keys(); e.hasMoreElements();)
		    	 {
		    		 TSNotificationSettingsObj data = (TSNotificationSettingsObj)e.nextElement();
		    		 int index = array.get(data);
		    		 System.out.println(index);
		    		 System.out.println("UserQueries.USER_NOTIFICATION_SETTINGS_ID_UPDATE_SQL = " + UserQueries.USER_NOTIFICATION_SETTINGS_ID_UPDATE_SQL);
		         	 connection = tsDataSource.getConnection();
		    		 statement = connection.prepareStatement(UserQueries.USER_NOTIFICATION_SETTINGS_ID_UPDATE_SQL);
		         	 statement.setString(1, data.getPhoneFlag());
		         	 statement.setString(2, data.getEmailFlag());
		         	 statement.setString(3, userId);
		         	 statement.setInt(4, index);
		         	 statement.executeUpdate();
		    	 }
		    }
		    responseDone = true;
		    //tsDataSource.commit();
        }catch(Exception e)
        {
        	e.printStackTrace();
			throw new TasteSyncException(e.getMessage());
        }
        finally{
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, null);
        }
        return responseDone;
    }

    @Override
    public TSListNotificationSettingsObj showSettingsNotifications(String userId)
        throws TasteSyncException {
    	TSListNotificationSettingsObj notifycation = null;
    	MySQL mySQL = new MySQL();
	    boolean isCheck = mySQL.checkNotificationDescriptor(userId);
	    Dictionary<Integer, Integer> array = new Hashtable<Integer, Integer>();
	    
	    int count = 0;
	    for(int i = 1; mySQL.getIDNotificationDescriptor(i) != 0 ; i++)
	    {
	    	count++;
	    	array.put(mySQL.getIDNotificationDescriptor(i), i);
	    }
	    	
	    if (!isCheck) {
			return notifycation;
		} else {
			TSDataSource tsDataSource = TSDataSource.getInstance();
			Connection connection = null;
	        ResultSet resultset = null;
			PreparedStatement statement = null;
			try{
				notifycation = new TSListNotificationSettingsObj();
				notifycation.setUserId(userId);
				
				TSNotificationSettingsObj[] arrayNotification = new TSNotificationSettingsObj[count]; 
				for(int i = 1; i <= count; i++)
				{
					TSNotificationSettingsObj obj = new TSNotificationSettingsObj();
					obj.setOrder_id(String.valueOf(i));
					arrayNotification[i - 1] = obj;
				}
				connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	statement = connection.prepareStatement(UserQueries.USER_NOTIFICATION_SETTINGS_ID_SELECT_SQL);
		    	statement.setString(1, userId);
		    	resultset = statement.executeQuery();
		    	while(resultset.next())
		    	{
		    		String index_str = CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_notification_settings.NSID"));
		    		int index = Integer.parseInt(index_str);
		    		String mobile_flag = CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_notification_settings.NS_MOBILE_FLAG"));
		    		String email_flag = CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_notification_settings.NS_EMAIL_FLAG"));
		    		TSNotificationSettingsObj obj = arrayNotification[array.get(index) - 1];
		    		obj.setEmailFlag(email_flag);
		    		obj.setPhoneFlag(mobile_flag);
		    	}
		    	
		    	notifycation.setNotification(arrayNotification);
		    	return notifycation;
			}catch(Exception e)
			{
				e.printStackTrace();
				throw new TasteSyncException(e.getMessage());
			}
			finally{
	            tsDataSource.close();
	            tsDataSource.closeConnection(connection, statement, resultset);
	        }
		}
    	
        //return notifycation;
    }

    @Override
    public Response updateSettingsAutoPublishSettings(TSListSocialSettingObj social_setting_obj) throws TasteSyncException{
        
    	int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;
	    MySQL mySQL = new MySQL();
	    
	    TSSocialSettingsObj[] arraySocial = social_setting_obj.getSocialSettings();	    
	    Dictionary<TSSocialSettingsObj, Integer> array = new Hashtable<TSSocialSettingsObj, Integer>();
	    for(int i = 1; i <= arraySocial.length; i++)
	    {
	    	array.put(arraySocial[i - 1], mySQL.getIDUserSocialNetworkConnection(i));
	    }
	    
	    TSSocialAutoPubSettingsObj[] arraySocial_AP = arraySocial[0].getAuto_publishing();
	    Dictionary<Integer, Integer> array_AP = new Hashtable<Integer, Integer>();
	    for(int i = 1; i <= arraySocial_AP.length; i++)
	    {
	    	array_AP.put(i, mySQL.getIDAutoPublishing(i));
	    }
	    
        String userId = social_setting_obj.getUserId();
	    boolean isCheckUSNC = mySQL.checkUserUSNC(userId);
	    boolean isCheckUSNC_AP = mySQL.checkUserUSNC_AP(userId);
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
	    try{
	    	if(isCheckUSNC)
	    	{
	    		connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	for (Enumeration<TSSocialSettingsObj> e = array.keys(); e.hasMoreElements();)
		    	{
		    		TSSocialSettingsObj data = (TSSocialSettingsObj)e.nextElement();
		    		int index = array.get(data);
		    		 
				    statement = connection.prepareStatement(UserQueries.USER_USNC_UPDATE_SQL);
				    statement.setString(1, data.getUsncYN());
				    statement.setString(2, userId);
				    statement.setInt(3, index);
				    statement.executeUpdate();
		    	}
		    	//tsDataSource.commit();
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, null);
	    	}
	    	else
	    	{
		    	connection = tsDataSource.getConnection();
				tsDataSource.begin();
				for (Enumeration<TSSocialSettingsObj> e = array.keys(); e.hasMoreElements();)
		    	{
					TSSocialSettingsObj data = (TSSocialSettingsObj)e.nextElement();
		    		int index = array.get(data);
		    		
			    	statement = connection.prepareStatement(UserQueries.USER_USNC_INSERT_SQL);
			    	statement.setInt(1, index);
			    	statement.setString(2, data.getUsncYN());
			    	statement.setString(3, userId);
			    	statement.execute();
		    	}
				//tsDataSource.commit();
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, null);
	    	}
	    	
	    	
	    	
	    	
	    	//Auto publishing
	    	if(!isCheckUSNC_AP)
	    	{
		    	connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	for (Enumeration<TSSocialSettingsObj> e = array.keys(); e.hasMoreElements();)
		    	{
					TSSocialSettingsObj data = (TSSocialSettingsObj)e.nextElement();
		    		int index = array.get(data);
		    		
			    	for (Enumeration<Integer> e_AP = array_AP.keys(); e_AP.hasMoreElements();)
			    	{
			    		Integer data_AP = (Integer)e_AP.nextElement();
			    		int index_AP = array_AP.get(data_AP);
			    		
			    		if(data.getAuto_publishing()[data_AP - 1] != null)
			    		{
				    		statement = connection.prepareStatement(UserQueries.USER_SOCIAL_APID_INSERT_SQL);
				    		statement.setInt(1, index);
				    		statement.setInt(2, index_AP);
				    		statement.setString(3, data.getAuto_publishing()[data_AP - 1].getUsncYN());
				    		statement.setString(4, userId);
				    		statement.execute();
			    		}
			    	}
		    	}
		    	//tsDataSource.commit();
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, null);
	    	}
	    	else
	    	{
		    	connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	for (Enumeration<TSSocialSettingsObj> e = array.keys(); e.hasMoreElements();)
		    	{
					TSSocialSettingsObj data = (TSSocialSettingsObj)e.nextElement();
		    		int index = array.get(data);
		    		
			    	for (Enumeration<Integer> e_AP = array_AP.keys(); e_AP.hasMoreElements();)
			    	{
			    		Integer data_AP = (Integer)e_AP.nextElement();
			    		int index_AP = array_AP.get(data_AP);
			    		if(data.getAuto_publishing()[data_AP - 1] != null)
			    		{
				    		statement = connection.prepareStatement(UserQueries.USER_SOCIAL_APID_UPDATE_SQL);
				    		statement.setString(1, data.getAuto_publishing()[data_AP - 1].getUsncYN());
				    		statement.setString(2, userId);
				    		statement.setInt(3, index);
				    		statement.setInt(4, index_AP);			    		
				    		statement.executeUpdate();
			    		}
			    	}
		    	}
		    	//tsDataSource.commit();
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, null);
	    }
            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Settings success!");
            responseDone = true;
            return Response.status(status).entity(tsSuccessObj).build();
        } catch (Exception e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = false;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
        	
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, null);
        
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();

                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    	
    }

    @Override
    public TSListSocialSettingObj showSettingsSocial(String userId)
        throws TasteSyncException {
        
    	TSListSocialSettingObj social = null;
    	MySQL mySQL = new MySQL();
	    boolean isCheckUSNC = mySQL.checkUserUSNC(userId);
	    boolean isCheckUSNC_AP = mySQL.checkUserUSNC_AP(userId);
	    
	    Dictionary<Integer, Integer> arrayUSNC = new Hashtable<Integer, Integer>();
	    
	    int count = 0;
	    for(int i = 1; mySQL.getIDUserSocialNetworkConnection(i) != 0; i++)
	    {
	    	count++;
	    	arrayUSNC.put(mySQL.getIDUserSocialNetworkConnection(i)	,i);
	    }
	    
	    Dictionary<Integer, Integer> arrayUSNC_AP = new Hashtable<Integer, Integer>();
	    int count_AP = 0;
	    for(int i = 1; mySQL.getIDAutoPublishing(i) != 0; i++)
	    {
	    	count_AP++;
	    	arrayUSNC_AP.put(mySQL.getIDAutoPublishing(i)	,i);
	    }
	    
	    if (!isCheckUSNC_AP && !isCheckUSNC) {
			return social;
		} else {
			TSDataSource tsDataSource = TSDataSource.getInstance();
			Connection connection = null;
	        ResultSet resultset = null;
			PreparedStatement statement = null;
			
			try{
				social = new TSListSocialSettingObj();
				social.setUserId(userId);
				TSSocialSettingsObj[] arraySocial = new TSSocialSettingsObj[count];
				
				for(int i = 0; i < arraySocial.length; i++)
				{
					TSSocialSettingsObj obj = new TSSocialSettingsObj();
					TSSocialAutoPubSettingsObj[] obj_AP = new TSSocialAutoPubSettingsObj[count_AP];
					obj.setAuto_publishing(obj_AP);
					arraySocial[i] = obj;
				}
		    	connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	statement = connection.prepareStatement(UserQueries.USER_USNC_SELECT_SQL);
		    	statement.setString(1, userId);
		    	resultset = statement.executeQuery();
		    	while(resultset.next())
		    	{
		    		String s = CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_usnc.USNC_YN"));
		    		String index_str = CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_usnc.USNC_ID"));
		    		int index = Integer.parseInt(index_str);
		    		
		    		TSSocialSettingsObj obj = arraySocial[arrayUSNC.get(index) - 1];		    		
		    		obj.setUsncYN(s);
		    		obj.setUsncORDER(arrayUSNC.get(index).toString());
		    	}
		    	
		    	connection = tsDataSource.getConnection();
		    	statement = connection.prepareStatement(UserQueries.USER_SOCIAL_APID_USERID_SELECT_SQL);
		    	statement.setString(1, userId);
		    	resultset = statement.executeQuery();
		    	while(resultset.next())
		    	{
		    		String s = CommonFunctionsUtil.getModifiedValueString(resultset.getString("usg_usnc_ap.USNC_YN"));
		    		String index_str = CommonFunctionsUtil.getModifiedValueString(resultset.getString("usg_usnc_ap.USNC_ID"));
		    		int index = Integer.parseInt(index_str);
		    		String indexAP_str = CommonFunctionsUtil.getModifiedValueString(resultset.getString("usg_usnc_ap.AP_ID"));
		    		int indexAP = Integer.parseInt(indexAP_str);
		    		
		    		TSSocialSettingsObj obj = arraySocial[arrayUSNC.get(index) - 1];
		    		TSSocialAutoPubSettingsObj[] obj_array_AP = obj.getAuto_publishing();
		    		TSSocialAutoPubSettingsObj obj_AP = new TSSocialAutoPubSettingsObj();
		    		obj_AP.setUsncYN(s);
		    		obj_AP.setUsncORDER(arrayUSNC_AP.get(indexAP).toString());
		    		obj_array_AP[arrayUSNC_AP.get(indexAP) - 1] = obj_AP;
		    		
		    	}
		    	social.setSocialSettings(arraySocial);
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, null);
		    	return social;
			}catch(Exception e)
			{
				e.printStackTrace();
				throw new TasteSyncException(e.getMessage());
			}
			finally{
				if (tsDataSource != null) {
		            tsDataSource.close();
		            tsDataSource.closeConnection(connection, statement, resultset);					
				}
	        }
		}
    	
        //return social;
    }

	@Override
	public Response submitSettingscontactUs(String userId, String order,
			String desc) throws TasteSyncException {
		
		String dateNow = CommonFunctionsUtil.getCurrentDatetime();
        int status = TSResponseStatusCode.SUCCESS.getValue();
        TSSuccessObj tsSuccessObj = new TSSuccessObj();
        tsSuccessObj.setSuccessMsg("Settings Success!");
        TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            MySQL mySQL = new MySQL();
    		int contactId = mySQL.getIDContactSettings(Integer.parseInt(order));
    		String dayAppent = CommonFunctionsUtil.getCurrentDatetimeAppendField();
    		String id = userId + "-" + dayAppent + "-" + CommonFunctionsUtil.generateRandomString(4, 5);
    		
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_CONTACT_SETTINGS_INSERT_SQL);
	    	statement.setString(1, id);
	    	statement.setString(2, userId);
	    	statement.setInt(3, contactId);
	    	statement.setString(4, desc);
	    	statement.setString(5, dateNow);
	    	statement.execute();
    		
            return Response.status(status).entity(tsSuccessObj).build();
        } catch (Exception e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                status = TSResponseStatusCode.ERROR.getValue();
                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);
                return Response.status(status).entity(tsErrorObj).build();
                
            }
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, null);					
        }
	}
	
    @Override
    public void submitUserReport(String userId, String reportText,
        String reportedUser, String reportedByUser) throws TasteSyncException {
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
            //tsDataSource.commit();
        } catch (SQLException e1) {
            e1.printStackTrace();
            throw new TasteSyncException(e1.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, null);
        }
    }

	@Override
	public Response showAboutTastesync(String aboutId) throws TasteSyncException {
    	int status = TSResponseStatusCode.SUCCESS.getValue();
    	MySQL mySQL = new MySQL();
		try{
				
			TSAboutObj obj = new TSAboutObj();
			obj.setOrder(aboutId);
			obj.setContent(mySQL.getDescAbout(Integer.parseInt(aboutId)));

			TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Settings success!");
            return Response.status(status).entity(obj).build();
        } catch (Exception e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                    status = TSResponseStatusCode.ERROR.getValue();
                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);
                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
	}
	
    @Override
    public TSUserProfileObj showMyProfileHome(String userId)
        throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public boolean submitMyProfileAboutMe(String userId, String aboutMeText)
        throws TasteSyncException {
    	
    	boolean ret = true;
    	MySQL mySQL = new MySQL();
    	TSDataSource tsDataSource = TSDataSource.getInstance();
        Connection connection = null;
        PreparedStatement statement = null;
        if(mySQL.getUserInformation(userId) == null)
        	ret = false;
        else
        {
	        try {
	            connection = tsDataSource.getConnection();
	            tsDataSource.begin();
	            System.out.println("UserQueries.USER_ABOUT_UPDATE_SQL=" +
	                UserQueries.USER_ABOUT_UPDATE_SQL);
	            statement = connection.prepareStatement(UserQueries.USER_ABOUT_UPDATE_SQL);
	            statement.setString(1, aboutMeText);
	            statement.setString(2, userId);
	            statement.executeUpdate();
	            ret = true;
	            //tsDataSource.commit();
	        }catch(SQLException e)
	        {
	        	ret = false;
	        	e.printStackTrace();
	        	throw new TasteSyncException(e.getMessage());
	        }
	        finally{
	        	tsDataSource.close();
	        	tsDataSource.closeConnection(connection, statement, null);
	        }
        }
        return ret;
    }


	@Override
	public void followUserStatusChange(String followeeUserId,
			String followerUserId, String statusFlag) throws TasteSyncException {
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
		ResultSet resultset = null;
		int isExist = 0;
		try {
			connection = tsDataSource.getConnection();
			tsDataSource.begin();
			System.out.println("UserQueries.USER_FOLLOW_DATA_CHECK_SELECT_SQL="
					+ UserQueries.USER_FOLLOW_DATA_CHECK_SELECT_SQL);
			statement = connection
					.prepareStatement(UserQueries.USER_FOLLOW_DATA_CHECK_SELECT_SQL);
			statement.setString(1, followerUserId);
			statement.setString(2, followeeUserId);
			resultset = statement.executeQuery();
			if (resultset.next()) {
				isExist = 2;
			} else {
				isExist = 1;
			}
			
			if (statusFlag.equalsIgnoreCase("1") && isExist == 1) {

				tsDataSource.closeConnection(connection, statement, resultset);
				connection = tsDataSource.getConnection();

					connection = tsDataSource.getConnection();
					tsDataSource.begin();
					System.out
							.println("UserQueries.USER_FOLLOW_DATA_INSERT_SQL="
									+ UserQueries.USER_FOLLOW_DATA_INSERT_SQL);
					statement = connection
							.prepareStatement(UserQueries.USER_FOLLOW_DATA_INSERT_SQL);
					statement.setString(
							1,
							followeeUserId
									+ "-"
									+ CommonFunctionsUtil
											.getCurrentDatetimeAppendField()
									+ "-"
									+ CommonFunctionsUtil.generateRandomString(
											4, 5));

					statement.setString(2, followerUserId);
					statement.setString(3, followeeUserId);
					statement.executeUpdate();
			
			} else if (statusFlag.equalsIgnoreCase("0") && isExist == 2) {
					
				tsDataSource.closeConnection(connection, statement, resultset);
				connection = tsDataSource.getConnection();

					connection = tsDataSource.getConnection();
					tsDataSource.begin();
					System.out
							.println("UserQueries.USER_FOLLOW_DATA_DELETE_SQL="
									+ UserQueries.USER_FOLLOW_DATA_DELETE_SQL);
					statement = connection
							.prepareStatement(UserQueries.USER_FOLLOW_DATA_DELETE_SQL);

					statement.setString(1, followerUserId);
					statement.setString(2, followeeUserId);
					statement.executeUpdate();
			}
			//tsDataSource.commit();
		} catch (Exception e) {
			e.printStackTrace();
			throw new TasteSyncException(e.getMessage());
		} finally {
			tsDataSource.close();
			tsDataSource.closeConnection(connection, statement, resultset);
		}
		
	}

	@Override
	public boolean getFollowStatus(String followeeUserId,String followerUserId)throws TasteSyncException{
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
		ResultSet resultset = null;
		try {
			connection = tsDataSource.getConnection();
			tsDataSource.begin();
			System.out.println("UserQueries.USER_FOLLOW_DATA_CHECK_SELECT_SQL="
					+ UserQueries.USER_FOLLOW_DATA_CHECK_SELECT_SQL);
			statement = connection
					.prepareStatement(UserQueries.USER_FOLLOW_DATA_CHECK_SELECT_SQL);
			statement.setString(1, followerUserId);
			statement.setString(2, followeeUserId);
			resultset = statement.executeQuery();
			if (resultset.next()) {
				return true;
			} else {
				return false;
			}
		} catch (Exception e) {
			e.printStackTrace();
			throw new TasteSyncException(e.getMessage());
		} finally {
			tsDataSource.close();
			tsDataSource.closeConnection(connection, statement, resultset);
		}
	}

	@Override
	public List<TSUserObj> showMyProfileFriends(String userId)
			throws TasteSyncException {
		
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
	public List<TSUserObj> showProfileFriends(String userId)
			throws TasteSyncException {
		List<TSUserObj> list_data = new ArrayList<TSUserObj>();
		List<String> dataID = new ArrayList<String>();
		MySQL mySQL = new MySQL();
		
    	TSDataSource tsDataSource = TSDataSource.getInstance();
        Connection connection = null;
        PreparedStatement statement = null;
	    ResultSet resultset = null;
        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            System.out.println("UserQueries.USER_FRIEND_TASTESYNC_SELECT_SQL=" +
                UserQueries.USER_FRIEND_TASTESYNC_SELECT_SQL);
            statement = connection.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_SELECT_SQL);
            statement.setString(1, userId);
            resultset =statement.executeQuery();
        	while(resultset.next())
        	{
        		dataID.add(CommonFunctionsUtil.getModifiedValueString(resultset.getString("user_friend_tastesync.FRIEND_ID")));
        	}
        	tsDataSource.close();
        	tsDataSource.closeConnection(connection, statement, null);
        	
        	int count = 0;
        	while(dataID.size() != count)
        	{
        		TSUserObj obj = mySQL.getUserInformation(dataID.get(count));
        		list_data.add(obj);
        		count++;
        	}
        }catch(SQLException e)
        {
        	e.printStackTrace();
			throw new TasteSyncException(e.getMessage());
		} finally {
			tsDataSource.close();
			tsDataSource.closeConnection(connection, statement, resultset);
		}
		
		return list_data;
	}

	@Override
	public boolean submitTrustedFriendStatusChange(String userId, String dest_user_id, String trustedFriendStatus)
			throws TasteSyncException {
		MySQL mySQL = new MySQL();
		boolean response = true;
		boolean isCheck = mySQL.checkUserFriendTasteSync(userId, dest_user_id);
		
		if(!isCheck)
		{
			String dayAppent = CommonFunctionsUtil.getCurrentDatetimeAppendField();
			String dayTime = CommonFunctionsUtil.getCurrentDatetime();
			String id = userId + "-" + dayAppent + "-" + CommonFunctionsUtil.generateRandomString(4, 5);
			
			TSDataSource tsDataSource = TSDataSource.getInstance();
		    Connection connection = null;
			PreparedStatement statement = null;		    
		    try{
		    	connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	statement = connection.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_INSERT_SQL);
		    	statement.setString(1, id);
		    	statement.setString(2, userId);
		    	statement.setString(3, dest_user_id);
		    	statement.setString(4, trustedFriendStatus);
		    	statement.setString(5, dayTime);
		    	statement.execute();
		    }catch(Exception e)
		    {
		    	e.printStackTrace();
		    	response = false;
		    }
		    finally{
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, null);
		    }
		}
		else
		{
			
			TSDataSource tsDataSource = TSDataSource.getInstance();
		    Connection connection = null;
			PreparedStatement statement = null;		    
		    try{
		    	connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	statement = connection.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_UPDATE_SQL);
		    	statement.setString(1, trustedFriendStatus);
		    	statement.setString(2, userId);
		    	statement.setString(3, dest_user_id);
		    	statement.execute();
		    }catch(Exception e)
		    {
		    	e.printStackTrace();
		    	response = false;
		    }
		    finally{
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, null);
		    }
		}
		return response;
	}
	
	@Override
    public int showTrustedFriend(String userId, String dest_user_id) throws TasteSyncException
    {
		MySQL mySQL = new MySQL();
		int response = 4;
		boolean isCheck = mySQL.checkUserFriendTasteSync(userId, dest_user_id);
		
		if(isCheck)
		{
			TSDataSource tsDataSource = TSDataSource.getInstance();
		    Connection connection = null;
		    ResultSet resultSet = null;
			PreparedStatement statement = null;		    
		    try{
		    	connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	statement = connection.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_CHECK_SELECT_SQL);
		    	statement.setString(1, userId);
		    	statement.setString(2, dest_user_id);
		    	resultSet = statement.executeQuery();
		    	if(resultSet.next())
		    	{
			    	int trust = resultSet.getInt("user_friend_tastesync.FRIEND_TRUSTED_FLAG");
			    	if(trust == 1)
			    		response = 1;
			    	else
			    		if(trust == 0)
			    			response = 0;
			    		else
			    			response = 3;
		    	}
		    }catch(Exception e)
		    {
		    	e.printStackTrace();
		    	response = 3;
		    }
		    finally{
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, null);
		    }
		}
		else
		{
			response = 2;
		}
		return response;
    }
	
	@Override
	 public List<TSFacebookUserDataObj> showProfileFollowing(String userId)
	   throws TasteSyncException {
		ArrayList<TSFacebookUserDataObj> fbUsers = null;
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
		ResultSet resultset = null;

		try {
			 connection = tsDataSource.getConnection();
			 tsDataSource.begin();
			 System.out.println("UserQueries.USER_FOLLOW_DATA_FOLLOWING_SELECT_SQL="
		       + UserQueries.USER_FOLLOW_DATA_FOLLOWING_SELECT_SQL);
			 statement = connection.prepareStatement(UserQueries.USER_FOLLOW_DATA_FOLLOWING_SELECT_SQL);
			 statement.setString(1, userId);
			 resultset = statement.executeQuery();
			 fbUsers = new ArrayList<TSFacebookUserDataObj>();
			 while (resultset.next()) {
				 TSFacebookUserDataObj user = new TSFacebookUserDataObj();
				 MySQL.mapResultsetRowToTSFacebookVO(user, resultset);
				 fbUsers.add(user);
			 }
		 } catch (Exception e) {
			 e.printStackTrace();
		 } finally {
			 tsDataSource.close();
			 tsDataSource.closeConnection(connection, statement, resultset);
		 }
		 return fbUsers;
	}

	 @Override
	 public List<TSFacebookUserDataObj> showProfileFollowers(String userId)
	   throws TasteSyncException {
		 ArrayList<TSFacebookUserDataObj> fbUsers = null;
		 TSDataSource tsDataSource = TSDataSource.getInstance();
		 Connection connection = null;
		 PreparedStatement statement = null;
		 ResultSet resultset = null;

		 try {
			 connection = tsDataSource.getConnection();
			 tsDataSource.begin();
			 System.out.println("UserQueries.USER_FOLLOW_DATA_FOLLOWERS_SELECT_SQL="
					 + UserQueries.USER_FOLLOW_DATA_FOLLOWERS_SELECT_SQL);
			 statement = connection.prepareStatement(UserQueries.USER_FOLLOW_DATA_FOLLOWERS_SELECT_SQL);
			 statement.setString(1, userId);
			 resultset = statement.executeQuery();
			 fbUsers = new ArrayList<TSFacebookUserDataObj>();
			 while (resultset.next()) {
				 TSFacebookUserDataObj user = new TSFacebookUserDataObj();
				 MySQL.mapResultsetRowToTSFacebookVO(user, resultset);
				 fbUsers.add(user);
			 }
		 } catch (Exception e) {
			 e.printStackTrace();
			throw new TasteSyncException(e.getMessage());
		 } finally {
			 tsDataSource.close();
			 tsDataSource.closeConnection(connection, statement, resultset);
		 }
		 return fbUsers;
	 }
	 
	@Override
	public boolean submitSignupDetail(TSAskSubmitLoginObj askObj) throws TasteSyncException
	{
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
		boolean response = true;
		List<String> restaurantId = askObj.getRestaurandId();
		try {
			 connection = tsDataSource.getConnection();
			 tsDataSource.begin();
			 System.out.println("UserQueries.USER_CUISINE_INSERT_SQL="
					 + UserQueries.USER_CUISINE_INSERT_SQL);
			 statement = connection.prepareStatement(UserQueries.USER_CUISINE_INSERT_SQL);
			 statement.setString(1, askObj.getUserId());
			 statement.setString(2, askObj.getCuisineId());
			 statement.execute();
			 
			 connection = tsDataSource.getConnection();
			 System.out.println("UserQueries.USER_FRIEND_SIGNUP_FB_UPDATE_SQL="
					 + UserQueries.USER_FRIEND_SIGNUP_FB_UPDATE_SQL);
			 statement = connection.prepareStatement(UserQueries.USER_FRIEND_SIGNUP_FB_UPDATE_SQL);
			 statement.setString(1, "1");
			 statement.setString(2, askObj.getUserId());
			 statement.setString(3, askObj.getFacebookFriendId());
			 statement.executeUpdate();
			 connection = tsDataSource.getConnection();
			 System.out.println("UserQueries.USER_RESTAURANT_FAV_INSERT_SQL="
					 + UserQueries.USER_RESTAURANT_FAV_INSERT_SQL);
			 statement = connection.prepareStatement(UserQueries.USER_RESTAURANT_FAV_INSERT_SQL);
			 for(int i = 0; i < restaurantId.size(); i++)
			 {
				 statement.setString(1, askObj.getUserId());
				 statement.setString(2, restaurantId.get(i));
				 statement.execute();
			 }
			 //tsDataSource.commit();
		 } catch (Exception e) {
			 e.printStackTrace();
			 response = false;
			 throw new TasteSyncException(e.getMessage());
		 } finally {
			 tsDataSource.close();
			 tsDataSource.closeConnection(connection, statement, null);
		 }
	 	return response;
	}
	
	@Override
	public boolean sendMessageToUser(String sender_ID, String recipient_ID, String content) 
	    	throws TasteSyncException
	{
		boolean response = true;
		String dayAppent = CommonFunctionsUtil.getCurrentDatetimeAppendField();
		String dayTime = CommonFunctionsUtil.getCurrentDatetime();
		String id = sender_ID + "-" + dayAppent + "-" + CommonFunctionsUtil.generateRandomString(4, 5);
		
		TSDataSource tsDataSource = TSDataSource.getInstance();
	    Connection connection = null;
		PreparedStatement statement = null;		    
	    try{
	    	connection = tsDataSource.getConnection();
	    	tsDataSource.begin();
	    	statement = connection.prepareStatement(UserQueries.USER_MESSAGE_INSERT_SQL);
	    	statement.setString(1, id);
	    	statement.setString(2, sender_ID);
	    	statement.setString(3, recipient_ID);
	    	statement.setString(4, content);
	    	statement.setString(5, dayTime);
	    	statement.execute();
			//tsDataSource.commit();
	    }catch(Exception e)
	    {
	    	e.printStackTrace();
	    	response = false;
			 throw new TasteSyncException(e.getMessage());
		 } finally {
			 tsDataSource.close();
			 tsDataSource.closeConnection(connection, statement, null);
		 }
		return response;
	}
	
	@Override
	public List<TSRestaurantObj> showRestaurantSuggestion(String key, String userId) throws TasteSyncException
	{
		MySQL mySQL = new MySQL();
		TSUserObj userObj = mySQL.getUserInformation(userId);
		List<TSRestaurantObj> listData = new ArrayList<TSRestaurantObj>();
		List<String> cityData = new ArrayList<String>();
	    if(userObj != null)
	    {
		    try{
		    	TSDataSource tsDataSource = TSDataSource.getInstance();
			    Connection connection = null;
			    ResultSet resultset = null;
				PreparedStatement statement = null;	
		    	connection = tsDataSource.getConnection();
		    	tsDataSource.begin();
		    	System.out.println(UserQueries.CITY_NEIGHOOURHOOD_SELECT_SQL + " + " + userObj.getUserCityId());
		    	statement = connection.prepareStatement(UserQueries.CITY_NEIGHOOURHOOD_SELECT_SQL);
		    	statement.setString(1, userObj.getUserCityId());
		    	cityData.add(userObj.getUserCityId());
		    	resultset = statement.executeQuery();
		    	while(resultset.next())
		    	{
		    		String cityId = CommonFunctionsUtil.getModifiedValueString(resultset.getString("city_neighbourhood.NEIGHBOUR_ID"));
		    		String[] arrayID =cityId.split("-");
		    		System.out.println(arrayID[1]);
		    		cityData.add(arrayID[1]);
		    	}
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, resultset);
		    }catch(Exception e)
		    {
		    	e.printStackTrace();
		    }
			TSDataSource tsDataSource = TSDataSource.getInstance();
		    ResultSet resultset = null;
			PreparedStatement statement = null;	
	        Connection connection = null;
			try{
				tsDataSource.begin();
		    	for (int i = 0; i < cityData.size(); i++) {
			    	connection = tsDataSource.getConnection();
			    	System.out.println(RestaurantQueries.RESTAURANT_CITY_SELECT_SQL);
		    		statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_CITY_SELECT_SQL);
			    	statement.setString(1, cityData.get(i));
			    	statement.setString(2, key + "%");
			    	resultset = statement.executeQuery();
			    	while(resultset.next())
			    	{
			    		TSRestaurantObj obj = new TSRestaurantObj();
			    		mySQL.mapResultsetRowToTSRestaurantVO(obj, resultset);
			    		listData.add(obj);
			    	}
				}
		    	
		    	tsDataSource.close();
		    	tsDataSource.closeConnection(connection, statement, resultset);
		    }catch(Exception e)
		    {
		    	e.printStackTrace();
		   	} finally {
			 tsDataSource.close();
			 tsDataSource.closeConnection(connection, statement, null);
		 }
	    }
		return listData;
	}
	
	@Override
	public TSUserProfileObj getUserHomeProfile(String userId)
			throws TasteSyncException {
		TSUserProfileObj userProfileObj;
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
		ResultSet resultset = null;

		try {
			connection = tsDataSource.getConnection();
			tsDataSource.begin();
			System.out
					.println("UserQueries.USERS_FACEBOOK_USER_DATA_CITIES_SELECT_SQL="
							+ UserQueries.USERS_FACEBOOK_USER_DATA_CITIES_SELECT_SQL);
			statement = connection
					.prepareStatement(UserQueries.USERS_FACEBOOK_USER_DATA_CITIES_SELECT_SQL);
			statement.setString(1, userId);
			resultset = statement.executeQuery();
			userProfileObj = new TSUserProfileObj();
			while (resultset.next()) {
				userProfileObj.setName(CommonFunctionsUtil
						.getModifiedValueString(resultset
								.getString("facebook_user_data.NAME")));
				userProfileObj.setPhoto(CommonFunctionsUtil
						.getModifiedValueString(resultset
								.getString("facebook_user_data.PICTURE")));
				userProfileObj.setFacebookUrl(CommonFunctionsUtil
						.getModifiedValueString(resultset
								.getString("facebook_user_data.LINK")));
				userProfileObj.setTwitterUrl(CommonFunctionsUtil
						.getModifiedValueString(resultset
								.getString("users.TWITTER_USR_URL")));
				userProfileObj.setBlogUrl(CommonFunctionsUtil
						.getModifiedValueString(resultset
								.getString("users.Blog_Url")));
				userProfileObj.setFacebookCity(CommonFunctionsUtil
						.getModifiedValueString(resultset
								.getString("cities.city")));
				userProfileObj.setNumPoints(CommonFunctionsUtil
						.getModifiedValueString(resultset
								.getString("users.USER_POINTS")));
				userProfileObj.setAboutMeText(CommonFunctionsUtil
						.getModifiedValueString(resultset
								.getString("users.ABOUT")));
			}

			connection = tsDataSource.getConnection();
			statement = connection
					.prepareStatement(UserQueries.USER_FOLLOW_DATA_COUNT_FOLLOWING_SELECT_SQL);
			statement.setString(1, userId);
			resultset = statement.executeQuery();
			if (resultset.next()) {
				userProfileObj.setNumFollowers(String.valueOf(resultset
						.getInt("count")));
			}
			connection = tsDataSource.getConnection();
			statement = connection
					.prepareStatement(UserQueries.USER_FOLLOW_DATA_COUNT_FOLLOWER_SELECT_SQL);
			statement.setString(1, userId);
			resultset = statement.executeQuery();
			if (resultset.next()) {
				userProfileObj.setNumFollowees(String.valueOf(resultset
						.getInt("count")));
			}
			connection = tsDataSource.getConnection();
			statement = connection
					.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_SELECT_SQL);
			statement.setString(1, userId);
			resultset = statement.executeQuery();
			int count = 0;
			while (resultset.next()) {
				count++;
			}
			userProfileObj.setNumFriendsOnTs(count + "");
			userProfileObj
					.setRestaurantList(getRestaurantListHomeProfile(userId));
			return userProfileObj;

		} catch (Exception e) {
			e.printStackTrace();
			 throw new TasteSyncException(e.getMessage());
		 } finally {
			 tsDataSource.close();
			 tsDataSource.closeConnection(connection, statement, resultset);
		 }
	}
	
	private static List<TSRestaurantView> getRestaurantListHomeProfile(
			String userId) throws TasteSyncException {
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
		ResultSet resultset = null;

		try {
			List<TSRestaurantView> restaurantList = new ArrayList<TSRestaurantView>();
			connection = tsDataSource.getConnection();
			statement = connection
					.prepareStatement(UserQueries.USER_RESTAURANT_FAV_SELECT_SQL
							+ " LIMIT 0 , 3");
			System.out.println("UserQueries.USER_RESTAURANT_FAV_SELECT_SQL="
					+ UserQueries.USER_RESTAURANT_FAV_SELECT_SQL);
			statement.setString(1, userId);
			resultset = statement.executeQuery();
			while (resultset.next()) {
				TSRestaurantView restaurant = new TSRestaurantView();
				restaurant.setId(CommonFunctionsUtil
						.converStringAsNullIfNeeded(resultset
								.getString("RESTAURANT_ID")));
				restaurantList.add(restaurant);
			}
			if (restaurantList.size() < 3) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_RESTAURANT_RECO_SELECT_SQL
								+ " LIMIT 0 , " + (3 - restaurantList.size()));
				System.out
						.println("UserQueries.USER_RESTAURANT_RECO_SELECT_SQL="
								+ UserQueries.USER_RESTAURANT_RECO_SELECT_SQL);
				statement.setString(1, userId);
				resultset = statement.executeQuery();
				while (resultset.next()) {
					TSRestaurantView restaurant = new TSRestaurantView();
					restaurant.setId(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("RESTAURANT_ID")));
					restaurantList.add(restaurant);
				}
			}
			if (restaurantList.size() < 3) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_RESTAURANT_SAVED_SELECT_SQL
								+ " LIMIT 0 , " + (3 - restaurantList.size()));
				System.out
						.println("UserQueries.USER_RESTAURANT_SAVED_SELECT_SQL="
								+ UserQueries.USER_RESTAURANT_SAVED_SELECT_SQL);
				statement.setString(1, userId);
				resultset = statement.executeQuery();
				while (resultset.next()) {
					TSRestaurantView restaurant = new TSRestaurantView();
					restaurant.setId(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("RESTAURANT_ID")));
					restaurantList.add(restaurant);
				}
			}
			if (restaurantList.size() < 3) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.RESTAURANT_TIPS_TASTESYNC_SELECT_SQL
								+ " LIMIT 0 , " + (3 - restaurantList.size()));
				System.out
						.println("UserQueries.RESTAURANT_TIPS_TASTESYNC_SELECT_SQL="
								+ UserQueries.RESTAURANT_TIPS_TASTESYNC_SELECT_SQL);
				statement.setString(1, userId);
				resultset = statement.executeQuery();
				while (resultset.next()) {
					TSRestaurantView restaurant = new TSRestaurantView();
					restaurant.setId(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("RESTAURANT_ID")));
					restaurantList.add(restaurant);
				}
			}
			for (TSRestaurantView restaurant : restaurantList) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.RESTAURANT_SELECT_SQL);
				System.out.println("UserQueries.RESTAURANT_SELECT_SQL="
						+ UserQueries.RESTAURANT_SELECT_SQL);
				statement.setString(1, restaurant.getId());
				resultset = statement.executeQuery();
				if (resultset.next()) {
					restaurant.setName(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("RESTAURANT_NAME")));
				}
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.RESTAURANT_PHOTO_SELECT_SQL
								+ " LIMIT 0,1");
				System.out.println("UserQueries.RESTAURANT_PHOTO_SELECT_SQL="
						+ UserQueries.RESTAURANT_PHOTO_SELECT_SQL);
				statement.setString(1, restaurant.getId());
				statement.setString(1, restaurant.getId());
				resultset = statement.executeQuery();
				if (resultset.next()) {
					TSRestaurantPhotoObj photo = new TSRestaurantPhotoObj();
					photo.setRestaurantId(restaurant.getId());
					photo.setPhotoSource(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("PHOTO_SOURCE")));
					photo.setPrefix(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("PREFIX")));
					photo.setPhotoId(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("PHOTO_ID")));
					photo.setSuffix(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("SUFFIX")));
					photo.setWidth(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("WIDTH")));
					photo.setHeight(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("HEIGHT")));
					photo.setUltimateSourceName(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("ULTIMATE_SOURCE_NAME")));
					photo.setUltimateSourceUrl(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("ULTIMATE_SOURCE_URL")));
					restaurant.setPhoto(photo);
				}
			}
			return restaurantList;

		} catch (Exception e) {
			 throw new TasteSyncException(e.getMessage());
		 } finally {
			 tsDataSource.close();
			 tsDataSource.closeConnection(connection, statement, resultset);
		 }
	}
	
	@Override
	public List<TSUserProfileRestaurantsObj> getUserProfileRestaurants(
			String userId, int type, int from, int to)
			throws TasteSyncException {
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
		ResultSet resultset = null;

		try {
			List<TSUserProfileRestaurantsObj> subRestaurantList = new ArrayList<TSUserProfileRestaurantsObj>();
			List<String> restaurantListId = new ArrayList<String>();
			if (type == GlobalVariables.RESTAURANT_PROFILE_DETAIL_TYPE_ALL
					|| type == GlobalVariables.RESTAURANT_PROFILE_DETAIL_TYPE_FAV) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_RESTAURANT_FAV_SELECT_SQL);
				System.out
						.println("UserQueries.USER_RESTAURANT_FAV_SELECT_SQL="
								+ UserQueries.USER_RESTAURANT_FAV_SELECT_SQL);
				statement.setString(1, userId);
				resultset = statement.executeQuery();
				while (resultset.next()) {
					restaurantListId.add(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("RESTAURANT_ID")));
				}
			}
			if (type == GlobalVariables.RESTAURANT_PROFILE_DETAIL_TYPE_ALL
					|| type == GlobalVariables.RESTAURANT_PROFILE_DETAIL_TYPE_RECO) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_RESTAURANT_RECO_SELECT_SQL);
				System.out
						.println("UserQueries.USER_RESTAURANT_RECO_SELECT_SQL="
								+ UserQueries.USER_RESTAURANT_RECO_SELECT_SQL);
				statement.setString(1, userId);
				resultset = statement.executeQuery();
				while (resultset.next()) {
					restaurantListId.add(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("RESTAURANT_ID")));
				}
			}
			if (type == GlobalVariables.RESTAURANT_PROFILE_DETAIL_TYPE_ALL
					|| type == GlobalVariables.RESTAURANT_PROFILE_DETAIL_TYPE_SAVED) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_RESTAURANT_SAVED_SELECT_SQL);
				System.out
						.println("UserQueries.USER_RESTAURANT_SAVED_SELECT_SQL="
								+ UserQueries.USER_RESTAURANT_SAVED_SELECT_SQL);
				statement.setString(1, userId);
				resultset = statement.executeQuery();
				while (resultset.next()) {
					restaurantListId.add(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("RESTAURANT_ID")));
				}
			}
			if (type == GlobalVariables.RESTAURANT_PROFILE_DETAIL_TYPE_ALL
					|| type == GlobalVariables.RESTAURANT_PROFILE_DETAIL_TYPE_TIPS) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.RESTAURANT_TIPS_TASTESYNC_SELECT_SQL);
				System.out
						.println("UserQueries.RESTAURANT_TIPS_TASTESYNC_SELECT_SQL="
								+ UserQueries.RESTAURANT_TIPS_TASTESYNC_SELECT_SQL);
				statement.setString(1, userId);
				resultset = statement.executeQuery();
				while (resultset.next()) {
					restaurantListId.add(CommonFunctionsUtil
							.converStringAsNullIfNeeded(resultset
									.getString("RESTAURANT_ID")));
				}
			}
			for (int i = from; i < to && i < restaurantListId.size(); i++) {
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.RESTAURANT_SELECT_SQL);
				System.out.println("UserQueries.RESTAURANT_SELECT_SQL="
						+ UserQueries.RESTAURANT_SELECT_SQL);
				statement.setString(1, restaurantListId.get(i));
				resultset = statement.executeQuery();
				TSUserProfileRestaurantsObj restaurant = null;
				if (resultset.next()) {
					restaurant = MySQL
							.getTSUserProfileRestaurantsObjFromRS(resultset);
				}
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_RESTAURANT_FAV_CHECK_SELECT_SQL);
				System.out
						.println("UserQueries.USER_RESTAURANT_FAV_CHECK_SELECT_SQL="
								+ UserQueries.USER_RESTAURANT_FAV_CHECK_SELECT_SQL);
				statement.setString(1, userId);
				statement.setString(2, restaurantListId.get(i));
				resultset = statement.executeQuery();
				if (resultset.next())
					restaurant.setUserFavFlag("1");
				else
					restaurant.setUserFavFlag("0");
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_RESTAURANT_RECO_CHECK_SELECT_SQL);
				System.out
						.println("UserQueries.USER_RESTAURANT_RECO_CHECK_SELECT_SQL="
								+ UserQueries.USER_RESTAURANT_RECO_CHECK_SELECT_SQL);
				statement.setString(1, userId);
				statement.setString(2, restaurantListId.get(i));
				resultset = statement.executeQuery();
				if (resultset.next())
					restaurant.setUserRecommendedFlag("1");
				else
					restaurant.setUserRecommendedFlag("0");
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_RESTAURANT_SAVED_CHECK_SELECT_SQL);
				System.out
						.println("UserQueries.USER_RESTAURANT_SAVED_CHECK_SELECT_SQL="
								+ UserQueries.USER_RESTAURANT_SAVED_CHECK_SELECT_SQL);
				statement.setString(1, userId);
				statement.setString(2, restaurantListId.get(i));
				resultset = statement.executeQuery();
				if (resultset.next())
					restaurant.setUserSavedFlag("1");
				else
					restaurant.setUserSavedFlag("0");
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.RESTAURANT_TIPS_TASTESYNC_CHECK_SELECT_SQL);
				System.out
						.println("UserQueries.RESTAURANT_TIPS_TASTESYNC_CHECK_SELECT_SQL="
								+ UserQueries.RESTAURANT_TIPS_TASTESYNC_CHECK_SELECT_SQL);
				statement.setString(1, userId);
				statement.setString(2, restaurantListId.get(i));
				resultset = statement.executeQuery();
				if (resultset.next())
					restaurant.setUserTipFlag("1");
				else
					restaurant.setUserTipFlag("0");
				if (restaurant != null) {
					subRestaurantList.add(restaurant);
				}
			}
			
			return subRestaurantList;

		} catch (Exception e) {
			e.printStackTrace();
			 throw new TasteSyncException(e.getMessage());
		 } finally {
			 tsDataSource.close();
			 tsDataSource.closeConnection(connection, statement, resultset);
		 }
	}
	
	@Override
	public void inviteFriend(String userId, String friendFBId)
			throws TasteSyncException {
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;
		ResultSet resultset = null;
		try {
			connection = tsDataSource.getConnection();
			
			statement = connection
					.prepareStatement(UserQueries.USER_FRIEND_FB_CHECK_SELECT_SQL);
			System.out.println("UserQueries.USER_FRIEND_FB_CHECK_SELECT_SQL="
					+ UserQueries.USER_FRIEND_FB_CHECK_SELECT_SQL);
			statement.setString(1, userId);
			statement.setString(2, friendFBId);
			resultset = statement.executeQuery();

			if (resultset.next()) {
				tsDataSource.closeConnection(connection, statement, resultset);
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_FRIEND_FB_UPDATE_SQL);
				System.out.println("UserQueries.USER_FRIEND_FB_UPDATE_SQL="
						+ UserQueries.USER_FRIEND_FB_UPDATE_SQL);
				
				statement.setTimestamp(1,CommonFunctionsUtil.getCurrentDateTimestamp());
				statement.setString(2, "1");
				statement.setString(3, userId);
				statement.setString(4, friendFBId);
				statement.executeUpdate();
			} else {
				tsDataSource.closeConnection(connection, statement, resultset);
				connection = tsDataSource.getConnection();
				statement = connection
						.prepareStatement(UserQueries.USER_FRIEND_FB_INSERT_SQL);
				System.out.println("UserQueries.USER_FRIEND_FB_UPDATE_SQL="
						+ UserQueries.USER_FRIEND_FB_UPDATE_SQL);
				statement.setString(1, userId);
				statement.setString(2, friendFBId);
				statement.setTimestamp(3,
						CommonFunctionsUtil.getCurrentDateTimestamp());
				statement.setString(4, "1");
				statement.executeUpdate();
			}
			//tsDataSource.commit();
		} catch (Exception e) {
			e.printStackTrace();
			throw new TasteSyncException(e.getMessage());
		} finally {
			tsDataSource.close();
			tsDataSource.closeConnection(connection, statement, resultset);
		}
	}

	@Override
	public void submitUserReport(String userId, String reportedUserId,
			String reason) throws TasteSyncException {
		TSDataSource tsDataSource = TSDataSource.getInstance();
		Connection connection = null;
		PreparedStatement statement = null;

		try {
			connection = tsDataSource.getConnection();
			tsDataSource.begin();
			System.out.println("UserQueries.USER_REPORTED_INFO_INSERT_SQL="
					+ UserQueries.USER_REPORTED_INFO_INSERT_SQL);
			statement = connection
					.prepareStatement(UserQueries.USER_REPORTED_INFO_INSERT_SQL);
			statement.setString(1,
					reportedUserId + CommonFunctionsUtil.getCurrentDatetime()
							+ CommonFunctionsUtil.generateRandomString(4, 5));
			statement.setTimestamp(2,
					CommonFunctionsUtil.getCurrentDateTimestamp());
			statement.setString(3, reason);
			statement.setString(4, reportedUserId);
			statement.setString(5, userId);
			statement.executeUpdate();
			//tsDataSource.commit();
		} catch (SQLException e1) {
			e1.printStackTrace();
			throw new TasteSyncException(e1.getMessage());
		} finally {
			tsDataSource.close();
			tsDataSource.closeConnection(connection, statement, null);
		}
	}
}
