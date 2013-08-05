package com.tastesync.services;

import com.tastesync.bos.RestaurantBO;
import com.tastesync.bos.RestaurantBOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSCurrentRecommendedRestaurantDetailsObj;
import com.tastesync.model.objects.TSErrorObj;
import com.tastesync.model.objects.TSMenuObj;
import com.tastesync.model.objects.TSRestaurantExtendInfoObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSRestaurantPhotoObj;
import com.tastesync.model.objects.TSRestaurantTipsAPSettingsObj;
import com.tastesync.model.objects.TSSuccessObj;
import com.tastesync.model.objects.derived.TSRestaurantCusineTier2Obj;
import com.tastesync.model.objects.derived.TSRestaurantRecommendersDetailsObj;

import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;
import com.tastesync.util.TSResponseStatusCode;

import org.apache.log4j.Logger;

import org.codehaus.jackson.JsonGenerationException;
import org.codehaus.jackson.map.JsonMappingException;

import java.io.IOException;

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


@Path("/restaurant")
@Consumes({MediaType.APPLICATION_JSON
})
@Produces({MediaType.APPLICATION_JSON
})
public class RestaurantService extends BaseService {
    /**
     * Logger for this class
     */
    private static final Logger logger = Logger.getLogger(RestaurantService.class);
    private RestaurantBO restaurantBO = new RestaurantBOImpl();

    @GET
    @Path("/recodetails")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSCurrentRecommendedRestaurantDetailsObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showCurrentRestaurantRecommendedDetails(
        @QueryParam("userid")
    String userId, @QueryParam("restaurantid")
    String restaurantId) {
        TSCurrentRecommendedRestaurantDetailsObj tsCurrentRecommendedRestaurantDetailsObj =
            null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);

        boolean responseDone = false;

        try {
            tsCurrentRecommendedRestaurantDetailsObj = restaurantBO.showCurrentRestaurantRecommendedDetails(userId,
                    restaurantId);
            responseDone = true;

            return Response.status(status)
                           .entity(tsCurrentRecommendedRestaurantDetailsObj)
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

    @GET
    @Path("/details")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantCusineTier2Obj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantDetail(@QueryParam("userid")
    String userId, @QueryParam("restaurantid")
    String restaurantId) {
        //    	
        //    	-- -- -- -- -- -- -- -- -- -- -- -- showRestaurantDetail -- -- -- -- -- -- -- -- -- -- -- -- 
        //    	-- TODO: PHOTOS: LIMIT PHOTO RESULTS TO 3. Show INSTAGRAM PHOTOS first (on top)
        //    	-- TODO: CALCULATE openNowFlag BASED ON HOURS
        //    	-- TODO: Define factual_restaurant_deals table
        TSRestaurantCusineTier2Obj tsRestaurantCusineTier2Obj = null;
        boolean responseDone = false;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);

        try {
            tsRestaurantCusineTier2Obj = restaurantBO.showRestaurantDetail(userId,
                    restaurantId);
            responseDone = true;

            return Response.status(status).entity(tsRestaurantCusineTier2Obj)
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

    @GET
    @Path("/menu")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSMenuObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantDetailMenu(
        @QueryParam("userid")
    String userId, @QueryParam("restaurantid")
    String restaurantId) {
        TSMenuObj tsMenuObj = null;
        boolean responseDone = true;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);

        try {
            tsMenuObj = restaurantBO.showRestaurantDetailMenu(restaurantId);
            responseDone = true;

            return Response.status(status).entity(tsMenuObj).build();
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
    @Path("/extendedinfo")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantExtendInfoObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantDetailMoreInfo(
        @QueryParam("userid")
    String userId, @QueryParam("restaurantid")
    String restaurantId) {
        TSRestaurantExtendInfoObj tsRestaurantExtendInfoObj = null;
        boolean responseDone = false;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);

        try {
            tsRestaurantExtendInfoObj = restaurantBO.showRestaurantDetailMoreInfo(restaurantId);
            responseDone = true;

            return Response.status(status).entity(tsRestaurantExtendInfoObj)
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

    @GET
    @Path("/photos")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantPhotoObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantDetailPhotos(
        @QueryParam("userid")
    String userId, @QueryParam("restaurantid")
    String restaurantId) {
        List<TSRestaurantPhotoObj> tsRestaurantPhotoObjList = null;
        boolean responseDone = false;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);

        try {
            tsRestaurantPhotoObjList = restaurantBO.showRestaurantDetailPhotos(restaurantId);
            responseDone = true;

            return Response.status(status).entity(tsRestaurantPhotoObjList)
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

    @GET
    @Path("/restaurantdetails")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantDetail(
        @QueryParam("restaurantid")
    String restaurantId) {
        TSRestaurantObj tsRestaurantObj = null;
        boolean responseDone = false;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);

        try {
            tsRestaurantObj = restaurantBO.showRestaurantDetail(restaurantId);

            if (printExtra) {
                try {
                    System.out.println(mapper.defaultPrettyPrintingWriter()
                                             .writeValueAsString(tsRestaurantObj));
                } catch (JsonGenerationException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                } catch (JsonMappingException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                } catch (IOException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }

            responseDone = true;

            return Response.status(status).entity(tsRestaurantObj).build();
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
    @Path("/allrestaurants")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantsDetailsList() {
        List<TSRestaurantObj> tsRestaurantObjList = null;
        boolean responseDone = false;
        int status = TSResponseStatusCode.SUCCESS.getValue();

        try {
            tsRestaurantObjList = restaurantBO.showRestaurantsDetailsList();
            responseDone = true;

            return Response.status(status).entity(tsRestaurantObjList).build();
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
    @Path("/save")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitSaveOrUnsaveRestaurant(
        @FormParam("userid")
    String userId, @FormParam("restaurantId")
    String restaurantId,
        @FormParam("userRestaurantSavedFlag")
    String userRestaurantSavedFlag) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        //check userRestaurarntSavedFlag is either 1 or 0
        try {
            Integer.parseInt(userRestaurantSavedFlag);
        } catch (NumberFormatException nfe) {
            status = TSResponseStatusCode.INVALIDDATA.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
            responseDone = true;

            return Response.status(status)
                           .header("userrestaurantsavedflag",
                (userRestaurantSavedFlag != null) ? userRestaurantSavedFlag
                                                  : TSConstants.EMPTY)
                           .entity(tsErrorObj).build();
        }

        try {
            restaurantBO.submitSaveOrUnsaveRestaurant(userId, restaurantId,
                userRestaurantSavedFlag);

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
    @Path("/savefavs")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitAddOrRemoveFromFavs(
        @FormParam("userid")
    String userId, @FormParam("restaurantId")
    String restaurantId) {
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        try {
            restaurantBO.submitAddOrRemoveFromFavs(userId, restaurantId);

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

    @GET
    @Path("/aptips")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantTipsAPSettingsObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantDetailTipAPSettings(
        @QueryParam("userid")
    String userId, @QueryParam("restaurantid")
    String restaurantId) {
        List<TSRestaurantTipsAPSettingsObj> tsRestaurantTipsAPSettingsObjList = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);

        boolean responseDone = false;

        try {
            tsRestaurantTipsAPSettingsObjList = restaurantBO.showRestaurantDetailTipAPSettings(userId,
                    restaurantId);
            responseDone = true;

            return Response.status(status)
                           .entity(tsRestaurantTipsAPSettingsObjList).build();
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
    @Path("/savetips")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRestaurantDetailTip(
        @FormParam("userid")
    String userId, @FormParam("restaurantId")
    String restaurantId, @FormParam("tipText")
    String tipText) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            restaurantBO.submitRestaurantDetailTip(userId, restaurantId, tipText);

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

    @GET
    @Path("/askdetails")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantRecommendersDetailsObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRestaurantDetailAsk(
        @QueryParam("userid")
    String userId, @QueryParam("restaurantid")
    String restaurantId) {
        TSRestaurantRecommendersDetailsObj tsRestaurantRecommendersDetailsObj = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);

        boolean responseDone = false;

        try {
            tsRestaurantRecommendersDetailsObj = restaurantBO.showRestaurantDetailAsk(userId,
                    restaurantId);
            responseDone = true;

            return Response.status(status)
                           .entity(tsRestaurantRecommendersDetailsObj).build();
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
    @Path("/askquestion")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRestaurantDetailAsk(
        @FormParam("userid")
    String userId, @FormParam("questionId")
    String restaurantId, @FormParam("questionText")
    String questionText,
        @FormParam("postQuestionOnForum")
    String postQuestionOnForum,
        @FormParam("recommendersUserIdList")
    String recommendersUserIdList,
        @FormParam("friendsFacebookIdList")
    String friendsFacebookIdList) {
        int status = TSResponseStatusCode.SUCCESS.getValue();

        //check postQuestionOnForum is either 1 or 0
        try {
            Integer.parseInt(postQuestionOnForum);
        } catch (NumberFormatException nfe) {
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        }

        boolean responseDone = false;

        try {
            restaurantBO.submitRestaurantDetailAsk(userId, restaurantId,
                questionText, postQuestionOnForum, recommendersUserIdList,
                friendsFacebookIdList);

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
