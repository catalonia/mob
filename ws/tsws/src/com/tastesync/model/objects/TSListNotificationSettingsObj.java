package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;


@XmlRootElement(name = "listNotifications")
public class TSListNotificationSettingsObj implements Serializable {
    private static final long serialVersionUID = 1L;
    private String userId;
    private TSNotificationSettingsObj friendsAskReco;
    private TSNotificationSettingsObj peopleFollowAskReco;
    private TSNotificationSettingsObj otherPeopleAskReco;
    private TSNotificationSettingsObj peopleLikeMyReco;
    private TSNotificationSettingsObj peopleAskMeFollowReco;
    private TSNotificationSettingsObj friendsSendMeReco;
    private TSNotificationSettingsObj peopleLikeCommentTips;
    private TSNotificationSettingsObj friendsPostQuestionForum;
    private TSNotificationSettingsObj friendsJoinTasteSync;
    private TSNotificationSettingsObj newslettersDigestsTasteSync;
	
    @XmlElement
	public String getUserId() {
		return userId;
	}

	public void setUserId(String userId) {
		this.userId = userId;
	}
    
    @XmlElement
    public TSNotificationSettingsObj getFriendsAskReco() {
		return friendsAskReco;
	}
    
	public void setFriendsAskReco(TSNotificationSettingsObj friendsAskReco) {
		this.friendsAskReco = friendsAskReco;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getPeopleFollowAskReco() {
		return peopleFollowAskReco;
	}
	
	public void setPeopleFollowAskReco(TSNotificationSettingsObj peopleFollowAskReco) {
		this.peopleFollowAskReco = peopleFollowAskReco;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getOtherPeopleAskReco() {
		return otherPeopleAskReco;
	}
	
	public void setOtherPeopleAskReco(TSNotificationSettingsObj otherPeopleAskReco) {
		this.otherPeopleAskReco = otherPeopleAskReco;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getPeopleLikeMyReco() {
		return peopleLikeMyReco;
	}
	
	public void setPeopleLikeMyReco(TSNotificationSettingsObj peopleLikeMyReco) {
		this.peopleLikeMyReco = peopleLikeMyReco;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getPeopleAskMeFollowReco() {
		return peopleAskMeFollowReco;
	}
	
	public void setPeopleAskMeFollowReco(TSNotificationSettingsObj peopleAskMeFollowReco) {
		this.peopleAskMeFollowReco = peopleAskMeFollowReco;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getFriendsSendMeReco() {
		return friendsSendMeReco;
	}
	
	public void setFriendsSendMeReco(TSNotificationSettingsObj friendsSendMeReco) {
		this.friendsSendMeReco = friendsSendMeReco;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getPeopleLikeCommentTips() {
		return peopleLikeCommentTips;
	}
	
	public void setPeopleLikeCommentTips(TSNotificationSettingsObj peopleLikeCommentTips) {
		this.peopleLikeCommentTips = peopleLikeCommentTips;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getFriendsPostQuestionForum() {
		return friendsPostQuestionForum;
	}
	
	public void setFriendsPostQuestionForum(TSNotificationSettingsObj friendsPostQuestionForum) {
		this.friendsPostQuestionForum = friendsPostQuestionForum;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getFriendsJoinTasteSync() {
		return friendsJoinTasteSync;
	}
	
	public void setFriendsJoinTasteSync(TSNotificationSettingsObj friendsJoinTasteSync) {
		this.friendsJoinTasteSync = friendsJoinTasteSync;
	}
	
	@XmlElement
	public TSNotificationSettingsObj getNewslettersDigestsTasteSync() {
		return newslettersDigestsTasteSync;
	}
	
	public void setNewslettersDigestsTasteSync(
			TSNotificationSettingsObj newslettersDigestsTasteSync) {
		this.newslettersDigestsTasteSync = newslettersDigestsTasteSync;
	}

}