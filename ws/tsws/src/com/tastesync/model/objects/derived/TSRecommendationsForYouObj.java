package com.tastesync.model.objects.derived;

import com.tastesync.model.objects.TSUserProfileBasicObj;

import java.io.Serializable;

import java.util.ArrayList;
import java.util.List;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "recos4u")
public class TSRecommendationsForYouObj implements Serializable {
    private static final long serialVersionUID = 3105890272734062494L;
    private String recorequestText;
    private TSUserProfileBasicObj latestRecommendeeUser;
    private List<TSRestaurantsForYouObj> restaurantsForYouObjList = new ArrayList<TSRestaurantsForYouObj>();
    

    public TSRecommendationsForYouObj() {
        super();
    }

    public TSUserProfileBasicObj getLatestRecommendeeUser() {
        return latestRecommendeeUser;
    }

    public void setLatestRecommendeeUser(
        TSUserProfileBasicObj latestRecommendeeUser) {
        this.latestRecommendeeUser = latestRecommendeeUser;
    }

    @XmlElement
    public String getRecorequestText() {
        return recorequestText;
    }

    @XmlElement
    public List<TSRestaurantsForYouObj> getRestaurantsForYouObjList() {
        return restaurantsForYouObjList;
    }

    public void setRecorequestText(String recorequestText) {
        this.recorequestText = recorequestText;
    }

    public void setRestaurantsForYouObjList(
        List<TSRestaurantsForYouObj> restaurantsForYouObjList) {
        this.restaurantsForYouObjList = restaurantsForYouObjList;
    }
}
