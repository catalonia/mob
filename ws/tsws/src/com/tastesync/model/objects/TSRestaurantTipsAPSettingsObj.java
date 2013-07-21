package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;


public class TSRestaurantTipsAPSettingsObj implements Serializable {
    private static final long serialVersionUID = -3475916144296389812L;
    private String userId;
    private String restaurantId;
    private String autoPublishingSetting;
    public APSETTINGTYPE apSettingType;

    @XmlElement
    public String getUserId() {
        return userId;
    }

    @XmlElement
    public String getAutoPublishingSetting() {
        return autoPublishingSetting;
    }

    @XmlElement
    public APSETTINGTYPE getApSettingType() {
        return apSettingType;
    }

    @XmlElement
    public String getRestaurantId() {
        return restaurantId;
    }

    public void setUserId(String userId) {
        this.userId = userId;
    }

    public void setRestaurantId(String restaurantId) {
        this.restaurantId = restaurantId;
    }

    public void setAutoPublishingSetting(String autoPublishingSetting) {
        this.autoPublishingSetting = autoPublishingSetting;
    }

    public void setApSettingType(APSETTINGTYPE apSettingType) {
        this.apSettingType = apSettingType;
    }
    public enum APSETTINGTYPE {FACEBOOK,
        TWITTER;
    }
}
