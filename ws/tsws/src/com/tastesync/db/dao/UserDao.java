package com.tastesync.db.dao;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSNotificationSettingsObj;
import com.tastesync.model.objects.TSPrivacySettingsObj;
import com.tastesync.model.objects.TSSocialSettingsObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;

import java.util.List;


public interface UserDao {
    TSUserObj login(String email, String password);

    void logout(String userId) throws TasteSyncException;

    TSUserObj selectUser(String userId) throws TasteSyncException;

    List<TSUserObj> selectUsers() throws TasteSyncException;

    void updateSettingsPrivacy(String userId, String[] idList, String[] flagList)
        throws TasteSyncException;

    TSPrivacySettingsObj[] showSettingsPrivacy(String userId)
        throws TasteSyncException;

    void updateSettingsNotificationsRecoMessage(String userId, String[] idList,
        String[] phoneFlagList, String[] emailFlagList)
        throws TasteSyncException;

    TSNotificationSettingsObj[] showSettingsNotifications(String userId)
        throws TasteSyncException;

    TSSocialSettingsObj showSettingsSocial(String userId)
        throws TasteSyncException;

    void updateSettingsAutoPublishSettings(String userId,
        String autoPublishingId, String socialNetworkId, String statusFlag)
        throws TasteSyncException;

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