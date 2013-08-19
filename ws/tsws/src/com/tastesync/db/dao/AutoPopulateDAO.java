package com.tastesync.db.dao;

import java.util.List;

import com.tastesync.exception.TasteSyncException;
import com.tastesync.model.objects.TSRestaurantObj;

import org.codehaus.jettison.json.JSONArray;


public interface AutoPopulateDAO {
    JSONArray populateCuisineTier1() throws TasteSyncException;

    JSONArray populateCuisineTier2() throws TasteSyncException;

    JSONArray populateOccasionDescriptor() throws TasteSyncException;

    JSONArray populatePriceDescriptor() throws TasteSyncException;

    JSONArray populateThemeDescriptor() throws TasteSyncException;

    JSONArray populateTypeofrestDescriptor() throws TasteSyncException;

    JSONArray populateWhoareyouwithDescriptor() throws TasteSyncException;
    
    List<TSRestaurantObj> populateRestaurantSearchTerms(String key, String cityId) throws TasteSyncException;
    
    void populateLocationSearchTerms(String neighbourhood)  throws TasteSyncException;
}
