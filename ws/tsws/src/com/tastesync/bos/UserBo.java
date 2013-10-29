package com.tastesync.bos;

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


public interface UserBo {
    UserResponse login(String email, String password) throws TasteSyncException;

    UserResponse login_fb(TSListFacebookUserDataObj list_user_profile)
        throws TasteSyncException;

    boolean logout(String userId, String deviceToken) throws TasteSyncException;

    void setStatus(String userId, String status) throws TasteSyncException;

    String loginAccount(String userId) throws TasteSyncException;

    List<TSUserObj> selectUsers() throws TasteSyncException;

    TSUserObj selectUser(String userId) throws TasteSyncException;

    void updateSettingsPrivacy(TSListPrivacySettingsObj privacySettingObj)
        throws TasteSyncException;

    TSListPrivacySettingsObj showSettingsPrivacy(String userId)
        throws TasteSyncException;

    void updateSettingsNotifications(
        TSListNotificationSettingsObj notificationSetting)
        throws TasteSyncException;

    TSListNotificationSettingsObj showSettingsNotifications(String userId)
        throws TasteSyncException;

    TSListSocialSettingObj showSettingsSocial(String userId)
        throws TasteSyncException;

    void updateSettingsAutoPublishSettings(
        TSListSocialSettingObj social_setting_obj) throws TasteSyncException;

    void submitSettingscontactUs(String userId, String order, String desc)
        throws TasteSyncException;

    TSAboutObj showAboutTastesync(String aboutId) throws TasteSyncException;

    boolean submitMyProfileAboutMe(String userId, String aboutMeText)
        throws TasteSyncException;

    void submitUserReport(String userId, String reportText,
        String reportedUser, String reportedByUser) throws TasteSyncException;

    List<TSUserProfileObj> showProfileFollowing(String userId)
        throws TasteSyncException;

    List<TSUserProfileObj> showProfileFollowers(String userId)
        throws TasteSyncException;

    List<TSUserObj> showProfileFriends(String userId) throws TasteSyncException;

    List<String> showInviteFriends(String userId) throws TasteSyncException;

    boolean getFollowStatus(String followeeUserId, String followerUserId)
        throws TasteSyncException;

    void followUserStatusChange(String followeeUserId, String followerUserId,
        String statusFlag) throws TasteSyncException;

    void submitTrustedFriendStatusChange(String userId, String dest_user_id,
        String trustedFriendStatus) throws TasteSyncException;

    public void submitSignupDetail(TSAskSubmitLoginObj askObj)
        throws TasteSyncException;

    int showTrustedFriend(String userId, String dest_user_id)
        throws TasteSyncException;

    void sendMessageToUser(String sender_ID, String recipient_ID, String content)
        throws TasteSyncException;

    List<TSRestaurantObj> showRestaurantSuggestion(String key, String userId)
        throws TasteSyncException;

    TSUserProfileObj getUserHomeProfile(String userId)
        throws TasteSyncException;

    List<TSUserProfileRestaurantsObj> getUserProfileRestaurants(String userId,
        int type, int from, int to) throws TasteSyncException;

    void inviteFriend(String userId, String friendFBId)
        throws TasteSyncException;

    void submitUserReport(String userId, String reportedUserId, String reason)
        throws TasteSyncException;

    TSInitObj getAllData() throws TasteSyncException;

    TSFacebookUserDataObj getUserId(String userID) throws TasteSyncException;

    List<TSCityObj> getCityName(String key) throws TasteSyncException;

    List<TSGlobalObj> getCity(String key) throws TasteSyncException;

    String getOAuthToken(String userId, String deviceToken)
        throws TasteSyncException;

    TSUserObj getUserInformationByEmail(String email) throws TasteSyncException;

    void initUserSettings(String userId) throws TasteSyncException;
}
