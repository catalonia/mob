package com.tastesync.bos;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

import java.util.List;

import javax.ws.rs.FormParam;
import javax.ws.rs.QueryParam;


public interface AskReplyBO {
    void submitAskForRecommendationSearch(String userId, String[] cuisineTier1IdList,
        String[] cuisineTier2IdList, String[] priceIdList,
        String[] themeIdList, String[] whoareyouwithIdList,
        String[] typeOfRestaurantIdList, String[] occasionIdList,
        String neighborhoodId, String cityId, String stateName)
        throws TasteSyncException;

    //TODO different thread - failover strategy - instant trigger / regular call for failed calls
    //recreate parameters for routing from DB
    void routeRecoRequestSearchToSimilarTasteUsers( // create template text based on different request parameters available in DB for
                                                    // generating customised messages.
    );

    void submitAskForRecommendationFriends(String recoRequestId,
        String recoRequestFriendText, String[] friendsFacebookIdList,
        String postRecoRequestOnFacebook) throws TasteSyncException;

    TSRecoRequestObj showRecommendationsRequest(String userId,
        String recorequestId) throws TasteSyncException;

    TSSenderUserObj showRecommendationMessage(String messageId,
        String recipientUserId) throws TasteSyncException;

    void submitRecommendationRequestAnswer(String recorequestId,
            String recommenderUserId, String[] restaurantIdList, String replyText)
            throws TasteSyncException;
    
    void submitRecommendationMessageAnswer(String newMessageText,
        String previousMessageId, String newMessageRecipientUserId,
        String newMessageSenderUserId, String[] restaurantIdList)
        throws TasteSyncException;

    TSRecommendationsForYouObj showRecommendationsForYou(String recorequestId)
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
