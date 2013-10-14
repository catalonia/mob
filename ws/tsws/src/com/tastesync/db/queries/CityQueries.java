package com.tastesync.db.queries;

public interface CityQueries {
	public static String CITY_STATE_SELECT_SQL = "SELECT * FROM cities WHERE state = ? AND city = ?";
	public static String CITY_SELECT_SQL = "SELECT * FROM cities WHERE city_id = ?";
	public static String CITY_KEY_STATE_SELECT_SQL = "SELECT * FROM cities WHERE state LIKE ?";
	public static String CITY_KEY_CITY_SELECT_SQL = "SELECT * FROM cities WHERE city LIKE ?";
	//city_neighbourhood
	public static String CITY_NEIGHBOURHOOD_KEY_DESC_SELECT_SQL = "SELECT * FROM cities, city_neighbourhood WHERE city_neighbourhood.NEIGHBOURHOOD_DESC LIKE ? AND city_neighbourhood.CITYID = cities.city_id";
}
