package com.tastesync.services;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

import com.tastesync.exception.TasteSyncException;
import com.tastesync.util.TSConstants;

import org.codehaus.jackson.map.ObjectMapper;

import javax.ws.rs.core.Response;


public abstract class BaseService {
    public boolean printExtra = true;
    public ObjectMapper mapper = new ObjectMapper();
    public static Properties tsConfigProp = new Properties();
    static {
    	try {
    		if (1 != 1) {
    			loadProperties();
    		}
		} catch (TasteSyncException e) {
			e.printStackTrace();
		}
    }
    private static void loadProperties() throws TasteSyncException {
        InputStream ifile = null;
        
        try {
            //ClassLoader loader = getClass().getClassLoader();
            //ifile = loader.getResourceAsStream("/Resources/config.properties");
        	ifile = new FileInputStream("/Users/webonline/localroot/softwares/apps/tomcat/apache-tomcat/webapps/tsws/WEB-INF/classes/Resources/config.properties");
            //load a properties file
        	tsConfigProp.load(ifile);

        } catch (IOException ex) {
            ex.printStackTrace();
            throw new TasteSyncException(ex.getMessage());
        } finally {
            if (ifile != null) {
                try {
                    ifile.close();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }
    
    public Response handleException(Exception e, int status) {
        return Response.status(status)
                       .header(TSConstants.EX_CLASS,
            e.getClass().getCanonicalName()).entity(e.getMessage()).build();
    }
}
