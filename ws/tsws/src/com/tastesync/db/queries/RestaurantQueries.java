package com.tastesync.db.queries;

public interface RestaurantQueries extends TSDBCommonQueries {
    //selectRestaurants
    public static final String RESTAURANT_SELECT_SQL = "SELECT " +
        "restaurant.RESTAURANT_ID, " + "restaurant.FACTUAL_ID, " +
        "restaurant.RESTAURANT_NAME, " + "restaurant.FACTUAL_RATING, " +
        "restaurant.PRICE_RANGE, " + "restaurant.RESTAURANT_CITY_ID, " +
        "restaurant.RESTAURANT_HOURS, " + "restaurant.RESTAURANT_LAT, " +
        "restaurant.RESTAURANT_LON, " + "restaurant.SUM_VOTE_COUNT, " +
        "restaurant.SUM_VOTE_VALUE, " + "restaurant.TBD_OPENTABLE_ID " +
        "FROM " + "restaurant " + "WHERE restaurant.RESTAURANT_ID= " + " ?";

    //TODO valid ones
    //selectRestaurant
    public static final String RESTAURANTS_SELECT_SQL = "SELECT " +
        "restaurant.RESTAURANT_ID, " + "restaurant.FACTUAL_ID, " +
        "restaurant.RESTAURANT_NAME, " + "restaurant.FACTUAL_RATING, " +
        "restaurant.PRICE_RANGE, " + "restaurant.RESTAURANT_CITY_ID, " +
        "restaurant.RESTAURANT_HOURS, " + "restaurant.RESTAURANT_LAT, " +
        "restaurant.RESTAURANT_LON, " + "restaurant.SUM_VOTE_COUNT, " +
        "restaurant.SUM_VOTE_VALUE, " + "restaurant.TBD_OPENTABLE_ID " +
        "FROM " + "restaurant ";
    public static final String RESTAURANT_MENU_SELECT_SQL = "" +
        "SELECT restaurant_menu.restaurant_id, " +
        "       restaurant_menu.menu_source, " +
        "       restaurant_menu.menu_mobileurl " + "FROM   restaurant_menu " +
        "WHERE  restaurant_menu.restaurant_id = ? ";
    public static final String RESTAURANT_EXTENDED_INFO_SELECT_SQL = "" +
        "SELECT restaurant_extended_info.tel,-- phoneNumber " +
        "       restaurant_extended_info.website,-- website " +
        "       restaurant_extended_info.options_healthy,-- healthyOptionsFlag " +
        "       restaurant_extended_info.wifi,-- wifiFlag " +
        "       restaurant_extended_info.payment_cashonly,-- payCashonlyFlag " +
        "       restaurant_extended_info.reservations,-- reservationsFlag " +
        "       restaurant_extended_info.open_24hrs,-- open24HoursFlag " +
        "       restaurant_extended_info.attire,-- attire " +
        "       restaurant_extended_info.attire_required,-- listOfAttireRequired " +
        "       restaurant_extended_info.attire_prohibited,-- listOfAttireProhibited " +
        "       restaurant_extended_info.parking,-- parkingFlag " +
        "       restaurant_extended_info.parking_valet,-- parkingValetFlag " +
        "       restaurant_extended_info.parking_free,-- parkingFreeFlag " +
        "       restaurant_extended_info.parking_garage,-- parkingGarageFlag " +
        "       restaurant_extended_info.parking_lot,-- parkingLotFlag " +
        "       restaurant_extended_info.parking_street,-- parkingStreetFlag " +
        "       restaurant_extended_info.parking_validated,-- parkingValidatedFlag " +
        "       restaurant_extended_info.smoking,-- smokingFlag " +
        "       restaurant_extended_info.accessible_wheelchair, " +
        "       -- accessibleWheelchairFlag " +
        "       restaurant_extended_info.alcohol,-- alcoholFlag " +
        "       restaurant_extended_info.alcohol_bar,-- alcoholBarFlag " +
        "       restaurant_extended_info.alcohol_beer_wine,-- alcoholBeerWineFlag " +
        "       restaurant_extended_info.alcohol_byob,-- alcoholByobFlag " +
        "       restaurant_extended_info.groups_goodfor,-- groupsGoodForFlag " +
        "       restaurant_extended_info.kids_goodfor,-- kidsGoodForFlag " +
        "       restaurant_extended_info.kids_menu,-- kidsMenuFlag " +
        "       restaurant_extended_info.meal_breakfast,-- mealBreakfastFlag " +
        "       restaurant_extended_info.meal_cater,-- mealCaterFlag " +
        "       restaurant_extended_info.meal_deliver,-- mealDeliverFlag " +
        "       restaurant_extended_info.meal_dinner,-- mealDinnerFlag " +
        "       restaurant_extended_info.meal_lunch,-- mealLunchFlag " +
        "       restaurant_extended_info.meal_takeout,-- mealTakeoutFlag " +
        "       restaurant_extended_info.options_glutenfree,-- optionsGlutenfreeFlag " +
        "       restaurant_extended_info.options_lowfat,-- optionsLowfatFlag " +
        "       restaurant_extended_info.options_organic,-- optionsOrganicFlag " +
        "       restaurant_extended_info.options_vegan,-- optionsVeganFlag " +
        "       restaurant_extended_info.options_vegetarian,-- optionsVegetarianFlag " +
        "       restaurant_extended_info.room_private,-- roomPrivateFlag " +
        "       restaurant_extended_info.seating_outdoor -- seatingOutdoorFlag " +
        "FROM   restaurant_extended_info " +
        "WHERE  restaurant_extended_info.restaurant_id = ? -- restaurantId " +
        "";
    public static String RESTAURANT_EXTENDED_INFO_ADDRESS_SELECT_SQL = "" +
        "SELECT restaurant_extended_info.address,-- address Part 1 " +
        "       restaurant_extended_info.address_extended,-- address Part 2 " +
        "       restaurant_extended_info.postcode -- address Part 6 " +
        "FROM   restaurant_extended_info " +
        "WHERE  restaurant_extended_info.restaurant_id = ? -- restaurantId " +
        "";
    public static String RESTAURANT_EXTENDED_INFO_CITY_SELECT_SQL = "" +
        "SELECT cities.city,-- address Part 3 " +
        "       cities.state,-- address Part 4 " +
        "       cities.country -- address Part 5 " +
        "FROM   (SELECT restaurant.restaurant_city_id " +
        "        FROM   restaurant " +
        "        WHERE  restaurant.restaurant_id = ? -- restaurantId " +
        "       ) restcityid, " + "       cities " +
        "WHERE  restcityid.restaurant_city_id = cities.city_id ";
    public static String RESTAURANT_LAT_LON_SELECT_SQL = "" +
        "SELECT restaurant.restaurant_lat, " +
        "       restaurant.restaurant_lon " + "FROM   restaurant " +
        "WHERE  restaurant.restaurant_id = ? -- restaurantId " + "";
    public static String RESTAURANT_PHOTO_SELECT_SQL = "" +
        "SELECT restaurant_photo.restaurant_id, " +
        "       restaurant_photo.photo_id, " +
        "       restaurant_photo.prefix, " +
        "       restaurant_photo.suffix, " + "       restaurant_photo.width, " +
        "       restaurant_photo.height, " +
        "       restaurant_photo.ultimate_source_name, " +
        "       restaurant_photo.ultimate_source_url, " +
        "       restaurant_photo.photo_source " + "FROM   restaurant_photo " +
        "WHERE  restaurant_photo.restaurant_id = ?";
    public static String RESTAURANT_TIPS_INSERT_SQL = "" +
        "INSERT INTO restaurant_tips_tastesync " + "            (" +
        "             restaurant_tips_tastesync.created, " +
        "             restaurant_tips_tastesync.restaurant_id, " +
        "             restaurant_tips_tastesync.tbd_tip_placeholders, " +
        "             restaurant_tips_tastesync.tip_id, " +
        "             restaurant_tips_tastesync.tip_source, " +
        "             restaurant_tips_tastesync.tip_text, " +
        "             restaurant_tips_tastesync.user_id) " + "VALUES      ( " +
        "?," + "?," + "''," //Phasse 2
         +"?" + "'TS'," //FIXED
         +"?," + "?" + ")";
    public static String RESTAURANT_TIPS_AP_SELECT_SQL = "" + "SELECT " +
        "usg_usnc_ap.usnc_yn " + "FROM   usg_usnc_ap " +
        "WHERE  usg_usnc_ap.user_id = ? " + "       AND" +
        "       usg_usnc_ap.usnc_id = ? " + "       AND " +
        "       usg_usnc_ap.ap_id = ? " + "";
    public static String RESTAURANT_CITY_SELECT_SQL = "SELECT *  FROM restaurant WHERE RESTAURANT_CITY_ID = ?  AND RESTAURANT_NAME LIKE ?";
    public static String RESTAURANT_DETAIL_TIP_APSETTINGS_SELECT_SQL = "" +
        "SELECT usg_usnc_ap.usnc_yn, " + "       usg_usnc_ap.usnc_id " +
        "FROM   usg_usnc_ap " + "WHERE  usg_usnc_ap.user_id = ? " +
        "       AND ( usg_usnc_ap.usnc_id = 1 " +
        "              OR usg_usnc_ap.usnc_id = 2 ) " +
        "       AND usg_usnc_ap.ap_id = 2 ";

    //TODO test sysdate
    public static String RESTAURANT_TIP_INSERT_SQL = "" +
        "INSERT INTO restaurant_tips_tastesync " +
        "            (restaurant_tips_tastesync.created, " +
        "             restaurant_tips_tastesync.restaurant_id, " +
        "             restaurant_tips_tastesync.tbd_tip_placeholders, " +
        "             restaurant_tips_tastesync.tip_id, " +
        "             restaurant_tips_tastesync.tip_source, " +
        "             restaurant_tips_tastesync.tip_text, " +
        "             restaurant_tips_tastesync.user_id) " +
        "VALUES      ( SYSDATE()," + "              ?, " +
        "              '', " + "              ?, " + "              'TS', " +
        "              ?, " + "              ? )";
    public static String SAVERESTAURANTFAV_INSERT_SQL = "" +
        "INSERT INTO user_restaurant_saved " +
        "            (user_restaurant_saved.restaurant_id, " +
        "             user_restaurant_saved.saved_notes, " +
        "             user_restaurant_saved.user_id) " + "VALUES      ( ?, " +
        "              '', " + "              ? )";
    public static String SAVERESTAURANTFAV_DELETE_SQL = "" +
        "DELETE FROM user_restaurant_saved " +
        "WHERE  user_restaurant_saved.user_id = ? " +
        "       AND user_restaurant_saved.restaurant_id = ?";
 
    public static String RESTAURANT_FAV_SELECT_SQL = "" +
            "SELECT count(*) from user_restaurant_fav " +
            "WHERE user_restaurant_fav.restaurant_id = ? " +
            "      AND user_restaurant_fav.user_id = ?) ";
    
    public static String RESTAURANT_FAV_INSERT_SQL = "" +
            "INSERT INTO user_restaurant_fav " +
            "            (user_restaurant_fav.restaurant_id, " +
            "             user_restaurant_fav.user_id) " + "VALUES      ( ?, " +
            "              ? )"+
            "ON DUPLICATE KEY UPDATE USER_ID=USER_ID";
    //TODO 
    public static String HISTORICAL_RESTAURANT_FAV_INSERT_SQL = "";
    
    //TODOD
    public static String RESTAURANT_PHOTOS_SELECT_SQL = "";
    
}
