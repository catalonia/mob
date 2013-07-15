package com.tastesync.bos;

import com.tastesync.db.dao.UserDao;
import com.tastesync.db.dao.UserDaoImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
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
    public TSListSocialSettingObj showSettingsSocial(String userId)
        throws TasteSyncException {
        return userDao.showSettingsSocial(userId);
    }

    @Override
    public Response updateSettingsAutoPublishSettings(TSListSocialSettingObj social_setting_obj)
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
    public boolean submitMyProfileAboutMe(String userId, String aboutMeText)
        throws TasteSyncException {
         return userDao.submitMyProfileAboutMe(userId, aboutMeText);
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
    public boolean getFollowStatus(String followeeUserId, String followerUserId)
			throws TasteSyncException
	{
    	return userDao.getFollowStatus(followeeUserId, followerUserId);
	}
    
    @Override
    public void followUserStatusChange(String followeeUserId,
        String followerUserId, String statusFlag) throws TasteSyncException {
        userDao.followUserStatusChange(followeeUserId, followerUserId,
            statusFlag);
    }

    @Override
    public List<TSUserObj> showMyProfileFriends(String userId)
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
    public List<TSUserObj> showProfileFriends(String userId)
        throws TasteSyncException {
        return userDao.showProfileFriends(userId);
    }

    @Override
    public boolean submitTrustedFriendStatusChange(String userId,
        String dest_user_id, String trustedFriendStatus)
        throws TasteSyncException {
        return userDao.submitTrustedFriendStatusChange(userId, dest_user_id,
            trustedFriendStatus);
    }

	@Override
	public Response submitSettingscontactUs(String userId, String order,
			String desc) throws TasteSyncException {
		return userDao.submitSettingscontactUs(userId, order, desc);
	}

	@Override
	public Response showAboutTastesync() throws TasteSyncException {
		return userDao.showAboutTastesync();
	}

	@Override
    public boolean submitSignupDetail(TSAskSubmitLoginObj askObj) throws TasteSyncException
    {
    	return userDao.submitSignupDetail(askObj);
    }
	
	@Override
    public int showTrustedFriend(String userId, String dest_user_id) throws TasteSyncException
    {
		return userDao.showTrustedFriend(userId, dest_user_id);
    }
	
	@Override
	public boolean sendMessageToUser(String sender_ID, String recipient_ID, String content) 
	    	throws TasteSyncException
	{
		return userDao.sendMessageToUser(sender_ID, recipient_ID, content);
	}
	
	@Override
	public List<TSRestaurantObj> showRestaurantSuggestion(String key, String userId) throws TasteSyncException
	{
		return userDao.showRestaurantSuggestion(key, userId);
	}
	
	
	@Override
	public TSUserProfileObj getUserHomeProfile(String userId) throws TasteSyncException
	{
		return userDao.getUserHomeProfile(userId);
	}
	
	@Override
	public List<TSUserProfileRestaurantsObj> getUserProfileRestaurants(String userId,
	int type, int from, int to)throws TasteSyncException
	{
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
}
