package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;

public class TSFacebookUserDataObj implements Serializable {

	private static final long serialVersionUID = 2332387668816080633L;
		private String userName;
		private String userPhoto;
		@XmlElement
		public String getUserName() {
			return userName;
		}
		@XmlElement
		public String getUserPhoto() {
			return userPhoto;
		}
		
		public void setUserName(String userName) {
			this.userName = userName;
		}
		public void setUserPhoto(String userPhoto) {
			this.userPhoto = userPhoto;
		}
	
}
