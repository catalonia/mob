package com.tastesync.model.objects;

import java.io.Serializable;

import org.codehaus.jettison.json.JSONObject;

public class TSKeyValueObj extends JSONObject implements Serializable {

	private static final long serialVersionUID = -4654745503303978299L;
	

	private String keyName;
	private String keyNameValue;
	private String valueName;
	private String valueNameValue;
}
