package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement(name = "autopub")
public class TSSocialAutoPubSettingsObj implements Serializable {
    private static final long serialVersionUID = -4829873875708388338L;
    private String favFbFlag;
    private String favTwitterFlag;
    private String favTumblrFlag;
    private String tipsFbFlag;
    private String tipsTwitterFlag;
    private String tipsTumblrFlag;
    private String recoFbFlag;
    private String recoTwitterFlag;
    private String recoTumblrFlag;

    @XmlElement
    public String getFavFbFlag() {
        return favFbFlag;
    }

    @XmlElement
    public String getFavTwitterFlag() {
        return favTwitterFlag;
    }

    @XmlElement
    public String getFavTumblrFlag() {
        return favTumblrFlag;
    }

    @XmlElement
    public String getTipsFbFlag() {
        return tipsFbFlag;
    }

    @XmlElement
    public String getTipsTwitterFlag() {
        return tipsTwitterFlag;
    }

    @XmlElement
    public String getTipsTumblrFlag() {
        return tipsTumblrFlag;
    }

    @XmlElement
    public String getRecoFbFlag() {
        return recoFbFlag;
    }

    @XmlElement
    public String getRecoTwitterFlag() {
        return recoTwitterFlag;
    }

    @XmlElement
    public String getRecoTumblrFlag() {
        return recoTumblrFlag;
    }

    public void setFavFbFlag(String favFbFlag) {
        this.favFbFlag = favFbFlag;
    }

    public void setFavTwitterFlag(String favTwitterFlag) {
        this.favTwitterFlag = favTwitterFlag;
    }

    public void setFavTumblrFlag(String favTumblrFlag) {
        this.favTumblrFlag = favTumblrFlag;
    }

    public void setTipsFbFlag(String tipsFbFlag) {
        this.tipsFbFlag = tipsFbFlag;
    }

    public void setTipsTwitterFlag(String tipsTwitterFlag) {
        this.tipsTwitterFlag = tipsTwitterFlag;
    }

    public void setTipsTumblrFlag(String tipsTumblrFlag) {
        this.tipsTumblrFlag = tipsTumblrFlag;
    }

    public void setRecoFbFlag(String recoFbFlag) {
        this.recoFbFlag = recoFbFlag;
    }

    public void setRecoTwitterFlag(String recoTwitterFlag) {
        this.recoTwitterFlag = recoTwitterFlag;
    }

    public void setRecoTumblrFlag(String recoTumblrFlag) {
        this.recoTumblrFlag = recoTumblrFlag;
    }
}
