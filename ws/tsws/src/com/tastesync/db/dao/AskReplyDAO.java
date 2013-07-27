package com.tastesync.db.dao;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

import java.util.List;


public interface AskReplyDAO {
    void submitAskForRecommendationSearch(String userId, String[] cuisineTier1IdList,
        String[] cuisineTier2IdList, String[] priceIdList,
        String[] themeIdList, String[] whoareyouwithIdList,
        String[] typeOfRestaurantIdList, String[] occasionIdList,
        String neighborhoodId, String cityId, String stateName)
        throws TasteSyncException;

    //TODO createRecoRequestTemplateText
    void submitAskForRecommendationFriends(String recoRequestId,
        String recoRequestFriendText, String[] friendsFacebookIdList,
        String postRecoRequestOnFacebook) throws TasteSyncException;

    public boolean submitSignupDetail(TSAskSubmitLoginObj askObj)
        throws TasteSyncException;

    TSRecoRequestObj showRecommendationsRequest(String userId,
        String recorequestId) throws TasteSyncException;

    TSRecommendationsForYouObj showRecommendationsForYou(String recorequestId)
        throws TasteSyncException;

    TSSenderUserObj showRecommendationMessage(String messageId,
        String recipientUserId) throws TasteSyncException;

    void submitRecommendationRequestAnswer(String recorequestId,
        String recommenderUserId, String[] restaurantIdList, String replyText)
        throws TasteSyncException;

    void submitRecommendationMessageAnswer(String newMessageText,
        String previousMessageId, String newMessageRecipientUserId,
        String newMessageSenderUserId, String[] restaurantIdList)
        throws TasteSyncException;

    TSRecommendeeUserObj showRecommendationsShowLikes(String recoLikeId)
        throws TasteSyncException;

    TSRecommendationsFollowupObj showRecommendationsFollowup(String questionId)
            throws TasteSyncException;
    
    List<TSRestaurantObj> showRecommendationDidYouLike(
        String recorequestId) throws TasteSyncException;

    void submitRecommendationDidYouLikeLikes(String userId,
        String restaurantId, String likeFlag) throws TasteSyncException;
}
