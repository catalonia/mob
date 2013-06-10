package com.tastesync.model.objects;

import java.io.Serializable;

import java.util.List;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "restaurantdetails")
public class TSRestaurantDetailsObj implements Serializable {
    private static final long serialVersionUID = 1521205761276319693L;
    private String openNowFlag;
    private String dealHeadline;
    private List<TSPhotoObj> photoList;
    private String moreInfoFlag;
    private String menuFlag;
    private String userRestaurantSavedFlag;
    private String userRestaurantFavFlag;
    private String userRestaurantTipFlag;

    @XmlElement
    public String getOpenNowFlag() {
        return openNowFlag;
    }

    @XmlElement
    public String getDealHeadline() {
        return dealHeadline;
    }

    @XmlElement
    public List<TSPhotoObj> getPhotoList() {
        return photoList;
    }

    @XmlElement
    public String getMoreInfoFlag() {
        return moreInfoFlag;
    }

    @XmlElement
    public String getMenuFlag() {
        return menuFlag;
    }

    @XmlElement
    public String getUserRestaurantSavedFlag() {
        return userRestaurantSavedFlag;
    }

    @XmlElement
    public String getUserRestaurantFavFlag() {
        return userRestaurantFavFlag;
    }

    @XmlElement
    public String getUserRestaurantTipFlag() {
        return userRestaurantTipFlag;
    }

    public void setOpenNowFlag(String openNowFlag) {
        this.openNowFlag = openNowFlag;
    }

    public void setDealHeadline(String dealHeadline) {
        this.dealHeadline = dealHeadline;
    }

    public void setPhotoList(List<TSPhotoObj> photoList) {
        this.photoList = photoList;
    }

    public void setMoreInfoFlag(String moreInfoFlag) {
        this.moreInfoFlag = moreInfoFlag;
    }

    public void setMenuFlag(String menuFlag) {
        this.menuFlag = menuFlag;
    }

    public void setUserRestaurantSavedFlag(String userRestaurantSavedFlag) {
        this.userRestaurantSavedFlag = userRestaurantSavedFlag;
    }

    public void setUserRestaurantFavFlag(String userRestaurantFavFlag) {
        this.userRestaurantFavFlag = userRestaurantFavFlag;
    }

    public void setUserRestaurantTipFlag(String userRestaurantTipFlag) {
        this.userRestaurantTipFlag = userRestaurantTipFlag;
    }
}
