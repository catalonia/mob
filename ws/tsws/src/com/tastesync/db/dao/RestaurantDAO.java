package com.tastesync.db.dao;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSCurrentRecommendedRestaurantDetailsObj;
import com.tastesync.model.objects.TSMenuObj;
import com.tastesync.model.objects.TSRestaurantDetailsObj;
import com.tastesync.model.objects.TSRestaurantExtendInfoObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantQuesionNonTsAssignedObj;
import com.tastesync.model.objects.TSRestaurantTipsAPSettingsObj;
import com.tastesync.model.objects.derived.TSRestaurantBuzzObj;
import com.tastesync.model.objects.derived.TSRestaurantRecommendersDetailsObj;

import java.util.List;


public interface RestaurantDAO {
    TSRestaurantDetailsObj showRestaurantDetail(String userId,
        String restaurantId) throws TasteSyncException;

    TSRestaurantObj showRestaurantDetail(String restaurantId)
        throws TasteSyncException;

    List<TSRestaurantObj> showRestaurantsDetailsList()
        throws TasteSyncException;

    TSCurrentRecommendedRestaurantDetailsObj showCurrentRestaurantRecommendedDetails(
        String userId, String restaurantId) throws TasteSyncException;

    TSMenuObj showRestaurantDetailMenu(String restaurantId)
        throws TasteSyncException;

    TSRestaurantExtendInfoObj showRestaurantDetailMoreInfo(String restaurantId)
        throws TasteSyncException;

    List<TSRestaurantPhotoObj> showRestaurantDetailPhotos(String restaurantId)
        throws TasteSyncException;

    List<TSRestaurantTipsAPSettingsObj> showRestaurantDetailTipAPSettings(
        String userId) throws TasteSyncException;

    void submitSaveOrUnsaveRestaurant(String userId, String restaurantId,
        String userRestaurantSavedFlag) throws TasteSyncException;

    void submitAddOrRemoveFromFavs(String userId, String restaurantId,
        String userRestaurantFavFlag) throws TasteSyncException;

    void submitRestaurantDetailTip(String userId, String restaurantId,
        String tipText, String shareOnFacebook, String shareOnTwitter)
        throws TasteSyncException;

    TSRestaurantRecommendersDetailsObj showRestaurantDetailAsk(String userId,
        String restaurantId) throws TasteSyncException;

    TSRestaurantQuesionNonTsAssignedObj submitRestaurantDetailAsk(
        String userId, String restaurantId, String questionText,
        String postQuestionOnForum, String[] recommendersUserIdList,
        String[] friendsFacebookIdList) throws TasteSyncException;

    List<TSRestaurantBuzzObj> showRestaurantBuzz(String userId, String restaurantId)
        throws TasteSyncException;
}
