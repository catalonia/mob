package com.tastesync.db.queries;

public class CityQueries {
	public static String CITY_STATE_SELECT_SQL = "SELECT * FROM cities WHERE state = ? AND city = ?";
	public static String CITY_SELECT_SQL = "SELECT * FROM cities WHERE city_id = ?";
	public static String CITY_KEY_SELECT_SQL = "SELECT * FROM cities WHERE city LIKE ?";
}
