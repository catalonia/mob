package com.tastesync.services;

import com.tastesync.bos.AutoPopulateBO;
import com.tastesync.bos.AutoPopulateBOImpl;

import com.tastesync.exception.TasteSyncException;

import com.tastesync.model.objects.TSErrorObj;
import com.tastesync.model.objects.TSSuccessObj;

import com.tastesync.util.CommonFunctionsUtil;
import com.tastesync.util.TSConstants;
import com.tastesync.util.TSResponseStatusCode;

import org.codehaus.jettison.json.JSONArray;

import javax.ws.rs.Consumes;
import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;


@Path("/populate")
@Consumes({MediaType.APPLICATION_JSON
})
@Produces({MediaType.APPLICATION_JSON
})
public class AutoPopulateService extends BaseService {
    private AutoPopulateBO autoPopulateBO = new AutoPopulateBOImpl();

    @GET
    @Path("/locationsearchterms")
    @org.codehaus.enunciate.jaxrs.TypeHint(TSSuccessObj.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populateLocationSearchTermsValidation(
        @QueryParam("neighbourhood")
    String neighbourhood) {
        //current: front end - sqllite only - neighbourhood+new year city

        //server side validations - for input neighbourhood+new year city
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;
        neighbourhood = CommonFunctionsUtil.converStringAsNullIfNeeded(neighbourhood);

        try {
            //For now, put all valid neighbourdata for New York city only.
            //TODO
            String neighbourdataList = "Chinatown, Koreatown, Lower East Side, Two Bridges,Bay Terrace, New Springville, Rossville, Westerleigh, Willowbrook, Woodrow";
            neighbourdataList.toLowerCase();

            //Validate input neighbourhood 
            if ((neighbourhood == null) ||
                    neighbourdataList.contains(neighbourhood.toLowerCase())) {
                status = TSResponseStatusCode.INVALIDDATA.getValue();

                TSErrorObj tsErrorObj = new TSErrorObj();
                tsErrorObj.setErrorMsg(TSConstants.ERROR_INVALID_INPUT_DATA_KEY);
                responseDone = true;

                return Response.status(status)
                               .header("neighbourhood",
                    (neighbourhood != null) ? neighbourhood : TSConstants.EMPTY)
                               .entity(tsErrorObj).build();
            }

            TSSuccessObj tsSuccessObj = new TSSuccessObj();
            responseDone = true;

            return Response.status(status).entity(tsSuccessObj).build();
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

    //-- -- -- -- -- -- -- -- -- -- -- -- populateMoodSearchTerms	-- -- -- -- -- -- -- -- -- -- -- -- 
    //-- -- -- -- Need standard solution for "Auto-complete" i.e. is it DB based or JQUERY etc	-- -- -- -- -- -- -- -- 
    /**
     *
     * Order of the results:
     *  CuisineTier1
     *  CuisineTier2
     *  OccasionDescriptor
     *  PriceDescriptor
     *  ThemeDescriptor
     *  TypeofrestDescriptor
     *  WhoareyouwithDescriptor
     *
     * @return list of arrays in the orders as mentioned above in description.
     */
    @GET
    @Path("/moodsearchterms")
    @org.codehaus.enunciate.jaxrs.TypeHint(JSONArray.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populateMoodSearchTerms() {
        JSONArray jsonArray = null;

        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            jsonArray = new JSONArray();

            JSONArray jsonArrayCuisineTier1 = autoPopulateBO.populateCuisineTier1();

            if (jsonArrayCuisineTier1 != null) {
                jsonArray.put(jsonArrayCuisineTier1);
            }

            JSONArray jsonArrayCuisineTier2 = autoPopulateBO.populateCuisineTier2();

            if (jsonArrayCuisineTier2 != null) {
                jsonArray.put(jsonArrayCuisineTier2);
            }

            JSONArray jsonArrayOccasionDescriptor = autoPopulateBO.populateOccasionDescriptor();

            if (jsonArrayOccasionDescriptor != null) {
                jsonArray.put(jsonArrayOccasionDescriptor);
            }

            JSONArray jsonArrayPriceDescriptor = autoPopulateBO.populatePriceDescriptor();

            if (jsonArrayPriceDescriptor != null) {
                jsonArray.put(jsonArrayPriceDescriptor);
            }

            JSONArray jsonArrayThemeDescriptor = autoPopulateBO.populateThemeDescriptor();

            if (jsonArrayThemeDescriptor != null) {
                jsonArray.put(jsonArrayThemeDescriptor);
            }

            JSONArray jsonArrayTypeofrestDescriptor = autoPopulateBO.populateTypeofrestDescriptor();

            if (jsonArrayTypeofrestDescriptor != null) {
                jsonArray.put(jsonArrayTypeofrestDescriptor);
            }

            JSONArray jsonArrayWhoareyouwithDescriptor = autoPopulateBO.populateWhoareyouwithDescriptor();

            if (jsonArrayWhoareyouwithDescriptor != null) {
                jsonArray.put(jsonArrayWhoareyouwithDescriptor);
            }

            responseDone = true;

            return Response.status(status).entity(jsonArray.toString()).build();
        } catch (TasteSyncException e) {
            e.printStackTrace();
            status = TSResponseStatusCode.ERROR.getValue();

            TSErrorObj tsErrorObj = new TSErrorObj();

            tsErrorObj.setErrorMsg(TSConstants.ERROR_USER_SYSTEM_KEY);
            responseDone = true;

            return Response.status(status)
                           .header(TSConstants.EX_CLASS,
                e.getClass().getCanonicalName()).entity(tsErrorObj).build();
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

    //-- TODO: INCOMPLETE
    //-- http://stackoverflow.com/questions/6507502/autocomplete-for-mobile-web-apps
    //-- http://mobile.smashingmagazine.com/2011/04/27/tap-ahead-design-pattern-mobile-auto-suggest-on-steroids/
    @GET
    @Path("/cuisinetier1")
    @org.codehaus.enunciate.jaxrs.TypeHint(JSONArray.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populateCuisineTier1() {
        JSONArray jsonArray = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            jsonArray = autoPopulateBO.populateCuisineTier1();

            responseDone = true;

            return Response.status(status).entity(jsonArray.toString()).build();
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
    @Path("/cuisinetier2")
    @org.codehaus.enunciate.jaxrs.TypeHint(JSONArray.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populateCuisineTier2() {
        JSONArray jsonArray = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            jsonArray = autoPopulateBO.populateCuisineTier2();
            responseDone = true;

            return Response.status(status).entity(jsonArray.toString()).build();
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
    @Path("/occasion")
    @org.codehaus.enunciate.jaxrs.TypeHint(JSONArray.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populateOccasionDescriptor() {
        JSONArray jsonArray = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            jsonArray = autoPopulateBO.populateOccasionDescriptor();
            responseDone = true;

            return Response.status(status).entity(jsonArray.toString()).build();
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
    @Path("/price")
    @org.codehaus.enunciate.jaxrs.TypeHint(JSONArray.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populatePriceDescriptor() {
        JSONArray jsonArray = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            jsonArray = autoPopulateBO.populatePriceDescriptor();
            responseDone = true;

            return Response.status(status).entity(jsonArray.toString()).build();
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
    @Path("/theme")
    @org.codehaus.enunciate.jaxrs.TypeHint(JSONArray.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populateThemeDescriptor() {
        JSONArray jsonArray = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            jsonArray = autoPopulateBO.populateThemeDescriptor();
            responseDone = true;

            return Response.status(status).entity(jsonArray.toString()).build();
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
    @Path("/typeofrest")
    @org.codehaus.enunciate.jaxrs.TypeHint(JSONArray.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populateTypeofrestDescriptor() {
        JSONArray jsonArray = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            jsonArray = autoPopulateBO.populateTypeofrestDescriptor();
            responseDone = true;

            return Response.status(status).entity(jsonArray.toString()).build();
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
    @Path("/whoareyouwith")
    @org.codehaus.enunciate.jaxrs.TypeHint(JSONArray.class)
    @Consumes({MediaType.APPLICATION_FORM_URLENCODED
    })
    @Produces({MediaType.APPLICATION_JSON
    })
    public Response populateWhoareyouwithDescriptor() {
        JSONArray jsonArray = null;
        int status = TSResponseStatusCode.SUCCESS.getValue();
        boolean responseDone = false;

        try {
            jsonArray = autoPopulateBO.populateWhoareyouwithDescriptor();
            responseDone = true;

            return Response.status(status).entity(jsonArray.toString()).build();
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
