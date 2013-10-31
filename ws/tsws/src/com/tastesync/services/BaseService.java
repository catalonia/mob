package com.tastesync.services;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.util.TSConstants;

import org.codehaus.jackson.map.ObjectMapper;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

import java.util.List;
import java.util.Map;
import java.util.Properties;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.HttpHeaders;
import javax.ws.rs.core.Response;


public abstract class BaseService {
    public static Properties tsConfigProp = new Properties();
    private static final boolean printDebugExtra = true;

    static {
        try {
            if (1 != 1) {
                loadProperties();
            }
        } catch (TasteSyncException e) {
            e.printStackTrace();
        }
    }

    public boolean printExtra = true;
    public ObjectMapper mapper = new ObjectMapper();

    private static void loadProperties() throws TasteSyncException {
        InputStream ifile = null;

        try {
            //ClassLoader loader = getClass().getClassLoader();
            //ifile = loader.getResourceAsStream("/Resources/config.properties");
            ifile = new FileInputStream(
                    "/Users/webonline/localroot/softwares/apps/tomcat/apache-tomcat/webapps/tsws/WEB-INF/classes/Resources/config.properties");
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

    private void writeResponseheader(@Context
    HttpHeaders headers) {
        if (printDebugExtra) {
            Map<String, List<String>> map = headers.getRequestHeaders();
            System.out.println("Printing Response Header...\n");

            for (Map.Entry<String, List<String>> entry : map.entrySet()) {
                System.out.println("Key=" + entry.getKey() + " ,Value=" +
                    entry.getValue());
            }

            System.out.println("\n Writting of header...  Done");
        }
    }

    public void processHttpHeaders(@Context
    HttpHeaders headers) {
        //validate , version check
        writeResponseheader(headers);
    }
}
