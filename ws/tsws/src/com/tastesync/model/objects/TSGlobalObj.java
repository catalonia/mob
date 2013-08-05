package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;


public class TSGlobalObj implements Serializable{
	private static final long serialVersionUID = 1L;
	
	private String id;
	private String name;
	
	@XmlElement
	public String getId() {
		return id;
	}
	
	public void setId(String id) {
		this.id = id;
	}
	
	@XmlElement
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
}
