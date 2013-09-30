package com.tastesync.common;

import com.tastesync.db.queries.CityQueries;
import com.tastesync.db.queries.UserQueries;

import com.tastesync.model.objects.TSCityObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;

import com.tastesync.util.CommonFunctionsUtil;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;


public class MySQL {
    //Check email exist in the system
    public boolean checkEmailExist(Connection connection, String email)
        throws SQLException {
        boolean check = false;
        TSUserObj user = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_CHECK_EMAIL_SELECT_SQL);
            statement.setString(1, email);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                user = new TSUserObj();
                MySQL.mapResultsetRowToTSUserVO(user, resultset);
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        if (user != null) {
            check = true;
        }

        return check;
    }

    //Get city information (by city id)
    public TSCityObj getCityInforByStateAndCityName(Connection connection,
        String state, String city_name) throws SQLException {
        TSCityObj city = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(CityQueries.CITY_STATE_SELECT_SQL);
            statement.setString(1, state);
            statement.setString(2, city_name);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                city = new TSCityObj();
                MySQL.mapResultsetRowToTSCityVO(city, resultset);
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return city;
    }

    public TSCityObj addDeviceToken(Connection connection, String userID,
        String devicetoken) throws SQLException {
        TSCityObj city = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;
        boolean check = true;
        String dateNowAppend = CommonFunctionsUtil.getCurrentDatetimeAppendField();

        try {
            statement = connection.prepareStatement(UserQueries.USER_DEVICE_SELECT_SQL);
            statement.setString(1, userID);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                check = false;
            }

            statement.close();

            if (check) {
                statement = connection.prepareStatement(UserQueries.USER_DEVICE_INSERT_SQL);
                statement.setString(1, userID);
                statement.setString(2, devicetoken);
                statement.setString(3, dateNowAppend);
                statement.setString(4, dateNowAppend);
                statement.execute();
                statement.close();
            }
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return city;
    }

    public TSCityObj getCityInforByCityID(Connection connection, String cityID)
        throws SQLException {
        TSCityObj city = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(CityQueries.CITY_SELECT_SQL);
            statement.setString(1, cityID);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                city = new TSCityObj();
                MySQL.mapResultsetRowToTSCityVO(city, resultset);
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return city;
    }

    public TSUserObj getUserInformationByEmail(Connection connection,
        String email) throws SQLException {
        TSUserObj user = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_CHECK_EMAIL_STATUS_SELECT_SQL);
            statement.setString(1, email);
            statement.setString(2, String.valueOf("e"));
            resultset = statement.executeQuery();

            if (resultset.next()) {
                user = new TSUserObj();
                MySQL.mapResultsetRowToTSUserVO(user, resultset);
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return user;
    }

    //not used!!
    public String getUserIDFromUserLogID(Connection connection, String userLogID)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_ID_FROM_USERLOG_SELECT_SQL);
            statement.setString(1, userLogID);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                return CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                        "users_log.USER_ID"));
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return null;
    }

    public String getAutoUserLogByUserId(Connection connection, String UserId)
        throws SQLException {
        String userId = "";
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_ID_FROM_USERLOG_SELECT_SQL);
            statement.setString(1, UserId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                userId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "users_log.USER_ID"));
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return userId;
    }

    public boolean checkFBUserDataExist(Connection connection, String user_fb_id)
        throws SQLException {
        boolean check = false;
        TSFacebookUserDataObj fb_user_data = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.FACEBOOK_SELECT_SQL);
            statement.setString(1, user_fb_id);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                fb_user_data = new TSFacebookUserDataObj();
                MySQL.mapResultsetRowToTSFacebookVO(fb_user_data, resultset);
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        if (fb_user_data != null) {
            check = true;
        }

        return check;
    }

    public TSUserObj getUserInformationByFacebookID(Connection connection,
        String user_fb_id) throws SQLException {
        TSUserObj user = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_FBID_SELECT_SQL);
            statement.setString(1, user_fb_id);
            statement.setString(2, String.valueOf("e"));
            resultset = statement.executeQuery();

            if (resultset.next()) {
                user = new TSUserObj();
                MySQL.mapResultsetRowToTSUserVO(user, resultset);
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return user;
    }

    //Get user information (by user_id)
    public TSUserObj getUserInformation(Connection connection, String user_id)
        throws SQLException {
        TSUserObj user = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_STATUS_SELECT_SQL);
            statement.setString(1, user_id);
            statement.setString(2, String.valueOf("e"));
            resultset = statement.executeQuery();

            if (resultset.next()) {
                user = new TSUserObj();
                MySQL.mapResultsetRowToTSUserVO(user, resultset);
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return user;
    }

    public TSFacebookUserDataObj getFacebookUserInformation(
        Connection connection, String User_FB_ID) throws SQLException {
        TSFacebookUserDataObj user = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.FACEBOOK_SELECT_SQL);
            statement.setString(1, User_FB_ID);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                user = new TSFacebookUserDataObj();
                MySQL.mapResultsetRowToTSFacebookVO(user, resultset);
            }

            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return user;
    }

    public int getIDUserSocialNetworkConnection(Connection connection,
        int usncOrder) throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_SOCIAL_NETWORK_CONNECTION_ID_SELECT_SQL);
            statement.setInt(1, usncOrder);
            resultset = statement.executeQuery();

            int ret = 0;

            if (resultset.next()) {
                ret = Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString(
                                "user_social_network_connection.USNC_ID")));
            }

            statement.close();

            return ret;
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public int getIDAutoPublishing(Connection connection, int apOrder)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_SOCIAL_APID_SELECT_SQL);
            statement.setInt(1, apOrder);
            resultset = statement.executeQuery();

            int retValue = 0;

            if (resultset.next()) {
                retValue = Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString("auto_publishing.AP_ID")));
            }

            statement.close();

            return retValue;
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public boolean checkUserUSNC(Connection connection, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_USNC_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            int i = 0;

            if (resultset.next()) {
                i++;
            }

            statement.close();
            System.out.println("Number row:" + i);

            if (i != 0) {
                return true;
            } else {
                return false;
            }
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public boolean checkUserUSNC_AP(Connection connection, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_SOCIAL_APID_USERID_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            int i = 0;

            if (resultset.next()) {
                i++;
            }

            statement.close();
            System.out.println("Number row:" + i);

            if (i != 0) {
                return true;
            } else {
                return false;
            }
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public boolean checkNotificationDescriptor(Connection connection,
        String userId) throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_NOTIFICATION_SETTINGS_ID_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            int i = 0;

            if (resultset.next()) {
                i++;
            }

            statement.close();
            System.out.println("Number row:" + i);

            if (i != 0) {
                return true;
            } else {
                return false;
            }
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public int getIDNotificationDescriptor(Connection connection, int nsId_Order)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.NOTIFICATION_DESCRIPTOR_SELECT_SQL);
            statement.setInt(1, nsId_Order);
            resultset = statement.executeQuery();

            int value = 0;

            if (resultset.next()) {
                value = Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString("notification_descriptor.NSID")));
            }

            statement.close();

            return value;
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public boolean checkPrivacyDescriptor(Connection connection, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_PRIVACY_SETTINGS_ID_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            int i = 0;

            if (resultset.next()) {
                i++;
            }

            statement.close();

            if (i != 0) {
                return true;
            } else {
                return false;
            }
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public int getIDPrivacySettings(Connection connection, int privacyIdOrder)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.PRIVACY_DESCRIPTOR_SELECT_SQL);
            statement.setInt(1, privacyIdOrder);
            resultset = statement.executeQuery();

            int value = 0;

            if (resultset.next()) {
                value = Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString("privacy_descriptor.PRIVACY_ID")));
            }

            statement.close();

            return value;
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public int getIDContactSettings(Connection connection, int contact_order)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.CONTACT_SETTINGS_DESCRIPTOR_SELECT_SQL);
            statement.setInt(1, contact_order);
            resultset = statement.executeQuery();

            int contactId = 0;

            if (resultset.next()) {
                contactId = Integer.parseInt(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString(
                                "contact_settings_descriptor.CONTACT_ID")));
            }

            statement.close();

            return contactId;
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public String getDescAbout(Connection connection, int ID_ORDER)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.ABOUT_TASTESYNC_ELEMENT_DESCRIPTOR_SELECT_SQL);
            statement.setInt(1, ID_ORDER);
            resultset = statement.executeQuery();

            String value = null;

            if (resultset.next()) {
                value = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "about_tastesync_element_descriptor.DESCRIPTION"));
            }

            statement.close();

            return value;
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public boolean checkUserFriendTasteSync(Connection connection,
        String userId, String destUserId) throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(UserQueries.USER_FRIEND_TASTESYNC_CHECK_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, destUserId);
            resultset = statement.executeQuery();

            int i = 0;

            if (resultset.next()) {
                i++;
            }

            statement.close();

            if (i != 0) {
                return true;
            } else {
                return false;
            }
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public static void mapResultsetRowToTSUserVO(TSUserObj tsUserObj,
        ResultSet resultset) throws SQLException {
        tsUserObj.setUserId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("users.USER_ID")));
        tsUserObj.setTsUserId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("users.TS_USER_ID")));
        tsUserObj.setTsUserEmail(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("users.TS_USER_EMAIL")));
        //tsUserObj.setTsUserPw(CommonFunctionsUtil.getModifiedValueString(resultset.getString("users.TS_USER_PW")));
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

    public static void mapResultsetRowToTSCityVO(TSCityObj tsCityObj,
        ResultSet resultset) throws SQLException {
        tsCityObj.setCityId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("cities.city_id")));
        tsCityObj.setCountry(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("cities.country")));
        tsCityObj.setState(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("cities.state")));
        tsCityObj.setCity(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("cities.city")));
    }

    public static void mapResultsetRowToTSFacebookVO(
        TSFacebookUserDataObj tsFacebookUserDataObj, ResultSet resultset)
        throws SQLException {
        tsFacebookUserDataObj.setId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.User_FB_ID")));
        tsFacebookUserDataObj.setName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.NAME")));
        tsFacebookUserDataObj.setFirstName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.FIRST_NAME")));
        tsFacebookUserDataObj.setMiddleName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.MIDDLE_NAME")));
        tsFacebookUserDataObj.setLastName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.LAST_NAME")));
        tsFacebookUserDataObj.setGender(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.GENDER")));
        tsFacebookUserDataObj.setLocale(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.LOCALE")));
        tsFacebookUserDataObj.setLink(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.LINK")));
        tsFacebookUserDataObj.setUserName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.USERNAME")));
        tsFacebookUserDataObj.setAgeRange(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.AGE_RANGE")));
        tsFacebookUserDataObj.setBirthday(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.BIRTHDAY")));
        tsFacebookUserDataObj.setThirdPartyId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.THIRD_PARTY_ID")));
        tsFacebookUserDataObj.setFriendlists(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.FRIENDLISTS")));
        tsFacebookUserDataObj.setInstalled(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.INSTALLED")));
        tsFacebookUserDataObj.setTimezone(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.TIMEZONE")));
        tsFacebookUserDataObj.setUpdatedTime(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.UPDATE_TIME")));
        tsFacebookUserDataObj.setVerified(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.VERIFIED")));
        tsFacebookUserDataObj.setDevices(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.DEVICES")));
        tsFacebookUserDataObj.setEmail(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.EMAIL")));
        tsFacebookUserDataObj.setHometown(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.HOMETOWN")));
        tsFacebookUserDataObj.setLocation(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.LOCATION")));
        tsFacebookUserDataObj.setPicture(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.PICTURE")));
        tsFacebookUserDataObj.setRelationshipStatus(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.RELATIONSHIP_STATUS")));
        tsFacebookUserDataObj.setCheckins(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.CHECKINS")));
        tsFacebookUserDataObj.setFriends(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.FRIENDS")));
        tsFacebookUserDataObj.setLikes(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.LIKES")));
        tsFacebookUserDataObj.setPermissions(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.PERMISSIONS")));
        tsFacebookUserDataObj.setPermissions(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("facebook_user_data.PERMISSIONS")));
    }

    public void mapResultsetRowToTSRestaurantVO(
        TSRestaurantObj tsRestaurantObj, ResultSet resultset)
        throws SQLException {
        tsRestaurantObj.setRestaurantId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_ID")));

        tsRestaurantObj.setFactualId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.FACTUAL_ID")));

        tsRestaurantObj.setRestaurantName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_NAME")));

        tsRestaurantObj.setFactualRating(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.FACTUAL_RATING")));

        tsRestaurantObj.setPriceRange(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.PRICE_RANGE")));

        tsRestaurantObj.setRestaurantCityId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_CITY_ID")));

        tsRestaurantObj.setRestaurantHours(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_HOURS")));

        tsRestaurantObj.setRestaurantLat(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_LAT")));

        tsRestaurantObj.setRestaurantLon(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.RESTAURANT_LON")));

        tsRestaurantObj.setSumVoteCount(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.SUM_VOTE_COUNT")));

        tsRestaurantObj.setSumVoteValue(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.SUM_VOTE_VALUE")));

        tsRestaurantObj.setTbdOpenTableId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("restaurant.TBD_OPENTABLE_ID")));
    }

    public static TSUserProfileRestaurantsObj getTSUserProfileRestaurantsObjFromRS(
        Connection connection, ResultSet resultset) throws SQLException {
        TSUserProfileRestaurantsObj restaurant = new TSUserProfileRestaurantsObj();
        restaurant.setRestauarntId(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("RESTAURANT_ID")));
        restaurant.setRestaurantName(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("RESTAURANT_NAME")));

        restaurant.setPrice(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("PRICE_RANGE")));
        restaurant.setRestaurantRating(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("FACTUAL_RATING")));
        restaurant.setRestaurantLat(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("RESTAURANT_LAT")));
        restaurant.setRestaurantLong(CommonFunctionsUtil.getModifiedValueString(
                resultset.getString("RESTAURANT_LON")));

        PreparedStatement statement = null;
        ResultSet rs = null;

        try {
            statement = connection.prepareStatement(UserQueries.CITIES_SELECT_SQL);
            statement.setString(1,
                CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                        "RESTAURANT_CITY_ID")));
            rs = statement.executeQuery();

            TSCityObj city = new TSCityObj();

            if (rs.next()) {
                mapResultsetRowToTSCityVO(city, rs);
            }

            restaurant.setRestaurantCity(city);
            statement.close();

            statement = connection.prepareStatement(UserQueries.RESTAURANT_CUISINE_SELECT_SQL);
            statement.setString(1,
                CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                        "RESTAURANT_ID")));
            rs = statement.executeQuery();

            if (rs.next()) {
                String cuisine_id = rs.getString("tier2_cuisine_id");

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(UserQueries.CUISINE_TIER2_DESCRIPTOR_SELECT_SQL);
                statement.setString(1, cuisine_id);
                rs = statement.executeQuery();

                if (rs.next()) {
                    restaurant.setCuisineTier2Name(rs.getString("CUISINE_DESC"));
                }

                statement.close();
            }

            if (statement != null) {
                statement.close();
            }
        } catch (SQLException e) {
            e.printStackTrace();
            throw e;
        } finally {
            if (statement != null) {
                try {
                    statement.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }
            }
        }

        return restaurant;
    }
}
