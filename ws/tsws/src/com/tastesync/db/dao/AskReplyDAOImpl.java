package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.AskReplyQueries;
import com.tastesync.db.queries.RestaurantQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSNotifDidYouLikeObj;
import com.tastesync.model.objects.TSNotifFollowupQuestionObj;
import com.tastesync.model.objects.TSNotifMessageForYouObj;
import com.tastesync.model.objects.TSNotifRecoLikeObj;
import com.tastesync.model.objects.TSNotifRecoReplyObj;
import com.tastesync.model.objects.TSNotifRecorequestAnswerObj;
import com.tastesync.model.objects.TSNotifRecorequestNeededObj;
import com.tastesync.model.objects.TSRecoNotificationBaseObj;
import com.tastesync.model.objects.TSRestaurantBasicObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSUserProfileBasicObj;
import com.tastesync.model.objects.derived.TSRecoRequestNonAssignedObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendationsObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSRestaurantCusineTier2Obj;
import com.tastesync.model.objects.derived.TSRestaurantsForYouObj;
import com.tastesync.model.objects.derived.TSSenderUserObj;
import com.tastesync.model.vo.NotifRecoReplyVO;
import com.tastesync.model.vo.RecommendationsForYouVO;

import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;

import java.io.IOException;
import java.io.InputStream;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Properties;


public class AskReplyDAOImpl extends BaseDaoImpl implements AskReplyDAO {
    @Override
    public String submitAskForRecommendationSearch(String userId,
        String[] cuisineTier1IdList, String[] cuisineTier2IdList,
        String[] priceIdList, String[] themeIdList,
        String[] whoareyouwithIdList, String[] typeOfRestaurantIdList,
        String[] occasionIdList, String neighborhoodId, String cityId,
        String stateName) throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            StringBuffer mergedTextBuffer = new StringBuffer();

            for (String cuisineId : cuisineTier1IdList) {
                mergedTextBuffer.append("cuisine tier1 s:");
                mergedTextBuffer.append(cuisineId).append("");
            }

            for (String cuisineId : cuisineTier2IdList) {
                mergedTextBuffer.append("cuisine tier2 s:");
                mergedTextBuffer.append(cuisineId).append("");
            }

            for (String priceId : priceIdList) {
                mergedTextBuffer.append("priceId s:");
                mergedTextBuffer.append(priceId).append("");
            }

            for (String themeId : themeIdList) {
                mergedTextBuffer.append("themeId s:");
                mergedTextBuffer.append(themeId).append("");
            }

            for (String whoareyouwithId : whoareyouwithIdList) {
                mergedTextBuffer.append("whoareyouwithId s:");
                mergedTextBuffer.append(whoareyouwithId).append("");
            }

            for (String typeOfRestaurantId : typeOfRestaurantIdList) {
                mergedTextBuffer.append("typeOfRestaurantId s:");
                mergedTextBuffer.append(typeOfRestaurantId).append("");
            }

            for (String occasionId : occasionIdList) {
                mergedTextBuffer.append("occasionId s:");
                mergedTextBuffer.append(occasionId).append("");
            }

            String recoRequestId = userId +
                CommonFunctionsUtil.generateUniqueKey();

            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_INSERT_SQL);

            String templateString = createRecoRequestTemplateText(cuisineTier1IdList,
                    cuisineTier2IdList, priceIdList, themeIdList,
                    whoareyouwithIdList, typeOfRestaurantIdList,
                    occasionIdList, neighborhoodId, cityId, stateName);

            statement.setString(1, recoRequestId);
            statement.setString(2, userId);
            statement.setTimestamp(3,
                CommonFunctionsUtil.getCurrentDateTimestamp());
            statement.setString(4, TSConstants.EMPTY_STRING);
            statement.setString(5, mergedTextBuffer.toString());
            statement.setString(6, templateString);

            statement.executeUpdate();

            statement.close();

            for (String cuisineId : cuisineTier1IdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_CUISINE_TIER1_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, cuisineId);
                statement.executeUpdate();
                statement.close();
            }

            for (String cuisineId : cuisineTier2IdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_CUISINE_TIER2_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, cuisineId);
                statement.executeUpdate();

                statement.close();
            }

            for (String priceId : priceIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_PRICE_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, priceId);
                statement.executeUpdate();

                statement.close();
            }

            for (String occasionId : occasionIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_OCCASION_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, occasionId);
                statement.executeUpdate();

                statement.close();
            }

            for (String themeId : themeIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_THEME_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, themeId);
                statement.executeUpdate();

                statement.close();
            }

            for (String whoareyouwithId : whoareyouwithIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_WHOAREYOUWITH_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, whoareyouwithId);
                statement.executeUpdate();

                statement.close();
            }

            for (String typeOfRestaurantId : typeOfRestaurantIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TYPEOFREST_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, typeOfRestaurantId);
                statement.executeUpdate();

                statement.close();
            }

            if (cityId != null) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_LOCATION_INSERT_SQL);
                statement.setString(1, cityId);
                statement.setString(2, neighborhoodId);
                statement.setString(3, recoRequestId);
                statement.executeUpdate();
                statement.close();
            }

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(AskReplyQueries.USER_RECO_SUPPPLY_TIER_INSERT_SQL);
            statement.setString(1, userId);
            statement.executeUpdate();

            statement.close();

            statement = connection.prepareStatement(AskReplyQueries.USER_RECO_DEMAND_TIER_INSERT_SQL);
            statement.setString(1, userId);
            statement.executeUpdate();

            statement.close();

            tsDataSource.commit();

            return recoRequestId;
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    //TODO need to load in static block
    private String createRecoRequestTemplateText(String[] cuisineTier1IdList,
        String[] cuisineTier2IdList, String[] priceIdList,
        String[] themeIdList, String[] whoareyouwithIdList,
        String[] typeOfRestaurantIdList, String[] occasionIdList,
        String neighborhoodId, String cityId, String stateName)
        throws TasteSyncException {
        String templateString = null;
        InputStream ifile = null;
        Properties prop = new Properties();

        try {
            ClassLoader loader = this.getClass().getClassLoader();
            //loader.getResourceAsStream("Resources/SomeConfig.xml");
            ifile = loader.getResourceAsStream("/Resources/config.properties");

            //load a properties file
            prop.load(ifile);

            //TODO define the data with variable
            //get the property value and print it out
            System.out.println("search.cuisine.location=" +
                prop.getProperty("search.cuisine.location"));
            templateString = prop.getProperty("search.cuisine.location");

            //TODO use stringutil
        } catch (IOException ex) {
            ex.printStackTrace();
            throw new TasteSyncException(ex.getMessage());
        } finally {
            if (ifile != null) {
                try {
                    ifile.close();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }

        return templateString;
    }

    @Override
    public String showAskForRecommendationFriends(String recoRequestId)
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TEMPLATE_SENTENCES_SELECT_SQL);
            statement.setString(1, recoRequestId);
            resultset = statement.executeQuery();

            String recoRequestTemplateSentences = "";

            //only one result
            if (resultset.next()) {
                recoRequestTemplateSentences = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recorequest_user.RECO_REQUEST_TEMPLATE_SENTENCES"));
            }

            statement.close();

            return recoRequestTemplateSentences;
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public TSRecoRequestNonAssignedObj submitAskForRecommendationFriends(
        String userId, String recoRequestId, String recoRequestFriendText,
        String[] friendsFacebookIdList, String postRecoRequestOnFacebook)
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();
        TSRecoRequestNonAssignedObj tsRecoRequestNonAssignedObj = new TSRecoRequestNonAssignedObj();
        tsRecoRequestNonAssignedObj.setRecoRequestId(recoRequestId);

        //TODO Incomplete
        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            List<String> nonassignedFacebookIdList = new ArrayList<String>();

            for (String friendsFacebookId : friendsFacebookIdList) {
                statement = connection.prepareStatement(AskReplyQueries.CHECK_FB_USER_AS_TS_USER_SELECT_SQL);
                statement.setString(1, friendsFacebookId);
                resultset = statement.executeQuery();

                //only one result
                //-- Pick only those friends' facebook ID who are TS users
                if (resultset.next()) {
                    if (statement != null) {
                        statement.close();
                    }

                    statement = connection.prepareStatement(AskReplyQueries.USER_ID_FRM_FB_ID_SELECT_SQL);
                    statement.setString(1, friendsFacebookId);
                    resultset = statement.executeQuery();

                    String friendId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "users.user_id"));

                    if (statement != null) {
                        statement.close();
                    }

                    statement = connection.prepareStatement(AskReplyQueries.FRIEND_TRUSTED_FLAG_SELECT_SQL);
                    statement.setString(1, userId);
                    statement.setString(2, friendId);

                    resultset = statement.executeQuery();

                    String friendTrustedFlag = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "user_friend_tastesync.FRIEND_TRUSTED_FLAG"));

                    if (statement != null) {
                        statement.close();
                    }

                    statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TS_ASSIGNED_INSERT_SQL);
                    statement.setString(1, "N");
                    statement.setString(2, friendTrustedFlag);
                    statement.setString(3, "user-assigned-friend");
                    statement.setString(4, friendId);
                    statement.setString(5, "Y");
                    statement.setString(6, recoRequestId);
                    statement.executeUpdate();

                    if (statement != null) {
                        statement.close();
                    }
                } else {
                    nonassignedFacebookIdList.add(friendsFacebookId);
                    statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_NON_TS_ASSIGNED_INSERT_SQL);
                    statement.setString(1, recoRequestId);
                    statement.setString(2, friendsFacebookId);
                    statement.setString(3, "user-assigned-friend");
                    statement.setString(4, "N");
                    statement.setString(5, "N");
                    statement.setString(6, "N");
                    statement.executeUpdate();
                    statement.close();
                }
            }

            tsRecoRequestNonAssignedObj.setNonassignedFacebookIdList(nonassignedFacebookIdList);
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_UPDATE_SQL);
            statement.setString(1, recoRequestFriendText);
            statement.setString(2, recoRequestId);
            statement.setString(3, userId);
            statement.executeUpdate();

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                String facebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "users.user_fb_id"));

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.HISTORICAL_USER_SHARED_DATA_INSERT_SQL);

                //datetime userid random number
                statement.setString(1, facebookId);

                List<String> inputKeyStr = new ArrayList<String>();
                inputKeyStr.add(userId);
                statement.setString(2,
                    CommonFunctionsUtil.generateUniqueKey(inputKeyStr));
                statement.setTimestamp(3,
                    CommonFunctionsUtil.getCurrentDateTimestamp());
                statement.setString(4, recoRequestFriendText);
                statement.setString(5, "facebook_post");
                statement.setString(6, userId);

                statement.setString(1, userId);
                statement.executeUpdate();

                if (statement != null) {
                    statement.close();
                }
            } else {
                System.out.println("FB ser Id does not exist for user id=" +
                    userId);
            }

            statement = connection.prepareStatement(AskReplyQueries.USER_RECO_SUPPPLY_TIER_INSERT_SQL);
            statement.setString(1, userId);
            statement.executeUpdate();

            if (statement != null) {
                statement.close();
            }

            tsDataSource.commit();

            return tsRecoRequestNonAssignedObj;
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    public boolean submitSignupDetail(TSAskSubmitLoginObj askObj)
        throws TasteSyncException {
        return false;
    }

    @Override
    public TSRecommendeeUserObj showRecommendationsShowLikes(String recoLikeId)
        throws TasteSyncException {
        TSRecommendeeUserObj tsRecommendeeUserObj = null;
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AskReplyQueries.RECO_LIKE_SELECT_SQL);
            statement.setString(1, recoLikeId);
            resultset = statement.executeQuery();

            String replyId = null;
            String recommendeeUserId = null;
            String replyText = null;
            String recommendeeFacebookId = null;
            String recommendeeUserName = null;
            String recommendeeUserPhoto = null;

            if (resultset.next()) {
                replyId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "reco_like.reply_id"));

                recommendeeUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "reco_like.like_user_id"));

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_REPLY_USER_SELECT_SQL);
                statement.setString(1, replyId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    replyText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "recorequest_reply_user.reply_text"));
                }

                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);

                statement.setString(1, recommendeeUserId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    recommendeeFacebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "users.user_fb_id"));

                    if (statement != null) {
                        statement.close();
                    }

                    statement = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                    statement.setString(1, recommendeeFacebookId);
                    resultset = statement.executeQuery();

                    if (resultset.next()) {
                        recommendeeUserName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "facebook_user_data.name"));
                        recommendeeUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "facebook_user_data.picture"));
                    }

                    statement.close();
                }
            }

            statement = connection.prepareStatement(AskReplyQueries.RECO_LIKE_UPDATE_SQL);
            statement.setString(1, recoLikeId);
            statement.executeUpdate();
            statement.close();
            tsDataSource.commit();

            TSUserProfileBasicObj recommendeeUser = new TSUserProfileBasicObj();
            recommendeeUser.setName(recommendeeUserName);
            recommendeeUser.setPhoto(recommendeeUserPhoto);
            recommendeeUser.setUserId(recommendeeUserId);

            tsRecommendeeUserObj = new TSRecommendeeUserObj();
            tsRecommendeeUserObj.setRecommendeeUser(recommendeeUser);
            tsRecommendeeUserObj.setReplyId(replyId);
            tsRecommendeeUserObj.setReplyText(replyText);
            tsRecommendeeUserObj.setAddedPoints("4"); //TODO Constant

            return tsRecommendeeUserObj;
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public List<TSRestaurantBasicObj> showRecommendationDidYouLike(
        String recorequestId) throws TasteSyncException {
        List<TSRestaurantBasicObj> tsRestaurantObjList = new ArrayList<TSRestaurantBasicObj>();

        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        PreparedStatement statementInner = null;
        ResultSet resultset = null;

        ResultSet resultsetInner = null;

        String recommendedrestaurantsRestaurantId = null;
        String recommendedrestaurantsRestaurantName = null;

        try {
            connection = tsDataSource.getConnection();
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_RESTAURANT_SELECT_SQL);
            statement.setString(1, recorequestId);
            resultset = statement.executeQuery();

            while (resultset.next()) {
                recommendedrestaurantsRestaurantId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_id"));

                statementInner = connection.prepareStatement(AskReplyQueries.RESTAURANT_NAME_SELECT_SQL);
                statementInner.setString(1, recommendedrestaurantsRestaurantId);
                resultsetInner = statementInner.executeQuery();

                if (resultsetInner.next()) {
                    recommendedrestaurantsRestaurantName = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                "restaurant.restaurant_name"));
                }

                statementInner.close();

                TSRestaurantBasicObj tsRestaurantBasicObj = new TSRestaurantBasicObj();
                tsRestaurantBasicObj.setRestaurantId(recommendedrestaurantsRestaurantId);
                tsRestaurantBasicObj.setRestaurantName(recommendedrestaurantsRestaurantName);
                tsRestaurantObjList.add(tsRestaurantBasicObj);
            }

            statement.close();

            return tsRestaurantObjList;
        } catch (SQLException e) {
            e.printStackTrace();

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
            tsDataSource.closeConnection(connection, statementInner,
                resultsetInner);
        }
    }

    @Override
    public void submitRecommendationDidYouLikeLikes(String userId,
        String restaurantId, String likeFlag) throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            if ("1".equals(likeFlag)) {
                statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_FAV_INSERT_SQL);
                statement.setString(1, restaurantId);
                statement.setString(2, userId);
                statement.executeUpdate();
                statement.close();
            } else if ("0".equals(likeFlag)) {
                statement = connection.prepareStatement(RestaurantQueries.RESTAURANT_FAV_DELETE_SQL);
                statement.setString(1, restaurantId);
                statement.setString(2, userId);
                statement.executeUpdate();
                statement.close();
            } else {
                throw new TasteSyncException("Unknown value for likeFlag as " +
                    likeFlag);
            }

            statement = connection.prepareStatement(RestaurantQueries.REPLYID_RECOMMENDER_USER_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, restaurantId);
            resultset = statement.executeQuery();

            List<String> recommenderUserIdList = new ArrayList<String>();
            List<String> replyIdList = new ArrayList<String>();
            String recommenderUserIdValue = null;
            String replyIdValue = null;

            while (resultset.next()) {
                recommenderUserIdValue = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "user_restaurant_reco.RECOMMENDER_USER_ID"));
                replyIdValue = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "user_restaurant_reco.reply_id"));

                if (!recommenderUserIdList.contains(recommenderUserIdValue)) {
                    recommenderUserIdList.add(recommenderUserIdValue);
                }

                if (!replyIdList.contains(replyIdValue)) {
                    replyIdList.add(replyIdValue);
                }
            }

            statement.close();

            if ("1".equals(likeFlag)) {
                for (String recommenderUserId : recommenderUserIdList) {
                    statement = connection.prepareStatement(AskReplyQueries.COUNT_USER_POINTS_LOG_SELECT_SQL);

                    statement.setString(1, recommenderUserId);

                    statement.setString(2, userId);

                    statement.setString(3, restaurantId);

                    resultset = statement.executeQuery();

                    int rowCount = 0;

                    if (resultset.next()) {
                        rowCount = resultset.getInt(1);
                        statement.close();

                        if (rowCount == 0) {
                            //There should be way to add points only once!! - recommenderUserId
                            statement = connection.prepareStatement(AskReplyQueries.USER_POINTS_UPDATE_SQL);

                            statement.setInt(1, 4);

                            statement.setString(2, recommenderUserId);

                            statement.executeUpdate();

                            statement.close();

                            //insert into uer point table
                            statement = connection.prepareStatement(AskReplyQueries.USER_POINTS_INSERT_SQL);

                            statement.setInt(1, 4);

                            statement.setString(2, userId);

                            statement.setString(3, restaurantId);

                            statement.setTimestamp(4,
                                CommonFunctionsUtil.getCurrentDateTimestamp());

                            statement.setString(5, recommenderUserId);

                            statement.executeUpdate();

                            statement.close();
                        }
                    }

                    statement.close();
                }
            }

            statement = connection.prepareStatement(RestaurantQueries.HISTORICAL_RESTAURANT_FAV_INSERT_SQL);

            statement.setString(1, likeFlag);

            List<String> inputKeyStr = new ArrayList<String>();
            inputKeyStr.add(userId);
            statement.setString(2,
                CommonFunctionsUtil.generateUniqueKey(inputKeyStr));

            statement.setString(3, restaurantId);

            statement.setTimestamp(4,
                CommonFunctionsUtil.getCurrentDateTimestamp());

            statement.setString(5, userId);

            statement.executeUpdate();
            statement.close();

            for (String replyId : replyIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECO_LIKE_INSERT_SQL);

                statement.setString(1,
                    userId + CommonFunctionsUtil.generateUniqueKey());
                statement.setString(2, userId);
                statement.setString(3, replyId);
                statement.setString(4, likeFlag);
                statement.setTimestamp(5,
                    CommonFunctionsUtil.getCurrentDateTimestamp());

                statement.executeUpdate();
                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.HISTORICAL_RECO_LIKE_INSERT_SQL);
                inputKeyStr = new ArrayList<String>();
                inputKeyStr.add(userId);

                statement.setString(1,
                    userId +
                    CommonFunctionsUtil.generateUniqueKey(inputKeyStr));
                statement.setString(2, userId);
                statement.setString(3, replyId);
                statement.setString(4, likeFlag);
                statement.setTimestamp(5,
                    CommonFunctionsUtil.getCurrentDateTimestamp());

                statement.executeUpdate();
                statement.close();
            }

            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public void submitRecommendationMessageAnswer(String newMessageText,
        String previousMessageId, String newMessageRecipientUserId,
        String newMessageSenderUserId, String[] restaurantIdList)
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AskReplyQueries.USER_MESSAGE_INSERT_SQL);
            statement.setString(1, newMessageText);
            statement.setTimestamp(2,
                CommonFunctionsUtil.getCurrentDateTimestamp());

            String messageId = newMessageSenderUserId +
                CommonFunctionsUtil.generateUniqueKey();
            statement.setString(3, messageId);
            statement.setString(4, previousMessageId);
            statement.setString(5, null);
            statement.setString(6, newMessageRecipientUserId);
            statement.setString(7, null);
            statement.setString(8, newMessageSenderUserId);

            statement.executeUpdate();
            statement.close();

            for (String restaurantId : restaurantIdList) {
                statement = connection.prepareStatement(AskReplyQueries.MESSAGE_RESTAURANT_INSERT_SQL);
                statement.setString(1, messageId);
                statement.setString(2, restaurantId);
                statement.executeUpdate();
                statement.close();
            }

            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public TSSenderUserObj showRecommendationMessage(String messageId,
        String recipientUserId) throws TasteSyncException {
        TSSenderUserObj tsSenderUserObj = null;
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AskReplyQueries.USER_MESSAGE_SELECT_SQL);
            statement.setString(1, recipientUserId);
            statement.setString(2, messageId);

            resultset = statement.executeQuery();

            String senderUserId = null;
            String message = null;
            String senderUserFacebookId = null;
            String senderUserName = null;
            String senderUserPhoto = null;
            String senderUserFolloweeFlag = "0";

            if (resultset.next()) {
                senderUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "user_message.sender_id"));
                message = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "user_message.content"));

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);

                statement.setString(1, senderUserId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    senderUserFacebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "users.user_fb_id"));
                }

                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                statement.setString(1, senderUserFacebookId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    senderUserName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.name"));
                    senderUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.picture"));
                }

                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.USER_FOLLOW_DATA_SELECT);

                statement.setString(1, senderUserId);
                statement.setString(2, recipientUserId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    senderUserFolloweeFlag = "1";
                }

                statement.close();
            }

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(AskReplyQueries.USER_MESSAGE_UPDATE_SQL);
            statement.setString(1, messageId);
            statement.setString(2, recipientUserId);
            statement.executeUpdate();
            statement.close();
            tsDataSource.commit();

            tsSenderUserObj = new TSSenderUserObj();

            TSUserProfileBasicObj senderUser = new TSUserProfileBasicObj();
            senderUser.setName(senderUserName);
            senderUser.setPhoto(senderUserPhoto);
            senderUser.setUserId(senderUserId);

            tsSenderUserObj.setSenderUser(senderUser);
            tsSenderUserObj.setMessage(message);
            tsSenderUserObj.setSenderUserFolloweeFlag(senderUserFolloweeFlag);

            return tsSenderUserObj;
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public TSRecoRequestObj showRecommendationsRequest(String userId,
        String recorequestId) throws TasteSyncException {
        TSRecoRequestObj tsRecoRequestObj = null;
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TS_ASSIGNED_SELECT_SQL);
            statement.setString(1, recorequestId);
            statement.setString(2, userId);
            resultset = statement.executeQuery();

            String friendOrNot = null;

            //only one result
            if (resultset.next()) {
                friendOrNot = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recorequest_ts_assigned.ASSIGNED_USERTYPE"));
            } else {
                // invalid data case
                return null;
            }

            if (statement != null) {
                statement.close();
            }

            tsDataSource.begin();
            //TODO first do select count(*). If needed, add data as fav or delete
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TS_ASSIGNED_UPDATE_SQL);
            statement.setString(1, recorequestId);
            statement.setString(2, userId);
            statement.executeUpdate();

            if (statement != null) {
                statement.close();
            }

            String recommendeeUserFacebookId = null;
            String recommendeeUserName = null;
            String recommendeeUserPhoto = null;
            String recommendeeUserUserId = null;
            String recorequestText = null;
            String recommendeeUserFolloweeFlag = "0"; // default

            //-- this means userId is friend of recommendeeUserId and we should use the free text field
            if ("user-assigned-friend".equals(friendOrNot) ||
                    "system-assigned-friend".equals(friendOrNot)) {
                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_FRIEND_SELECT_SQL);
                statement.setString(1, recorequestId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    recommendeeUserUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "recorequest_user.initiator_user_id"));
                    recorequestText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "recorequest_user.recorequest_free_text"));
                }

                statement.close();
            } else if ("user-assigned-other".equals(friendOrNot) ||
                    "system-assigned-other".equals(friendOrNot)) {
                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_OTHER_SELECT_SQL);
                statement.setString(1, recorequestId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    recommendeeUserUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "recorequest_user.initiator_user_id"));
                    recorequestText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "recorequest_user.reco_request_template_sentences"));
                }

                statement.close();
            }

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);
            statement.setString(1, recommendeeUserUserId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                recommendeeUserFacebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "users.user_fb_id"));
            }

            statement.close();

            statement = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
            statement.setString(1, recommendeeUserFacebookId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                recommendeeUserName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "facebook_user_data.name"));
                recommendeeUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "facebook_user_data.picture"));
            }

            statement.close();

            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_FOLLOWEEFLAG_SELECT_SQL);
            statement.setString(1, recommendeeUserUserId);
            statement.setString(2, userId);

            resultset = statement.executeQuery();

            if (resultset.next()) {
                recommendeeUserFolloweeFlag = "1";
            }

            statement.close();

            TSUserProfileBasicObj recommendeeUser = new TSUserProfileBasicObj();
            recommendeeUser.setName(recommendeeUserName);
            recommendeeUser.setPhoto(recommendeeUserPhoto);
            recommendeeUser.setUserId(recommendeeUserUserId);

            tsRecoRequestObj = new TSRecoRequestObj();
            tsRecoRequestObj.setRecommendeeUser(recommendeeUser);
            tsRecoRequestObj.setRecorequestText(recorequestText);
            tsRecoRequestObj.setRecommendeeUserFolloweeFlag(recommendeeUserFolloweeFlag);
            tsRecoRequestObj.setRecommendeeUser(recommendeeUser);

            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }

        return tsRecoRequestObj;
    }

    @Override
    public void submitRecommendationRequestAnswer(String recorequestId,
        String recommenderUserId, String[] restaurantIdList, String replyText)
        throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_REPLY_USER_INSERT_SQL);

            //datetime userid random number
            statement.setString(1, recorequestId);

            List<String> inputKeyStr = new ArrayList<String>();
            inputKeyStr.add(recorequestId);

            String replyId = CommonFunctionsUtil.generateUniqueKey(inputKeyStr);
            statement.setString(2, replyId);
            statement.setString(3, null);
            statement.setTimestamp(4,
                CommonFunctionsUtil.getCurrentDateTimestamp());
            statement.setString(5, replyText);
            statement.setString(6, recommenderUserId);
            statement.setString(7, recommenderUserId);

            statement.executeUpdate();

            statement.close();
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_FRIEND_SELECT_SQL);
            statement.setString(1, recorequestId);
            resultset = statement.executeQuery();

            String recommendeeUserUserId = null;

            if (resultset.next()) {
                recommendeeUserUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recorequest_user.initiator_user_id"));
            }

            statement.close();

            for (String restaurantId : restaurantIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RESTAURANT_REPLY_INSERT_SQL);

                statement.setTimestamp(1,
                    CommonFunctionsUtil.getCurrentDateTimestamp());

                statement.setString(2, null);

                statement.setString(3, replyId);
                statement.setString(4, restaurantId);

                statement.executeUpdate();

                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.USER_RESTAURANT_INSERT_SQL);

                //datetime userid random number
                statement.setString(1, recommendeeUserUserId);
                statement.setString(2, recommenderUserId);
                statement.setString(3, replyId);
                statement.setString(4, restaurantId);

                statement.setTimestamp(5,
                    CommonFunctionsUtil.getCurrentDateTimestamp());

                statement.executeUpdate();

                statement.close();
            }

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(AskReplyQueries.COUNT_REPLIES_RECOREQUEST_REPLY_USER_SELECT_SQL);

            statement.setString(1, recorequestId);

            statement.setString(2, recommenderUserId);

            resultset = statement.executeQuery();

            int rowCount = 0;

            if (resultset.next()) {
                rowCount = resultset.getInt(1);
                statement.close();

                if (rowCount == 1) {
                    //There should be way to add points only once!! - recommenderUserId
                    statement = connection.prepareStatement(AskReplyQueries.USER_POINTS_UPDATE_SQL);

                    statement.setInt(1, 2);

                    statement.setString(2, recommenderUserId);

                    statement.executeUpdate();

                    statement.close();
                }
            }

            if (statement != null) {
                statement.close();
            }

            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public TSRecommendationsForYouObj showRecommendationsForYou(String userId,
        String recoRequestId) throws TasteSyncException {
        TSRecommendationsForYouObj tsRecommendationsForYouObj = null;
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TEMPLATE_SENTENCES_SELECT_SQL);
            statement.setString(1, recoRequestId);
            resultset = statement.executeQuery();

            String recorequestText = "";

            //only one result
            if (resultset.next()) {
                recorequestText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recorequest_user.RECO_REQUEST_TEMPLATE_SENTENCES"));
            }

            statement.close();

            List<String> replyIdList = new ArrayList<String>();

            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_REPLY_USER_RECO_SELECT_SQL);
            statement.setString(1, recoRequestId);
            resultset = statement.executeQuery();

            while (resultset.next()) {
                replyIdList.add(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("recorequest_reply_user.reply_id")));
            }

            statement.close();

            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_REPLY_USER_RECO_REST_SELECT_SQL);
            statement.setString(1, recoRequestId);
            resultset = statement.executeQuery();

            String restaurantIdValue = null;
            String recommenderUserId = null;
            String replyText = null;
            List<RecommendationsForYouVO> recommendationsForYouVOList = new ArrayList<RecommendationsForYouVO>();

            while (resultset.next()) {
                restaurantIdValue = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_id"));

                recommenderUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recommender_user_id"));

                replyText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "reply_text"));

                RecommendationsForYouVO recommendationsForYouVO = new RecommendationsForYouVO(restaurantIdValue,
                        recommenderUserId, replyText);

                recommendationsForYouVOList.add(recommendationsForYouVO);
            }

            statement.close();

            List<String> restaurantIdList = new ArrayList<String>();

            for (RecommendationsForYouVO recommendationsForYouVO : recommendationsForYouVOList) {
                if (!restaurantIdList.contains(
                            recommendationsForYouVO.getRestaurantId())) {
                    restaurantIdList.add(recommendationsForYouVO.getRestaurantId());
                }
            }

            List<String> recommenderUserIdList = null;
            List<String> replyTextList = null;

            List<TSRestaurantsForYouObj> restaurantsForYouObjList = new ArrayList<TSRestaurantsForYouObj>();

            //check for duplicates
            for (String restaurantId : restaurantIdList) {
                recommenderUserIdList = new ArrayList<String>();
                replyTextList = new ArrayList<String>();

                for (RecommendationsForYouVO recommendationsForYouVO : recommendationsForYouVOList) {
                    if (restaurantId.equals(
                                recommendationsForYouVO.getRestaurantId())) {
                        recommenderUserIdList.add(recommendationsForYouVO.getRecommenderUserId());
                        replyTextList.add(recommendationsForYouVO.getReplyText());
                    }
                }

                List<TSRecommendationsObj> recommendationsForYouList = new ArrayList<TSRecommendationsObj>();
                recommendationsForYouList = getRecommendationsForRestaurantFromUsersList(userId,
                        connection, recommenderUserIdList, replyTextList);

                statement = connection.prepareStatement(AskReplyQueries.CITY_RESTAURANT_SELECT_SQL);
                statement.setString(1, restaurantId);
                resultset = statement.executeQuery();

                String restaurantName = null;
                String price = null;

                String restaurantCity = null;
                String restaurantLat = null;
                String restaurantLong = null;
                String restaurantDealFlag = null;
                String restaurantRating = null;

                while (resultset.next()) {
                    restaurantName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant.restaurant_name"));
                    price = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant.price_range"));

                    restaurantName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant.restaurant_name"));

                    restaurantCity = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "cities.city"));

                    restaurantLat = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant.restaurant_lat"));
                    restaurantLong = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant.restaurant_lon"));

                    restaurantDealFlag = null;
                    restaurantRating = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant.factual_rating"));
                }

                statement.close();

                String cuisineTier2Name = null;
                statement = connection.prepareStatement(AskReplyQueries.CUISINE_DESC_ONE_RESTAURANT_SELECT_SQL);
                statement.setString(1, restaurantId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    cuisineTier2Name = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "cuisine_desc"));
                }

                statement.close();

                TSRestaurantsForYouObj tsRestaurantsForYouObj = new TSRestaurantsForYouObj();
                tsRestaurantsForYouObj.setRestaurantId(restaurantId);
                tsRestaurantsForYouObj.setRestaurantName(restaurantName);
                tsRestaurantsForYouObj.setPrice(price);
                tsRestaurantsForYouObj.setRestaurantName(restaurantName);
                tsRestaurantsForYouObj.setRestaurantCity(restaurantCity);
                tsRestaurantsForYouObj.setRestaurantLat(restaurantLat);
                tsRestaurantsForYouObj.setRestaurantLong(restaurantLong);
                tsRestaurantsForYouObj.setRestaurantDealFlag(restaurantDealFlag);
                tsRestaurantsForYouObj.setRestaurantRating(restaurantRating);
                tsRestaurantsForYouObj.setRecommendationsForYouList(recommendationsForYouList);
                tsRestaurantsForYouObj.setCuisineTier2Name(cuisineTier2Name);
                restaurantsForYouObjList.add(tsRestaurantsForYouObj);
            }

            if (statement != null) {
                statement.close();
            }

            tsRecommendationsForYouObj = new TSRecommendationsForYouObj();
            tsRecommendationsForYouObj.setRecorequestText(recorequestText);
            tsRecommendationsForYouObj.setRestaurantsForYouObjList(restaurantsForYouObjList);

            // update TODO
            tsDataSource.begin();

            for (String replyId : replyIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_REPLY_USER_UPDATE_SQL);
                statement.setString(1, replyId);
                statement.executeUpdate();
                statement.close();
            }

            tsDataSource.commit();

            return tsRecommendationsForYouObj;
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    private List<TSRecommendationsObj> getRecommendationsForRestaurantFromUsersList(
        String userId, Connection connection,
        List<String> recommenderUserIdList, List<String> replyTextList)
        throws SQLException {
        PreparedStatement st = null;
        ResultSet rs = null;

        String recommenderUserFolloweeFlag = null;

        String recommenderUserIdFacebookId = null;
        String recommenderUserName = null;
        String recommenderUserPhoto = null;
        int index = 0;
        List<TSRecommendationsObj> recommendationsForYouList = new ArrayList<TSRecommendationsObj>();

        try {
            //TODO Duplicates
            for (String recommenderUserId : recommenderUserIdList) {
                TSRecommendationsObj tsRecommendationsObj = new TSRecommendationsObj();

                st = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_FOLLOWEEFLAG_SELECT_SQL);
                st.setString(1, recommenderUserId);
                st.setString(2, userId);

                rs = st.executeQuery();

                if (rs.next()) {
                    recommenderUserFolloweeFlag = "1";
                } else {
                    recommenderUserFolloweeFlag = "0";
                }

                st.close();

                st = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);

                st.setString(1, recommenderUserId);
                rs = st.executeQuery();

                if (rs.next()) {
                    recommenderUserIdFacebookId = CommonFunctionsUtil.getModifiedValueString(rs.getString(
                                "users.user_fb_id"));

                    if (st != null) {
                        st.close();
                    }

                    st = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                    st.setString(1, recommenderUserIdFacebookId);
                    rs = st.executeQuery();

                    if (rs.next()) {
                        recommenderUserName = CommonFunctionsUtil.getModifiedValueString(rs.getString(
                                    "facebook_user_data.name"));
                        recommenderUserPhoto = CommonFunctionsUtil.getModifiedValueString(rs.getString(
                                    "facebook_user_data.picture"));
                    }

                    st.close();
                }

                TSUserProfileBasicObj recommendeeUser = new TSUserProfileBasicObj();
                recommendeeUser.setName(recommenderUserName);
                recommendeeUser.setPhoto(recommenderUserPhoto);
                recommendeeUser.setUserId(recommenderUserId);

                tsRecommendationsObj.setRecommendeeUser(recommendeeUser);
                tsRecommendationsObj.setRecommenderUserFolloweeFlag(recommenderUserFolloweeFlag);
                tsRecommendationsObj.setReplyText(replyTextList.get(index));
                ++index;
                recommendationsForYouList.add(tsRecommendationsObj);
            }
        } finally {
            if (rs != null) {
                rs.close();
            }

            if (st != null) {
                st.close();
            }
        }

        return recommendationsForYouList;
    }

    @Override
    public TSRecommendationsFollowupObj showRecommendationsFollowup(
        String userId, String questionId) throws TasteSyncException {
        TSRecommendationsFollowupObj tsRecommendationsFollowupObj = null;
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            statement = connection.prepareStatement(AskReplyQueries.QUESTION_DETAILS_RESTAURANT_SELECT_SQL);
            statement.setString(1, questionId);
            resultset = statement.executeQuery();

            String questionUserId = null;
            String questionRestaurantId = null;
            String questionText = null;
            String questionRestaurantRestaurantName = null;
            String questionUserFacebookId = null;
            String questionUserName = null;
            String questionUserPhoto = null;
            String questionUserFolloweeFlag = "0";

            if (resultset.next()) {
                questionUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_question_user.initiator_user_id"));
                questionRestaurantId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_question_user.restaurant_id"));
                questionText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_question_user.question_text"));

                if (statement != null) {
                    statement.close();
                }

                if (questionRestaurantId != null) {
                    statement = connection.prepareStatement(AskReplyQueries.RESTAURANT_NAME_SELECT_SQL);
                    statement.setString(1, questionRestaurantId);
                    resultset = statement.executeQuery();

                    if (resultset.next()) {
                        questionRestaurantRestaurantName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "restaurant.restaurant_name"));
                    }

                    statement.close();
                }

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);

                statement.setString(1, questionUserId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    questionUserFacebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "users.user_fb_id"));

                    if (statement != null) {
                        statement.close();
                    }

                    statement = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                    statement.setString(1, questionUserFacebookId);
                    resultset = statement.executeQuery();

                    if (resultset.next()) {
                        questionUserName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "facebook_user_data.name"));
                        questionUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "facebook_user_data.picture"));
                    }

                    if (statement != null) {
                        statement.close();
                    }
                }

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.USER_FOLLOW_DATA_SELECT);

                statement.setString(1, questionUserId);
                statement.setString(2, userId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    questionUserFolloweeFlag = "1";
                }

                if (statement != null) {
                    statement.close();
                }
            }

            if (statement != null) {
                statement.close();
            }

            TSUserProfileBasicObj questionUser = new TSUserProfileBasicObj();
            questionUser.setName(questionUserName);
            questionUser.setPhoto(questionUserPhoto);
            questionUser.setUserId(questionUserId);

            TSRestaurantObj questionRestaurant = new TSRestaurantObj();
            questionRestaurant.setRestaurantName(questionRestaurantRestaurantName);
            questionRestaurant.setRestaurantId(questionRestaurantId);

            tsRecommendationsFollowupObj = new TSRecommendationsFollowupObj();
            tsRecommendationsFollowupObj.setQuestionUser(questionUser);
            tsRecommendationsFollowupObj.setQuestionRestaurant(questionRestaurant);
            tsRecommendationsFollowupObj.setQuestionUserFolloweeFlag(questionUserFolloweeFlag);
            tsRecommendationsFollowupObj.setQuestionText(questionText);

            return tsRecommendationsFollowupObj;
        } catch (SQLException e) {
            e.printStackTrace();

            throw new TasteSyncException(
                "Error while creating restaurant tips " + e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public List<TSRestaurantCusineTier2Obj> showListOfRestaurantsSearchResultsBasedOnRecoId(
        String recoRequestId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public List<TSRestaurantCusineTier2Obj> showListOfRestaurantsSearchResults(
        String restaurantId, String neighborhoodId, String cityId,
        String stateName, String[] cuisineIdList, String[] priceIdList,
        String rating, String savedFlag, String favFlag, String dealFlag,
        String chainFlag) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    private void processTSNotifRecorequestNeededObjElement(
        Connection connection,
        TSRecoNotificationBaseObj tsRecoNotificationBaseObjElement,
        List<TSRecoNotificationBaseObj> recoNotificationBaseList, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TS_ASSIGNED_ALL_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, tsRecoNotificationBaseObjElement.getIdBase());
            resultset = statement.executeQuery();

            TSNotifRecorequestNeededObj tsNotifRecorequestNeededObj = null;
            List<TSNotifRecorequestNeededObj> tsNotifRecorequestNeededObjList = new ArrayList<TSNotifRecorequestNeededObj>();

            while (resultset.next()) {
                tsNotifRecorequestNeededObj = new TSNotifRecorequestNeededObj();
                tsNotifRecorequestNeededObj.setDatetimeBase(resultset.getTimestamp(
                        "recorequest_ts_assigned.assigned_datetime"));

                String assignedDatetime = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recorequest_ts_assigned.assigned_datetime"));
                //TODO formatting!!
                tsNotifRecorequestNeededObj.setAssignedDatetime(assignedDatetime);

                tsNotifRecorequestNeededObj.setIdBase(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString(
                            "recorequest_ts_assigned.recorequest_id")));

                tsNotifRecorequestNeededObj.setRecoNotificationType(TSConstants.RECONOTIFICATION_TYPE_NEEDED);

                tsNotifRecorequestNeededObj.setRecorequestId(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString(
                            "recorequest_ts_assigned.recorequest_id")));

                tsNotifRecorequestNeededObj.setRecorequestassignedViewed(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString(
                            "recorequest_ts_assigned.recorequest_assigned_viewed")));
                tsNotifRecorequestNeededObjList.add(tsNotifRecorequestNeededObj);
            }

            statement.close();

            for (TSNotifRecorequestNeededObj tsNotifRecorequestNeededObjElement : tsNotifRecorequestNeededObjList) {
                statement = connection.prepareStatement(AskReplyQueries.COUNT_REPLIES_RECOREQUEST_REPLY_USER_SELECT_SQL);
                tsNotifRecorequestNeededObjElement.setRecorequestassignedActioned(
                    "0");
                statement.setString(1,
                    tsNotifRecorequestNeededObjElement.getRecorequestId());

                statement.setString(2, userId);

                resultset = statement.executeQuery();

                int rowCount = 0;

                if (resultset.next()) {
                    rowCount = resultset.getInt(1);

                    if (rowCount > 0) {
                        tsNotifRecorequestNeededObjElement.setRecorequestassignedActioned(
                            "1");
                    }
                }

                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TS_ASSIGNED_SELECT_SQL);
                statement.setString(1,
                    tsNotifRecorequestNeededObjElement.getRecorequestId());
                statement.setString(2, userId);
                resultset = statement.executeQuery();

                String friendOrNot = null;

                //only one result
                if (resultset.next()) {
                    friendOrNot = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "recorequest_ts_assigned.ASSIGNED_USERTYPE"));
                }

                if (statement != null) {
                    statement.close();
                }

                String recommendeeUserFacebookId = null;
                String recommendeeUserName = null;
                String recommendeeUserPhoto = null;
                String recommendeeUserUserId = null;
                String recorequestText = null;

                //-- this means userId is friend of recommendeeUserId and we should use the free text field
                if ("user-assigned-friend".equals(friendOrNot) ||
                        "system-assigned-friend".equals(friendOrNot)) {
                    if (statement != null) {
                        statement.close();
                    }

                    statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_FRIEND_SELECT_SQL);
                    statement.setString(1,
                        tsNotifRecorequestNeededObjElement.getRecorequestId());
                    resultset = statement.executeQuery();

                    if (resultset.next()) {
                        recommendeeUserUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "recorequest_user.initiator_user_id"));
                        recorequestText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "recorequest_user.recorequest_free_text"));
                    }

                    statement.close();
                } else if ("user-assigned-other".equals(friendOrNot) ||
                        "system-assigned-other".equals(friendOrNot)) {
                    if (statement != null) {
                        statement.close();
                    }

                    statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_OTHER_SELECT_SQL);
                    statement.setString(1,
                        tsNotifRecorequestNeededObjElement.getRecorequestId());
                    resultset = statement.executeQuery();

                    if (resultset.next()) {
                        recommendeeUserUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "recorequest_user.initiator_user_id"));
                        recorequestText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "recorequest_user.reco_request_template_sentences"));
                    }

                    statement.close();
                }

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);
                statement.setString(1, recommendeeUserUserId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    recommendeeUserFacebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "users.user_fb_id"));
                }

                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                statement.setString(1, recommendeeUserFacebookId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    recommendeeUserName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.name"));
                    recommendeeUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.picture"));
                }

                statement.close();

                TSUserProfileBasicObj recommendeeUser = new TSUserProfileBasicObj();
                recommendeeUser.setName(recommendeeUserName);
                recommendeeUser.setPhoto(recommendeeUserPhoto);
                recommendeeUser.setUserId(recommendeeUserUserId);
                tsNotifRecorequestNeededObjElement.setRecommendeeUser(recommendeeUser);
                tsNotifRecorequestNeededObjElement.setRecorequestText(recorequestText);

                recoNotificationBaseList.add(tsNotifRecorequestNeededObjElement);
            }

            if (statement != null) {
                statement.close();
            }
        } finally {
            if (statement != null) {
                statement.close();
            }

            if (resultset != null) {
                resultset.close();
            }
        }
    }

    private void processTSNotifRecorequestAnswerObj(Connection connection,
        TSRecoNotificationBaseObj tsRecoNotificationBaseObjElement,
        List<TSRecoNotificationBaseObj> recoNotificationBaseList, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            TSNotifRecorequestAnswerObj tsNotifRecorequestAnswerObj = null;
            String recorequestIdElement = tsRecoNotificationBaseObjElement.getIdBase();
            tsNotifRecorequestAnswerObj = new TSNotifRecorequestAnswerObj();
            tsNotifRecorequestAnswerObj.setRecorequestId(recorequestIdElement);
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_REPLY_USER_LATEST_INFO_SELECT_SQL);
            statement.setString(1, recorequestIdElement);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                TSNotifRecoReplyObj tsNotifRecoReplyObj = new TSNotifRecoReplyObj();
                tsNotifRecoReplyObj.setReplyId(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("recorequest_reply_user.reply_id")));

                String repliedSendDatetime = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recorequest_reply_user.reply_send_datetime"));
                //TODO formatting!!
                tsNotifRecoReplyObj.setRepliedDatetime(repliedSendDatetime);

                tsNotifRecoReplyObj.setViewed(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString(
                            "recorequest_reply_user.reply_viewed_initiator")));

                tsNotifRecorequestAnswerObj.setDatetimeBase(resultset.getTimestamp(
                        "recorequest_reply_user.reply_send_datetime"));
                tsNotifRecorequestAnswerObj.setIdBase(recorequestIdElement);

                tsNotifRecorequestAnswerObj.setRecoNotificationType(TSConstants.RECONOTIFICATION_TYPE_ANSWER);

                List<TSNotifRecoReplyObj> recoReplyList = new ArrayList<TSNotifRecoReplyObj>();
                recoReplyList.add(tsNotifRecoReplyObj);
                tsNotifRecorequestAnswerObj.setRecoReply(recoReplyList);

                List<String> allReplyIdFOrRequestIdList = new ArrayList<String>();

                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_REPLY_USER_ALL_REPLIES_SELECT_SQL);
                statement.setString(1, recorequestIdElement);
                resultset = statement.executeQuery();

                while (resultset.next()) {
                    allReplyIdFOrRequestIdList.add(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString(
                                "recorequest_reply_user.reply_id")));
                }

                statement.close();

                NotifRecoReplyVO notifRecoReplyVO = null;
                List<NotifRecoReplyVO> notifRecoReplyVOList = new ArrayList<NotifRecoReplyVO>();

                for (String replyIdElement : allReplyIdFOrRequestIdList) {
                    notifRecoReplyVO = new NotifRecoReplyVO();

                    statement = connection.prepareStatement(AskReplyQueries.COUNT_RECOREQUEST_REPLY_USER_ALL_REPLIES_SELECT_SQL);
                    notifRecoReplyVO.setReplyActioned("0");
                    statement.setString(1, recorequestIdElement);
                    statement.setString(2, recorequestIdElement);
                    statement.setString(3, replyIdElement);
                    statement.setString(4, userId);
                    resultset = statement.executeQuery();

                    int rowCount = 0;

                    if (resultset.next()) {
                        rowCount = resultset.getInt(1);

                        if (rowCount > 0) {
                            notifRecoReplyVO.setReplyActioned("1");
                        }
                    }

                    statement.close();
                    notifRecoReplyVOList.add(notifRecoReplyVO);
                }

                tsNotifRecorequestAnswerObj.setRecoActioned("1");

                for (NotifRecoReplyVO notifRecoReplyVOElement : notifRecoReplyVOList) {
                    if ("0".equals(notifRecoReplyVOElement.getReplyActioned())) {
                        tsNotifRecorequestAnswerObj.setRecoActioned("0");
                    }

                    break;
                }

                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TEMPLATE_SENTENCES_SELECT_SQL);
                statement.setString(1,
                    tsNotifRecorequestAnswerObj.getRecorequestId());
                resultset = statement.executeQuery();

                String recorequestText = "";

                //only one result
                if (resultset.next()) {
                    recorequestText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "recorequest_user.RECO_REQUEST_TEMPLATE_SENTENCES"));
                }

                statement.close();

                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_REPLY_USER_RECO_REST_SELECT_SQL);
                statement.setString(1,
                    tsNotifRecorequestAnswerObj.getRecorequestId());
                resultset = statement.executeQuery();

                String restaurantIdValue = null;
                String recommenderUserId = null;
                String replyText = null;
                List<RecommendationsForYouVO> recommendationsForYouVOList = new ArrayList<RecommendationsForYouVO>();

                while (resultset.next()) {
                    restaurantIdValue = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant_id"));

                    recommenderUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "recommender_user_id"));

                    replyText = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "reply_text"));

                    RecommendationsForYouVO recommendationsForYouVO = new RecommendationsForYouVO(restaurantIdValue,
                            recommenderUserId, replyText);

                    recommendationsForYouVOList.add(recommendationsForYouVO);
                }

                statement.close();

                List<String> restaurantIdList = new ArrayList<String>();

                for (RecommendationsForYouVO recommendationsForYouVO : recommendationsForYouVOList) {
                    if (!restaurantIdList.contains(
                                recommendationsForYouVO.getRestaurantId())) {
                        restaurantIdList.add(recommendationsForYouVO.getRestaurantId());
                    }
                }

                List<String> recommenderUserIdList = null;
                List<String> replyTextList = null;

                List<TSRestaurantsForYouObj> restaurantsForYouObjList = new ArrayList<TSRestaurantsForYouObj>();

                //check for duplicates
                for (String restaurantId : restaurantIdList) {
                    recommenderUserIdList = new ArrayList<String>();
                    replyTextList = new ArrayList<String>();

                    for (RecommendationsForYouVO recommendationsForYouVO : recommendationsForYouVOList) {
                        if (restaurantId.equals(
                                    recommendationsForYouVO.getRestaurantId())) {
                            recommenderUserIdList.add(recommendationsForYouVO.getRecommenderUserId());
                            replyTextList.add(recommendationsForYouVO.getReplyText());
                        }
                    }

                    List<TSRecommendationsObj> recommendationsForYouList = new ArrayList<TSRecommendationsObj>();
                    recommendationsForYouList = getRecommendationsForRestaurantFromUsersList(userId,
                            connection, recommenderUserIdList, replyTextList);

                    statement = connection.prepareStatement(AskReplyQueries.CITY_RESTAURANT_SELECT_SQL);
                    statement.setString(1, restaurantId);
                    resultset = statement.executeQuery();

                    String restaurantName = null;

                    while (resultset.next()) {
                        restaurantName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                    "restaurant.restaurant_name"));
                    }

                    statement.close();

                    TSRestaurantsForYouObj tsRestaurantsForYouObj = new TSRestaurantsForYouObj();
                    tsRestaurantsForYouObj.setRestaurantId(restaurantId);
                    tsRestaurantsForYouObj.setRestaurantName(restaurantName);
                    tsRestaurantsForYouObj.setRecommendationsForYouList(recommendationsForYouList);

                    restaurantsForYouObjList.add(tsRestaurantsForYouObj);
                }

                if (statement != null) {
                    statement.close();
                }

                TSRecommendationsForYouObj tsRecommendationsForYouObj = new TSRecommendationsForYouObj();
                tsRecommendationsForYouObj.setRecorequestText(recorequestText);
                tsRecommendationsForYouObj.setRestaurantsForYouObjList(restaurantsForYouObjList);

                tsNotifRecorequestAnswerObj.setRecommendationsForYou(tsRecommendationsForYouObj);
                recoNotificationBaseList.add(tsNotifRecorequestAnswerObj);
            }
        } finally {
            if (statement != null) {
                statement.close();
            }

            if (resultset != null) {
                resultset.close();
            }
        }
    }

    private void processTSNotifFollowupQuestionObj(Connection connection,
        TSRecoNotificationBaseObj tsRecoNotificationBaseObjElement,
        List<TSRecoNotificationBaseObj> recoNotificationBaseList, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        PreparedStatement statementInner = null;
        ResultSet resultsetInner = null;

        try {
            statement = connection.prepareStatement(AskReplyQueries.RESTAURANT_QUESTION_TS_ASSIGNED_NOTIF_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, tsRecoNotificationBaseObjElement.getIdBase());
            resultset = statement.executeQuery();

            String questionId = null;

            while (resultset.next()) {
                TSNotifFollowupQuestionObj tsNotifFollowupQuestionObj = new TSNotifFollowupQuestionObj();

                questionId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_question_ts_assigned.question_id"));
                tsNotifFollowupQuestionObj.setQuestionId(questionId);

                tsNotifFollowupQuestionObj.setIdBase(questionId);

                tsNotifFollowupQuestionObj.setRecoNotificationType(TSConstants.RECONOTIFICATION_TYPE_FOLLOWUP);

                String assignedDatetime = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_question_ts_assigned.assigned_datetime"));

                //Date formatting
                tsNotifFollowupQuestionObj.setAssignedDatetime(assignedDatetime);

                tsNotifFollowupQuestionObj.setDatetimeBase(resultset.getTimestamp(
                        "restaurant_question_ts_assigned.assigned_datetime"));

                tsNotifFollowupQuestionObj.setViewed(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString(
                            "restaurant_question_ts_assigned.question_assigned_viewed")));

                statementInner = connection.prepareStatement(AskReplyQueries.COUNT_QUESTION_REPLY_USER_SELECT_SQL);
                tsNotifFollowupQuestionObj.setActioned("0");
                statementInner.setString(1, questionId);
                statementInner.setString(2, userId);

                resultsetInner = statementInner.executeQuery();

                int rowCount = 0;

                if (resultsetInner.next()) {
                    rowCount = resultsetInner.getInt(1);

                    if (rowCount > 0) {
                        tsNotifFollowupQuestionObj.setActioned("1");
                    }
                }

                statementInner.close();

                statementInner = connection.prepareStatement(AskReplyQueries.QUESTION_DETAILS_RESTAURANT_SELECT_SQL);
                statementInner.setString(1, questionId);
                resultsetInner = statementInner.executeQuery();

                String questionUserId = null;
                String questionText = null;
                String questionUserFacebookId = null;
                String questionUserName = null;
                String questionUserPhoto = null;

                if (resultsetInner.next()) {
                    questionUserId = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                "restaurant_question_user.initiator_user_id"));
                    questionText = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                "restaurant_question_user.question_text"));
                    statementInner.close();

                    statementInner = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);

                    statementInner.setString(1, questionUserId);
                    resultsetInner = statementInner.executeQuery();

                    if (resultsetInner.next()) {
                        questionUserFacebookId = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                    "users.user_fb_id"));

                        statementInner.close();

                        statementInner = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                        statementInner.setString(1, questionUserFacebookId);
                        resultsetInner = statementInner.executeQuery();

                        if (resultsetInner.next()) {
                            questionUserName = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                        "facebook_user_data.name"));
                            questionUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                        "facebook_user_data.picture"));
                        }

                        statementInner.close();
                    }

                    if (statementInner != null) {
                        statementInner.close();
                    }
                }

                if (statementInner != null) {
                    statementInner.close();
                }

                TSUserProfileBasicObj questionUser = new TSUserProfileBasicObj();
                questionUser.setName(questionUserName);
                questionUser.setPhoto(questionUserPhoto);
                questionUser.setUserId(questionUserId);

                tsNotifFollowupQuestionObj.setQuestionUser(questionUser);
                tsNotifFollowupQuestionObj.setQuestionText(questionText);

                recoNotificationBaseList.add(tsNotifFollowupQuestionObj);
            }

            if (statement != null) {
                statement.close();
            }
        } finally {
            if (statement != null) {
                statement.close();
            }

            if (resultset != null) {
                resultset.close();
            }

            if (statementInner != null) {
                statementInner.close();
            }

            if (resultsetInner != null) {
                resultsetInner.close();
            }
        }
    }

    private void processTSNotifMessageForYouObj(Connection connection,
        TSRecoNotificationBaseObj tsRecoNotificationBaseObjElement,
        List<TSRecoNotificationBaseObj> recoNotificationBaseList, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        PreparedStatement statementInner = null;
        ResultSet resultsetInner = null;

        try {
            statement = connection.prepareStatement(AskReplyQueries.USER_MESSAGE_RECIPIENT_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, tsRecoNotificationBaseObjElement.getIdBase());
            resultset = statement.executeQuery();

            String messageId = null;

            while (resultset.next()) {
                TSNotifMessageForYouObj tsNotifMessageForYouObj = new TSNotifMessageForYouObj();

                messageId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "user_message.message_id"));
                tsNotifMessageForYouObj.setMessageId(messageId);

                tsNotifMessageForYouObj.setIdBase(messageId);

                tsNotifMessageForYouObj.setRecoNotificationType(TSConstants.RECONOTIFICATION_TYPE_MESSAGE);

                String messageCreatedTime = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "user_message.created"));

                //Date formatting
                tsNotifMessageForYouObj.setMessageCreatedTime(messageCreatedTime);

                tsNotifMessageForYouObj.setDatetimeBase(resultset.getTimestamp(
                        "user_message.created"));

                tsNotifMessageForYouObj.setViewed(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString(
                            "user_message.message_recipient_viewed")));

                statementInner = connection.prepareStatement(AskReplyQueries.COUNT_USER_MESSAGE_SELECT_SQL);
                tsNotifMessageForYouObj.setActioned("0");
                statementInner.setString(1, messageId);
                statementInner.setString(2, userId);

                resultsetInner = statementInner.executeQuery();

                int rowCount = 0;

                if (resultsetInner.next()) {
                    rowCount = resultsetInner.getInt(1);

                    if (rowCount > 0) {
                        tsNotifMessageForYouObj.setActioned("1");
                    }
                }

                statementInner.close();

                statementInner = connection.prepareStatement(AskReplyQueries.USER_MESSAGE_SELECT_SQL);
                statementInner.setString(1, userId);
                statementInner.setString(2, messageId);

                resultsetInner = statementInner.executeQuery();

                String senderUserId = null;
                String message = null;
                String senderUserFacebookId = null;
                String senderUserName = null;
                String senderUserPhoto = null;

                if (resultsetInner.next()) {
                    senderUserId = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                "user_message.sender_id"));
                    message = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                "user_message.content"));
                    statementInner.close();

                    statementInner = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);

                    statementInner.setString(1, senderUserId);
                    resultsetInner = statementInner.executeQuery();

                    if (resultsetInner.next()) {
                        senderUserFacebookId = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                    "users.user_fb_id"));
                    }

                    statementInner.close();

                    statementInner = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                    statementInner.setString(1, senderUserFacebookId);
                    resultsetInner = statementInner.executeQuery();

                    if (resultsetInner.next()) {
                        senderUserName = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                    "facebook_user_data.name"));
                        senderUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                    "facebook_user_data.picture"));
                    }

                    statementInner.close();
                }

                if (statementInner != null) {
                    statementInner.close();
                }

                TSUserProfileBasicObj senderUser = new TSUserProfileBasicObj();
                senderUser.setName(senderUserName);
                senderUser.setPhoto(senderUserPhoto);
                senderUser.setUserId(senderUserId);

                tsNotifMessageForYouObj.setSenderUser(senderUser);
                tsNotifMessageForYouObj.setMessage(message);

                recoNotificationBaseList.add(tsNotifMessageForYouObj);
            }

            if (statement != null) {
                statement.close();
            }
        } finally {
            if (statement != null) {
                statement.close();
            }

            if (resultset != null) {
                resultset.close();
            }

            if (statementInner != null) {
                statementInner.close();
            }

            if (resultsetInner != null) {
                resultsetInner.close();
            }
        }
    }

    private void processTSNotifRecoLikeObj(Connection connection,
        TSRecoNotificationBaseObj tsRecoNotificationBaseObjElement,
        List<TSRecoNotificationBaseObj> recoNotificationBaseList, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        PreparedStatement statementInner = null;
        ResultSet resultsetInner = null;

        try {
            statement = connection.prepareStatement(AskReplyQueries.RECO_LIKE_NOTIF_SELECT_SQL);
            statement.setString(1, tsRecoNotificationBaseObjElement.getIdBase());
            resultset = statement.executeQuery();

            String likeId = null;
            String recommendeeUserId = null;

            while (resultset.next()) {
                TSNotifRecoLikeObj tsNotifRecoLikeObj = new TSNotifRecoLikeObj();

                likeId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "reco_like.id"));
                tsNotifRecoLikeObj.setLikeId(likeId);
                tsNotifRecoLikeObj.setIdBase(likeId);
                tsNotifRecoLikeObj.setRecoNotificationType(TSConstants.RECONOTIFICATION_TYPE_LIKE);

                String likeDatetime = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "reco_like.like_datetime"));

                //Date formatting
                tsNotifRecoLikeObj.setLikeDatetime(likeDatetime);

                tsNotifRecoLikeObj.setDatetimeBase(resultset.getTimestamp(
                        "reco_like.like_datetime"));

                tsNotifRecoLikeObj.setViewed(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("reco_like.like_recommender_viewed")));

                recommendeeUserId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "reco_like.like_user_id"));

                String recommendeeFacebookId = null;
                String recommendeeUserName = null;
                String recommendeeUserPhoto = null;

                statementInner = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);

                statementInner.setString(1, recommendeeUserId);
                resultsetInner = statementInner.executeQuery();

                if (resultsetInner.next()) {
                    recommendeeFacebookId = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                "users.user_fb_id"));

                    if (statementInner != null) {
                        statementInner.close();
                    }

                    statementInner = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                    statementInner.setString(1, recommendeeFacebookId);
                    resultsetInner = statementInner.executeQuery();

                    if (resultsetInner.next()) {
                        recommendeeUserName = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                    "facebook_user_data.name"));
                        recommendeeUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                                    "facebook_user_data.picture"));
                    }

                    statementInner.close();
                }

                TSUserProfileBasicObj recommendeeUser = new TSUserProfileBasicObj();
                recommendeeUser.setName(recommendeeUserName);
                recommendeeUser.setPhoto(recommendeeUserPhoto);
                recommendeeUser.setUserId(recommendeeUserId);

                tsNotifRecoLikeObj.setRecommendeeUser(recommendeeUser);

                recoNotificationBaseList.add(tsNotifRecoLikeObj);
            }

            if (statement != null) {
                statement.close();
            }
        } finally {
            if (statement != null) {
                statement.close();
            }

            if (resultset != null) {
                resultset.close();
            }

            if (statementInner != null) {
                statementInner.close();
            }

            if (resultsetInner != null) {
                resultsetInner.close();
            }
        }
    }

    private void processTSNotifDidYouLikeObj(Connection connection,
        TSRecoNotificationBaseObj tsRecoNotificationBaseObjElement,
        List<TSRecoNotificationBaseObj> recoNotificationBaseList, String userId)
        throws SQLException {
        PreparedStatement statement = null;
        ResultSet resultset = null;

        PreparedStatement statementInner = null;
        ResultSet resultsetInner = null;

        PreparedStatement statementInner1 = null;
        ResultSet resultsetInner1 = null;

        try {
            statement = connection.prepareStatement(AskReplyQueries.RECOREPLY_DIDIYOULIKE_SELECT_SQL);
            statement.setString(1, tsRecoNotificationBaseObjElement.getIdBase());
            resultset = statement.executeQuery();

            String recorequestId = null;

            while (resultset.next()) {
                TSNotifDidYouLikeObj tsNotifDidYouLikeObj = new TSNotifDidYouLikeObj();

                recorequestId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recoreply_didyoulike_notif.recorequest_id"));
                tsNotifDidYouLikeObj.setRecorequestId(recorequestId);
                tsNotifDidYouLikeObj.setIdBase(recorequestId);

                tsNotifDidYouLikeObj.setRecoNotificationType(TSConstants.RECONOTIFICATION_TYPE_DID_LIKE);

                String datetime = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "recoreply_didyoulike_notif.notif_datetime"));

                //Date formatting
                tsNotifDidYouLikeObj.setDatetime(datetime);

                tsNotifDidYouLikeObj.setDatetimeBase(resultset.getTimestamp(
                        "recoreply_didyoulike_notif.notif_datetime"));

                tsNotifDidYouLikeObj.setViewed(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString(
                            "recoreply_didyoulike_notif.notif_viewed")));

                List<TSRestaurantBasicObj> tsRestaurantBasicObjList = new ArrayList<TSRestaurantBasicObj>();
                String recommendedrestaurantsRestaurantId = null;
                String recommendedrestaurantsRestaurantName = null;

                statementInner = connection.prepareStatement(AskReplyQueries.RECOREQUEST_RESTAURANT_SELECT_SQL);
                statementInner.setString(1, recorequestId);
                resultsetInner = statementInner.executeQuery();

                while (resultsetInner.next()) {
                    recommendedrestaurantsRestaurantId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant_id"));

                    statementInner1 = connection.prepareStatement(AskReplyQueries.RESTAURANT_NAME_SELECT_SQL);
                    statementInner1.setString(1,
                        recommendedrestaurantsRestaurantId);
                    resultsetInner1 = statementInner1.executeQuery();

                    if (resultsetInner1.next()) {
                        recommendedrestaurantsRestaurantName = CommonFunctionsUtil.getModifiedValueString(resultsetInner1.getString(
                                    "restaurant.restaurant_name"));
                    }

                    statementInner1.close();

                    TSRestaurantBasicObj tsRestaurantBasicObj = new TSRestaurantBasicObj();
                    tsRestaurantBasicObj.setRestaurantId(recommendedrestaurantsRestaurantId);
                    tsRestaurantBasicObj.setRestaurantName(recommendedrestaurantsRestaurantName);
                    tsRestaurantBasicObjList.add(tsRestaurantBasicObj);
                }

                statementInner.close();

                tsNotifDidYouLikeObj.setRestaurantbasic(tsRestaurantBasicObjList);

                recoNotificationBaseList.add(tsNotifDidYouLikeObj);
            }

            if (statement != null) {
                statement.close();
            }

            //TODO 
            //Data entry and Push notifications
        } finally {
            if (statement != null) {
                statement.close();
            }

            if (resultset != null) {
                resultset.close();
            }

            if (statementInner != null) {
                statementInner.close();
            }

            if (resultsetInner != null) {
                resultsetInner.close();
            }

            if (statementInner1 != null) {
                statementInner1.close();
            }

            if (resultsetInner1 != null) {
                resultsetInner1.close();
            }
        }
    }

    @Override
    public List<TSRecoNotificationBaseObj> showRecommendationsList(
        String userId, String paginationId) throws TasteSyncException {
        //Indexing for ORDER BY/Select parameters like user id etc!!
        List<TSRecoNotificationBaseObj> recoNotificationBaseList = new ArrayList<TSRecoNotificationBaseObj>();

        List<TSRecoNotificationBaseObj> recoNotificationBaseOverallList = new ArrayList<TSRecoNotificationBaseObj>();

        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();

            statement = connection.prepareStatement(AskReplyQueries.NOTIFICATIONS_ALL_SELECT_SQL);
            statement.setString(1, userId);
            statement.setInt(2, 0); //TODO calculate based on pagination logic!!
            statement.setInt(3, 10);

            resultset = statement.executeQuery();

            TSRecoNotificationBaseObj tsRecoNotificationBaseObj = null;

            while (resultset.next()) {
                tsRecoNotificationBaseObj = new TSRecoNotificationBaseObj();
                tsRecoNotificationBaseObj.setDatetimeBase(resultset.getTimestamp(
                        "notifications_all.datetime"));

                tsRecoNotificationBaseObj.setIdBase(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString("notifications_all.linked_id")));

                tsRecoNotificationBaseObj.setRecoNotificationType(CommonFunctionsUtil.getModifiedValueString(
                        resultset.getString(
                            "notifications_all.notification_type")));
                recoNotificationBaseOverallList.add(tsRecoNotificationBaseObj);
            }

            //if no result, then check pagination is and see if it is top or last? 
            statement.close();

            Collections.sort(recoNotificationBaseOverallList,
                new Comparator<TSRecoNotificationBaseObj>() {
                    public int compare(TSRecoNotificationBaseObj o1,
                        TSRecoNotificationBaseObj o2) {
                        return o1.getDatetimeBase()
                                 .compareTo(o2.getDatetimeBase());
                    }
                });

            for (TSRecoNotificationBaseObj tsRecoNotificationBaseObjElement : recoNotificationBaseOverallList) {
                if (TSConstants.RECONOTIFICATION_TYPE_NEEDED.equals(
                            tsRecoNotificationBaseObjElement.getRecoNotificationType())) {
                    processTSNotifRecorequestNeededObjElement(connection,
                        tsRecoNotificationBaseObjElement,
                        recoNotificationBaseList, userId);
                } else if (TSConstants.RECONOTIFICATION_TYPE_ANSWER.equals(
                            tsRecoNotificationBaseObjElement.getRecoNotificationType())) {
                    processTSNotifRecorequestAnswerObj(connection,
                        tsRecoNotificationBaseObjElement,
                        recoNotificationBaseList, userId);
                } else if (TSConstants.RECONOTIFICATION_TYPE_FOLLOWUP.equals(
                            tsRecoNotificationBaseObjElement.getRecoNotificationType())) {
                    processTSNotifFollowupQuestionObj(connection,
                        tsRecoNotificationBaseObjElement,
                        recoNotificationBaseList, userId);
                } else if (TSConstants.RECONOTIFICATION_TYPE_MESSAGE.equals(
                            tsRecoNotificationBaseObjElement.getRecoNotificationType())) {
                    processTSNotifMessageForYouObj(connection,
                        tsRecoNotificationBaseObjElement,
                        recoNotificationBaseList, userId);
                } else if (TSConstants.RECONOTIFICATION_TYPE_LIKE.equals(
                            tsRecoNotificationBaseObjElement.getRecoNotificationType())) {
                    processTSNotifRecoLikeObj(connection,
                        tsRecoNotificationBaseObjElement,
                        recoNotificationBaseList, userId);
                } else if (TSConstants.RECONOTIFICATION_TYPE_DID_LIKE.equals(
                            tsRecoNotificationBaseObjElement.getRecoNotificationType())) {
                    processTSNotifDidYouLikeObj(connection,
                        tsRecoNotificationBaseObjElement,
                        recoNotificationBaseList, userId);
                }
            }

            return recoNotificationBaseList;
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }

    @Override
    public void submitRecommendationFollowupAnswer(String userId,
        String questionId, String replyText) throws TasteSyncException {
        TSDataSource tsDataSource = TSDataSource.getInstance();

        Connection connection = null;
        PreparedStatement statement = null;
        ResultSet resultset = null;

        try {
            connection = tsDataSource.getConnection();
            tsDataSource.begin();
            statement = connection.prepareStatement(AskReplyQueries.QUESTION_REPLY_USER_INSERT_SQL);
            statement.setString(1, questionId);
            statement.setTimestamp(2,
                CommonFunctionsUtil.getCurrentDateTimestamp());

            String replyId = questionId +
                CommonFunctionsUtil.generateUniqueKey();

            statement.setString(3, replyId);

            statement.setString(4, replyText);
            statement.setString(5, userId);
            statement.setString(6, userId);
            statement.executeUpdate();
            statement.close();

            String recipientId = null;

            statement = connection.prepareStatement(AskReplyQueries.QUESTION_RECIPIENT_SELECT_SQL);

            statement.setString(1, questionId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                recipientId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_question_user.initiator_user_id"));
            }

            statement.close();

            statement = connection.prepareStatement(AskReplyQueries.USER_MESSAGE_INSERT_SQL);
            statement.setString(1, replyText);
            statement.setTimestamp(2,
                CommonFunctionsUtil.getCurrentDateTimestamp());

            String messageId = userId +
                CommonFunctionsUtil.generateUniqueKey();
            statement.setString(3, messageId);
            statement.setString(4, null);
            statement.setString(5, questionId);
            statement.setString(6, recipientId);
            statement.setString(7, null);
            statement.setString(8, userId);

            statement.executeUpdate();
            statement.close();
            tsDataSource.commit();
        } catch (SQLException e) {
            e.printStackTrace();

            if (tsDataSource != null) {
                try {
                    tsDataSource.rollback();
                } catch (SQLException e1) {
                    e1.printStackTrace();
                }
            }

            throw new TasteSyncException("Error while creating reco request " +
                e.getMessage());
        } finally {
            tsDataSource.close();
            tsDataSource.closeConnection(connection, statement, resultset);
        }
    }
}
