package com.tastesync.common;

import java.io.InputStream;
import java.util.Date;
import java.util.Map;

import com.notnoop.apns.APNS;
import com.notnoop.apns.ApnsDelegate;
import com.notnoop.apns.ApnsNotification;
import com.notnoop.apns.ApnsService;
import com.notnoop.apns.DeliveryError;
import com.notnoop.apns.PayloadBuilder;

public class PushService{

	public void pushMessage() {
        ApnsService service = null;
        try {
            // get the certificate
            InputStream certStream = this.getClass().getClassLoader().getResourceAsStream("Certificates.p12");
            service = APNS.newService().withCert(certStream, "c").withSandboxDestination().build();
            // or
            // service = APNS.newService().withCert(certStream,
            // "your_cert_password").withProductionDestination().build();
            service.start();
            // You have to delete the devices from you list that no longer 
            //have the app installed, see method below
            deleteInactiveDevices(service);
            // read your user list
            List<User> userList = userDao.readUsers();
            for (User user : userList) {
                try {
                    // we had a daily update here, so we need to know how many 
                    //days the user hasn't started the app
                    // so that we get the number of updates to display it as the badge.
                    int days = (int) ((System.currentTimeMillis() - user.getLastUpdate()) / 1000 / 60 / 60 / 24);
                    PayloadBuilder payloadBuilder = APNS.newPayload();
                    payloadBuilder = payloadBuilder.badge(days).alertBody("some message you want to send here");
                    // check if the message is too long (it won't be sent if it is) 
                    //and trim it if it is.
                    if (payloadBuilder.isTooLong()) {
                        payloadBuilder = payloadBuilder.shrinkBody();
                    }
                    String payload = payloadBuilder.build();
                    String token = user.getToken();
                    service.push(token, payload);
                } catch (Exception ex) {
                    // some logging stuff
                }
            }
        } catch (Exception ex) {
            // more logging
        } finally {
            // check if the service was successfull initialized and stop it here, if it was
            if (service != null) {
                service.stop();
            }
 
        }
    }
 
    private void deleteInactiveDevices(ApnsService service) {
        // get the list of the devices that no longer have your app installed from apple
        //ignore the ="" after Date here, it's a bug...
        Map<String, Date> inactiveDevices = service.getInactiveDevices();
        for (String deviceToken : inactiveDevices.keySet()) {
            userDao.deleteByDeviceId(deviceToken);
        }
 
    }

}
