package com.tastesync.bos;

import com.tastesync.db.dao.AskReplyDAO;
import com.tastesync.db.dao.AskReplyDAOImpl;

import com.tastesync.exception.TasteSyncException;


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

}
