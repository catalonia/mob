package com.tastesync.model.objects;

import java.io.Serializable;
import java.util.List;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement(name = "list_user_profile_fb")
public class TSListFacebookUserDataObj implements Serializable{
	private static final long serialVersionUID = 1L;
	private TSFacebookUserDataObj user_profile_current;
	private List<TSFacebookUserDataObj> list_user_profile_fb;

	public TSListFacebookUserDataObj() {
		
	}

	@XmlElement(name = "user_current_profile")
	public TSFacebookUserDataObj getUser_profile_current() {
		return user_profile_current;
	}

	public void setUser_profile_current(TSFacebookUserDataObj user_profile_current) {
		this.user_profile_current = user_profile_current;
	}
	
	@XmlElement(name = "list_user_profile")
	public List<TSFacebookUserDataObj> getList_user_profile_fb() {
		return list_user_profile_fb;
	}

	public void setList_user_profile_fb(List<TSFacebookUserDataObj> list_user_profile_fb) {
		this.list_user_profile_fb = list_user_profile_fb;
	}
}
