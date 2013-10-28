package com.tastesync.db.dao;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSLocationSearchCitiesObj;
import com.tastesync.model.objects.TSRestaurantBasicObj;
import com.tastesync.model.objects.TSRestaurantObj;

import org.codehaus.jettison.json.JSONArray;

import java.util.List;


public interface AutoPopulateDAO {
    JSONArray populateCuisineTier1() throws TasteSyncException;

    JSONArray populateCuisineTier2() throws TasteSyncException;

    JSONArray populateOccasionDescriptor() throws TasteSyncException;

    JSONArray populatePriceDescriptor() throws TasteSyncException;

    JSONArray populateThemeDescriptor() throws TasteSyncException;

    JSONArray populateTypeofrestDescriptor() throws TasteSyncException;

    JSONArray populateWhoareyouwithDescriptor() throws TasteSyncException;

    List<TSRestaurantObj> populateRestaurantSearchTerms(String key,
        String cityId) throws TasteSyncException;

    List<TSLocationSearchCitiesObj> populateLocationSearchTerms()
        throws TasteSyncException;

    List<TSRestaurantBasicObj> populateSuggestedRestaurantNames(
        String restaurantKey, String cityId) throws TasteSyncException;
}
