package com.tastesync.services;

import com.tastesync.bos.AskReplyBO;
import com.tastesync.bos.AskReplyBOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSErrorObj;
import com.tastesync.model.objects.TSRestaurantObj;
import com.tastesync.model.objects.TSSuccessObj;
import com.tastesync.model.objects.derived.TSRecoRequestObj;
import com.tastesync.model.objects.derived.TSRecommendationsFollowupObj;
import com.tastesync.model.objects.derived.TSRecommendationsForYouObj;
import com.tastesync.model.objects.derived.TSRecommendeeUserObj;
import com.tastesync.model.objects.derived.TSSenderUserObj;

import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;
import com.tastesync.util.TSResponseStatusCode;

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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitAskForRecommendationSearch(
        @FormParam("userid")
    String userId, @FormParam("cuisineTier1IdList")
    String cuisineTier1IdList,
        @FormParam("cuisineTier2IdList")
    String cuisineTier2IdList, @FormParam("priceIdList")
    String priceIdList, @FormParam("themeIdList")
    String themeIdList,
        @FormParam("whoareyouwithIdList")
    String whoareyouwithIdList,
        @FormParam("typeOfRestaurantIdList")
    String typeOfRestaurantIdList,
        @FormParam("occasionIdList")
    String occasionIdList, @FormParam("neighborhoodId")
    String neighborhoodId, @FormParam("cityId")
    String cityId, @FormParam("stateName")
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

            askReplyBO.createRecoRequestSearch(userId,
                CommonFunctionsUtil.convertStringListAsArrayList(
                    cuisineTier1IdList),
                CommonFunctionsUtil.convertStringListAsArrayList(
                    cuisineTier2IdList),
                CommonFunctionsUtil.convertStringListAsArrayList(priceIdList),
                CommonFunctionsUtil.convertStringListAsArrayList(themeIdList),
                CommonFunctionsUtil.convertStringListAsArrayList(
                    whoareyouwithIdList),
                CommonFunctionsUtil.convertStringListAsArrayList(
                    typeOfRestaurantIdList),
                CommonFunctionsUtil.convertStringListAsArrayList(occasionIdList),
                neighborhoodId, cityId, stateName);

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
    @Path("/recofriends")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitAskForRecommendationFriends(
        @FormParam("recorequestid")
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

        //parameters check
        int status = TSResponseStatusCode.SUCCESS.getValue();

        boolean responseDone = false;

        // BO - DO- DBQuery
        try {
            recoRequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recoRequestId);
            recoRequestFriendText = CommonFunctionsUtil.converStringAsNullIfNeeded(recoRequestFriendText);
            friendsFacebookIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(friendsFacebookIdList);
            postRecoRequestOnFacebook = CommonFunctionsUtil.converStringAsNullIfNeeded(postRecoRequestOnFacebook);

            askReplyBO.submitAskForRecommendationFriends(recoRequestId,
                recoRequestFriendText,
                CommonFunctionsUtil.convertStringListAsArrayList(
                    friendsFacebookIdList), postRecoRequestOnFacebook);

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
    @Path("/recomsg")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsRequest(
        @QueryParam("userid")
    String userId, @QueryParam("recorequestid")
    String recorequestId) {
        TSRecoRequestObj tsRecoRequestObj = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        try {
            tsRecoRequestObj = askReplyBO.selectRecommendationsRequest(userId,
                    recorequestId);

            return Response.status(status).entity(tsRecoRequestObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsRecoRequestObj == null) {
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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRecommendationRequestAnswer(
        @FormParam("recorequestid")
    String recorequestId,
        @FormParam("recommenderuserid")
    String recommenderUserId,
        @FormParam("restaurantidlist}")
    String restaurantIdList, @FormParam("replytext}")
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

            askReplyBO.insertRecommendationRequestAnswer(recorequestId,
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
    @Path("/recos4you")
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationsForYou(
        @QueryParam("userid")
    String userId, @QueryParam("recorequestid")
    String recorequestId) {
        TSRecommendationsForYouObj tsRecommendationsForYou = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        userId = CommonFunctionsUtil.converStringAsNullIfNeeded(userId);
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        try {
            tsRecommendationsForYou = askReplyBO.selectRecommendationsForYou(recorequestId);

            return Response.status(status).entity(tsRecommendationsForYou)
                           .build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsRecommendationsForYou == null) {
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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRecommendationMessageAnswer(
        @FormParam("newmessagetext")
    String newMessageText,
        @FormParam("previousmessageid")
    String previousMessageId,
        @FormParam("newmessagerecipientuserid}")
    String newMessageRecipientUserId,
        @FormParam("newmessagesenderuserid}")
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
            restaurantIdList = CommonFunctionsUtil.converStringAsNullIfNeeded(restaurantIdList);
            askReplyBO.insertRecommendationMessageAnswer(newMessageText,
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
    @Path("/recomsg")
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

        try {
            tsSenderUserObj = askReplyBO.selectRecommendationMessage(messageId,
                    recipientUserId);

            return Response.status(status).entity(tsSenderUserObj).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsSenderUserObj == null) {
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

        try {
            tsRecommendationsFollowupObj = askReplyBO.selectRecommendationsFollowup(questionId);

            return Response.status(status).entity(tsRecommendationsFollowupObj)
                           .build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsRecommendationsFollowupObj == null) {
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

        try {
            tsRecommendeeUser = askReplyBO.selectRecommendationsShowLikes(recoLikeId);

            return Response.status(status).entity(tsRecommendeeUser).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsRecommendeeUser == null) {
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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response showRecommendationDidYouLike(
        @QueryParam("recorequestid")
    String recorequestId) {
        List<TSRestaurantObj> tsRestaurantObjList = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        recorequestId = CommonFunctionsUtil.converStringAsNullIfNeeded(recorequestId);

        try {
            tsRestaurantObjList = askReplyBO.selectRecommendedRestaurantsForUsers(recorequestId);

            return Response.status(status).entity(tsRestaurantObjList).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();
            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);

            return Response.status(status).entity(tsErrorObj).build();
        } finally {
            if (status != TSResponseStatusCode.SUCCESS.getValue()) {
                if (tsRestaurantObjList == null) {
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
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response submitRecommendationDidYouLikeLikes(
        @FormParam("userid")
    String userId, @FormParam("restaurantId")
    String restaurantId, @FormParam("likeFlag")
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
