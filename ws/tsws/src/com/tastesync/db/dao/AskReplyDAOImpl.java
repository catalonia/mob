package com.tastesync.db.dao;

import com.tastesync.db.pool.TSDataSource;
import com.tastesync.db.queries.AskReplyQueries;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import java.util.List;


public class AskReplyDAOImpl extends BaseDaoImpl implements AskReplyDAO {
    @Override
    public void submitAskForRecommendationSearch(String userId,
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

            statement.setString(1, recoRequestId);
            statement.setString(2, userId);
            statement.setTimestamp(3,
                CommonFunctionsUtil.getCurrentDateTimestamp());
            statement.setString(4, TSConstants.EMPTY_STRING);
            statement.setString(5, mergedTextBuffer.toString());

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
    public void submitAskForRecommendationFriends(String recoRequestId,
        String recoRequestFriendText, String[] friendsFacebookIdList,
        String postRecoRequestOnFacebook) throws TasteSyncException {
        // TODO Auto-generated method stub
    }

    public boolean submitSignupDetail(TSAskSubmitLoginObj askObj)
        throws TasteSyncException {
        return false;
    }

    @Override
    public TSRecommendeeUserObj showRecommendationsShowLikes(
        String recoLikeId) throws TasteSyncException {
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
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public void submitRecommendationRequestAnswer(String recorequestId,
			String recommenderUserId, String[] restaurantIdList,
			String replyText) throws TasteSyncException {
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
}
