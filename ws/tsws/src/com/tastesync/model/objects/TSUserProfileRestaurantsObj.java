package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "userprofilerestaurants")
public class TSUserProfileRestaurantsObj implements Serializable {
    private static final long serialVersionUID = 4983309294508239276L;
    private String restauarntId;
    private String restaurantName;
    private String cuisineTier2Name;
    private String price;
    private String restaurantCity;
    private String restaurantState;
    private String restaurantCountry;
    private String restaurantLat;
    private String restaurantLong;
    private String restaurantDealFlag;
    private String restaurantRating;
    private String userSavedFlag;
    private String userFavFlag;
    private String userRecommendedFlag;
    private String userTipFlag;

    @XmlElement
    public String getRestauarntId() {
        return restauarntId;
    }

    @XmlElement
    public String getRestaurantName() {
        return restaurantName;
    }

    @XmlElement
    public String getCuisineTier2Name() {
        return cuisineTier2Name;
    }

    @XmlElement
    public String getPrice() {
        return price;
    }

    @XmlElement
    public String getRestaurantCity() {
        return restaurantCity;
    }

    @XmlElement
    public String getRestaurantState() {
        return restaurantState;
    }

    @XmlElement
    public String getRestaurantCountry() {
        return restaurantCountry;
    }

    @XmlElement
    public String getRestaurantLat() {
        return restaurantLat;
    }

    @XmlElement
    public String getRestaurantLong() {
        return restaurantLong;
    }

    @XmlElement
    public String getRestaurantDealFlag() {
        return restaurantDealFlag;
    }

    @XmlElement
    public String getRestaurantRating() {
        return restaurantRating;
    }

    @XmlElement
    public String getUserSavedFlag() {
        return userSavedFlag;
    }

    @XmlElement
    public String getUserFavFlag() {
        return userFavFlag;
    }

    @XmlElement
    public String getUserRecommendedFlag() {
        return userRecommendedFlag;
    }

    @XmlElement
    public String getUserTipFlag() {
        return userTipFlag;
    }

    public void setRestauarntId(String restauarntId) {
        this.restauarntId = restauarntId;
    }

    public void setRestaurantName(String restaurantName) {
        this.restaurantName = restaurantName;
    }

    public void setCuisineTier2Name(String cuisineTier2Name) {
        this.cuisineTier2Name = cuisineTier2Name;
    }

    public void setPrice(String price) {
        this.price = price;
    }

    public void setRestaurantCity(String restaurantCity) {
        this.restaurantCity = restaurantCity;
    }

    public void setRestaurantState(String restaurantState) {
        this.restaurantState = restaurantState;
    }

    public void setRestaurantCountry(String restaurantCountry) {
        this.restaurantCountry = restaurantCountry;
    }

    public void setRestaurantLat(String restaurantLat) {
        this.restaurantLat = restaurantLat;
    }

    public void setRestaurantLong(String restaurantLong) {
        this.restaurantLong = restaurantLong;
    }

    public void setRestaurantDealFlag(String restaurantDealFlag) {
        this.restaurantDealFlag = restaurantDealFlag;
    }

    public void setRestaurantRating(String restaurantRating) {
        this.restaurantRating = restaurantRating;
    }

    public void setUserSavedFlag(String userSavedFlag) {
        this.userSavedFlag = userSavedFlag;
    }

    public void setUserFavFlag(String userFavFlag) {
        this.userFavFlag = userFavFlag;
    }

    public void setUserRecommendedFlag(String userRecommendedFlag) {
        this.userRecommendedFlag = userRecommendedFlag;
    }

    public void setUserTipFlag(String userTipFlag) {
        this.userTipFlag = userTipFlag;
    }
}
