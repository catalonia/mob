package com.tastesync.model.objects;

import java.io.Serializable;
import java.util.List;

import javax.xml.bind.annotation.XmlElement;

public class TSFriendObj  implements Serializable{
	private static final long serialVersionUID = 2102340212375291293L;
	private List<TSFacebookUserDataObj> friendTasteSync;
	private List<TSFacebookUserDataObj> inviteFriend;
	
	@XmlElement
	public List<TSFacebookUserDataObj> getFriendTasteSync() {
		return friendTasteSync;
	}
	
	public void setFriendTasteSync(List<TSFacebookUserDataObj> friendTasteSync) {
		this.friendTasteSync = friendTasteSync;
	}
	
	@XmlElement
	public List<TSFacebookUserDataObj> getInviteFriend() {
		return inviteFriend;
	}
	
	public void setInviteFriend(List<TSFacebookUserDataObj> inviteFriend) {
		this.inviteFriend = inviteFriend;
	}
}