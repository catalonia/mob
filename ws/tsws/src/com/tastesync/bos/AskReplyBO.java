package com.tastesync.bos;

import com.tastesync.exception.TasteSyncException;


public interface AskReplyBO {
    void createRecoRequestSearch(String userId,
            String[] cuisineTier1IdList, String[] cuisineTier2IdList,
            String[] priceIdList, String[] themeIdList,
            String[] whoareyouwithIdList, String[] typeOfRestaurantIdList,
            String[] occasionIdList, String neighborhoodId, String cityId,
            String stateName)
        throws TasteSyncException;

    //TODO different thread - failover strategy - instant trigger / regular call for failed calls
    //recreate parameters for routing from DB
    void routeRecoRequestSearchToSimilarTasteUsers(// create template text based on different request parameters available in DB for
    // generating customised messages.
    );
    
    void submitAskForRecommendationFriends(String recoRequestId,
            String recoRequestFriendText, String[] friendsFacebookIdList,
            String postRecoRequestOnFacebook) throws TasteSyncException;
    
            
}
