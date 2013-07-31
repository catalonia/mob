package com.tastesync.db.queries;

public interface AskReplyQueries extends TSDBCommonQueries {
    //createRecoRequestSearch
    public static final String RECOREQUEST_USER_INSERT_SQL = "insert into recorequest_user (" +
        "recorequest_user.RECOREQUEST_ID," +
        "recorequest_user.INITIATOR_USER_ID," +
        "recorequest_user.RECOREQUEST_SENT_DATETIME," +
        "recorequest_user.RECOREQUEST_FREE_TEXT," +
        "recorequest_user.RECOREQUEST_PARAMETER_SELECTION_MERGED," +
        "recorequest_user.RECOREQUEST_FREE_TEXT" +
        ")    VALUES    (" + "?," + //recorequest_user.RECOREQUEST_ID, 
        "?," + //recorequest_user.INITIATOR_USER_ID, 
        "?," + //recorequest_user.RECOREQUEST_SENT_DATETIME, 
        "?," + //recorequest_user.RECOREQUEST_FREE_TEXT, 
        "?," + //	recorequest_user.RECOREQUEST_PARAMETER_SELECTION_MERGED, 
        "?" + //	recorequest_user.RECOREQUEST_FREE_TEXT, 
        ")";

    //createRecoRequestSearch - sub
    public static final String RECOREQUEST_CUISINE_TIER1_INSERT_SQL = "insert into recorequest_cuisine_tier1 (" +
        "recorequest_cuisine_tier1.RECOREQUEST_ID," +
        "recorequest_cuisine_tier1.Cuisine_Tier1_ID" + ")  VALUES (" + "?," + // recorequest_cuisine_tier1.RECOREQUEST_ID
        "?" + // recorequest_cuisine_tier1.Cuisine_Tier1_ID
        ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_CUISINE_TIER2_INSERT_SQL = "insert into recorequest_cuisine_tier2 (" +
        "recorequest_cuisine_tier2.RECOREQUEST_ID," +
        "recorequest_cuisine_tier2.Cuisine_Tier2_ID" + ")  VALUES (" + "?," + // recorequest_cuisine_tier2.RECOREQUEST_ID 
        "?" + // recorequest_cuisine_tier2.Cuisine_Tier2_ID
        ")";

    //createRecoRequestSearch - sub
    public static final String RECOREQUEST_PRICE_INSERT_SQL = "insert into recorequest_price (" +
        "recorequest_price.RECOREQUEST_ID," + "recorequest_price.price_ID" +
        ")  VALUES (" + "?," + // recorequest_price.RECOREQUEST_ID 
        "?" + // recorequest_price.price_ID
        ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_OCCASION_INSERT_SQL = "insert into recorequest_occasion (" +
        "recorequest_occasion.RECOREQUEST_ID," +
        "recorequest_occasion.Occasion_ID" + ")  VALUES (" + "?," + // recorequest_occasion.RECOREQUEST_ID
        "?" + // recorequest_occasion.Occasion_ID
        ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_WHOAREYOUWITH_INSERT_SQL = "insert into recorequest_whoareyouwith (" +
        "recorequest_whoareyouwith.RECOREQUEST_ID," +
        "recorequest_whoareyouwith.whoareyouwith_ID" + ")  VALUES (" + "?," + // recorequest_occasion.RECOREQUEST_ID
        "?" + // recorequest_whoareyouwith.whoareyouwith_ID
        ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_TYPEOFREST_INSERT_SQL = "insert into recorequest_typeofrest (" +
        "recorequest_typeofrest.RECOREQUEST_ID," +
        "recorequest_typeofrest.typeofrest_ID" + ")  VALUES (" + "?," + // recorequest_typeofrest.RECOREQUEST_ID
        "?" + // recorequest_typeofrest.typeofrest_ID
        ")";

    //createRecoRequestSearch -sub
    public static final String RECOREQUEST_THEME_INSERT_SQL = "insert into recorequest_theme (" +
        "recorequest_theme.RECOREQUEST_ID," + "recorequest_theme.theme_ID" +
        ")  VALUES (" + "?," + // recorequest_theme.RECOREQUEST_ID
        "?" + // recorequest_theme.theme_ID
        ")";
    
    public static final String RECOREQUEST_TEMPLATE_SENTENCES_SELECT_SQL = "SELECT `recorequest_user`.`reco_request_template_sentences` "
    		+ "FROM   `recorequest_user` "
    		+ "WHERE  `recorequest_user`.`recorequest_id` = ? ";

}
