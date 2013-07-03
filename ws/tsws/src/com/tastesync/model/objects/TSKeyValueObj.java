package com.tastesync.model.objects;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlElement;

import org.codehaus.jettison.json.JSONObject;


public class TSKeyValueObj extends JSONObject implements Serializable {

	private static final long serialVersionUID = -4654745503303978299L;
	

	private String keyName;
	private String keyNameValue;
	private String valueName;
	private String valueNameValue;
	
	@XmlElement
	public String getKeyName() {
		return keyName;
	}
	public void setKeyName(String keyName) {
		this.keyName = keyName;
	}
	
	@XmlElement
	public String getKeyNameValue() {
		return keyNameValue;
	}
	public void setKeyNameValue(String keyNameValue) {
		this.keyNameValue = keyNameValue;
	}
	
	@XmlElement
	public String getValueName() {
		return valueName;
	}
	public void setValueName(String valueName) {
		this.valueName = valueName;
	}
	
	@XmlElement
	public String getValueNameValue() {
		return valueNameValue;
	}
	public void setValueNameValue(String valueNameValue) {
		this.valueNameValue = valueNameValue;
	}
}
