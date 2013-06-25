package com.tastesync.util;

import java.sql.Timestamp;
import java.text.SimpleDateFormat;
import java.util.Calendar;

import org.joda.time.DateTime;
import org.joda.time.format.DateTimeFormat;
import org.joda.time.format.DateTimeFormatter;


public class CommonFunctionsUtil {
    private static final DateTimeFormatter tsDateTimeFormatWithMilliseconds = DateTimeFormat.forPattern(
            "yyyyMMddHHmmssSSS");

    public static String getModifiedValueString(String inputString) {
        return ((inputString == null) ? "" : inputString);

        //return inputString;
    }
    
    public static String converStringAsNullIfNeeded(String inputString) {
    	if (inputString == null || inputString.isEmpty()) {
    		return null;
    	}
        return inputString;
    }
    
    public static String[] convertStringListAsArrayList(String inputString) {
    	return inputString != null ? inputString.split(",") : TSConstants.EMPTY_STRING_ARRAY;
    	
    }
    
    public static String getCurrentDatetime() {
		Calendar currentDate = Calendar.getInstance();
		SimpleDateFormat formatter = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
		return formatter.format(currentDate.getTime());
	}
    
    private static String getCurrentDateTime() {
        //TODO YYYYMMDDHHMMSS.SSS  (TIME ZONE set to EST/EDT!)
        return tsDateTimeFormatWithMilliseconds.print(new DateTime());
    }
    
    public static String generateUniqueKey() {
        return getCurrentDateTime()+System.nanoTime();
    }
    
    public static Timestamp getCurrentDateTimestamp() {
        //TODO YYYYMMDDHHMMSS.SSS  (TIME ZONE set to EST/EDT!)
        return new Timestamp(new java.util.Date().getTime());
    }
}
