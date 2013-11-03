package com.tastesync.services;

import com.tastesync.bos.UserBo;
import com.tastesync.bos.UserBoImpl;

import com.tastesync.common.utils.CommonFunctionsUtil;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSAboutObj;
import com.tastesync.model.objects.TSAskSubmitLoginObj;
import com.tastesync.model.objects.TSCityObj;
import com.tastesync.model.objects.TSErrorObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSFriendObj;
import com.tastesync.model.objects.TSGlobalObj;
import com.tastesync.model.objects.TSInitObj;
import com.tastesync.model.objects.TSListFacebookUserDataObj;
import com.tastesync.model.objects.TSListNotificationSettingsObj;
import com.tastesync.model.objects.TSListPrivacySettingsObj;
import com.tastesync.model.objects.TSListSocialSettingObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSSuccessObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;
import com.tastesync.model.response.UserResponse;

import com.tastesync.util.TSConstants;
import com.tastesync.util.TSResponseStatusCode;

import org.apache.log4j.Logger;

import java.util.List;

import javax.ws.rs.Consumes;
import javax.ws.rs.FormParam;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.HttpHeaders;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;


@Path("/user")
@Consumes({MediaType.APPLICATION_JSON
})
@Produces({MediaType.APPLICATION_JSON
})
public class UserService extends BaseService {
    /**
     * Logger for this class
     */
    private static final Logger logger = Logger.getLogger(UserService.class);
    private UserBo userBo = new UserBoImpl();

    public UserService() {
        super();
    }

    @POST
    @Path("/submitLogin")
    @org.codehaus.enunciate.jaxrs.TypeHint(UserResponse.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitLogin(@Context
    HttpHeaders headers, @FormParam("email")
    String email, @FormParam("password")
    String password) {
        super.processHttpHeaders(headers);

        if (logger.isDebugEnabled()) {
            logger.debug("login - start");
        }

        UserResponse userResponse = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userResponse = userBo.login(email, password);
            responseDone = true;

            return Response.status(status).entity(userResponse).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/setStatus")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response setStatus(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("status")
    String statusUser) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            userBo.setStatus(userId, statusUser);
            responseDone = true;

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg(statusUser);
            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitLoginFacebook")
    @org.codehaus.enunciate.jaxrs.TypeHint(UserResponse.class)
    @Consumes({MediaType.APPLICATION_JSON
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitLoginFacebook(@Context
    HttpHeaders headers, TSListFacebookUserDataObj list_user_profile) {
        super.processHttpHeaders(headers);

        logger.debug(
            "---------------------------------------------------------------------------");

        UserResponse userResponse = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userResponse = userBo.login_fb(list_user_profile);
            responseDone = true;

            // get oauth token and add to the user
            String deviceToken = list_user_profile.getDevice_token();
            String oAuthToken = null;

            //if ((deviceToken != null) && !deviceToken.isEmpty()) {
            String userId = userBo.getUserInformationByEmail(list_user_profile.getUser_profile_current()
                                                                              .getEmail())
                                  .getUserId();
            oAuthToken = userBo.getOAuthToken(userId, deviceToken);

            //}
            return Response.status(status).header("oauth_token", oAuthToken)
                           .entity(userResponse).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/loginAccount")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response loginAccount(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            String result = userBo.loginAccount(userId);

            if (result != null) {
                responseDone = true;

                TSSuccessObj tsSuccessObj = new TSSuccessObj();
                tsSuccessObj.setSuccessMsg(result);
                responseDone = true;

                return Response.status(status).entity(tsSuccessObj).build();
            } else {
                status = TSResponseStatusCode.ERROR.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
                responseDone = true;

                return Response.status(status).entity(tsErrorObj).build();
            }
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/getCity")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSGlobalObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response getCity(@Context
    HttpHeaders headers, @FormParam("key")
    String key) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        List<TSGlobalObj> result = null;
        boolean responseDone = false;

        try {
            result = userBo.getCity(key);
            responseDone = true;

            return Response.status(status).entity(result).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitLogout")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitLogout(@Context
    HttpHeaders headers, @FormParam("userLogId")
    String userId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            // TODO get from the header . 
            String deviceToken = null;
            responseDone = userBo.logout(userId, deviceToken);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Logout success!");
            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showSettingsPrivacy")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSListPrivacySettingsObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showSettingsPrivacy(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        TSListPrivacySettingsObj tsPrivacySettingsObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            tsPrivacySettingsObj = userBo.showSettingsPrivacy(userId);
            responseDone = true;

            return Response.status(status).entity(tsPrivacySettingsObj).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitSettingsPrivacy")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_JSON
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response updateSettingsPrivacy(@Context
    HttpHeaders headers, TSListPrivacySettingsObj privacySettingObj) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userBo.updateSettingsPrivacy(privacySettingObj);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Settings success!");
            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showSettingsNotifications")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSListNotificationSettingsObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showSettingsNotifications(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        TSListNotificationSettingsObj tsNotificationSettingsObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            tsNotificationSettingsObj = userBo.showSettingsNotifications(userId);
            responseDone = true;

            return Response.status(status).entity(tsNotificationSettingsObj)
                           .build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/getAllData")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSInitObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showSettingsNotifications(@Context
    HttpHeaders headers) {
        super.processHttpHeaders(headers);

        TSInitObj tsInitObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            tsInitObj = userBo.getAllData();
            responseDone = true;

            return Response.status(status).entity(tsInitObj).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitSettingsNotifications")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_JSON
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response updateSettingsNotifications(@Context
    HttpHeaders headers, TSListNotificationSettingsObj notificationSetting) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Settings Success!");
            userBo.updateSettingsNotifications(notificationSetting);

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showSettingsSocial")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSListSocialSettingObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showSettingsSocial(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        TSListSocialSettingObj tsSocialSettingsObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            tsSocialSettingsObj = userBo.showSettingsSocial(userId);
            responseDone = true;

            return Response.status(status).entity(tsSocialSettingsObj).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitSettingsSocial")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_JSON
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response updateSettingsAutoPublishSettings(
        @Context
    HttpHeaders headers, TSListSocialSettingObj social_setting_obj) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userBo.updateSettingsAutoPublishSettings(social_setting_obj);
            responseDone = true;

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Settings success!");

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitSettingsContactUs")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitSettingscontactUs(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("Contact_Order")
    String order, @FormParam("Contact_Desc")
    String desc) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            userBo.submitSettingscontactUs(userId, order, desc);

            responseDone = true;

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Settings success!");

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showAboutTastesync")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSAboutObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showAboutTastesync(@Context
    HttpHeaders headers, @FormParam("AboutId")
    String aboutId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            TSAboutObj tsAboutObj = userBo.showAboutTastesync(aboutId);

            responseDone = true;

            return Response.status(status).entity(tsAboutObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @GET
    @Path("/userdetails")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSUserObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showUserDetail(@Context
    HttpHeaders headers, @QueryParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        TSUserObj tsUserObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            tsUserObj = userBo.selectUser(userId);
            responseDone = true;

            return Response.status(status).entity(tsUserObj).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @GET
    @Path("/allusers")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSUserObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    private Response showUsersDetailsList(@Context
    HttpHeaders headers) {
        List<TSUserObj> tsUserObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            tsUserObjList = userBo.selectUsers();
            responseDone = true;

            return Response.status(status).entity(tsUserObjList).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/report")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitUserReport(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("reportText")
    String reportText, @FormParam("reportedUser")
    String reportedUser, @FormParam("reportedByUser")
    String reportedByUser) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            reportText = CommonFunctionsUtil.converStringAsNullIfNeeded(reportText);
            reportedUser = CommonFunctionsUtil.converStringAsNullIfNeeded(reportedUser);
            reportedByUser = CommonFunctionsUtil.converStringAsNullIfNeeded(reportedByUser);

            userBo.submitUserReport(userId, reportText, reportedUser,
                reportedByUser);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();

            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showProfileFollowing")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSUserProfileObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showProfileFollowing(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        List<TSUserProfileObj> tsFacebookUserDataObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            tsFacebookUserDataObjList = userBo.showProfileFollowing(userId);
            responseDone = true;

            return Response.status(status).entity(tsFacebookUserDataObjList)
                           .build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showProfileFollowers")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSUserProfileObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showProfileFollowers(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        List<TSUserProfileObj> tsFacebookUserDataObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            tsFacebookUserDataObjList = userBo.showProfileFollowers(userId);
            responseDone = true;

            return Response.status(status).entity(tsFacebookUserDataObjList)
                           .build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showProfileFriends")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSFriendObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showProfileFriends(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        TSFriendObj tsfriend = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            List<TSUserObj> tsFacebookUserDataObjList = userBo.showProfileFriends(userId);
            List<String> tsInviteFacebookUserDataObjList = userBo.showInviteFriends(userId);

            tsfriend = new TSFriendObj();
            tsfriend.setFriendTasteSync(tsFacebookUserDataObjList);
            tsfriend.setInviteFriend(tsInviteFacebookUserDataObjList);
            responseDone = true;

            return Response.status(status).entity(tsfriend).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitMyProfileAboutMe")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitMyProfileAboutMe(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("Content")
    String aboutMeText) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            aboutMeText = CommonFunctionsUtil.converStringAsNullIfNeeded(aboutMeText);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Updating succesfully!");
            responseDone = userBo.submitMyProfileAboutMe(userId, aboutMeText);

            if (responseDone) {
                responseDone = true;

                return Response.status(status).entity(tsSuccessObj).build();
            } else {
                status = TSResponseStatusCode.ERROR.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
                responseDone = true;

                return Response.status(status).entity(tsErrorObj).build();
            }
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitFollowUserStatusChange")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitFollowUserStatusChange(@Context
    HttpHeaders headers, @FormParam("followeeUserId")
    String followeeUserId, @FormParam("followerUserId")
    String followerUserId, @FormParam("statusFlag")
    String statusFlag) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            followerUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(followerUserId);
            statusFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(statusFlag);

            userBo.followUserStatusChange(followeeUserId, followerUserId,
                statusFlag);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Setting succesfully!");

            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showFollowStatus")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showFollowStatus(@Context
    HttpHeaders headers, @FormParam("followerUserId")
    String followerUserId, @FormParam("followeeUserId")
    String followeeUserId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            followeeUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(followeeUserId);
            followerUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(followerUserId);

            boolean followed = userBo.getFollowStatus(followeeUserId,
                    followerUserId);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();

            if (followed) {
                tsSuccessObj.setSuccessMsg("1");
            } else {
                tsSuccessObj.setSuccessMsg("0");
            }

            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("submitTrustedFriendStatusChange")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitTrustedFriendStatusChange(
        @Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("destUserId")
    String dest_user_id,
        @FormParam("trustedFriendStatus")
    String trustedFriendStatus) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            dest_user_id = CommonFunctionsUtil.converStringAsNullIfNeeded(dest_user_id);
            trustedFriendStatus = CommonFunctionsUtil.converStringAsNullIfNeeded(trustedFriendStatus);

            userBo.submitTrustedFriendStatusChange(userId, dest_user_id,
                trustedFriendStatus);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Updating succesfully!");
            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitSignupDetail")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_JSON
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitSignupDetail(@Context
    HttpHeaders headers, TSAskSubmitLoginObj askObj) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Uploading successfully!");
            userBo.submitSignupDetail(askObj);
            responseDone = true;

            userBo.initUserSettings(askObj.getUserId());
            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showTrustedFriend")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showTrustedFriend(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("destUserId")
    String dest_user_id) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            int choise = userBo.showTrustedFriend(userId, dest_user_id);
            String retString = "";

            switch (choise) {
            case 0:
                retString = "not trust";

                break;

            case 1:
                retString = "trusted";

                break;

            case 2:
                retString = "no friend";

                break;
            }

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg(retString);

            if (choise != 3) {
                responseDone = true;

                return Response.status(status).entity(tsSuccessObj).build();
            } else {
                status = TSResponseStatusCode.ERROR.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
                responseDone = true;

                return Response.status(status).entity(tsErrorObj).build();
            }
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/sendMessageToUser")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response sendMessageToUser(@Context
    HttpHeaders headers, @FormParam("senderID")
    String senderID, @FormParam("recipientID")
    String recipientID, @FormParam("content")
    String content) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            senderID = CommonFunctionsUtil.converStringAsNullIfNeeded(senderID);
            recipientID = CommonFunctionsUtil.converStringAsNullIfNeeded(recipientID);
            content = CommonFunctionsUtil.converStringAsNullIfNeeded(content);
            userBo.sendMessageToUser(senderID, recipientID, content);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Sending succesfully!");

            try {
                CommonFunctionsUtil.execAsync(TSConstants.SEND_PUSH_NOTIFICATIONS_SCRIPT,
                    TSConstants.BASENAME_SEND_PUSH_NOTIFICATIONS_SCRIPT);
            } catch (com.tastesync.common.exception.TasteSyncException e) {
                e.printStackTrace();
            }

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showRestaurantSuggestion")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantSuggestion(@Context
    HttpHeaders headers, @FormParam("key")
    String key, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        List<TSRestaurantObj> response = null;
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            key = CommonFunctionsUtil.converStringAsNullIfNeeded(key);
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            response = userBo.showRestaurantSuggestion(key, userId);

            if (response != null) {
                responseDone = true;

                return Response.status(status).entity(response).build();
            } else {
                status = TSResponseStatusCode.ERROR.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
                responseDone = true;

                return Response.status(status).entity(tsErrorObj).build();
            }
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/getHomeProfile")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSUserProfileObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response getHomeProfile(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId) {
        super.processHttpHeaders(headers);

        super.processHttpHeaders(headers);

        TSUserProfileObj userProfileObj = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            userProfileObj = userBo.getUserHomeProfile(userId);
            responseDone = true;

            return Response.status(status).entity(userProfileObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/getUserObject")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSFacebookUserDataObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response getUserId(@Context
    HttpHeaders headers, @FormParam("userID")
    String userFBID) {
        super.processHttpHeaders(headers);

        TSFacebookUserDataObj userId = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userFBID = CommonFunctionsUtil.converStringAsNullIfNeeded(userFBID);

            // if userId is null, error!
            if (userFBID == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userFBID", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            userId = userBo.getUserId(userFBID);

            responseDone = true;

            return Response.status(status).entity(userId).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/showProfileRestaurants")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSUserProfileRestaurantsObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showProfileRestaurants(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("type")
    int type, @FormParam("from")
    int from, @FormParam("to")
    int to) {
        super.processHttpHeaders(headers);

        List<TSUserProfileRestaurantsObj> userProfileRestaurants = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            userProfileRestaurants = userBo.getUserProfileRestaurants(userId,
                    type, from, to);
            responseDone = true;

            return Response.status(status).entity(userProfileRestaurants).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/inviteFriend")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response inviteFriend(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("friendFBId")
    String friendFBId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            userBo.inviteFriend(userId, friendFBId);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Invite Friend Successfully!");
            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/submitUserReport")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitUserReport(@Context
    HttpHeaders headers, @FormParam("userId")
    String userId, @FormParam("reportedUserId")
    String reportedUserId, @FormParam("reason")
    String reason) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);

            // if userId is null, error!
            if (userId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("userId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            userBo.submitUserReport(userId, reportedUserId, reason);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Reported Successfully!");
            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/getUserCity")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSCityObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response getUserCity(@Context
    HttpHeaders headers, @FormParam("key")
    String key) {
        super.processHttpHeaders(headers);

        List<TSCityObj> neighbourhoodCityObj = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            neighbourhoodCityObj = userBo.getCityName(key);
            responseDone = true;

            return Response.status(status).entity(neighbourhoodCityObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }
}
