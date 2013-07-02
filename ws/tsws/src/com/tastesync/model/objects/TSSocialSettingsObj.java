package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "social")
public class TSSocialSettingsObj implements Serializable {
    private static final long serialVersionUID = 6457481134997945030L;
    private String email;
    private String facebookStatus;
    private String twitterStatus;
    private String foursquareStatus;
    private String tumblrStatus;
    private TSSocialAutoPubSettingsObj tsSocialAutoPubSettingsObj;

    @XmlElement
    public TSSocialAutoPubSettingsObj getTsSocialAutoPubSettingsObj() {
        return tsSocialAutoPubSettingsObj;
    }

    @XmlElement
	public String getEmail() {
		return email;
	}

    @XmlElement
    public String getFacebookStatus() {
        return facebookStatus;
    }

    @XmlElement
    public String getTwitterStatus() {
        return twitterStatus;
    }

    @XmlElement
    public String getFoursquareStatus() {
        return foursquareStatus;
    }

    @XmlElement
    public String getTumblrStatus() {
        return tumblrStatus;
    }

    public void setFacebookStatus(String facebookStatus) {
        this.facebookStatus = facebookStatus;
    }

    public void setTwitterStatus(String twitterStatus) {
        this.twitterStatus = twitterStatus;
    }

    public void setFoursquareStatus(String foursquareStatus) {
        this.foursquareStatus = foursquareStatus;
    }

    public void setTumblrStatus(String tumblrStatus) {
        this.tumblrStatus = tumblrStatus;
    }

    public void setTsSocialAutoPubSettingsObj(
        TSSocialAutoPubSettingsObj tsSocialAutoPubSettingsObj) {
        this.tsSocialAutoPubSettingsObj = tsSocialAutoPubSettingsObj;
    }
    
	public void setEmail(String email) {
		this.email = email;
	}
}
