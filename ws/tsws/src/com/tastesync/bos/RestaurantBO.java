package com.tastesync.bos;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSCurrentRecommendedRestaurantDetailsObj;
import com.tastesync.model.objects.TSMenuObj;
import com.tastesync.model.objects.TSRestaurantDetailsObj;
import com.tastesync.model.objects.TSRestaurantExtendInfoObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantTipsAPSettingsObj;

import java.util.List;


public interface RestaurantBO {
    TSRestaurantDetailsObj selectRestaurantDetails(String userId,
        String restaurantId) throws TasteSyncException;

    TSRestaurantObj selectRestaurant(String restaurantId)
        throws TasteSyncException;

    List<TSRestaurantObj> selectRestaurants() throws TasteSyncException;

    TSCurrentRecommendedRestaurantDetailsObj selectCurrentRestaurantRecommendedDetails(
        String userId, String restaurantId) throws TasteSyncException;

    TSMenuObj selectRestaurantMenu(String restaurantId)
        throws TasteSyncException;

    TSRestaurantExtendInfoObj selectRestaurantExtendedInfo(String restaurantId)
        throws TasteSyncException;

    TSRestaurantPhotoObj selectRestaurantPhotos(String restaurantId)
        throws TasteSyncException;

    List<TSRestaurantTipsAPSettingsObj> selectRestaurantDetailTipAPSettings(String userId, String restaurantId) throws TasteSyncException;
    
    void insertDeleteSaveOrUnsaveRestaurant(String userId, String restaurantId,
        String userRestaurantSavedFlag) throws TasteSyncException;

    void insertDeleteSaveRestaurantFav(String userId, String restaurantId,
        String userRestaurantFavFlag) throws TasteSyncException;
    
    void insertRestaurantTips(String userId, String restaurantId,
            String tipText) throws TasteSyncException;
    
}

