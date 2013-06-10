package com.tastesync.db.dao;

import org.codehaus.jettison.json.JSONArray;

import com.tastesync.exception.TasteSyncException;

public interface AutoPopulateDAO {

	JSONArray populateCuisineTier1() throws TasteSyncException;
	
	JSONArray populateCuisineTier2() throws TasteSyncException;

	JSONArray populateOccasionDescriptor() throws TasteSyncException;

	JSONArray populatePriceDescriptor() throws TasteSyncException;

	JSONArray populateThemeDescriptor() throws TasteSyncException;

	JSONArray populateTypeofrestDescriptor() throws TasteSyncException;

	JSONArray populateWhoareyouwithDescriptor() throws TasteSyncException;
}
