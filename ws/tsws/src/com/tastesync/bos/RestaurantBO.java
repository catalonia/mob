package com.tastesync.bos;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSCurrentRecommendedRestaurantDetailsObj;
import com.tastesync.model.objects.TSMenuObj;
import com.tastesync.model.objects.TSRestaurantExtendInfoObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantTipsAPSettingsObj;
import com.tastesync.model.objects.derived.TSRestaurantCusineTier2Obj;
import com.tastesync.model.objects.derived.TSRestaurantRecommendersDetailsObj;

import java.util.List;


public interface RestaurantBO {
    TSRestaurantCusineTier2Obj showRestaurantDetail(String userId,
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
        String userId, String restaurantId) throws TasteSyncException;

    void submitSaveOrUnsaveRestaurant(String userId, String restaurantId,
        String userRestaurantSavedFlag) throws TasteSyncException;

    void submitAddOrRemoveFromFavs(String userId, String restaurantId)
        throws TasteSyncException;

    void submitRestaurantDetailTip(String userId, String restaurantId,
        String tipText) throws TasteSyncException;

    TSRestaurantRecommendersDetailsObj showRestaurantDetailAsk(String userId,
        String restaurantId) throws TasteSyncException;

    void submitRestaurantDetailAsk(String userId, String restaurantId,
        String questionText, String postQuestionOnForum,
        String recommendersUserIdList, String friendsFacebookIdList)
        throws TasteSyncException;
}
