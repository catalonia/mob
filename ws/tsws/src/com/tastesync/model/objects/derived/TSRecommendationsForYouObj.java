package com.tastesync.model.objects.derived;


import java.io.Serializable;

import java.util.ArrayList;
import java.util.List;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "recos4u")
public class TSRecommendationsForYouObj implements Serializable {
    private static final long serialVersionUID = 3105890272734062494L;
    String recorequestText;
    private List<TSRestaurantsForYouObj> restaurantsForYouObjList = new ArrayList<TSRestaurantsForYouObj>();

    public TSRecommendationsForYouObj() {
        super();
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
