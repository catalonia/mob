package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "privacy")
public class TSPrivacySettingsObj implements Serializable {
    private static final long serialVersionUID = 4003350715079988113L;
    private String privacySettingsIds;
    private String privacyUserFlag;


    @XmlElement
    public String getPrivacySettingsIds() {
        return privacySettingsIds;
    }

    @XmlElement
    public String getPrivacyUserFlag() {
        return privacyUserFlag;
    }


    public void setPrivacySettingsIds(String privacySettingsIds) {
        this.privacySettingsIds = privacySettingsIds;
    }

    public void setPrivacyUserFlag(String privacyUserFlag) {
        this.privacyUserFlag = privacyUserFlag;
    }

}
