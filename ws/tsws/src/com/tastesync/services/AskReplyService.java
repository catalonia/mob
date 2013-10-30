package com.tastesync.services;

import com.tastesync.bos.AskReplyBO;
import com.tastesync.bos.AskReplyBOImpl;

import com.tastesync.common.utils.CommonFunctionsUtil;

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
import com.tastesync.model.objects.derived.TSRestaurantsTileSearchExtendedInfoObj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

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
import javax.ws.rs.core.Context;
import javax.ws.rs.core.HttpHeaders;
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
        @Context
    HttpHeaders headers, @FormParam("userid")
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
        super.processHttpHeaders(headers);

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

            try {
                CommonFunctionsUtil.execAsync(TSConstants.TRIGGER_ALGO1_SCRIPT +
                    " " + recoRequestId,
                    TSConstants.BASENAME_TRIGGER_ALGO1_SCRIPT1);
            } catch (com.tastesync.common.exception.TasteSyncException e) {
                e.printStackTrace();
            }

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
        @Context
    HttpHeaders headers, @FormParam("userid")
    String userId, @FormParam("recorequestid")
    String recoRequestId,
        @FormParam("recorequestfriendtext")
    String recoRequestFriendText,
        @FormParam("friendsfacebookidlist")
    String friendsFacebookIdList,
        @FormParam("postonfacebook")
    String postRecoRequestOnFacebook) {
        super.processHttpHeaders(headers);

        //    	-- TODO: SAVE "POSTONFACEBOOK" IN HISTORICAL SHARED TABLE
        //
        //    	-- For Loop over each friend in listOfFriends{facebookId}
        //    	-- solved for single facebookId below
        //
        //    	-- calculate1 Logic

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

            TSRecoRequestNonAssignedObj tsRecoRequestNonAssignedObj = askReplyBO.submitAskForRecommendationFriends(userId,
                    recoRequestId, recoRequestFriendText,
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        friendsFacebookIdList), postRecoRequestOnFacebook);

            responseDone = true;

            try {
                CommonFunctionsUtil.execAsync(TSConstants.SEND_PUSH_NOTIFICATIONS_SCRIPT,
                    TSConstants.BASENAME_SEND_PUSH_NOTIFICATIONS_SCRIPT);
            } catch (com.tastesync.common.exception.TasteSyncException e) {
                e.printStackTrace();
            }

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
    public Response showRecommendationsRequest(@Context
    HttpHeaders headers, @QueryParam("userid")
    String userId, @QueryParam("recorequestid")
    String recorequestId) {
        super.processHttpHeaders(headers);

        boolean responseDone = false;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        try {
            TSRecoRequestObj tsRecoRequestObj = askReplyBO.showRecommendationsRequest(userId,
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
        @Context
    HttpHeaders headers, @QueryParam("recorequestid")
    String recoRequestId) {
        super.processHttpHeaders(headers);

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
        @Context
    HttpHeaders headers, @FormParam("recorequestid")
    String recorequestId,
        @FormParam("recommenderuserid")
    String recommenderUserId,
        @FormParam("restaurantidlist")
    String restaurantIdList, @FormParam("replytext")
    String replyText) {
        super.processHttpHeaders(headers);

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

    @GET
    @Path("/recos4you")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRecommendationsForYouObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsForYou(@Context
    HttpHeaders headers, @QueryParam("userid")
    String userId, @QueryParam("recorequestid")
    String recorequestId) {
        super.processHttpHeaders(headers);

        boolean responseDone = false;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        try {
            TSRecommendationsForYouObj tsRecommendationsForYou = askReplyBO.showRecommendationsForYou(userId,
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
        @Context
    HttpHeaders headers, @FormParam("newmessagetext")
    String newMessageText,
        @FormParam("previousmessageid")
    String previousMessageId,
        @FormParam("newmessagerecipientuserid")
    String newMessageRecipientUserId,
        @FormParam("newmessagesenderuserid")
    String newMessageSenderUserId,
        @FormParam("restaurantidlist")
    String restaurantIdList) {
        super.processHttpHeaders(headers);

        //parameters check
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            newMessageText = CommonFunctionsUtil.converStringAsNullIfNeeded(newMessageText);
            previousMessageId = CommonFunctionsUtil.converStringAsNullIfNeeded(previousMessageId);
            newMessageRecipientUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(newMessageRecipientUserId);
            newMessageSenderUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(newMessageSenderUserId);

            if (newMessageRecipientUserId == null) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                try {
                    CommonFunctionsUtil.execAsync(TSConstants.SEND_PUSH_NOTIFICATIONS_SCRIPT,
                        TSConstants.BASENAME_SEND_PUSH_NOTIFICATIONS_SCRIPT);
                } catch (com.tastesync.common.exception.TasteSyncException e) {
                    e.printStackTrace();
                }

                return Response.status(status)
                               .header("recipientyId", TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

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
    public Response showRecommendationMessage(@Context
    HttpHeaders headers, @QueryParam("messageid")
    String messageId, @QueryParam("recipientuserid")
    String recipientUserId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        messageId = CommonFunctionsUtil.converStringAsNullIfNeeded(messageId);
        recipientUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(recipientUserId);

        boolean responseDone = false;

        try {
            TSSenderUserObj tsSenderUserObj = askReplyBO.showRecommendationMessage(messageId,
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
    public Response showRecommendationsFollowup(@Context
    HttpHeaders headers, @QueryParam("userid")
    String userId, @QueryParam("questionid")
    String questionId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        questionId = CommonFunctionsUtil.converStringAsNullIfNeeded(questionId);

        boolean responseDone = false;

        try {
            TSRecommendationsFollowupObj tsRecommendationsFollowupObj = askReplyBO.showRecommendationsFollowup(userId,
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
        @Context
    HttpHeaders headers, @FormParam("userid")
    String userId, @FormParam("questiondid")
    String questionId, @FormParam("replytext")
    String replyText, @FormParam("restaurantidlist")
    String restaurantIdList) {
        super.processHttpHeaders(headers);

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

    @GET
    @Path("/recosandlikes")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRecommendeeUserObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsShowLikes(@Context
    HttpHeaders headers, @QueryParam("recolikeid")
    String recoLikeId, @QueryParam("recommenderuserid")
    String recommenderUserId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        recoLikeId = CommonFunctionsUtil.converStringAsNullIfNeeded(recoLikeId);
        recommenderUserId = CommonFunctionsUtil.converStringAsNullIfNeeded(recommenderUserId);

        boolean responseDone = false;

        try {
            TSRecommendeeUserObj tsRecommendeeUser = askReplyBO.showRecommendationsShowLikes(recoLikeId);
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
    public Response showRecommendationDidYouLike(@Context
    HttpHeaders headers, @QueryParam("recorequestid")
    String recorequestId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        boolean responseDone = false;

        try {
            List<TSRestaurantBasicObj> tsRestaurantObjList = askReplyBO.showRecommendationDidYouLike(recorequestId);
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
        @Context
    HttpHeaders headers, @FormParam("userid")
    String userId, @FormParam("restaurantid")
    String restaurantId, @FormParam("likeflag")
    String likeFlag) {
        super.processHttpHeaders(headers);

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

    @GET
    @Path("/recosidrestaurantsearchresults")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantsTileSearchExtendedInfoObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showListOfRestaurantsSearchResultsBasedOnRecoId(
        @Context
    HttpHeaders headers, @QueryParam("userid")
    String userId, @QueryParam("recorequestid")
    String recoRequestId, @QueryParam("paginationid")
    String paginationId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();

        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        recoRequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recoRequestId);
        paginationId = CommonFunctionsUtil.converStringAsNullIfNeeded(paginationId);

        boolean responseDone = false;

        try {
            TSRestaurantsTileSearchExtendedInfoObj tsRestaurantsTileSearchExtendedInfoObj =
                askReplyBO.showListOfRestaurantsSearchResultsBasedOnRecoId(userId,
                    recoRequestId, paginationId);
            responseDone = true;

            return Response.status(status)
                           .entity(tsRestaurantsTileSearchExtendedInfoObj)
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
    @org.codehaus.enunciate.jaxrs.TypeHint(TSRestaurantsTileSearchExtendedInfoObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showListOfRestaurantsSearchResults(
        @Context
    HttpHeaders headers, @QueryParam("userid")
    String userId, @QueryParam("restaurantid")
    String restaurantId, @QueryParam("neighborhoodid")
    String neighborhoodId, @QueryParam("cityid")
    String cityId, @QueryParam("statename")
    String stateName,
        @QueryParam("cuisineidtier1idlist")
    String cuisineTier1IdList, @QueryParam("priceidlist")
    String priceIdList, @QueryParam("rating")
    String rating, @QueryParam("savedflag")
    String savedFlag, @QueryParam("favflag")
    String favFlag, @QueryParam("dealflag")
    String dealFlag, @QueryParam("chainflag")
    String chainFlag, @QueryParam("paginationid")
    String paginationId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        restaurantId = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantId);
        neighborhoodId = CommonFunctionsUtil.converStringAsNullIfNeeded(neighborhoodId);
        cityId = CommonFunctionsUtil.converStringAsNullIfNeeded(cityId);
        stateName = CommonFunctionsUtil.converStringAsNullIfNeeded(stateName);
        cuisineTier1IdList = CommonFunctionsUtil.converStringAsNullIfNeeded(cuisineTier1IdList);
        priceIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(priceIdList);
        rating = CommonFunctionsUtil.converStringAsNullIfNeeded(rating);
        savedFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(savedFlag);
        favFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(favFlag);
        dealFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(dealFlag);
        chainFlag = CommonFunctionsUtil.converStringAsNullIfNeeded(chainFlag);
        paginationId = CommonFunctionsUtil.converStringAsNullIfNeeded(paginationId);

        boolean responseDone = false;

        try {
            TSRestaurantsTileSearchExtendedInfoObj tsRestaurantsTileSearchExtendedInfoObj =
                askReplyBO.showListOfRestaurantsSearchResults(userId,
                    restaurantId, neighborhoodId, cityId, stateName,
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        cuisineTier1IdList),
                    CommonFunctionsUtil.convertStringListAsArrayList(
                        priceIdList), rating, savedFlag, favFlag, dealFlag,
                    chainFlag, paginationId);
            responseDone = true;

            return Response.status(status)
                           .entity(tsRestaurantsTileSearchExtendedInfoObj)
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
    public Response showRecommendationsList(@Context
    HttpHeaders headers, @QueryParam("userid")
    String userId, @QueryParam("paginationid")
    String paginationId) {
        super.processHttpHeaders(headers);

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            //parameters check
            userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
            paginationId = CommonFunctionsUtil.converStringAsNullIfNeeded(paginationId);

            List<TSRecoNotificationBaseObj> recoNotificationBase = askReplyBO.showRecommendationsList(userId,
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
