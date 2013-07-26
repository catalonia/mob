package com.tastesync.model.objects.derived;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement(name = "recorequest")
public class TSRecoRequestObj implements Serializable {
    private static final long serialVersionUID = 5456082843562113302L;
    private TSRecommendeeUserObj recommendeeUser;
    private String recorequestText;
    private String recommendeeUserFolloweeFlag;

    @XmlElement
    public TSRecommendeeUserObj getRecommendeeUser() {
        return recommendeeUser;
    }

    @XmlElement
    public String getRecorequestText() {
        return recorequestText;
    }

    @XmlElement
    public String getRecommendeeUserFolloweeFlag() {
        return recommendeeUserFolloweeFlag;
    }

    public void setRecommendeeUser(TSRecommendeeUserObj recommendeeUser) {
        this.recommendeeUser = recommendeeUser;
    }

    public void setRecorequestText(String recorequestText) {
        this.recorequestText = recorequestText;
    }

    public void setRecommendeeUserFolloweeFlag(
        String recommendeeUserFolloweeFlag) {
        this.recommendeeUserFolloweeFlag = recommendeeUserFolloweeFlag;
    }
}
