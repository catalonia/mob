package com.tastesync.model.objects.derived;

import com.tastesync.model.objects.TSRestaurantObj;

import java.io.Serializable;

import java.util.ArrayList;
import java.util.List;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "recos4u")
public class TSRecommendationsForYouObj implements Serializable {
    private static final long serialVersionUID = 3105890272734062494L;
    private List<TSRecoRequestObj> recoRequestList = new ArrayList<TSRecoRequestObj>();
    private List<TSRestaurantObj> restaurantList = new ArrayList<TSRestaurantObj>();

    @XmlElement
    public List<TSRecoRequestObj> getRecoRequestList() {
        return recoRequestList;
    }

    @XmlElement
    public List<TSRestaurantObj> getRestaurantList() {
        return restaurantList;
    }

    public void setRecoRequestList(List<TSRecoRequestObj> recoRequestList) {
        this.recoRequestList = recoRequestList;
    }

    public void setRestaurantList(List<TSRestaurantObj> restaurantList) {
        this.restaurantList = restaurantList;
    }
}
