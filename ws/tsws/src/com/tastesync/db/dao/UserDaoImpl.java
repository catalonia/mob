package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.UserQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSNotificationSettingsObj;
import com.tastesync.model.objects.TSPrivacySettingsObj;
import com.tastesync.model.objects.TSSocialSettingsObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;

import com.tastesync.util.CommonFunctionsUtil;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import java.util.ArrayList;
import java.util.List;


public class UserDaoImpl extends BaseDaoImpl implements UserDao {
    @Override
    public TSUserObj login(String email, String password) {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public void logout(String userId) throws TasteSyncException {
        // TODO Auto-generated method stub
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
                mapResultsetRowToTSUserVO(tsUserObj, resultset);
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

    private void mapResultsetRowToTSUserVO(TSUserObj tsUserObj,
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
                mapResultsetRowToTSUserVO(tsUserObj, resultset);
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
