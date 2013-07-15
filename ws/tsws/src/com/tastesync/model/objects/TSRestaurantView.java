package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement(name = "restaurantsUserProfileHome")
public class TSRestaurantView implements Serializable {
	private static final long serialVersionUID = 787783999243399741L;
	private String id;
	private TSRestaurantPhotoObj photo;
	private String name;

	@XmlElement
	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	@XmlElement
	public TSRestaurantPhotoObj getPhoto() {
		return photo;
	}

	public void setPhoto(TSRestaurantPhotoObj photo) {
		this.photo = photo;
	}

	@XmlElement
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

}
