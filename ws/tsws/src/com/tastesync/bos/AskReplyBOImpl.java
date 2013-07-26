package com.tastesync.bos;

import com.tastesync.db.dao.AskReplyDAO;
import com.tastesync.db.dao.AskReplyDAOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

import java.util.List;


public class AskReplyBOImpl implements AskReplyBO {
    private AskReplyDAO askReplyDAO = new AskReplyDAOImpl();

    @Override
    public void createRecoRequestSearch(String userId,
        String[] cuisineTier1IdList, String[] cuisineTier2IdList,
        String[] priceIdList, String[] themeIdList,
        String[] whoareyouwithIdList, String[] typeOfRestaurantIdList,
        String[] occasionIdList, String neighborhoodId, String cityId,
        String stateName) throws TasteSyncException {
        askReplyDAO.createRecoRequestSearch(userId, cuisineTier1IdList,
            cuisineTier2IdList, priceIdList, themeIdList, whoareyouwithIdList,
            typeOfRestaurantIdList, occasionIdList, neighborhoodId, cityId,
            stateName);
    }

    //TODO createRecoRequestTemplateText
    @Override
    public void routeRecoRequestSearchToSimilarTasteUsers() {
        // TODO Implementation Logics
    }

    @Override
    public void submitAskForRecommendationFriends(String recoRequestId,
        String recoRequestFriendText, String[] friendsFacebookIdList,
        String postRecoRequestOnFacebook) throws TasteSyncException {
        askReplyDAO.submitAskForRecommendationFriends(recoRequestId,
            recoRequestFriendText, friendsFacebookIdList,
            postRecoRequestOnFacebook);
    }

    @Override
    public void insertRecommendationMessageAnswer(String newMessageText,
        String previousMessageId, String newMessageRecipientUserId,
        String newMessageSenderUserId, String[] restaurantIdList)
        throws TasteSyncException {
        askReplyDAO.insertRecommendationMessageAnswer(newMessageText,
            previousMessageId, newMessageRecipientUserId,
            newMessageSenderUserId, restaurantIdList);
    }

    @Override
    public void submitRecommendationDidYouLikeLikes(String userId,
        String restaurantId, String likeFlag) throws TasteSyncException {
        askReplyDAO.submitRecommendationDidYouLikeLikes(userId, restaurantId,
            likeFlag);
    }

    @Override
    public List<TSRestaurantObj> selectRecommendedRestaurantsForUsers(
        String recorequestId) throws TasteSyncException {
        return askReplyDAO.selectRecommendedRestaurantsForUsers(recorequestId);
    }

    @Override
    public TSRecommendeeUserObj selectRecommendationsShowLikes(
        String recoLikeId) throws TasteSyncException {
        return askReplyDAO.selectRecommendationsShowLikes(recoLikeId);
    }

    @Override
    public TSSenderUserObj selectRecommendationMessage(String messageId,
        String recipientUserId) throws TasteSyncException {
        return askReplyDAO.selectRecommendationMessage(messageId,
            recipientUserId);
    }

    @Override
    public TSRecoRequestObj selectRecommendationsRequest(String userId,
        String recorequestId) throws TasteSyncException {
        return askReplyDAO.selectRecommendationsRequest(userId, recorequestId);
    }

    @Override
    public void insertRecommendationRequestAnswer(String recorequestId,
        String recommenderUserId, String[] restaurantIdList, String replyText)
        throws TasteSyncException {
        askReplyDAO.insertRecommendationRequestAnswer(recorequestId,
            recommenderUserId, restaurantIdList, replyText);
    }

    @Override
    public TSRecommendationsForYouObj selectRecommendationsForYou(
        String recorequestId) throws TasteSyncException {
        return askReplyDAO.selectRecommendationsForYou(recorequestId);
    }

    @Override
    public TSRecommendationsFollowupObj selectRecommendationsFollowup(
        String questionId) throws TasteSyncException {
        return askReplyDAO.selectRecommendationsFollowup(questionId);
    }
}
