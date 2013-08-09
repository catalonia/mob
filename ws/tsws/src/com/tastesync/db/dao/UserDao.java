package com.tastesync.db.dao;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSCityObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSInitObj;
import com.tastesync.model.objects.TSListFacebookUserDataObj;
import com.tastesync.model.objects.TSListNotificationSettingsObj;
import com.tastesync.model.objects.TSListPrivacySettingsObj;
import com.tastesync.model.objects.TSListSocialSettingObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;
import com.tastesync.model.response.UserResponse;

import java.util.List;

import javax.ws.rs.core.Response;

public interface UserDao {
	UserResponse login(String email, String password) throws TasteSyncException;

	UserResponse login_fb(TSListFacebookUserDataObj list_user_profile) throws TasteSyncException;
	
	boolean logout(String userId) throws TasteSyncException;

    TSUserObj selectUser(String userId) throws TasteSyncException;

    List<TSUserObj> selectUsers() throws TasteSyncException;

    boolean updateSettingsPrivacy(TSListPrivacySettingsObj privacySettingObj)
        throws TasteSyncException;

    TSListPrivacySettingsObj showSettingsPrivacy(String userId)
        throws TasteSyncException;

    boolean updateSettingsNotificationsRecoMessage(TSListNotificationSettingsObj notificationSetting)
        throws TasteSyncException;

    TSListNotificationSettingsObj showSettingsNotifications(String userId)
        throws TasteSyncException;

    TSListSocialSettingObj showSettingsSocial(String userId)
        throws TasteSyncException;

    Response updateSettingsAutoPublishSettings(TSListSocialSettingObj social_setting_obj)
        throws TasteSyncException;

    Response submitSettingscontactUs(String userId, String order, String desc) throws TasteSyncException;
    
    Response showAboutTastesync(String aboutId) throws TasteSyncException;
    
    void submitUserReport(String userId, String reportText,
        String reportedUser, String reportedByUser) throws TasteSyncException;

    TSUserProfileObj showMyProfileHome(String userId) throws TasteSyncException;

    TSUserProfileObj showUserProfileHome(String userId, String viewerUserId) throws TasteSyncException;
    
    List<TSFacebookUserDataObj> showProfileFollowing(String userId)
        throws TasteSyncException;

    List<TSFacebookUserDataObj> showProfileFollowers(String userId)
        throws TasteSyncException;

    List<TSUserObj> showMyProfileFriends(String userId)
        throws TasteSyncException;

    List<TSFacebookUserDataObj>  showProfileFriends(String userId) throws TasteSyncException;
    
    List<TSFacebookUserDataObj> showInviteFriends(String userId)
            throws TasteSyncException;
    
    List<TSUserProfileRestaurantsObj> showProfileRestaurants(String userId)
        throws TasteSyncException;

    boolean getFollowStatus(String followeeUserId, String followerUserId)
			throws TasteSyncException;
    
    void followUserStatusChange(String followeeUserId, String followerUserId,
        String statusFlag) throws TasteSyncException;

    boolean submitMyProfileAboutMe(String userId, String aboutMeText)
        throws TasteSyncException;
    
    boolean submitTrustedFriendStatusChange(String userId, String dest_user_id,
            String trustedFriendStatus) throws TasteSyncException;
    
    public boolean submitSignupDetail(TSAskSubmitLoginObj askObj) throws TasteSyncException;
    
    int showTrustedFriend(String userId, String dest_user_id) throws TasteSyncException;
    
    boolean sendMessageToUser(String sender_ID, String recipient_ID, String content) 
        	throws TasteSyncException;
    
    List<TSRestaurantObj> showRestaurantSuggestion(String key, String userId) 
    		throws TasteSyncException;
	
    TSUserProfileObj getUserHomeProfile(String userId) throws TasteSyncException;

    List<TSUserProfileRestaurantsObj> getUserProfileRestaurants(String userId,
	int type, int from, int to)throws TasteSyncException;
    
    void inviteFriend(String userId, String friendFBId)
			throws TasteSyncException;
    
    void submitUserReport(String userId, String reportedUserId,
			String reason) throws TasteSyncException;
    
    TSInitObj getAllData() throws TasteSyncException;
    
    String getUserId(String userFBID) throws TasteSyncException;
    
    List<TSCityObj> getCityName(String key) throws TasteSyncException;
}
