package com.tastesync.services;

import com.tastesync.bos.UserBo;
import com.tastesync.bos.UserBoImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSErrorObj;
import com.tastesync.model.objects.TSFacebookUserDataObj;
import com.tastesync.model.objects.TSListFacebookUserDataObj;
import com.tastesync.model.objects.TSListNotificationSettingsObj;
import com.tastesync.model.objects.TSListPrivacySettingsObj;
import com.tastesync.model.objects.TSListSocialSettingObj;
import com.tastesync.model.objects.TSSuccessObj;
import com.tastesync.model.objects.TSUserObj;
import com.tastesync.model.objects.TSUserProfileObj;
import com.tastesync.model.objects.TSUserProfileRestaurantsObj;
import com.tastesync.model.response.UserResponse;

import com.tastesync.util.CommonFunctionsUtil;
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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitLogin(@FormParam("email")
    String email, @FormParam("password")
    String password) {
    	if (logger.isDebugEnabled()) {
            logger.debug("login - start");
        }
    	UserResponse userResponse = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        
		try {
			userResponse = userBo.login(email, password);
			return Response.status(status).entity(userResponse).build();
		} catch (TasteSyncException e) {
			e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();
            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            return Response.status(status).entity(tsErrorObj).build();
		}finally {
			if (userResponse == null) {
				status = TSResponseStatusCode.ERROR.getValue();
				TSErrorObj tsErrorObj = new TSErrorObj();
				tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
				return Response.status(status).entity(tsErrorObj).build();
			}
		}
    }
    
    @POST
	@Path("/submitLoginFacebook")
	@Consumes({ MediaType.APPLICATION_JSON })
	@Produces({ MediaType.APPLICATION_JSON })
	public Response submitLoginFacebook(TSListFacebookUserDataObj list_user_profile) {
    	logger.debug("---------------------------------------------------------------------------");
    	UserResponse userResponse = null;
    	
        int status = TSResponseStatusCode.SUCCESS.getValue();
        
		try {
			userResponse = userBo.login_fb(list_user_profile);
			return Response.status(status).entity(userResponse).build();
		} catch (Exception e) {
			e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();
            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            return Response.status(status).entity(tsErrorObj).build();
		}
            finally {
			if (userResponse == null) {
				status = TSResponseStatusCode.ERROR.getValue();
				TSErrorObj tsErrorObj = new TSErrorObj();
				tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
				return Response.status(status).entity(tsErrorObj).build();
			}
		}
    }
    
    @POST
    @Path("/submitLogout")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitLogout(@FormParam("userLogId")
    String userId) {
        // TODO expire access token
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
        	responseDone = userBo.logout(userId);
            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Logout success!");
            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();
            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = false;
            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (!responseDone) {
                    status = TSResponseStatusCode.ERROR.getValue();
                    TSErrorObj tsErrorObj = new TSErrorObj();
                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);
                    return Response.status(status).entity(tsErrorObj).build();
            }
        }
    }

    @POST
    @Path("/showSettingsPrivacy")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showSettingsPrivacy(@FormParam("userId")
    String userId) {
    	TSListPrivacySettingsObj tsPrivacySettingsObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsPrivacySettingsObj = userBo.showSettingsPrivacy(userId);
            if(tsPrivacySettingsObj != null)
            	return Response.status(status).entity(tsPrivacySettingsObj).build();
            else
            {
            	status = TSResponseStatusCode.ERROR.getValue();
                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
                return Response.status(status).entity(tsErrorObj).build();
            }
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsPrivacySettingsObj == null) {
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
    @Consumes({MediaType.APPLICATION_JSON
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response updateSettingsPrivacy(TSListPrivacySettingsObj privacySettingObj) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            responseDone = userBo.updateSettingsPrivacy(privacySettingObj);
            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Settings success!");
            if(responseDone)
            	return Response.status(status).entity(tsSuccessObj).build();
            else
            {
            	TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
                return Response.status(status).entity(tsErrorObj).build();
            }
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = false;

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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showSettingsNotifications(
        @FormParam("userId") String userId) {
        TSListNotificationSettingsObj tsNotificationSettingsObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsNotificationSettingsObj = userBo.showSettingsNotifications(userId);

            return Response.status(status).entity(tsNotificationSettingsObj)
                           .build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsNotificationSettingsObj == null) {
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
    @Consumes({MediaType.APPLICATION_JSON
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response updateSettingsNotifications(TSListNotificationSettingsObj notificationSetting) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {

            

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            tsSuccessObj.setSuccessMsg("Settings Success!");
            responseDone = userBo.updateSettingsNotifications(notificationSetting);;
            if(responseDone)
            	return Response.status(status).entity(tsSuccessObj).build();
            else
            {
            	 TSErrorObj tsErrorObj = new TSErrorObj();
                 tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
                 return Response.status(status).entity(tsErrorObj).build();
            }
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = false;

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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showSettingsSocial(@FormParam("userId")
    String userId) {
    	TSListSocialSettingObj tsSocialSettingsObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
        	System.out.println(userId);
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            System.out.println(userId);
            tsSocialSettingsObj = userBo.showSettingsSocial(userId);

            return Response.status(status).entity(tsSocialSettingsObj).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsSocialSettingsObj == null) {
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
    @Consumes({MediaType.APPLICATION_JSON
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response updateSettingsAutoPublishSettings(TSListSocialSettingObj social_setting_obj) throws TasteSyncException 
    {
    	return userBo.updateSettingsAutoPublishSettings(social_setting_obj);
    }
    
    @POST
    @Path("/submitSettingsContactUs")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitSettingscontactUs(@FormParam("userId") String userId,
    										@FormParam("Contact_Order") String order,
    										@FormParam("Contact_Desc") String desc) throws TasteSyncException
    {
    	return userBo.submitSettingscontactUs(userId, order, desc);
    }
    
    @GET
    @Path("/showAboutTastesync")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showAboutTastesync() throws TasteSyncException
    {
    	return userBo.showAboutTastesync();
    }
    
    @GET
    @Path("/userdetails")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showUserDetail(@QueryParam("userId")
    String userId) {
        TSUserObj tsUserObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsUserObj = userBo.selectUser(userId);

            return Response.status(status).entity(tsUserObj).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsUserObj == null) {
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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showUsersDetailsList() {
        List<TSUserObj> tsUserObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            tsUserObjList = userBo.selectUsers();

            return Response.status(status).entity(tsUserObjList).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsUserObjList == null) {
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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitUserReport(@FormParam("userId")
    String userId, @FormParam("reportText")
    String reportText, @FormParam("reportedUser")
    String reportedUser, @FormParam("reportedByUser")
    String reportedByUser) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
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
            responseDone = false;

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
    @Path("/profile/me")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showMyProfileHome(@QueryParam("userId")
    String userId) {
        TSUserProfileObj tsUserProfileObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsUserProfileObj = userBo.showMyProfileHome(userId);

            return Response.status(status).entity(tsUserProfileObj).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsUserProfileObj == null) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();

                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @GET
    @Path("/profile/user")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showUserProfileHome(@QueryParam("userId")
    String userId, @QueryParam("viewerUserId")
    String viewerUserId) {
        TSUserProfileObj tsUserProfileObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            viewerUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(viewerUserId);

            tsUserProfileObj = userBo.showUserProfileHome(userId, viewerUserId);

            return Response.status(status).entity(tsUserProfileObj).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsUserProfileObj == null) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();

                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @GET
    @Path("/profile/following")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showProfileFollowing(@QueryParam("userId")
    String userId) {
        List<TSFacebookUserDataObj> tsFacebookUserDataObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsFacebookUserDataObjList = userBo.showProfileFollowing(userId);

            return Response.status(status).entity(tsFacebookUserDataObjList)
                           .build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsFacebookUserDataObjList == null) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();

                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @GET
    @Path("/profile/followers")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showProfileFollowers(@QueryParam("userId")
    String userId) {
        List<TSFacebookUserDataObj> tsFacebookUserDataObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsFacebookUserDataObjList = userBo.showProfileFollowers(userId);

            return Response.status(status).entity(tsFacebookUserDataObjList)
                           .build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsFacebookUserDataObjList == null) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();

                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @GET
    @Path("/profile/myfriends")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showMyProfileFriends(@QueryParam("userId")
    String userId) {
        List<TSFacebookUserDataObj> tsFacebookUserDataObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsFacebookUserDataObjList = userBo.showMyProfileFriends(userId);

            return Response.status(status).entity(tsFacebookUserDataObjList)
                           .build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsFacebookUserDataObjList == null) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();

                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @GET
    @Path("/profile/userfriends")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showProfileFriends(@QueryParam("userId")
    String userId) {
        List<TSFacebookUserDataObj> tsFacebookUserDataObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsFacebookUserDataObjList = userBo.showMyProfileFriends(userId);

            return Response.status(status).entity(tsFacebookUserDataObjList)
                           .build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsFacebookUserDataObjList == null) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();

                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @GET
    @Path("/profile/restaurants")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showProfileRestaurants(@QueryParam("userId")
    String userId) {
        List<TSUserProfileRestaurantsObj> tsUserProfileRestaurantsObjList = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            tsUserProfileRestaurantsObjList = userBo.showProfileRestaurants(userId);

            return Response.status(status)
                           .entity(tsUserProfileRestaurantsObjList).build();
        } catch (TasteSyncException e1) {
            e1.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsUserProfileRestaurantsObjList == null) {
                    status = TSResponseStatusCode.ERROR.getValue();

                    TSErrorObj tsErrorObj = new TSErrorObj();

                    tsErrorObj.setErrorMsg(TSConstants.ERROR_UNKNOWN_SYSTEM_KEY);

                    return Response.status(status).entity(tsErrorObj).build();
                }
            }
        }
    }

    @POST
    @Path("/profile/aboutme")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitMyProfileAboutMe(@FormParam("userId")
    String userId, @FormParam("aboutMeText")
    String aboutMeText) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            aboutMeText = CommonFunctionsUtil.converStringAsNullIfNeeded(aboutMeText);

            userBo.submitMyProfileAboutMe(userId, aboutMeText);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();

            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = false;

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
    @Path("/followunfollow")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response followUserStatusChange(
        @FormParam("followeeUserId")
    String followeeUserId, @FormParam("followerUserId")
    String followerUserId, @FormParam("statusFlag")
    String statusFlag) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            followeeUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(followeeUserId);
            followerUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(followerUserId);
            statusFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(statusFlag);

            userBo.followUserStatusChange(followeeUserId, followerUserId,
                statusFlag);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();

            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = false;

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
    @Path("/profile/aboutme")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitTrustedFriendStatusChange(
        @FormParam("userId")
    String userId, @FormParam("viewerUserId")
    String viewerUserId,
        @FormParam("trustedFriendStatus")
    String trustedFriendStatus) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            viewerUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(viewerUserId);
            trustedFriendStatus = CommonFunctionsUtil.converStringAsNullIfNeeded(trustedFriendStatus);

            userBo.submitTrustedFriendStatusChange(userId, viewerUserId,
                trustedFriendStatus);

            TSSuccessObj tsSuccessObj = new TSSuccessObj();

            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = false;

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
