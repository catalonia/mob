package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.AskReplyQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSUserProfileBasicObj;
import com.tastesync.model.objects.derived.TSRecoRequestNonAssignedObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSRestaurantCusineTier2Obj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

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

            System.out.println("AskReplyQueries.RECOREQUEST_USER_INSERT_SQL=" +
                AskReplyQueries.RECOREQUEST_USER_INSERT_SQL);

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

            for (String cuisineId : cuisineTier1IdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_CUISINE_TIER1_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, cuisineId);
                statement.executeUpdate();
            }

            for (String cuisineId : cuisineTier2IdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_CUISINE_TIER2_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, cuisineId);
                statement.executeUpdate();
            }

            for (String priceId : priceIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_PRICE_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, priceId);
                statement.executeUpdate();
            }

            for (String themeId : themeIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_THEME_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, themeId);
                statement.executeUpdate();
            }

            for (String whoareyouwithId : whoareyouwithIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_WHOAREYOUWITH_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, whoareyouwithId);
                statement.executeUpdate();
            }

            for (String typeOfRestaurantId : typeOfRestaurantIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TYPEOFREST_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, typeOfRestaurantId);
                statement.executeUpdate();
            }

            for (String occasionId : occasionIdList) {
                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_OCCASION_INSERT_SQL);
                statement.setString(1, recoRequestId);
                statement.setString(2, occasionId);
                statement.executeUpdate();
            }

            statement = connection.prepareStatement(AskReplyQueries.USER_RECO_SUPPPLY_TIER_INSERT_SQL);
            statement.setString(1, userId);
            statement.executeUpdate();

            statement = connection.prepareStatement(AskReplyQueries.USER_RECO_DEMAND_TIER_INSERT_SQL);
            statement.setString(1, userId);
            statement.executeUpdate();

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
                    statement = connection.prepareStatement(AskReplyQueries.USER_ID_FRM_FB_ID_SELECT_SQL);
                    statement.setString(1, friendsFacebookId);
                    resultset = statement.executeQuery();

                    String friendId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "users.user_id"));

                    statement = connection.prepareStatement(AskReplyQueries.FRIEND_TRUSTED_FLAG_SELECT_SQL);
                    statement.setString(1, userId);
                    statement.setString(2, friendId);

                    resultset = statement.executeQuery();

                    String friendTrustedFlag = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                                "user_friend_tastesync.FRIEND_TRUSTED_FLAG"));

                    statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_TS_ASSIGNED_INSERT_SQL);
                    statement.setString(1, "N");
                    statement.setString(2, friendTrustedFlag);
                    statement.setString(3, "user-assigned-friend");
                    statement.setString(4, friendId);
                    statement.setString(5, "Y");
                    statement.setString(6, recoRequestId);
                    statement.executeUpdate();
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
                }
            }

            tsRecoRequestNonAssignedObj.setNonassignedFacebookIdList(nonassignedFacebookIdList);
            statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_UPDATE_SQL);
            statement.setString(1, recoRequestFriendText);
            statement.setString(2, recoRequestId);
            statement.setString(3, userId);
            statement.executeUpdate();

            statement = connection.prepareStatement(AskReplyQueries.FB_ID_FRM_USER_ID_SELECT_SQL);
            statement.setString(1, userId);
            resultset = statement.executeQuery();

            if (resultset.next()) {
                String facebookId = CommonFunctionsUtil.getModifiedValueString(resultset.getString(
                            "users.user_fb_id"));
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
                resultset = statement.executeQuery();
            } else {
                System.out.println("FB ser Id does not exist for user id=" +
                    userId);
            }

            statement = connection.prepareStatement(AskReplyQueries.USER_RECO_SUPPPLY_TIER_INSERT_SQL);
            statement.setString(1, userId);
            statement.executeUpdate();

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
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public List<TSRestaurantObj> showRecommendationDidYouLike(
        String recorequestId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public void submitRecommendationDidYouLikeLikes(String userId,
        String restaurantId, String likeFlag) throws TasteSyncException {
        // TODO Auto-generated method stub
    }

    @Override
    public void submitRecommendationMessageAnswer(String newMessageText,
        String previousMessageId, String newMessageRecipientUserId,
        String newMessageSenderUserId, String[] restaurantIdList)
        throws TasteSyncException {
        // TODO Auto-generated method stub
    }

    @Override
    public TSSenderUserObj showRecommendationMessage(String messageId,
        String recipientUserId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
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

                statement = connection.prepareStatement(AskReplyQueries.RECOREQUEST_USER_FOLLOWEEFLAG_SELECT_SQL);
                statement.setString(1, recommendeeUserUserId);
                statement.setString(2, userId);

                resultset = statement.executeQuery();

                if (resultset.next()) {
                    recommendeeUserFolloweeFlag = "1";
                }

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
        // TODO Auto-generated method stub
    }

    @Override
    public TSRecommendationsForYouObj showRecommendationsForYou(
        String recorequestId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public TSRecommendationsFollowupObj showRecommendationsFollowup(
        String questionId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
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
        // TODO Auto-generated method stub
    }
}
