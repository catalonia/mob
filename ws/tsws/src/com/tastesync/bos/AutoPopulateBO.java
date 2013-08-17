package com.tastesync.bos;

import java.util.List;

import javax.ws.rs.FormParam;

import org.codehaus.jettison.json.JSONArray;

import com.tastesync.exception.TasteSyncException;
import com.tastesync.model.objects.TSRestaurantObj;


public interface AutoPopulateBO {
	JSONArray populateCuisineTier1() throws TasteSyncException;
	
	JSONArray populateCuisineTier2() throws TasteSyncException;

	JSONArray populateOccasionDescriptor() throws TasteSyncException;

	JSONArray populatePriceDescriptor() throws TasteSyncException;

	JSONArray populateThemeDescriptor() throws TasteSyncException;

	JSONArray populateTypeofrestDescriptor() throws TasteSyncException;

	JSONArray populateWhoareyouwithDescriptor() throws TasteSyncException;
	
	List<TSRestaurantObj> populateRestaurantSearchTerms(String key, String cityId) throws TasteSyncException;
}
