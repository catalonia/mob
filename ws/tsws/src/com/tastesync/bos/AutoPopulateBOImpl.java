package com.tastesync.bos;

import com.tastesync.db.dao.AutoPopulateDAO;
import com.tastesync.db.dao.AutoPopulateDAOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSLocationSearchCitiesObj;
import com.tastesync.model.objects.TSRestaurantObj;

import org.codehaus.jettison.json.JSONArray;

import java.util.List;


public class AutoPopulateBOImpl implements AutoPopulateBO {
    private AutoPopulateDAO autoPopulateDAO = new AutoPopulateDAOImpl();

    @Override
    public JSONArray populateCuisineTier1() throws TasteSyncException {
        return autoPopulateDAO.populateCuisineTier1();
    }

    @Override
    public JSONArray populateCuisineTier2() throws TasteSyncException {
        return autoPopulateDAO.populateCuisineTier2();
    }

    @Override
    public JSONArray populateOccasionDescriptor() throws TasteSyncException {
        return autoPopulateDAO.populateOccasionDescriptor();
    }

    @Override
    public JSONArray populatePriceDescriptor() throws TasteSyncException {
        return autoPopulateDAO.populatePriceDescriptor();
    }

    @Override
    public JSONArray populateThemeDescriptor() throws TasteSyncException {
        return autoPopulateDAO.populateThemeDescriptor();
    }

    @Override
    public JSONArray populateTypeofrestDescriptor() throws TasteSyncException {
        return autoPopulateDAO.populateTypeofrestDescriptor();
    }

    @Override
    public JSONArray populateWhoareyouwithDescriptor()
        throws TasteSyncException {
        return autoPopulateDAO.populateWhoareyouwithDescriptor();
    }

    @Override
    public List<TSRestaurantObj> populateRestaurantSearchTerms(String key,
        String cityId) throws TasteSyncException {
        return autoPopulateDAO.populateRestaurantSearchTerms(key, cityId);
    }

    @Override
    public List<TSLocationSearchCitiesObj> populateLocationSearchTerms()
        throws TasteSyncException {
        return autoPopulateDAO.populateLocationSearchTerms();
    }
}
