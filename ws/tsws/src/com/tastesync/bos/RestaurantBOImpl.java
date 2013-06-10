package com.tastesync.bos;

import com.tastesync.db.dao.RestaurantDAO;
import com.tastesync.db.dao.RestaurantDAOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSCurrentRecommendedRestaurantDetailsObj;
import com.tastesync.model.objects.TSMenuObj;
import com.tastesync.model.objects.TSRestaurantDetailsObj;
import com.tastesync.model.objects.TSRestaurantExtendInfoObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantTipsAPSettingsObj;

import java.util.List;


public class RestaurantBOImpl implements RestaurantBO {
    private RestaurantDAO restaurantDAO = new RestaurantDAOImpl();

    @Override
    public TSRestaurantObj selectRestaurant(String restaurantId)
        throws TasteSyncException {
        return restaurantDAO.selectRestaurant(restaurantId);
    }

    @Override
    public List<TSRestaurantObj> selectRestaurants() throws TasteSyncException {
        return restaurantDAO.selectRestaurants();
    }

    @Override
    public TSRestaurantDetailsObj selectRestaurantDetails(String userId,
        String restaurantId) throws TasteSyncException {
        return restaurantDAO.selectRestaurantDetails(userId, restaurantId);
    }

    @Override
    public TSCurrentRecommendedRestaurantDetailsObj selectCurrentRestaurantRecommendedDetails(
        String userId, String restaurantId) throws TasteSyncException {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public TSMenuObj selectRestaurantMenu(String restaurantId)
        throws TasteSyncException {
        return restaurantDAO.selectRestaurantMenu(restaurantId);
    }

    @Override
    public TSRestaurantExtendInfoObj selectRestaurantExtendedInfo(
        String restaurantId) throws TasteSyncException {
        return restaurantDAO.selectRestaurantExtendedInfo(restaurantId);
    }

    @Override
    public TSRestaurantPhotoObj selectRestaurantPhotos(String restaurantId)
        throws TasteSyncException {
        return restaurantDAO.selectRestaurantPhotos(restaurantId);
    }

    @Override
    public void insertDeleteSaveOrUnsaveRestaurant(String userId,
        String restaurantId, String userRestaurantSavedFlag)
        throws TasteSyncException {
        restaurantDAO.insertDeleteSaveOrUnsaveRestaurant(userId, restaurantId,
            userRestaurantSavedFlag);
    }

    @Override
    public void insertDeleteSaveRestaurantFav(String userId,
        String restaurantId, String userRestaurantFavFlag) throws TasteSyncException {
        restaurantDAO.insertDeleteSaveRestaurantFav(userId, restaurantId,
            userRestaurantFavFlag);
    }

	@Override
	public void insertRestaurantTips(String userId, String restaurantId,
			String tipText) throws TasteSyncException {
		restaurantDAO.insertRestaurantTips(userId, restaurantId, tipText);
	}

	@Override
	public TSRestaurantTipsAPSettingsObj selectRestaurantDetailTipAPSettings(String userId, String restaurantId)
			throws TasteSyncException {
	
		return restaurantDAO.selectRestaurantDetailTipAPSettings(userId, restaurantId);
	}

}
