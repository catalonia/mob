package com.tastesync.model.objects.derived;

import java.io.Serializable;

import java.util.ArrayList;
import java.util.List;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "restaurantrecommenders")
public class TSRestaurantRecommendersDetailsObj implements Serializable {
    private static final long serialVersionUID = 8522302350787297163L;
    private String userId;
    private String restaurantId;
    private List<TSRecommendersDetailsObj> recommendersDetailsList = new ArrayList<TSRecommendersDetailsObj>();

    public TSRestaurantRecommendersDetailsObj() {
        super();
    }

    @XmlElement
    public String getUserId() {
        return userId;
    }

    @XmlElement
    public String getRestaurantId() {
        return restaurantId;
    }

    @XmlElement
    public List<TSRecommendersDetailsObj> getRecommendersDetailsList() {
        return recommendersDetailsList;
    }

    public void setUserId(String userId) {
        this.userId = userId;
    }

    public void setRestaurantId(String restaurantId) {
        this.restaurantId = restaurantId;
    }

    public void setRecommendersDetailsList(
        List<TSRecommendersDetailsObj> recommendersDetailsList) {
        this.recommendersDetailsList = recommendersDetailsList;
    }
}
