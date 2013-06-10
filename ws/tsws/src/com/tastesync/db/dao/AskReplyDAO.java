package com.tastesync.db.dao;

import com.tastesync.exception.TasteSyncException;


public interface AskReplyDAO {
    void createRecoRequestSearch(String userId, String[] cuisineTier1IdList, String[] cuisineTier2IdList,
            String[] priceIdList, String[] themeIdList, String[] whoareyouwithIdList,
            String[] typeOfRestaurantIdList, String[] occasionIdList,
            String neighborhoodId, String cityId, String stateName)
        throws TasteSyncException;
    //TODO createRecoRequestTemplateText


    void submitAskForRecommendationFriends(String recoRequestId,
            String recoRequestFriendText, String[] friendsFacebookIdList,
            String postRecoRequestOnFacebook) throws TasteSyncException;
}
