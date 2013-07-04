package com.tastesync.bos;

import com.tastesync.db.dao.UserDao;
import com.tastesync.db.dao.UserDaoImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSListFacebookUserDataObj;
import com.tastesync.model.objects.TSListNotificationSettingsObj;
import com.tastesync.model.objects.TSListPrivacySettingsObj;
import com.tastesync.model.objects.TSSocialSettingsObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;
import com.tastesync.model.response.UserResponse;

import java.util.List;

import javax.ws.rs.core.Response;


public class UserBoImpl implements UserBo {
    private UserDao userDao = new UserDaoImpl();

    @Override
    public UserResponse login(String email, String password) throws TasteSyncException{
        return userDao.login(email, password);
    }

	@Override
	public UserResponse login_fb(TSListFacebookUserDataObj list_user_profile)
			throws TasteSyncException {
		return userDao.login_fb(list_user_profile);
	}
    
    @Override
    public boolean logout(String userId) throws TasteSyncException {
        return userDao.logout(userId);
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
    public boolean updateSettingsPrivacy(TSListPrivacySettingsObj privacySettingObj) throws TasteSyncException {
        return userDao.updateSettingsPrivacy(privacySettingObj);
    }

    @Override
    public TSListPrivacySettingsObj showSettingsPrivacy(String userId)
        throws TasteSyncException {
        return userDao.showSettingsPrivacy(userId);
    }

    @Override
    public boolean updateSettingsNotifications(TSListNotificationSettingsObj notificationSetting)
        throws TasteSyncException {
        return userDao.updateSettingsNotificationsRecoMessage(notificationSetting);
    }

    @Override
    public TSListNotificationSettingsObj showSettingsNotifications(String userId)
        throws TasteSyncException {
        return userDao.showSettingsNotifications(userId);
    }

    @Override
    public TSSocialSettingsObj showSettingsSocial(String userId)
        throws TasteSyncException {
        return userDao.showSettingsSocial(userId);
    }

    @Override
    public Response updateSettingsAutoPublishSettings(TSSocialSettingsObj social_setting_obj)
        throws TasteSyncException {
        return userDao.updateSettingsAutoPublishSettings(social_setting_obj);
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
