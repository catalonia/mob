package com.tastesync.bos;

import com.tastesync.db.dao.AskReplyDAO;
import com.tastesync.db.dao.AskReplyDAOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSRestaurantCusineTier2Obj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

import java.util.List;


public class AskReplyBOImpl implements AskReplyBO {
    private AskReplyDAO askReplyDAO = new AskReplyDAOImpl();

    @Override
    public String submitAskForRecommendationSearch(String userId,
        String[] cuisineTier1IdList, String[] cuisineTier2IdList,
        String[] priceIdList, String[] themeIdList,
        String[] whoareyouwithIdList, String[] typeOfRestaurantIdList,
        String[] occasionIdList, String neighborhoodId, String cityId,
        String stateName) throws TasteSyncException {
        return askReplyDAO.submitAskForRecommendationSearch(userId,
            cuisineTier1IdList, cuisineTier2IdList, priceIdList, themeIdList,
            whoareyouwithIdList, typeOfRestaurantIdList, occasionIdList,
            neighborhoodId, cityId, stateName);
    }

    //TODO createRecoRequestTemplateText
    @Override
    public void routeRecoRequestSearchToSimilarTasteUsers() {
        // TODO Implementation Logics
    }

    @Override
    public String showAskForRecommendationFriends(String recoRequestId)
        throws TasteSyncException {
        return askReplyDAO.showAskForRecommendationFriends(recoRequestId);
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
    public void submitRecommendationMessageAnswer(String newMessageText,
        String previousMessageId, String newMessageRecipientUserId,
        String newMessageSenderUserId, String[] restaurantIdList)
        throws TasteSyncException {
        askReplyDAO.submitRecommendationMessageAnswer(newMessageText,
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
    public List<TSRestaurantObj> showRecommendationDidYouLike(
        String recorequestId) throws TasteSyncException {
        return askReplyDAO.showRecommendationDidYouLike(recorequestId);
    }

    @Override
    public TSRecommendeeUserObj showRecommendationsShowLikes(String recoLikeId)
        throws TasteSyncException {
        return askReplyDAO.showRecommendationsShowLikes(recoLikeId);
    }

    @Override
    public TSSenderUserObj showRecommendationMessage(String messageId,
        String recipientUserId) throws TasteSyncException {
        return askReplyDAO.showRecommendationMessage(messageId, recipientUserId);
    }

    @Override
    public TSRecoRequestObj showRecommendationsRequest(String userId,
        String recorequestId) throws TasteSyncException {
        return askReplyDAO.showRecommendationsRequest(userId, recorequestId);
    }

    @Override
    public void submitRecommendationRequestAnswer(String recorequestId,
        String recommenderUserId, String[] restaurantIdList, String replyText)
        throws TasteSyncException {
        askReplyDAO.submitRecommendationRequestAnswer(recorequestId,
            recommenderUserId, restaurantIdList, replyText);
    }

    @Override
    public TSRecommendationsForYouObj showRecommendationsForYou(
        String recorequestId) throws TasteSyncException {
        return askReplyDAO.showRecommendationsForYou(recorequestId);
    }

    @Override
    public TSRecommendationsFollowupObj showRecommendationsFollowup(
        String questionId) throws TasteSyncException {
        return askReplyDAO.showRecommendationsFollowup(questionId);
    }

    public List<TSRestaurantCusineTier2Obj> showListOfRestaurantsSearchResultsBasedOnRecoId(
        String recoRequestId) throws TasteSyncException {
        return askReplyDAO.showListOfRestaurantsSearchResultsBasedOnRecoId(recoRequestId);
    }

    @Override
    public List<TSRestaurantCusineTier2Obj> showListOfRestaurantsSearchResults(
        String restaurantId, String neighborhoodId, String cityId,
        String stateName, String[] cuisineIdList, String[] priceIdList,
        String rating, String savedFlag, String favFlag, String dealFlag,
        String chainFlag) throws TasteSyncException {
        return askReplyDAO.showListOfRestaurantsSearchResults(restaurantId,
            neighborhoodId, cityId, stateName, cuisineIdList, priceIdList,
            rating, savedFlag, favFlag, dealFlag, chainFlag);
    }

    @Override
    public void showRecommendationsListActioned(String userId,
        String paginationId) throws TasteSyncException {
        askReplyDAO.showRecommendationsListActioned(userId, paginationId);
    }

    @Override
    public void showRecommendationsListUnactioned(String userId,
        String paginationId) throws TasteSyncException {
        askReplyDAO.showRecommendationsListUnactioned(userId, paginationId);
    }

	@Override
	public void submitRecommendationFollowupAnswer(String userId,
			String questionId, String replyText) throws TasteSyncException {
		askReplyDAO.submitRecommendationFollowupAnswer(userId, questionId, replyText);
		
	}
}
