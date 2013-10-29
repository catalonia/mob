package com.tastesync.bos;

import com.tastesync.db.dao.UserDao;
import com.tastesync.db.dao.UserDaoImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAboutObj;
import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSCityObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSGlobalObj;
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


public class UserBoImpl implements UserBo {
    private UserDao userDao = new UserDaoImpl();

    @Override
    public UserResponse login(String email, String password)
        throws TasteSyncException {
        return userDao.login(email, password);
    }

    @Override
    public UserResponse login_fb(TSListFacebookUserDataObj list_user_profile)
        throws TasteSyncException {
        return userDao.login_fb(list_user_profile);
    }

    @Override
    public void setStatus(String userId, String status)
        throws TasteSyncException {
         userDao.setStatus(userId, status);
    }

    @Override
    public boolean logout(String userId, String deviceToken)
        throws TasteSyncException {
        return userDao.logout(userId, deviceToken);
    }

    @Override
    public String loginAccount(String userId) throws TasteSyncException {
        return userDao.loginAccount(userId);
    }

    @Override
    public TSUserObj selectUser(String userId) throws TasteSyncException {
        return userDao.selectUser(userId);
    }

    @Override
    public List<TSUserObj> selectUsers() throws TasteSyncException {
        return userDao.selectUsers();
    }

    @Override
    public void updateSettingsPrivacy(
        TSListPrivacySettingsObj privacySettingObj) throws TasteSyncException {
        userDao.updateSettingsPrivacy(privacySettingObj);
    }

    @Override
    public TSListPrivacySettingsObj showSettingsPrivacy(String userId)
        throws TasteSyncException {
        return userDao.showSettingsPrivacy(userId);
    }

    @Override
    public void updateSettingsNotifications(
        TSListNotificationSettingsObj notificationSetting)
        throws TasteSyncException {
        userDao.updateSettingsNotifications(notificationSetting);
    }

    @Override
    public TSListNotificationSettingsObj showSettingsNotifications(
        String userId) throws TasteSyncException {
        return userDao.showSettingsNotifications(userId);
    }

    @Override
    public TSListSocialSettingObj showSettingsSocial(String userId)
        throws TasteSyncException {
        return userDao.showSettingsSocial(userId);
    }

    @Override
    public void updateSettingsAutoPublishSettings(
        TSListSocialSettingObj social_setting_obj) throws TasteSyncException {
        userDao.updateSettingsAutoPublishSettings(social_setting_obj);
    }

    @Override
    public void submitUserReport(String userId, String reportText,
        String reportedUser, String reportedByUser) throws TasteSyncException {
        userDao.submitUserReport(userId, reportText, reportedUser,
            reportedByUser);
    }

    @Override
    public boolean submitMyProfileAboutMe(String userId, String aboutMeText)
        throws TasteSyncException {
        return userDao.submitMyProfileAboutMe(userId, aboutMeText);
    }

    @Override
    public List<TSUserProfileObj> showProfileFollowing(String userId)
        throws TasteSyncException {
        return userDao.showProfileFollowing(userId);
    }

    @Override
    public List<TSUserProfileObj> showProfileFollowers(String userId)
        throws TasteSyncException {
        return userDao.showProfileFollowers(userId);
    }

    @Override
    public boolean getFollowStatus(String followeeUserId, String followerUserId)
        throws TasteSyncException {
        return userDao.getFollowStatus(followeeUserId, followerUserId);
    }

    @Override
    public void followUserStatusChange(String followeeUserId,
        String followerUserId, String statusFlag) throws TasteSyncException {
        userDao.followUserStatusChange(followeeUserId, followerUserId,
            statusFlag);
    }

    @Override
    public List<TSUserObj> showProfileFriends(String userId)
        throws TasteSyncException {
        return userDao.showProfileFriends(userId);
    }

    @Override
    public void submitTrustedFriendStatusChange(String userId,
        String dest_user_id, String trustedFriendStatus)
        throws TasteSyncException {
        userDao.submitTrustedFriendStatusChange(userId, dest_user_id,
            trustedFriendStatus);
    }

    @Override
    public void submitSettingscontactUs(String userId, String order, String desc)
        throws TasteSyncException {
        userDao.submitSettingscontactUs(userId, order, desc);
    }

    @Override
    public TSAboutObj showAboutTastesync(String aboutId)
        throws TasteSyncException {
        return userDao.showAboutTastesync(aboutId);
    }

    @Override
    public void submitSignupDetail(TSAskSubmitLoginObj askObj)
        throws TasteSyncException {
        userDao.submitSignupDetail(askObj);
    }

    @Override
    public int showTrustedFriend(String userId, String dest_user_id)
        throws TasteSyncException {
        return userDao.showTrustedFriend(userId, dest_user_id);
    }

    @Override
    public void sendMessageToUser(String sender_ID, String recipient_ID,
        String content) throws TasteSyncException {
        userDao.sendMessageToUser(sender_ID, recipient_ID, content);
    }

    @Override
    public List<TSRestaurantObj> showRestaurantSuggestion(String key,
        String userId) throws TasteSyncException {
        return userDao.showRestaurantSuggestion(key, userId);
    }

    @Override
    public TSUserProfileObj getUserHomeProfile(String userId)
        throws TasteSyncException {
        return userDao.getUserHomeProfile(userId);
    }

    @Override
    public List<TSUserProfileRestaurantsObj> getUserProfileRestaurants(
        String userId, int type, int from, int to) throws TasteSyncException {
        return userDao.getUserProfileRestaurants(userId, type, from, to);
    }

    @Override
    public void inviteFriend(String userId, String friendFBId)
        throws TasteSyncException {
        userDao.inviteFriend(userId, friendFBId);
    }

    @Override
    public void submitUserReport(String userId, String reportedUserId,
        String reason) throws TasteSyncException {
        userDao.submitUserReport(userId, reportedUserId, reason);
    }

    @Override
    public List<String> showInviteFriends(String userId)
        throws TasteSyncException {
        return userDao.showInviteFriends(userId);
    }

    @Override
    public TSInitObj getAllData() throws TasteSyncException {
        return userDao.getAllData();
    }

    @Override
    public TSFacebookUserDataObj getUserId(String userID)
        throws TasteSyncException {
        return userDao.getUserId(userID);
    }

    @Override
    public List<TSCityObj> getCityName(String key) throws TasteSyncException {
        return userDao.getCityName(key);
    }

    @Override
    public List<TSGlobalObj> getCity(String key) throws TasteSyncException {
        return userDao.getCity(key);
    }

    @Override
    public String getOAuthToken(String userId, String deviceToken)
        throws TasteSyncException {
        return userDao.getOAuthToken(userId, deviceToken);
    }

    @Override
    public TSUserObj getUserInformationByEmail(String email)
        throws TasteSyncException {
        return userDao.getUserInformationByEmail(email);
    }

    @Override
    public void initUserSettings(String userId) throws TasteSyncException {
        userDao.initUserSettings(userId);
    }
}
