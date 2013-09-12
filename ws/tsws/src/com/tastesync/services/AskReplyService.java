package com.tastesync.services;

import com.tastesync.bos.AskReplyBO;
import com.tastesync.bos.AskReplyBOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSErrorObj;
import com.tastesync.model.objects.TSKeyValueObj;
import com.tastesync.model.objects.TSRecoNotificationBaseObj;
import com.tastesync.model.objects.TSRestaurantBasicObj;
import com.tastesync.model.objects.TSSuccessObj;
import com.tastesync.model.objects.derived.TSRecoRequestNonAssignedObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSRestaurantCusineTier2Obj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;
import com.tastesync.util.TSResponseStatusCode;

import java.util.ArrayList;
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


@Path("/ask")
@Consumes({MediaType.APPLICATION_JSON
})
@Produces({MediaType.APPLICATION_JSON
})
public class AskReplyService extends BaseService {
    private AskReplyBO askReplyBO = new AskReplyBOImpl();

    @POST
    @Path("/recosearch")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitAskForRecommendationSearch(
        @FormParam("userid")
    String userId, @FormParam("cuisinetier1idlist")
    String cuisineTier1IdList,
        @FormParam("cuisineiier2idlist")
    String cuisineTier2IdList, @FormParam("priceidlist")
    String priceIdList, @FormParam("themeidlist")
    String themeIdList,
        @FormParam("whoareyouwithidlist")
    String whoareyouwithIdList,
        @FormParam("typeofrestaurantidList")
    String typeOfRestaurantIdList,
        @FormParam("occasionidlist")
    String occasionIdList, @FormParam("neighborhoodid")
    String neighborhoodId, @FormParam("cityid")
    String cityId, @FormParam("statename")
    String stateName) {
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            cuisineTier1IdList = CommonFunctionsUtil.converStringAsNullIfNeeded(cuisineTier1IdList);
            cuisineTier2IdList = CommonFunctionsUtil.converStringAsNullIfNeeded(cuisineTier2IdList);
            priceIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(priceIdList);
            themeIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(themeIdList);
            whoareyouwithIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(whoareyouwithIdList);
            typeOfRestaurantIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(typeOfRestaurantIdList);
            occasionIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(occasionIdList);
            neighborhoodId = CommonFunctionsUtil.converStringAsNullIfNeeded(neighborhoodId);

            cityId = CommonFunctionsUtil.converStringAsNullIfNeeded(cityId);
            stateName = CommonFunctionsUtil.converStringAsNullIfNeeded(stateName);

            // if cityId is null, error!
            if (cityId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("cityId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            String recoRequestId = askReplyBO.submitAskForRecommendationSearch(userId,
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        cuisineTier1IdList),
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        cuisineTier2IdList),
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        priceIdList),
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        themeIdList),
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        whoareyouwithIdList),
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        typeOfRestaurantIdList),
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        occasionIdList), neighborhoodId, cityId, stateName);

            TSKeyValueObj tsKeyValueObj = new TSKeyValueObj();
            tsKeyValueObj.setKeyName(TSKeyValueObj.KEY);
            tsKeyValueObj.setKeyNameValue("recorequestid");
            tsKeyValueObj.setValueName(TSKeyValueObj.VALUE);
            tsKeyValueObj.setValueNameValue(recoRequestId);
            responseDone = true;

            return Response.status(status).entity(tsKeyValueObj).build();
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
    @Path("/saverecofriends")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRecoRequestNonAssignedObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitAskForRecommendationFriends(
        @FormParam("userid")
    String userId, @FormParam("recorequestid")
    String recoRequestId,
        @FormParam("recorequestfriendtext")
    String recoRequestFriendText,
        @FormParam("friendsfacebookidlist")
    String friendsFacebookIdList,
        @FormParam("postonfacebook")
    String postRecoRequestOnFacebook) {
        //    	-- TODO: SAVE "POSTONFACEBOOK" IN HISTORICAL SHARED TABLE
        //    	-- TODO: SEND MESSAGE TO LISTOFFRIENDSTSUSER
        //
        //    	-- For Loop over each friend in listOfFriends{facebookId}
        //    	-- solved for single facebookId below
        //
        //    	-- calculate1 Logic
        TSRecoRequestNonAssignedObj tsRecoRequestNonAssignedObj = null;

        //parameters check
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            recoRequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recoRequestId);
            recoRequestFriendText = CommonFunctionsUtil.converStringAsNullIfNeeded(recoRequestFriendText);
            friendsFacebookIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(friendsFacebookIdList);
            postRecoRequestOnFacebook = CommonFunctionsUtil.converStringAsNullIfNeeded(postRecoRequestOnFacebook);

            tsRecoRequestNonAssignedObj = askReplyBO.submitAskForRecommendationFriends(userId,
                    recoRequestId, recoRequestFriendText,
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        friendsFacebookIdList), postRecoRequestOnFacebook);

            responseDone = true;

            return Response.status(status).entity(tsRecoRequestNonAssignedObj)
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

    @GET
    @Path("/recorequest")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRecoRequestObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsRequest(
        @QueryParam("userid")
    String userId, @QueryParam("recorequestid")
    String recorequestId) {
        TSRecoRequestObj tsRecoRequestObj = null;
        boolean responseDone = false;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        try {
            tsRecoRequestObj = askReplyBO.showRecommendationsRequest(userId,
                    recorequestId);

            if (tsRecoRequestObj == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status).entity(tsErrorObj).build();
            }

            responseDone = true;

            return Response.status(status).entity(tsRecoRequestObj).build();
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
    @Path("/recofriends")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSKeyValueObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showAskForRecommendationFriends(
        @QueryParam("recorequestid")
    String recoRequestId) {
        boolean responseDone = false;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        recoRequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recoRequestId);

        try {
            String recoRequestText = askReplyBO.showAskForRecommendationFriends(recoRequestId);

            responseDone = true;

            TSKeyValueObj tsKeyValueObj = new TSKeyValueObj();
            tsKeyValueObj.setKeyName(TSKeyValueObj.KEY);
            tsKeyValueObj.setKeyNameValue("recorequesttext");

            tsKeyValueObj.setValueName(TSKeyValueObj.VALUE);
            tsKeyValueObj.setValueNameValue(recoRequestText);
            responseDone = true;

            return Response.status(status).entity(tsKeyValueObj).build();
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
    @Path("/recoreqans")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRecommendationRequestAnswer(
        @FormParam("recorequestid")
    String recorequestId,
        @FormParam("recommenderuserid")
    String recommenderUserId,
        @FormParam("restaurantidlist")
    String restaurantIdList, @FormParam("replytext")
    String replyText) {
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            //parameters check
            recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);
            recommenderUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(recommenderUserId);
            restaurantIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantIdList);
            replyText = CommonFunctionsUtil.converStringAsNullIfNeeded(replyText);

            askReplyBO.submitRecommendationRequestAnswer(recorequestId,
                recommenderUserId,
                CommonFunctionsUtil.convertStringListAsArrayList(
                    restaurantIdList), replyText);

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
    @Path("/recos4you")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRecommendationsForYouObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsForYou(
        @QueryParam("userid")
    String userId, @QueryParam("recorequestid")
    String recorequestId) {
        TSRecommendationsForYouObj tsRecommendationsForYou = null;
        boolean responseDone = false;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        try {
            tsRecommendationsForYou = askReplyBO.showRecommendationsForYou(userId,
                    recorequestId);
            responseDone = true;

            return Response.status(status).entity(tsRecommendationsForYou)
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
    @Path("/recomsgans")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRecommendationMessageAnswer(
        @FormParam("newmessagetext")
    String newMessageText,
        @FormParam("previousmessageid")
    String previousMessageId,
        @FormParam("newmessagerecipientuserid")
    String newMessageRecipientUserId,
        @FormParam("newmessagesenderuserid")
    String newMessageSenderUserId,
        @FormParam("restaurantidlist")
    String restaurantIdList) {
        //parameters check
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            newMessageText = CommonFunctionsUtil.converStringAsNullIfNeeded(newMessageText);
            previousMessageId = CommonFunctionsUtil.converStringAsNullIfNeeded(previousMessageId);
            newMessageRecipientUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(newMessageRecipientUserId);
            newMessageSenderUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(newMessageSenderUserId);
            askReplyBO.submitRecommendationMessageAnswer(newMessageText,
                previousMessageId, newMessageRecipientUserId,
                newMessageSenderUserId,
                CommonFunctionsUtil.convertStringListAsArrayList(
                    restaurantIdList));

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
    @Path("/recomsg")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSenderUserObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationMessage(
        @QueryParam("messageid")
    String messageId, @QueryParam("recipientuserid")
    String recipientUserId) {
        TSSenderUserObj tsSenderUserObj = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        messageId = CommonFunctionsUtil.converStringAsNullIfNeeded(messageId);
        recipientUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(recipientUserId);

        boolean responseDone = false;

        try {
            tsSenderUserObj = askReplyBO.showRecommendationMessage(messageId,
                    recipientUserId);
            responseDone = true;

            return Response.status(status).entity(tsSenderUserObj).build();
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
    @Path("/recosfollowup")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRecommendationsFollowupObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsFollowup(
        @QueryParam("userid")
    String userId, @QueryParam("questionid")
    String questionId) {
        TSRecommendationsFollowupObj tsRecommendationsFollowupObj = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        questionId = CommonFunctionsUtil.converStringAsNullIfNeeded(questionId);

        boolean responseDone = false;

        try {
            tsRecommendationsFollowupObj = askReplyBO.showRecommendationsFollowup(userId,
                    questionId);
            responseDone = true;

            return Response.status(status).entity(tsRecommendationsFollowupObj)
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
    @Path("/recofollowupanswer")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRecommendationFollowupAnswer(
        @FormParam("userid")
    String userId, @FormParam("questiondid")
    String questionId, @FormParam("replytext")
    String replyText, @FormParam("restaurantidlist")
    String restaurantIdList) {
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            questionId = CommonFunctionsUtil.converStringAsNullIfNeeded(questionId);
            replyText = CommonFunctionsUtil.converStringAsNullIfNeeded(replyText);
            restaurantIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantIdList);

            askReplyBO.submitRecommendationFollowupAnswer(userId, questionId,
                replyText,
                CommonFunctionsUtil.convertStringListAsArrayList(
                    restaurantIdList));

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
    @Path("/recosandlikes")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRecommendeeUserObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsShowLikes(
        @QueryParam("recolikeid")
    String recoLikeId, @QueryParam("recommenderuserid")
    String recommenderUserId) {
        TSRecommendeeUserObj tsRecommendeeUser = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        recoLikeId = CommonFunctionsUtil.converStringAsNullIfNeeded(recoLikeId);
        recommenderUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(recommenderUserId);

        boolean responseDone = false;

        try {
            tsRecommendeeUser = askReplyBO.showRecommendationsShowLikes(recoLikeId);
            responseDone = true;

            return Response.status(status).entity(tsRecommendeeUser).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

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
    @Path("/recommendedrestaurants")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantBasicObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationDidYouLike(
        @QueryParam("recorequestid")
    String recorequestId) {
        List<TSRestaurantBasicObj> tsRestaurantObjList = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        boolean responseDone = false;

        try {
            tsRestaurantObjList = askReplyBO.showRecommendationDidYouLike(recorequestId);
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
    @Path("/likesunlikes")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRecommendationDidYouLikeLikes(
        @FormParam("userid")
    String userId, @FormParam("restaurantid")
    String restaurantId, @FormParam("likeflag")
    String likeFlag) {
        //    	-- TODO: TODOs Left: Push notification

        //Should be triggered on every like or Un-like click. Should update Faves list of the user

        //parameters check
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);
            likeFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(likeFlag);

            askReplyBO.submitRecommendationDidYouLikeLikes(userId,
                restaurantId, likeFlag);

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
    @Path("/recosidrestaurantsearchresults")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantCusineTier2Obj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showListOfRestaurantsSearchResultsBasedOnRecoId(
        @QueryParam("recorequestid")
    String recoRequestId) {
        List<TSRestaurantCusineTier2Obj> tsRestaurantCusineTier2Obj = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        recoRequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recoRequestId);

        boolean responseDone = false;

        try {
            tsRestaurantCusineTier2Obj = askReplyBO.showListOfRestaurantsSearchResultsBasedOnRecoId(recoRequestId);
            responseDone = true;

            return Response.status(status).entity(tsRestaurantCusineTier2Obj)
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

    @GET
    @Path("/recosrestaurantsearchresults")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantCusineTier2Obj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showListOfRestaurantsSearchResults(
        @QueryParam("restaurantid")
    String restaurantId, @QueryParam("neighborhoodid")
    String neighborhoodId, @QueryParam("cityid")
    String cityId, @QueryParam("statename")
    String stateName, @QueryParam("cuisineidlist")
    String cuisineIdList, @QueryParam("priceidlist")
    String priceIdList, @QueryParam("rating")
    String rating, @QueryParam("savedflag")
    String savedFlag, @QueryParam("favflag")
    String favFlag, @QueryParam("dealflag")
    String dealFlag, @QueryParam("chainflag")
    String chainFlag) {
        List<TSRestaurantCusineTier2Obj> tsRestaurantCusineTier2Obj = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);
        neighborhoodId = CommonFunctionsUtil.converStringAsNullIfNeeded(neighborhoodId);
        cityId = CommonFunctionsUtil.converStringAsNullIfNeeded(cityId);
        stateName = CommonFunctionsUtil.converStringAsNullIfNeeded(stateName);
        cuisineIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(cuisineIdList);
        priceIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(priceIdList);
        rating = CommonFunctionsUtil.converStringAsNullIfNeeded(rating);
        savedFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(savedFlag);
        favFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(favFlag);
        dealFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(dealFlag);
        chainFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(chainFlag);

        boolean responseDone = false;

        try {
            tsRestaurantCusineTier2Obj = askReplyBO.showListOfRestaurantsSearchResults(restaurantId,
                    neighborhoodId, cityId, stateName,
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        cuisineIdList),
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        priceIdList), rating, savedFlag, favFlag, dealFlag,
                    chainFlag);
            responseDone = true;

            return Response.status(status).entity(tsRestaurantCusineTier2Obj)
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

    @GET
    @Path("/recolist")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRecoNotificationBaseObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsList(
        @QueryParam("userid")
    String userId, @QueryParam("paginationid")
    String paginationId) {
        int status = TSResponseStatusCode.SUCCESS.getValue();
        List<TSRecoNotificationBaseObj> recoNotificationBase = new ArrayList<TSRecoNotificationBaseObj>();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            //parameters check
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            paginationId = CommonFunctionsUtil.converStringAsNullIfNeeded(paginationId);
            recoNotificationBase = askReplyBO.showRecommendationsList(userId,
                    paginationId);

            responseDone = true;

            return Response.status(status).entity(recoNotificationBase).build();
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
