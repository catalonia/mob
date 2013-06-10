package com.tastesync.services;

import org.codehaus.jackson.map.ObjectMapper;


public abstract class BaseService {
    public boolean printExtra = true;
    public ObjectMapper mapper = new ObjectMapper();
}
