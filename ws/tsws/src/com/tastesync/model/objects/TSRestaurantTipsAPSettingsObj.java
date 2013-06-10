package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;

public class TSRestaurantTipsAPSettingsObj implements Serializable {

	private static final long serialVersionUID = -3475916144296389812L;
	
	private String userId;
	
	private String restaurantId;
	
	private String facebookApSetting;
	
	private String twitterApSetting;

	@XmlElement
	public String getUserId() {
		return userId;
	}
	@XmlElement
	public String getRestaurantId() {
		return restaurantId;
	}
	@XmlElement
	public String getFacebookApSetting() {
		return facebookApSetting;
	}
	@XmlElement
	public String getTwitterApSetting() {
		return twitterApSetting;
	}

	public void setUserId(String userId) {
		this.userId = userId;
	}

	public void setRestaurantId(String restaurantId) {
		this.restaurantId = restaurantId;
	}

	public void setFacebookApSetting(String facebookApSetting) {
		this.facebookApSetting = facebookApSetting;
	}

	public void setTwitterApSetting(String twitterApSetting) {
		this.twitterApSetting = twitterApSetting;
	}
	

}
