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
import com.tastesync.model.objects.derived.TSRestaurantCusineTier2Obj;

import java.util.List;


public class RestaurantBOImpl implements RestaurantBO {
    private RestaurantDAO restaurantDAO = new RestaurantDAOImpl();

    @Override
    public TSRestaurantObj showRestaurantDetail(String restaurantId)
        throws TasteSyncException {
        return restaurantDAO.showRestaurantDetail(restaurantId);
    }

    @Override
    public List<TSRestaurantObj> showRestaurantsDetailsList() throws TasteSyncException {
        return restaurantDAO.showRestaurantsDetailsList();
    }

    @Override
    public TSRestaurantCusineTier2Obj showRestaurantDetail(String userId,
        String restaurantId) throws TasteSyncException {
        return restaurantDAO.showRestaurantDetail(userId, restaurantId);
    }

    @Override
    public TSCurrentRecommendedRestaurantDetailsObj showCurrentRestaurantRecommendedDetails(
        String userId, String restaurantId) throws TasteSyncException {
    	return restaurantDAO.showCurrentRestaurantRecommendedDetails(userId, restaurantId);
    }

    @Override
    public TSMenuObj showRestaurantDetailMenu(String restaurantId)
        throws TasteSyncException {
        return restaurantDAO.showRestaurantDetailMenu(restaurantId);
    }

    @Override
    public TSRestaurantExtendInfoObj showRestaurantDetailMoreInfo(
        String restaurantId) throws TasteSyncException {
        return restaurantDAO.showRestaurantDetailMoreInfo(restaurantId);
    }

    @Override
    public List<TSRestaurantPhotoObj> showRestaurantDetailPhotos(String restaurantId)
        throws TasteSyncException {
        return restaurantDAO.showRestaurantDetailPhotos(restaurantId);
    }

    @Override
    public void submitSaveOrUnsaveRestaurant(String userId,
        String restaurantId, String userRestaurantSavedFlag)
        throws TasteSyncException {
        restaurantDAO.submitSaveOrUnsaveRestaurant(userId, restaurantId,
            userRestaurantSavedFlag);
    }

    @Override
    public void submitAddOrRemoveFromFavs(String userId,
        String restaurantId) throws TasteSyncException {
        restaurantDAO.submitAddOrRemoveFromFavs(userId, restaurantId);
    }

	@Override
	public void submitRestaurantDetailTip(String userId, String restaurantId,
			String tipText) throws TasteSyncException {
		restaurantDAO.submitRestaurantDetailTip(userId, restaurantId, tipText);
	}

	@Override
	public List<TSRestaurantTipsAPSettingsObj> showRestaurantDetailTipAPSettings(String userId, String restaurantId)
			throws TasteSyncException {
	
		return restaurantDAO.showRestaurantDetailTipAPSettings(userId, restaurantId);
	}

}
