package com.tastesync.bos;

import com.tastesync.db.dao.UserDao;
import com.tastesync.db.dao.UserDaoImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSNotificationSettingsObj;
import com.tastesync.model.objects.TSPrivacySettingsObj;
import com.tastesync.model.objects.TSSocialSettingsObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;

import java.util.List;

import javax.ws.rs.core.Response;


public class UserBoImpl implements UserBo {
    private UserDao userDao = new UserDaoImpl();

    @Override
    public TSUserObj login(String email, String password) throws TasteSyncException{
        return userDao.login(email, password);
    }

    @Override
    public void logout(String userId) throws TasteSyncException {
        userDao.logout(userId);
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
    public void insertUsers(TSUserObj tsUserObj) {
        // TODO Auto-generated method stub
    }

    @Override
    public void updateSettingsPrivacy(String userId, String[] idList,
        String[] flagList) throws TasteSyncException {
        userDao.updateSettingsPrivacy(userId, idList, flagList);
    }

    @Override
    public TSPrivacySettingsObj[] showSettingsPrivacy(String userId)
        throws TasteSyncException {
        return userDao.showSettingsPrivacy(userId);
    }

    @Override
    public void updateSettingsNotifications(String userId, String[] idList,
        String[] phoneFlagList, String[] emailFlagList)
        throws TasteSyncException {
        userDao.updateSettingsNotificationsRecoMessage(userId, idList,
            phoneFlagList, emailFlagList);
    }

    @Override
    public TSNotificationSettingsObj[] showSettingsNotifications(String userId)
        throws TasteSyncException {
        return userDao.showSettingsNotifications(userId);
    }

    @Override
    public TSSocialSettingsObj showSettingsSocial(String userId)
        throws TasteSyncException {
        return userDao.showSettingsSocial(userId);
    }

    @Override
    public void updateSettingsAutoPublishSettings(String userId,
        String autoPublishingId, String socialNetworkId, String statusFlag)
        throws TasteSyncException {
        userDao.updateSettingsAutoPublishSettings(userId, autoPublishingId,
            socialNetworkId, statusFlag);
    }

    @Override
    public void submitUserReport(String userId, String reportText,
        String reportedUser, String reportedByUser) throws TasteSyncException {
        userDao.submitUserReport(userId, reportText, reportedUser,
            reportedByUser);
    }

    @Override
    public TSUserProfileObj showMyProfileHome(String userId)
        throws TasteSyncException {
        return userDao.showMyProfileHome(userId);
    }

    @Override
    public void submitMyProfileAboutMe(String userId, String aboutMeText)
        throws TasteSyncException {
        userDao.submitMyProfileAboutMe(userId, aboutMeText);
    }

    @Override
    public List<TSFacebookUserDataObj> showProfileFollowing(String userId)
        throws TasteSyncException {
        return userDao.showProfileFollowing(userId);
    }

    @Override
    public List<TSFacebookUserDataObj> showProfileFollowers(String userId)
        throws TasteSyncException {
        return userDao.showProfileFollowers(userId);
    }

    @Override
    public void followUserStatusChange(String followeeUserId,
        String followerUserId, String statusFlag) throws TasteSyncException {
        userDao.followUserStatusChange(followeeUserId, followerUserId,
            statusFlag);
    }

    @Override
    public List<TSFacebookUserDataObj> showMyProfileFriends(String userId)
        throws TasteSyncException {
        return userDao.showMyProfileFriends(userId);
    }

    @Override
    public List<TSUserProfileRestaurantsObj> showProfileRestaurants(
        String userId) throws TasteSyncException {
        return userDao.showProfileRestaurants(userId);
    }

    @Override
    public TSUserProfileObj showUserProfileHome(String userId,
        String viewerUserId) throws TasteSyncException {
        return userDao.showUserProfileHome(userId, viewerUserId);
    }

    @Override
    public List<TSFacebookUserDataObj> showProfileFriends(String userId)
        throws TasteSyncException {
        return userDao.showProfileFriends(userId);
    }

    @Override
    public void submitTrustedFriendStatusChange(String userId,
        String viewerUserId, String trustedFriendStatus)
        throws TasteSyncException {
        userDao.submitTrustedFriendStatusChange(userId, viewerUserId,
            trustedFriendStatus);
    }
}
