package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.AskReplyQueries;
import com.tastesync.db.queries.RestaurantQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAskSubmitLoginObj;
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

            if (statement != null) {
                statement.close();
            }

            for (String cuisineId : cuisineTier1IdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_CUISINE_TIER1_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, cuisineId);
                statement.executeUpdate();

                if (statement != null) {
                    statement.close();
                }
            }

            for (String cuisineId : cuisineTier2IdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_CUISINE_TIER2_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, cuisineId);
                statement.executeUpdate();

                if (statement != null) {
                    statement.close();
                }
            }

            for (String priceId : priceIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_PRICE_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, priceId);
                statement.executeUpdate();

                if (statement != null) {
                    statement.close();
                }
            }

            for (String themeId : themeIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_THEME_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, themeId);
                statement.executeUpdate();

                if (statement != null) {
                    statement.close();
                }
            }

            for (String whoareyouwithId : whoareyouwithIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_WHOAREYOUWITH_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, whoareyouwithId);
                statement.executeUpdate();

                if (statement != null) {
                    statement.close();
                }
            }

            for (String typeOfRestaurantId : typeOfRestaurantIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TYPEOFREST_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, typeOfRestaurantId);
                statement.executeUpdate();

                if (statement != null) {
                    statement.close();
                }
            }

            for (String occasionId : occasionIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_OCCASION_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, occasionId);
                statement.executeUpdate();

                if (statement != null) {
                    statement.close();
                }
            }

            statement = connection.prepareStatement(AskReplyQueries.USER_RECO_SUPPPLY_TIER_INSERT_SQL);
            statement.setString(1, userId);
            statement.executeUpdate();

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(AskReplyQueries.USER_RECO_DEMAND_TIER_INSERT_SQL);
            statement.setString(1, userId);
            statement.executeUpdate();

            if (statement != null) {
                statement.close();
            }

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
                recoRequestTemplateSentences = resultset.getString(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString(
                                "recorequest_user.RECO_REQUEST_TEMPLATE_SENTENCES")));
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
    public List<TSRestaurantObj> showRecommendationDidYouLike(
        String recorequestId) throws TasteSyncException {
        List<TSRestaurantObj> tsRestaurantObjList = new ArrayList<TSRestaurantObj>();

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
                //TODO need to test
                recommendedrestaurantsRestaurantId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "restaurant_id"));

                statementInner = connection.prepareStatement(AskReplyQueries.RESTAURANT_NAME_SELECT_SQL);
                statementInner.setString(1, recommendedrestaurantsRestaurantId);
                resultsetInner = statementInner.executeQuery();

                recommendedrestaurantsRestaurantName = CommonFunctionsUtil.getModifiedValueString(resultsetInner.getString(
                            "restaurant.restaurant_name"));
                resultsetInner.close();
                statementInner.close();

                TSRestaurantObj tsRestaurantObj = new TSRestaurantObj();
                tsRestaurantObj.setRestaurantId(recommendedrestaurantsRestaurantId);
                tsRestaurantObj.setRestaurantName(recommendedrestaurantsRestaurantName);
                tsRestaurantObjList.add(tsRestaurantObj);
            }

            statement.close();

            return tsRestaurantObjList;
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

            statement = connection.prepareStatement(RestaurantQueries.REPLYID_RECOMMENDER_USER_SELECT_SQL);
            statement.setString(1, userId);
            statement.setString(2, restaurantId);
            resultset = statement.executeQuery();

            List<String> recommenderUserIdList = new ArrayList<String>();
            List<String> replyIdList = new ArrayList<String>();
            String recommenderUserIdValue = null;
            String replyIdValue = null;

            while (resultset.next()) {
                recommenderUserIdValue = resultset.getString(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString(
                                "user_restaurant_reco.RECOMMENDER_USER_ID")));
                replyIdValue = resultset.getString(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString("user_restaurant_reco.reply_id")));

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
                    statement = connection.prepareStatement(AskReplyQueries.USER_POINTS_UPDATE_SQL);

                    statement.setInt(1, 4);

                    statement.setString(2, recommenderUserId);

                    statement.executeUpdate();

                    statement.close();
                }
            }

            statement = connection.prepareStatement(RestaurantQueries.HISTORICAL_RESTAURANT_FAV_INSERT_SQL);

            statement.setString(1, likeFlag);

            inputKeyStr = new ArrayList<String>();
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
                senderUserFacebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "users.user_fb_id"));

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                statement.setString(1, senderUserFacebookId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    senderUserName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.name"));
                    senderUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.picture"));
                }

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.USER_FOLLOW_DATA_SELECT);

                statement.setString(1, senderUserId);
                statement.setString(2, recipientUserId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    senderUserFolloweeFlag = "1";
                }
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
            tsDataSource.begin();
            //TODO first do select count(*). If needed, add data as fav or delete
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TS_ASSIGNED_UPDATE_SQL);
            statement.setString(1, recorequestId);
            statement.setString(2, userId);
            statement.executeUpdate();

            if (statement != null) {
                statement.close();
            }

            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TS_ASSIGNED_SELECT_SQL);
            statement.setString(1, recorequestId);
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
            String recommendeeUserFolloweeFlag = "0"; // default

            statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                recommendeeUserFacebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "users.user_fb_id"));

                if (statement != null) {
                    statement.close();
                }

                statement = connection.prepareStatement(AskReplyQueries.FACEBOOK_USER_DATA_SELECT_SQL);
                statement.setString(1, recommendeeUserFacebookId);
                resultset = statement.executeQuery();

                if (resultset.next()) {
                    recommendeeUserName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.name"));
                    recommendeeUserPhoto = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "facebook_user_data.picture"));
                }

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
                }

                if (statement != null) {
                    statement.close();
                }

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

            statement = connection.prepareStatement(AskReplyQueries.HISTORICAL_USER_SHARED_DATA_INSERT_SQL);

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

            statement = connection.prepareStatement(AskReplyQueries.USER_POINTS_UPDATE_SQL);

            statement.setInt(1, 2);

            statement.setString(2, recommenderUserId);

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
                recorequestText = resultset.getString(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString(
                                "recorequest_user.RECO_REQUEST_TEMPLATE_SENTENCES")));
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
                        replyTextList.add(recommendationsForYouVO.getRecommenderUserId());
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

                    restaurantDealFlag = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant.restaurant_name"));
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

                TSRestaurantsForYouObj tsRestaurantsForYouObj = new TSRestaurantsForYouObj();
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
            tsDataSource.begin();

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

                    questionRestaurantRestaurantName = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "restaurant.restaurant_name"));
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
            tsRecommendationsFollowupObj.setQuestionUse(questionUser);
            tsRecommendationsFollowupObj.setQuestionRestaurant(questionRestaurant);
            tsRecommendationsFollowupObj.setQuestionUserFolloweeFlag(questionUserFolloweeFlag);
            tsRecommendationsFollowupObj.setQuestionText(questionText);

            return tsRecommendationsFollowupObj;
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

    @Override
    public void showRecommendationsListActioned(String userId,
        String paginationId) throws TasteSyncException {
        // TODO Auto-generated method stub
        //TODO return type to be defined!!
    }

    @Override
    public void showRecommendationsListUnactioned(String userId,
        String paginationId) throws TasteSyncException {
        // TODO Auto-generated method stub
        //TODO return type to be defined!!
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
            statement.setString(2, userId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                recipientId = resultset.getString(CommonFunctionsUtil.getModifiedValueString(
                            resultset.getString(
                                "restaurant_question_user.initiator_user_id")));
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
