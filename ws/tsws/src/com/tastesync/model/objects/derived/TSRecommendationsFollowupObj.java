package com.tastesync.model.objects.derived;

import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSUserProfileBasicObj;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "recosfollowup")
public class TSRecommendationsFollowupObj implements Serializable {
    private static final long serialVersionUID = 4996052609815336144L;
    private TSUserProfileBasicObj questionUse;
    private String questionText;
    private String questionUserFolloweeFlag;
    private TSRestaurantObj questionRestaurant;

    @XmlElement
    public TSUserProfileBasicObj getQuestionUse() {
        return questionUse;
    }

    @XmlElement
    public String getQuestionText() {
        return questionText;
    }

    @XmlElement
    public String getQuestionUserFolloweeFlag() {
        return questionUserFolloweeFlag;
    }

    @XmlElement
    public TSRestaurantObj getQuestionRestaurant() {
        return questionRestaurant;
    }

    public void setQuestionUse(TSUserProfileBasicObj questionUse) {
        this.questionUse = questionUse;
    }

    public void setQuestionText(String questionText) {
        this.questionText = questionText;
    }

    public void setQuestionUserFolloweeFlag(String questionUserFolloweeFlag) {
        this.questionUserFolloweeFlag = questionUserFolloweeFlag;
    }

    public void setQuestionRestaurant(TSRestaurantObj questionRestaurant) {
        this.questionRestaurant = questionRestaurant;
    }
}
