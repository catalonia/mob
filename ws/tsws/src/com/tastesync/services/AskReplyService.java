package com.tastesync.services;


import com.tastesync.bos.AskReplyBO;
import com.tastesync.bos.AskReplyBOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSErrorObj;
import com.tastesync.model.objects.TSSuccessObj;

import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;
import com.tastesync.util.TSResponseStatusCode;

import javax.ws.rs.Consumes;
import javax.ws.rs.FormParam;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
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
    String cuisineTier1IdList, @FormParam("cuisineTier2IdList")
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
                CommonFunctionsUtil.convertStringListAsArrayList(cuisineTier1IdList),
                CommonFunctionsUtil.convertStringListAsArrayList(cuisineTier2IdList),
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
                recoRequestFriendText, CommonFunctionsUtil.convertStringListAsArrayList(friendsFacebookIdList),
                postRecoRequestOnFacebook);

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
