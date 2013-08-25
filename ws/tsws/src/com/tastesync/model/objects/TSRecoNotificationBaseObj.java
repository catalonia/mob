package com.tastesync.model.objects;

import java.io.Serializable;

import java.util.Date;


public class TSRecoNotificationBaseObj implements Serializable {
    private static final long serialVersionUID = 8264952327098167837L;
    private String recoNotificationType;

    //TSNotifRecorequestNeededObj
    //TSNotifRecorequestAnswerObj
    //TSNotifFollowupQuestionObj
    //TSNotifMessageForYouObj
    //TSNotifMessageForYouObj
    //TSNotifRecoLikeObj
    //TSNotifDidYouLikeObj
    /**Assigned_datetime, REPLY_SEND_DATETIME, Assigned_datetime, CREATED, like_datetime, notif_datetime*/
    private Date datetimeBase;

    /**RECOREQUEST_ID,  REPLY_ID, QUESTION_ID, MESSAGE_ID, ID, RECOREQUEST_ID*/
    private String idBase;

    public TSRecoNotificationBaseObj() {
        super();
    }

    public String getRecoNotificationType() {
        return recoNotificationType;
    }

    public Date getDatetimeBase() {
        return datetimeBase;
    }

    public String getIdBase() {
        return idBase;
    }

    public void setRecoNotificationType(String recoNotificationType) {
        this.recoNotificationType = recoNotificationType;
    }

    public void setDatetimeBase(Date datetimeBase) {
        this.datetimeBase = datetimeBase;
    }

    public void setIdBase(String idBase) {
        this.idBase = idBase;
    }
}
