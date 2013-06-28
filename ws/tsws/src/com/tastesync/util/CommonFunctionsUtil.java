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
    
	public static String getCurrentDatetimeAppendField() {
		Calendar currentDate = Calendar.getInstance();
		SimpleDateFormat formatter = new SimpleDateFormat("yyyyMMddHHmmss");
		return formatter.format(currentDate.getTime());
	}
    
    public static String generateRandomString(int loai, int dodai) {
        ////////Code ho tro lay chu ngau nhien, phat trien boi Congdongjava - Tran Huy
        //Loai : kieu ran dom
        //0 : ngau nhien chi cac chu cai thuong
        //1 : ngau nhien chi cac chu cai hoa
        //2 : ngau nhien ca chu hoa va thuong
        //3 : ngau nhien chu va so
        String ketqua = "";
        String hoa = "QWERTYUIOPASDFGHJKLZXCVBNM";
        String thuong = hoa.toLowerCase();
        String so = "1234567890";
        String randomchuoi = "";
        if (loai > 3 || loai < 0) {
            ketqua = "Loai khong hop le, cho phep tu 0 - 3";
        } else if (loai == 0) {
            randomchuoi = thuong;
        } else if (loai == 1) {
            randomchuoi = hoa;
        } else if (loai == 2) {
            randomchuoi = hoa + thuong;
        } else if (loai == 3) {
            randomchuoi = hoa + thuong + so;
        }
        for (int i = 0; i < dodai; i++) {
            int temp = (int) Math.round(Math.random() * randomchuoi.length());
            ketqua += randomchuoi.charAt(temp);
        }
        return ketqua;
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
