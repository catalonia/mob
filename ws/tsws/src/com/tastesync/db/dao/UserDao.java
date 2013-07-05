package com.tastesync.db.dao;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSListFacebookUserDataObj;
import com.tastesync.model.objects.TSListNotificationSettingsObj;
import com.tastesync.model.objects.TSListPrivacySettingsObj;
import com.tastesync.model.objects.TSListSocialSettingObj;
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
    
    Response showAboutTastesync() throws TasteSyncException;
    
    void submitUserReport(String userId, String reportText,
        String reportedUser, String reportedByUser) throws TasteSyncException;

    TSUserProfileObj showMyProfileHome(String userId) throws TasteSyncException;

    TSUserProfileObj showUserProfileHome(String userId, String viewerUserId) throws TasteSyncException;
    
    List<TSFacebookUserDataObj> showProfileFollowing(String userId)
        throws TasteSyncException;

    List<TSFacebookUserDataObj> showProfileFollowers(String userId)
        throws TasteSyncException;

    List<TSFacebookUserDataObj> showMyProfileFriends(String userId)
        throws TasteSyncException;

    List<TSFacebookUserDataObj>  showProfileFriends(String userId) throws TasteSyncException;
    
    List<TSUserProfileRestaurantsObj> showProfileRestaurants(String userId)
        throws TasteSyncException;

    void followUserStatusChange(String followeeUserId, String followerUserId,
        String statusFlag) throws TasteSyncException;

    void submitMyProfileAboutMe(String userId, String aboutMeText)
        throws TasteSyncException;
    
    void submitTrustedFriendStatusChange(String userId, String viewerUserId,
            String trustedFriendStatus) throws TasteSyncException;
    
}
