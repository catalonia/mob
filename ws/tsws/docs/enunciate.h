#import "enunciate-common.h"

@class ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj;
@class ENUNCIATENS0TSFacebookUserDataObj;
@class ENUNCIATENS0TSListFacebookUserDataObj;
@class ENUNCIATENS0TSLocationSearchCitiesObj;
@class ENUNCIATENS0TSMenuObj;
@class ENUNCIATENS0TSListNotificationSettingsObj;
@class ENUNCIATENS0TSNotifRecoReplyObj;
@class ENUNCIATENS0TSErrorObj;
@class ENUNCIATENS0TSPhotoObj;
@class ENUNCIATENS0TSRecoNotificationBaseObj;
@class ENUNCIATENS0TSRestaurantDetailsObj;
@class ENUNCIATENS0TSRestaurantObj;
@class ENUNCIATENS0TSRestaurantQuesionNonTsAssignedObj;
@class ENUNCIATENS0TSSocialAutoPubSettingsObj;
@class ENUNCIATENS0TSSuccessObj;
@class ENUNCIATENS0TSUserProfileBasicObj;
@class ENUNCIATENS0TSUserProfileRestaurantsObj;
@class ENUNCIATENS0TSRecoRequestObj;
@class ENUNCIATENS0TSRecommendationsForYouObj;
@class ENUNCIATENS0TSRecommendeeUserObj;
@class ENUNCIATENS0TSRestaurantBuzzObj;
@class ENUNCIATENS0TSRestaurantRecommendersDetailsObj;
@class ENUNCIATENS0TSRestaurantsTileSearchExtendedInfoObj;
@class ENUNCIATENS0TSSenderUserObj;
@class ENUNCIATENS0JSONObject;
@class ENUNCIATENS0TSRestaurantsTileSearchObj;
@class ENUNCIATENS0TSRestaurantsForYouObj;
@class ENUNCIATENS0TSRestaurantCusineTier2Obj;
@class ENUNCIATENS0TSRecommendersDetailsObj;
@class ENUNCIATENS0TSRecommendationsObj;
@class ENUNCIATENS0TSRecommendationsFollowupObj;
@class ENUNCIATENS0TSRecoRequestNonAssignedObj;
@class ENUNCIATENS0TSUserProfileObj;
@class ENUNCIATENS0TSUserObj;
@class ENUNCIATENS0TSSocialSettingsObj;
@class ENUNCIATENS0TSRestaurantView;
@class ENUNCIATENS0TSRestaurantPhotoObj;
@class ENUNCIATENS0TSRestaurantExtendInfoObj;
@class ENUNCIATENS0TSRestaurantBasicObj;
@class ENUNCIATENS0TSPrivacySettingsObj;
@class ENUNCIATENS0TSNotificationSettingsObj;
@class ENUNCIATENS0TSCuisineTier2Obj;
@class ENUNCIATENS0TSCityObj;
@class ENUNCIATENS0TSNotifRecoLikeObj;
@class ENUNCIATENS0TSNotifRecorequestNeededObj;
@class ENUNCIATENS0TSNotifRecorequestAnswerObj;
@class ENUNCIATENS0TSNotifFollowupQuestionObj;
@class ENUNCIATENS0TSNotifMessageForYouObj;
@class ENUNCIATENS0TSNotifDidYouLikeObj;
@class ENUNCIATENS0TSKeyValueObj;

#ifndef DEF_ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj_H
#define DEF_ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userId;
    NSString *_restaurantId;
    NSString *_questionId;
    NSArray *_tsRecommendersDetailsObj;
}

/**
 * (no documentation provided)
 */
- (NSString *) userId;

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId;

/**
 * (no documentation provided)
 */
- (NSString *) questionId;

/**
 * (no documentation provided)
 */
- (void) setQuestionId: (NSString *) newQuestionId;

/**
 * (no documentation provided)
 */
- (NSArray *) tsRecommendersDetailsObj;

/**
 * (no documentation provided)
 */
- (void) setTsRecommendersDetailsObj: (NSArray *) newTsRecommendersDetailsObj;
@end /* interface ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj */

#endif /* DEF_ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj_H */
#ifndef DEF_ENUNCIATENS0TSFacebookUserDataObj_H
#define DEF_ENUNCIATENS0TSFacebookUserDataObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSFacebookUserDataObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userName;
    NSString *_identifier;
    NSString *_name;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_gender;
    NSString *_locale;
    NSString *_link;
    NSString *_ageRange;
    NSString *_birthday;
    NSString *_thirdPartyId;
    NSString *_friendlists;
    NSString *_installed;
    NSString *_timezone;
    NSString *_updatedTime;
    NSString *_verified;
    NSString *_devices;
    NSString *_email;
    NSString *_hometown;
    NSString *_location;
    NSString *_picture;
    NSString *_relationshipStatus;
    NSString *_checkins;
    NSString *_friends;
    NSString *_likes;
    NSString *_permissions;
    NSString *_create;
}

/**
 * (no documentation provided)
 */
- (NSString *) userName;

/**
 * (no documentation provided)
 */
- (void) setUserName: (NSString *) newUserName;

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) firstName;

/**
 * (no documentation provided)
 */
- (void) setFirstName: (NSString *) newFirstName;

/**
 * (no documentation provided)
 */
- (NSString *) middleName;

/**
 * (no documentation provided)
 */
- (void) setMiddleName: (NSString *) newMiddleName;

/**
 * (no documentation provided)
 */
- (NSString *) lastName;

/**
 * (no documentation provided)
 */
- (void) setLastName: (NSString *) newLastName;

/**
 * (no documentation provided)
 */
- (NSString *) gender;

/**
 * (no documentation provided)
 */
- (void) setGender: (NSString *) newGender;

/**
 * (no documentation provided)
 */
- (NSString *) locale;

/**
 * (no documentation provided)
 */
- (void) setLocale: (NSString *) newLocale;

/**
 * (no documentation provided)
 */
- (NSString *) link;

/**
 * (no documentation provided)
 */
- (void) setLink: (NSString *) newLink;

/**
 * (no documentation provided)
 */
- (NSString *) ageRange;

/**
 * (no documentation provided)
 */
- (void) setAgeRange: (NSString *) newAgeRange;

/**
 * (no documentation provided)
 */
- (NSString *) birthday;

/**
 * (no documentation provided)
 */
- (void) setBirthday: (NSString *) newBirthday;

/**
 * (no documentation provided)
 */
- (NSString *) thirdPartyId;

/**
 * (no documentation provided)
 */
- (void) setThirdPartyId: (NSString *) newThirdPartyId;

/**
 * (no documentation provided)
 */
- (NSString *) friendlists;

/**
 * (no documentation provided)
 */
- (void) setFriendlists: (NSString *) newFriendlists;

/**
 * (no documentation provided)
 */
- (NSString *) installed;

/**
 * (no documentation provided)
 */
- (void) setInstalled: (NSString *) newInstalled;

/**
 * (no documentation provided)
 */
- (NSString *) timezone;

/**
 * (no documentation provided)
 */
- (void) setTimezone: (NSString *) newTimezone;

/**
 * (no documentation provided)
 */
- (NSString *) updatedTime;

/**
 * (no documentation provided)
 */
- (void) setUpdatedTime: (NSString *) newUpdatedTime;

/**
 * (no documentation provided)
 */
- (NSString *) verified;

/**
 * (no documentation provided)
 */
- (void) setVerified: (NSString *) newVerified;

/**
 * (no documentation provided)
 */
- (NSString *) devices;

/**
 * (no documentation provided)
 */
- (void) setDevices: (NSString *) newDevices;

/**
 * (no documentation provided)
 */
- (NSString *) email;

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail;

/**
 * (no documentation provided)
 */
- (NSString *) hometown;

/**
 * (no documentation provided)
 */
- (void) setHometown: (NSString *) newHometown;

/**
 * (no documentation provided)
 */
- (NSString *) location;

/**
 * (no documentation provided)
 */
- (void) setLocation: (NSString *) newLocation;

/**
 * (no documentation provided)
 */
- (NSString *) picture;

/**
 * (no documentation provided)
 */
- (void) setPicture: (NSString *) newPicture;

/**
 * (no documentation provided)
 */
- (NSString *) relationshipStatus;

/**
 * (no documentation provided)
 */
- (void) setRelationshipStatus: (NSString *) newRelationshipStatus;

/**
 * (no documentation provided)
 */
- (NSString *) checkins;

/**
 * (no documentation provided)
 */
- (void) setCheckins: (NSString *) newCheckins;

/**
 * (no documentation provided)
 */
- (NSString *) friends;

/**
 * (no documentation provided)
 */
- (void) setFriends: (NSString *) newFriends;

/**
 * (no documentation provided)
 */
- (NSString *) likes;

/**
 * (no documentation provided)
 */
- (void) setLikes: (NSString *) newLikes;

/**
 * (no documentation provided)
 */
- (NSString *) permissions;

/**
 * (no documentation provided)
 */
- (void) setPermissions: (NSString *) newPermissions;

/**
 * (no documentation provided)
 */
- (NSString *) create;

/**
 * (no documentation provided)
 */
- (void) setCreate: (NSString *) newCreate;
@end /* interface ENUNCIATENS0TSFacebookUserDataObj */

#endif /* DEF_ENUNCIATENS0TSFacebookUserDataObj_H */
#ifndef DEF_ENUNCIATENS0TSListFacebookUserDataObj_H
#define DEF_ENUNCIATENS0TSListFacebookUserDataObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSListFacebookUserDataObj : NSObject <EnunciateXML>
{
  @private
    NSString *_device_token;
    ENUNCIATENS0TSFacebookUserDataObj *_user_profile_current;
    NSArray *_list_user_profile_fb;
}

/**
 * (no documentation provided)
 */
- (NSString *) device_token;

/**
 * (no documentation provided)
 */
- (void) setDevice_token: (NSString *) newDevice_token;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSFacebookUserDataObj *) user_profile_current;

/**
 * (no documentation provided)
 */
- (void) setUser_profile_current: (ENUNCIATENS0TSFacebookUserDataObj *) newUser_profile_current;

/**
 * (no documentation provided)
 */
- (NSArray *) list_user_profile_fb;

/**
 * (no documentation provided)
 */
- (void) setList_user_profile_fb: (NSArray *) newList_user_profile_fb;
@end /* interface ENUNCIATENS0TSListFacebookUserDataObj */

#endif /* DEF_ENUNCIATENS0TSListFacebookUserDataObj_H */
#ifndef DEF_ENUNCIATENS0TSLocationSearchCitiesObj_H
#define DEF_ENUNCIATENS0TSLocationSearchCitiesObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSLocationSearchCitiesObj : NSObject <EnunciateXML>
{
  @private
    NSString *_cityId;
    NSString *_cityName;
    NSString *_neighborhoodId;
    NSString *_neighborhoodName;
    NSString *_state;
}

/**
 * (no documentation provided)
 */
- (NSString *) cityId;

/**
 * (no documentation provided)
 */
- (void) setCityId: (NSString *) newCityId;

/**
 * (no documentation provided)
 */
- (NSString *) cityName;

/**
 * (no documentation provided)
 */
- (void) setCityName: (NSString *) newCityName;

/**
 * (no documentation provided)
 */
- (NSString *) neighborhoodId;

/**
 * (no documentation provided)
 */
- (void) setNeighborhoodId: (NSString *) newNeighborhoodId;

/**
 * (no documentation provided)
 */
- (NSString *) neighborhoodName;

/**
 * (no documentation provided)
 */
- (void) setNeighborhoodName: (NSString *) newNeighborhoodName;

/**
 * (no documentation provided)
 */
- (NSString *) state;

/**
 * (no documentation provided)
 */
- (void) setState: (NSString *) newState;
@end /* interface ENUNCIATENS0TSLocationSearchCitiesObj */

#endif /* DEF_ENUNCIATENS0TSLocationSearchCitiesObj_H */
#ifndef DEF_ENUNCIATENS0TSMenuObj_H
#define DEF_ENUNCIATENS0TSMenuObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSMenuObj : NSObject <EnunciateXML>
{
  @private
    NSString *_restaurantId;
    NSString *_menuSource;
    NSString *_menuMobileUrl;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId;

/**
 * (no documentation provided)
 */
- (NSString *) menuSource;

/**
 * (no documentation provided)
 */
- (void) setMenuSource: (NSString *) newMenuSource;

/**
 * (no documentation provided)
 */
- (NSString *) menuMobileUrl;

/**
 * (no documentation provided)
 */
- (void) setMenuMobileUrl: (NSString *) newMenuMobileUrl;
@end /* interface ENUNCIATENS0TSMenuObj */

#endif /* DEF_ENUNCIATENS0TSMenuObj_H */
#ifndef DEF_ENUNCIATENS0TSListNotificationSettingsObj_H
#define DEF_ENUNCIATENS0TSListNotificationSettingsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSListNotificationSettingsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userId;
    NSArray *_notification;
}

/**
 * (no documentation provided)
 */
- (NSString *) userId;

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId;

/**
 * (no documentation provided)
 */
- (NSArray *) notification;

/**
 * (no documentation provided)
 */
- (void) setNotification: (NSArray *) newNotification;
@end /* interface ENUNCIATENS0TSListNotificationSettingsObj */

#endif /* DEF_ENUNCIATENS0TSListNotificationSettingsObj_H */
#ifndef DEF_ENUNCIATENS0TSNotifRecoReplyObj_H
#define DEF_ENUNCIATENS0TSNotifRecoReplyObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotifRecoReplyObj : NSObject <EnunciateXML>
{
  @private
    NSString *_replyId;
    NSString *_repliedDatetime;
    NSString *_viewed;
}

/**
 * (no documentation provided)
 */
- (NSString *) replyId;

/**
 * (no documentation provided)
 */
- (void) setReplyId: (NSString *) newReplyId;

/**
 * (no documentation provided)
 */
- (NSString *) repliedDatetime;

/**
 * (no documentation provided)
 */
- (void) setRepliedDatetime: (NSString *) newRepliedDatetime;

/**
 * (no documentation provided)
 */
- (NSString *) viewed;

/**
 * (no documentation provided)
 */
- (void) setViewed: (NSString *) newViewed;
@end /* interface ENUNCIATENS0TSNotifRecoReplyObj */

#endif /* DEF_ENUNCIATENS0TSNotifRecoReplyObj_H */
#ifndef DEF_ENUNCIATENS0TSErrorObj_H
#define DEF_ENUNCIATENS0TSErrorObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSErrorObj : NSObject <EnunciateXML>
{
  @private
    NSString *_errorMsg;
}

/**
 * (no documentation provided)
 */
- (NSString *) errorMsg;

/**
 * (no documentation provided)
 */
- (void) setErrorMsg: (NSString *) newErrorMsg;
@end /* interface ENUNCIATENS0TSErrorObj */

#endif /* DEF_ENUNCIATENS0TSErrorObj_H */
#ifndef DEF_ENUNCIATENS0TSPhotoObj_H
#define DEF_ENUNCIATENS0TSPhotoObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSPhotoObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userId;
    NSString *_name;
    NSString *_photo;
}

/**
 * (no documentation provided)
 */
- (NSString *) userId;

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) photo;

/**
 * (no documentation provided)
 */
- (void) setPhoto: (NSString *) newPhoto;
@end /* interface ENUNCIATENS0TSPhotoObj */

#endif /* DEF_ENUNCIATENS0TSPhotoObj_H */
#ifndef DEF_ENUNCIATENS0TSRecoNotificationBaseObj_H
#define DEF_ENUNCIATENS0TSRecoNotificationBaseObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRecoNotificationBaseObj : NSObject
{
  @private
    NSString *_maxPaginationId;
    NSString *_recoNotificationType;
    NSDate *_datetimeBase;
    NSString *_idBase;
}

/**
 * (no documentation provided)
 */
- (NSString *) maxPaginationId;

/**
 * (no documentation provided)
 */
- (void) setMaxPaginationId: (NSString *) newMaxPaginationId;

/**
 * (no documentation provided)
 */
- (NSString *) recoNotificationType;

/**
 * (no documentation provided)
 */
- (void) setRecoNotificationType: (NSString *) newRecoNotificationType;

/**
 * (no documentation provided)
 */
- (NSDate *) datetimeBase;

/**
 * (no documentation provided)
 */
- (void) setDatetimeBase: (NSDate *) newDatetimeBase;

/**
 * (no documentation provided)
 */
- (NSString *) idBase;

/**
 * (no documentation provided)
 */
- (void) setIdBase: (NSString *) newIdBase;
@end /* interface ENUNCIATENS0TSRecoNotificationBaseObj */

#endif /* DEF_ENUNCIATENS0TSRecoNotificationBaseObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantDetailsObj_H
#define DEF_ENUNCIATENS0TSRestaurantDetailsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantDetailsObj : NSObject <EnunciateXML>
{
  @private
    ENUNCIATENS0TSRestaurantExtendInfoObj *_restaurantExtendInfoObj;
    NSString *_openNowFlag;
    NSString *_dealHeadline;
    NSArray *_photoList;
    NSString *_moreInfoFlag;
    NSString *_menuFlag;
    NSString *_userRestaurantSavedFlag;
    NSString *_userRestaurantFavFlag;
    NSString *_userRestaurantTipFlag;
    ENUNCIATENS0TSRestaurantBuzzObj *_restaurantBuzz;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantExtendInfoObj *) restaurantExtendInfoObj;

/**
 * (no documentation provided)
 */
- (void) setRestaurantExtendInfoObj: (ENUNCIATENS0TSRestaurantExtendInfoObj *) newRestaurantExtendInfoObj;

/**
 * (no documentation provided)
 */
- (NSString *) openNowFlag;

/**
 * (no documentation provided)
 */
- (void) setOpenNowFlag: (NSString *) newOpenNowFlag;

/**
 * (no documentation provided)
 */
- (NSString *) dealHeadline;

/**
 * (no documentation provided)
 */
- (void) setDealHeadline: (NSString *) newDealHeadline;

/**
 * (no documentation provided)
 */
- (NSArray *) photoList;

/**
 * (no documentation provided)
 */
- (void) setPhotoList: (NSArray *) newPhotoList;

/**
 * (no documentation provided)
 */
- (NSString *) moreInfoFlag;

/**
 * (no documentation provided)
 */
- (void) setMoreInfoFlag: (NSString *) newMoreInfoFlag;

/**
 * (no documentation provided)
 */
- (NSString *) menuFlag;

/**
 * (no documentation provided)
 */
- (void) setMenuFlag: (NSString *) newMenuFlag;

/**
 * (no documentation provided)
 */
- (NSString *) userRestaurantSavedFlag;

/**
 * (no documentation provided)
 */
- (void) setUserRestaurantSavedFlag: (NSString *) newUserRestaurantSavedFlag;

/**
 * (no documentation provided)
 */
- (NSString *) userRestaurantFavFlag;

/**
 * (no documentation provided)
 */
- (void) setUserRestaurantFavFlag: (NSString *) newUserRestaurantFavFlag;

/**
 * (no documentation provided)
 */
- (NSString *) userRestaurantTipFlag;

/**
 * (no documentation provided)
 */
- (void) setUserRestaurantTipFlag: (NSString *) newUserRestaurantTipFlag;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantBuzzObj *) restaurantBuzz;

/**
 * (no documentation provided)
 */
- (void) setRestaurantBuzz: (ENUNCIATENS0TSRestaurantBuzzObj *) newRestaurantBuzz;
@end /* interface ENUNCIATENS0TSRestaurantDetailsObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantDetailsObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantObj_H
#define DEF_ENUNCIATENS0TSRestaurantObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantObj : NSObject <EnunciateXML>
{
  @private
    NSString *_moreInfoFlag;
    NSString *_openNowFlag;
    NSString *_restaurantId;
    NSString *_factualId;
    NSString *_restaurantName;
    NSString *_factualRating;
    NSString *_priceRange;
    NSString *_restaurantCityId;
    NSString *_restaurantHours;
    NSString *_restaurantLat;
    NSString *_restaurantLon;
    NSString *_sumVoteCount;
    NSString *_sumVoteValue;
    NSString *_tbdOpenTableId;
    NSArray *_cuisineTier2Obj;
    ENUNCIATENS0TSCityObj *_cityObj;
}

/**
 * (no documentation provided)
 */
- (NSString *) moreInfoFlag;

/**
 * (no documentation provided)
 */
- (void) setMoreInfoFlag: (NSString *) newMoreInfoFlag;

/**
 * (no documentation provided)
 */
- (NSString *) openNowFlag;

/**
 * (no documentation provided)
 */
- (void) setOpenNowFlag: (NSString *) newOpenNowFlag;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId;

/**
 * (no documentation provided)
 */
- (NSString *) factualId;

/**
 * (no documentation provided)
 */
- (void) setFactualId: (NSString *) newFactualId;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantName;

/**
 * (no documentation provided)
 */
- (void) setRestaurantName: (NSString *) newRestaurantName;

/**
 * (no documentation provided)
 */
- (NSString *) factualRating;

/**
 * (no documentation provided)
 */
- (void) setFactualRating: (NSString *) newFactualRating;

/**
 * (no documentation provided)
 */
- (NSString *) priceRange;

/**
 * (no documentation provided)
 */
- (void) setPriceRange: (NSString *) newPriceRange;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantCityId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantCityId: (NSString *) newRestaurantCityId;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantHours;

/**
 * (no documentation provided)
 */
- (void) setRestaurantHours: (NSString *) newRestaurantHours;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLat;

/**
 * (no documentation provided)
 */
- (void) setRestaurantLat: (NSString *) newRestaurantLat;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLon;

/**
 * (no documentation provided)
 */
- (void) setRestaurantLon: (NSString *) newRestaurantLon;

/**
 * (no documentation provided)
 */
- (NSString *) sumVoteCount;

/**
 * (no documentation provided)
 */
- (void) setSumVoteCount: (NSString *) newSumVoteCount;

/**
 * (no documentation provided)
 */
- (NSString *) sumVoteValue;

/**
 * (no documentation provided)
 */
- (void) setSumVoteValue: (NSString *) newSumVoteValue;

/**
 * (no documentation provided)
 */
- (NSString *) tbdOpenTableId;

/**
 * (no documentation provided)
 */
- (void) setTbdOpenTableId: (NSString *) newTbdOpenTableId;

/**
 * (no documentation provided)
 */
- (NSArray *) cuisineTier2Obj;

/**
 * (no documentation provided)
 */
- (void) setCuisineTier2Obj: (NSArray *) newCuisineTier2Obj;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSCityObj *) cityObj;

/**
 * (no documentation provided)
 */
- (void) setCityObj: (ENUNCIATENS0TSCityObj *) newCityObj;
@end /* interface ENUNCIATENS0TSRestaurantObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantQuesionNonTsAssignedObj_H
#define DEF_ENUNCIATENS0TSRestaurantQuesionNonTsAssignedObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantQuesionNonTsAssignedObj : NSObject <EnunciateXML>
{
  @private
    NSString *_questionId;
    NSArray *_friendsNonTsUserFacebookId;
}

/**
 * (no documentation provided)
 */
- (NSString *) questionId;

/**
 * (no documentation provided)
 */
- (void) setQuestionId: (NSString *) newQuestionId;

/**
 * (no documentation provided)
 */
- (NSArray *) friendsNonTsUserFacebookId;

/**
 * (no documentation provided)
 */
- (void) setFriendsNonTsUserFacebookId: (NSArray *) newFriendsNonTsUserFacebookId;
@end /* interface ENUNCIATENS0TSRestaurantQuesionNonTsAssignedObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantQuesionNonTsAssignedObj_H */
#ifndef DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_H
#define DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSSocialAutoPubSettingsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_usncORDER;
    NSString *_usncYN;
}

/**
 * (no documentation provided)
 */
- (NSString *) usncORDER;

/**
 * (no documentation provided)
 */
- (void) setUsncORDER: (NSString *) newUsncORDER;

/**
 * (no documentation provided)
 */
- (NSString *) usncYN;

/**
 * (no documentation provided)
 */
- (void) setUsncYN: (NSString *) newUsncYN;
@end /* interface ENUNCIATENS0TSSocialAutoPubSettingsObj */

#endif /* DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_H */
#ifndef DEF_ENUNCIATENS0TSSuccessObj_H
#define DEF_ENUNCIATENS0TSSuccessObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSSuccessObj : NSObject <EnunciateXML>
{
  @private
    NSString *_successMsg;
}

/**
 * (no documentation provided)
 */
- (NSString *) successMsg;

/**
 * (no documentation provided)
 */
- (void) setSuccessMsg: (NSString *) newSuccessMsg;
@end /* interface ENUNCIATENS0TSSuccessObj */

#endif /* DEF_ENUNCIATENS0TSSuccessObj_H */
#ifndef DEF_ENUNCIATENS0TSUserProfileBasicObj_H
#define DEF_ENUNCIATENS0TSUserProfileBasicObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSUserProfileBasicObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userId;
    NSString *_name;
    NSString *_photo;
    ENUNCIATENS0TSPhotoObj *_photoDetails;
}

/**
 * (no documentation provided)
 */
- (NSString *) userId;

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) photo;

/**
 * (no documentation provided)
 */
- (void) setPhoto: (NSString *) newPhoto;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSPhotoObj *) photoDetails;

/**
 * (no documentation provided)
 */
- (void) setPhotoDetails: (ENUNCIATENS0TSPhotoObj *) newPhotoDetails;
@end /* interface ENUNCIATENS0TSUserProfileBasicObj */

#endif /* DEF_ENUNCIATENS0TSUserProfileBasicObj_H */
#ifndef DEF_ENUNCIATENS0TSUserProfileRestaurantsObj_H
#define DEF_ENUNCIATENS0TSUserProfileRestaurantsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSUserProfileRestaurantsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_restauarntId;
    NSString *_restaurantName;
    NSString *_cuisineTier2Name;
    NSString *_price;
    ENUNCIATENS0TSCityObj *_restaurantCity;
    NSString *_restaurantLat;
    NSString *_restaurantLong;
    NSString *_restaurantDealFlag;
    NSString *_restaurantRating;
    NSString *_userSavedFlag;
    NSString *_userFavFlag;
    NSString *_userRecommendedFlag;
    NSString *_userTipFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) restauarntId;

/**
 * (no documentation provided)
 */
- (void) setRestauarntId: (NSString *) newRestauarntId;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantName;

/**
 * (no documentation provided)
 */
- (void) setRestaurantName: (NSString *) newRestaurantName;

/**
 * (no documentation provided)
 */
- (NSString *) cuisineTier2Name;

/**
 * (no documentation provided)
 */
- (void) setCuisineTier2Name: (NSString *) newCuisineTier2Name;

/**
 * (no documentation provided)
 */
- (NSString *) price;

/**
 * (no documentation provided)
 */
- (void) setPrice: (NSString *) newPrice;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSCityObj *) restaurantCity;

/**
 * (no documentation provided)
 */
- (void) setRestaurantCity: (ENUNCIATENS0TSCityObj *) newRestaurantCity;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLat;

/**
 * (no documentation provided)
 */
- (void) setRestaurantLat: (NSString *) newRestaurantLat;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLong;

/**
 * (no documentation provided)
 */
- (void) setRestaurantLong: (NSString *) newRestaurantLong;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantDealFlag;

/**
 * (no documentation provided)
 */
- (void) setRestaurantDealFlag: (NSString *) newRestaurantDealFlag;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantRating;

/**
 * (no documentation provided)
 */
- (void) setRestaurantRating: (NSString *) newRestaurantRating;

/**
 * (no documentation provided)
 */
- (NSString *) userSavedFlag;

/**
 * (no documentation provided)
 */
- (void) setUserSavedFlag: (NSString *) newUserSavedFlag;

/**
 * (no documentation provided)
 */
- (NSString *) userFavFlag;

/**
 * (no documentation provided)
 */
- (void) setUserFavFlag: (NSString *) newUserFavFlag;

/**
 * (no documentation provided)
 */
- (NSString *) userRecommendedFlag;

/**
 * (no documentation provided)
 */
- (void) setUserRecommendedFlag: (NSString *) newUserRecommendedFlag;

/**
 * (no documentation provided)
 */
- (NSString *) userTipFlag;

/**
 * (no documentation provided)
 */
- (void) setUserTipFlag: (NSString *) newUserTipFlag;
@end /* interface ENUNCIATENS0TSUserProfileRestaurantsObj */

#endif /* DEF_ENUNCIATENS0TSUserProfileRestaurantsObj_H */
#ifndef DEF_ENUNCIATENS0TSRecoRequestObj_H
#define DEF_ENUNCIATENS0TSRecoRequestObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRecoRequestObj : NSObject <EnunciateXML>
{
  @private
    ENUNCIATENS0TSUserProfileBasicObj *_recommendeeUser;
    NSString *_recorequestText;
    NSString *_recommendeeUserFolloweeFlag;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) recommendeeUser;

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUser: (ENUNCIATENS0TSUserProfileBasicObj *) newRecommendeeUser;

/**
 * (no documentation provided)
 */
- (NSString *) recorequestText;

/**
 * (no documentation provided)
 */
- (void) setRecorequestText: (NSString *) newRecorequestText;

/**
 * (no documentation provided)
 */
- (NSString *) recommendeeUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUserFolloweeFlag: (NSString *) newRecommendeeUserFolloweeFlag;
@end /* interface ENUNCIATENS0TSRecoRequestObj */

#endif /* DEF_ENUNCIATENS0TSRecoRequestObj_H */
#ifndef DEF_ENUNCIATENS0TSRecommendationsForYouObj_H
#define DEF_ENUNCIATENS0TSRecommendationsForYouObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRecommendationsForYouObj : NSObject <EnunciateXML>
{
  @private
    ENUNCIATENS0TSUserProfileBasicObj *_latestRecommendeeUser;
    NSString *_recorequestText;
    NSArray *_restaurantsForYouObjList;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) latestRecommendeeUser;

/**
 * (no documentation provided)
 */
- (void) setLatestRecommendeeUser: (ENUNCIATENS0TSUserProfileBasicObj *) newLatestRecommendeeUser;

/**
 * (no documentation provided)
 */
- (NSString *) recorequestText;

/**
 * (no documentation provided)
 */
- (void) setRecorequestText: (NSString *) newRecorequestText;

/**
 * (no documentation provided)
 */
- (NSArray *) restaurantsForYouObjList;

/**
 * (no documentation provided)
 */
- (void) setRestaurantsForYouObjList: (NSArray *) newRestaurantsForYouObjList;
@end /* interface ENUNCIATENS0TSRecommendationsForYouObj */

#endif /* DEF_ENUNCIATENS0TSRecommendationsForYouObj_H */
#ifndef DEF_ENUNCIATENS0TSRecommendeeUserObj_H
#define DEF_ENUNCIATENS0TSRecommendeeUserObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRecommendeeUserObj : NSObject <EnunciateXML>
{
  @private
    ENUNCIATENS0TSUserProfileBasicObj *_recommendeeUser;
    NSString *_replyId;
    NSString *_replyText;
    NSString *_addedPoints;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) recommendeeUser;

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUser: (ENUNCIATENS0TSUserProfileBasicObj *) newRecommendeeUser;

/**
 * (no documentation provided)
 */
- (NSString *) replyId;

/**
 * (no documentation provided)
 */
- (void) setReplyId: (NSString *) newReplyId;

/**
 * (no documentation provided)
 */
- (NSString *) replyText;

/**
 * (no documentation provided)
 */
- (void) setReplyText: (NSString *) newReplyText;

/**
 * (no documentation provided)
 */
- (NSString *) addedPoints;

/**
 * (no documentation provided)
 */
- (void) setAddedPoints: (NSString *) newAddedPoints;
@end /* interface ENUNCIATENS0TSRecommendeeUserObj */

#endif /* DEF_ENUNCIATENS0TSRecommendeeUserObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantBuzzObj_H
#define DEF_ENUNCIATENS0TSRestaurantBuzzObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantBuzzObj : NSObject <EnunciateXML>
{
  @private
    NSString *_recorequestText;
    NSString *_replyText;
    ENUNCIATENS0TSUserProfileBasicObj *_recommenderUser;
    NSString *_recommenderUserFolloweeFlag;
    NSString *_replyDatetime;
}

/**
 * (no documentation provided)
 */
- (NSString *) recorequestText;

/**
 * (no documentation provided)
 */
- (void) setRecorequestText: (NSString *) newRecorequestText;

/**
 * (no documentation provided)
 */
- (NSString *) replyText;

/**
 * (no documentation provided)
 */
- (void) setReplyText: (NSString *) newReplyText;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) recommenderUser;

/**
 * (no documentation provided)
 */
- (void) setRecommenderUser: (ENUNCIATENS0TSUserProfileBasicObj *) newRecommenderUser;

/**
 * (no documentation provided)
 */
- (NSString *) recommenderUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (void) setRecommenderUserFolloweeFlag: (NSString *) newRecommenderUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (NSString *) replyDatetime;

/**
 * (no documentation provided)
 */
- (void) setReplyDatetime: (NSString *) newReplyDatetime;
@end /* interface ENUNCIATENS0TSRestaurantBuzzObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantBuzzObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantRecommendersDetailsObj_H
#define DEF_ENUNCIATENS0TSRestaurantRecommendersDetailsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantRecommendersDetailsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userId;
    NSString *_restaurantId;
    NSArray *_recommendersDetailsList;
}

/**
 * (no documentation provided)
 */
- (NSString *) userId;

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId;

/**
 * (no documentation provided)
 */
- (NSArray *) recommendersDetailsList;

/**
 * (no documentation provided)
 */
- (void) setRecommendersDetailsList: (NSArray *) newRecommendersDetailsList;
@end /* interface ENUNCIATENS0TSRestaurantRecommendersDetailsObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantRecommendersDetailsObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantsTileSearchExtendedInfoObj_H
#define DEF_ENUNCIATENS0TSRestaurantsTileSearchExtendedInfoObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantsTileSearchExtendedInfoObj : NSObject <EnunciateXML>
{
  @private
    NSString *_maxPaginationId;
    NSArray *_restaurantsSearchListTileObj;
}

/**
 * (no documentation provided)
 */
- (NSString *) maxPaginationId;

/**
 * (no documentation provided)
 */
- (void) setMaxPaginationId: (NSString *) newMaxPaginationId;

/**
 * (no documentation provided)
 */
- (NSArray *) restaurantsSearchListTileObj;

/**
 * (no documentation provided)
 */
- (void) setRestaurantsSearchListTileObj: (NSArray *) newRestaurantsSearchListTileObj;
@end /* interface ENUNCIATENS0TSRestaurantsTileSearchExtendedInfoObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantsTileSearchExtendedInfoObj_H */
#ifndef DEF_ENUNCIATENS0TSSenderUserObj_H
#define DEF_ENUNCIATENS0TSSenderUserObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSSenderUserObj : NSObject <EnunciateXML>
{
  @private
    ENUNCIATENS0TSUserProfileBasicObj *_senderUser;
    NSString *_senderUserFolloweeFlag;
    NSString *_message;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) senderUser;

/**
 * (no documentation provided)
 */
- (void) setSenderUser: (ENUNCIATENS0TSUserProfileBasicObj *) newSenderUser;

/**
 * (no documentation provided)
 */
- (NSString *) senderUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (void) setSenderUserFolloweeFlag: (NSString *) newSenderUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (NSString *) message;

/**
 * (no documentation provided)
 */
- (void) setMessage: (NSString *) newMessage;
@end /* interface ENUNCIATENS0TSSenderUserObj */

#endif /* DEF_ENUNCIATENS0TSSenderUserObj_H */
#ifndef DEF_ENUNCIATENS0JSONObject_H
#define DEF_ENUNCIATENS0JSONObject_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0JSONObject : NSObject
{
  @private
}
@end /* interface ENUNCIATENS0JSONObject */

#endif /* DEF_ENUNCIATENS0JSONObject_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantsTileSearchObj_H
#define DEF_ENUNCIATENS0TSRestaurantsTileSearchObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantsTileSearchObj : NSObject <EnunciateXML>
{
  @private
    NSString *_restaurantId;
    NSString *_restaurantName;
    NSString *_cuisineTier2Name;
    NSString *_price;
    NSString *_restaurantCity;
    NSString *_restaurantLat;
    NSString *_restaurantLong;
    NSString *_restaurantDealFlag;
    NSString *_restaurantRating;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantName;

/**
 * (no documentation provided)
 */
- (void) setRestaurantName: (NSString *) newRestaurantName;

/**
 * (no documentation provided)
 */
- (NSString *) cuisineTier2Name;

/**
 * (no documentation provided)
 */
- (void) setCuisineTier2Name: (NSString *) newCuisineTier2Name;

/**
 * (no documentation provided)
 */
- (NSString *) price;

/**
 * (no documentation provided)
 */
- (void) setPrice: (NSString *) newPrice;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantCity;

/**
 * (no documentation provided)
 */
- (void) setRestaurantCity: (NSString *) newRestaurantCity;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLat;

/**
 * (no documentation provided)
 */
- (void) setRestaurantLat: (NSString *) newRestaurantLat;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLong;

/**
 * (no documentation provided)
 */
- (void) setRestaurantLong: (NSString *) newRestaurantLong;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantDealFlag;

/**
 * (no documentation provided)
 */
- (void) setRestaurantDealFlag: (NSString *) newRestaurantDealFlag;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantRating;

/**
 * (no documentation provided)
 */
- (void) setRestaurantRating: (NSString *) newRestaurantRating;
@end /* interface ENUNCIATENS0TSRestaurantsTileSearchObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantsTileSearchObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantsForYouObj_H
#define DEF_ENUNCIATENS0TSRestaurantsForYouObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantsForYouObj : NSObject <EnunciateXML>
{
  @private
    NSArray *_recommendationsForYouList;
    NSString *_restaurantId;
    NSString *_restaurantName;
    NSString *_cuisineTier2Name;
    NSString *_price;
    NSString *_restaurantCity;
    NSString *_restaurantLat;
    NSString *_restaurantLong;
    NSString *_restaurantDealFlag;
    NSString *_restaurantRating;
}

/**
 * (no documentation provided)
 */
- (NSArray *) recommendationsForYouList;

/**
 * (no documentation provided)
 */
- (void) setRecommendationsForYouList: (NSArray *) newRecommendationsForYouList;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantName;

/**
 * (no documentation provided)
 */
- (void) setRestaurantName: (NSString *) newRestaurantName;

/**
 * (no documentation provided)
 */
- (NSString *) cuisineTier2Name;

/**
 * (no documentation provided)
 */
- (void) setCuisineTier2Name: (NSString *) newCuisineTier2Name;

/**
 * (no documentation provided)
 */
- (NSString *) price;

/**
 * (no documentation provided)
 */
- (void) setPrice: (NSString *) newPrice;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantCity;

/**
 * (no documentation provided)
 */
- (void) setRestaurantCity: (NSString *) newRestaurantCity;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLat;

/**
 * (no documentation provided)
 */
- (void) setRestaurantLat: (NSString *) newRestaurantLat;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLong;

/**
 * (no documentation provided)
 */
- (void) setRestaurantLong: (NSString *) newRestaurantLong;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantDealFlag;

/**
 * (no documentation provided)
 */
- (void) setRestaurantDealFlag: (NSString *) newRestaurantDealFlag;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantRating;

/**
 * (no documentation provided)
 */
- (void) setRestaurantRating: (NSString *) newRestaurantRating;
@end /* interface ENUNCIATENS0TSRestaurantsForYouObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantsForYouObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantCusineTier2Obj_H
#define DEF_ENUNCIATENS0TSRestaurantCusineTier2Obj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantCusineTier2Obj : NSObject <EnunciateXML>
{
  @private
    ENUNCIATENS0TSRestaurantDetailsObj *_tsRestaurantDetailsObj;
    ENUNCIATENS0TSCuisineTier2Obj *_tsCuisineTier2Obj;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantDetailsObj *) tsRestaurantDetailsObj;

/**
 * (no documentation provided)
 */
- (void) setTsRestaurantDetailsObj: (ENUNCIATENS0TSRestaurantDetailsObj *) newTsRestaurantDetailsObj;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSCuisineTier2Obj *) tsCuisineTier2Obj;

/**
 * (no documentation provided)
 */
- (void) setTsCuisineTier2Obj: (ENUNCIATENS0TSCuisineTier2Obj *) newTsCuisineTier2Obj;
@end /* interface ENUNCIATENS0TSRestaurantCusineTier2Obj */

#endif /* DEF_ENUNCIATENS0TSRestaurantCusineTier2Obj_H */
#ifndef DEF_ENUNCIATENS0TSRecommendersDetailsObj_H
#define DEF_ENUNCIATENS0TSRecommendersDetailsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRecommendersDetailsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userId;
    NSString *_name;
    ENUNCIATENS0TSPhotoObj *_photo;
}

/**
 * (no documentation provided)
 */
- (NSString *) userId;

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSPhotoObj *) photo;

/**
 * (no documentation provided)
 */
- (void) setPhoto: (ENUNCIATENS0TSPhotoObj *) newPhoto;
@end /* interface ENUNCIATENS0TSRecommendersDetailsObj */

#endif /* DEF_ENUNCIATENS0TSRecommendersDetailsObj_H */
#ifndef DEF_ENUNCIATENS0TSRecommendationsObj_H
#define DEF_ENUNCIATENS0TSRecommendationsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRecommendationsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_replyText;
    NSString *_recommenderUserFolloweeFlag;
    ENUNCIATENS0TSUserProfileBasicObj *_recommendeeUser;
}

/**
 * (no documentation provided)
 */
- (NSString *) replyText;

/**
 * (no documentation provided)
 */
- (void) setReplyText: (NSString *) newReplyText;

/**
 * (no documentation provided)
 */
- (NSString *) recommenderUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (void) setRecommenderUserFolloweeFlag: (NSString *) newRecommenderUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) recommendeeUser;

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUser: (ENUNCIATENS0TSUserProfileBasicObj *) newRecommendeeUser;
@end /* interface ENUNCIATENS0TSRecommendationsObj */

#endif /* DEF_ENUNCIATENS0TSRecommendationsObj_H */
#ifndef DEF_ENUNCIATENS0TSRecommendationsFollowupObj_H
#define DEF_ENUNCIATENS0TSRecommendationsFollowupObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRecommendationsFollowupObj : NSObject <EnunciateXML>
{
  @private
    ENUNCIATENS0TSUserProfileBasicObj *_questionUser;
    NSString *_questionText;
    NSString *_questionUserFolloweeFlag;
    ENUNCIATENS0TSRestaurantObj *_questionRestaurant;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) questionUser;

/**
 * (no documentation provided)
 */
- (void) setQuestionUser: (ENUNCIATENS0TSUserProfileBasicObj *) newQuestionUser;

/**
 * (no documentation provided)
 */
- (NSString *) questionText;

/**
 * (no documentation provided)
 */
- (void) setQuestionText: (NSString *) newQuestionText;

/**
 * (no documentation provided)
 */
- (NSString *) questionUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (void) setQuestionUserFolloweeFlag: (NSString *) newQuestionUserFolloweeFlag;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantObj *) questionRestaurant;

/**
 * (no documentation provided)
 */
- (void) setQuestionRestaurant: (ENUNCIATENS0TSRestaurantObj *) newQuestionRestaurant;
@end /* interface ENUNCIATENS0TSRecommendationsFollowupObj */

#endif /* DEF_ENUNCIATENS0TSRecommendationsFollowupObj_H */
#ifndef DEF_ENUNCIATENS0TSRecoRequestNonAssignedObj_H
#define DEF_ENUNCIATENS0TSRecoRequestNonAssignedObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRecoRequestNonAssignedObj : NSObject <EnunciateXML>
{
  @private
    NSString *_recoRequestId;
    NSArray *_nonassignedFacebookIdList;
}

/**
 * (no documentation provided)
 */
- (NSString *) recoRequestId;

/**
 * (no documentation provided)
 */
- (void) setRecoRequestId: (NSString *) newRecoRequestId;

/**
 * (no documentation provided)
 */
- (NSArray *) nonassignedFacebookIdList;

/**
 * (no documentation provided)
 */
- (void) setNonassignedFacebookIdList: (NSArray *) newNonassignedFacebookIdList;
@end /* interface ENUNCIATENS0TSRecoRequestNonAssignedObj */

#endif /* DEF_ENUNCIATENS0TSRecoRequestNonAssignedObj_H */
#ifndef DEF_ENUNCIATENS0TSUserProfileObj_H
#define DEF_ENUNCIATENS0TSUserProfileObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSUserProfileObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userId;
    NSString *_name;
    NSString *_photo;
    NSString *_facebookCity;
    NSString *_facebookUrl;
    NSString *_twitterUrl;
    NSString *_blogUrl;
    NSString *_aboutMeText;
    NSString *_numFollowers;
    NSString *_numFollowees;
    NSString *_numFriendsOnTs;
    NSString *_numPoints;
    NSArray *_restaurantList;
    NSString *_cityId;
}

/**
 * (no documentation provided)
 */
- (NSString *) userId;

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) photo;

/**
 * (no documentation provided)
 */
- (void) setPhoto: (NSString *) newPhoto;

/**
 * (no documentation provided)
 */
- (NSString *) facebookCity;

/**
 * (no documentation provided)
 */
- (void) setFacebookCity: (NSString *) newFacebookCity;

/**
 * (no documentation provided)
 */
- (NSString *) facebookUrl;

/**
 * (no documentation provided)
 */
- (void) setFacebookUrl: (NSString *) newFacebookUrl;

/**
 * (no documentation provided)
 */
- (NSString *) twitterUrl;

/**
 * (no documentation provided)
 */
- (void) setTwitterUrl: (NSString *) newTwitterUrl;

/**
 * (no documentation provided)
 */
- (NSString *) blogUrl;

/**
 * (no documentation provided)
 */
- (void) setBlogUrl: (NSString *) newBlogUrl;

/**
 * (no documentation provided)
 */
- (NSString *) aboutMeText;

/**
 * (no documentation provided)
 */
- (void) setAboutMeText: (NSString *) newAboutMeText;

/**
 * (no documentation provided)
 */
- (NSString *) numFollowers;

/**
 * (no documentation provided)
 */
- (void) setNumFollowers: (NSString *) newNumFollowers;

/**
 * (no documentation provided)
 */
- (NSString *) numFollowees;

/**
 * (no documentation provided)
 */
- (void) setNumFollowees: (NSString *) newNumFollowees;

/**
 * (no documentation provided)
 */
- (NSString *) numFriendsOnTs;

/**
 * (no documentation provided)
 */
- (void) setNumFriendsOnTs: (NSString *) newNumFriendsOnTs;

/**
 * (no documentation provided)
 */
- (NSString *) numPoints;

/**
 * (no documentation provided)
 */
- (void) setNumPoints: (NSString *) newNumPoints;

/**
 * (no documentation provided)
 */
- (NSArray *) restaurantList;

/**
 * (no documentation provided)
 */
- (void) setRestaurantList: (NSArray *) newRestaurantList;

/**
 * (no documentation provided)
 */
- (NSString *) cityId;

/**
 * (no documentation provided)
 */
- (void) setCityId: (NSString *) newCityId;
@end /* interface ENUNCIATENS0TSUserProfileObj */

#endif /* DEF_ENUNCIATENS0TSUserProfileObj_H */
#ifndef DEF_ENUNCIATENS0TSUserObj_H
#define DEF_ENUNCIATENS0TSUserObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSUserObj : NSObject <EnunciateXML>
{
  @private
    NSString *_userId;
    NSString *_tsUserId;
    NSString *_tsUserEmail;
    NSString *_tsUserPw;
    NSString *_tsFirstName;
    NSString *_tsLastName;
    NSString *_maxInvites;
    NSString *_userCreatedInitialDatetime;
    NSString *_userPoints;
    NSString *_twitterUsrUrl;
    NSString *_userDisabledFlag;
    NSString *_userActivationKey;
    NSString *_userGender;
    NSString *_userCityId;
    NSString *_userState;
    NSString *_isOnline;
    NSString *_userCountry;
    NSString *_userFbId;
    NSString *_about;
    NSString *_currentStatus;
    NSString *_photo;
}

/**
 * (no documentation provided)
 */
- (NSString *) userId;

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId;

/**
 * (no documentation provided)
 */
- (NSString *) tsUserId;

/**
 * (no documentation provided)
 */
- (void) setTsUserId: (NSString *) newTsUserId;

/**
 * (no documentation provided)
 */
- (NSString *) tsUserEmail;

/**
 * (no documentation provided)
 */
- (void) setTsUserEmail: (NSString *) newTsUserEmail;

/**
 * (no documentation provided)
 */
- (NSString *) tsUserPw;

/**
 * (no documentation provided)
 */
- (void) setTsUserPw: (NSString *) newTsUserPw;

/**
 * (no documentation provided)
 */
- (NSString *) tsFirstName;

/**
 * (no documentation provided)
 */
- (void) setTsFirstName: (NSString *) newTsFirstName;

/**
 * (no documentation provided)
 */
- (NSString *) tsLastName;

/**
 * (no documentation provided)
 */
- (void) setTsLastName: (NSString *) newTsLastName;

/**
 * (no documentation provided)
 */
- (NSString *) maxInvites;

/**
 * (no documentation provided)
 */
- (void) setMaxInvites: (NSString *) newMaxInvites;

/**
 * (no documentation provided)
 */
- (NSString *) userCreatedInitialDatetime;

/**
 * (no documentation provided)
 */
- (void) setUserCreatedInitialDatetime: (NSString *) newUserCreatedInitialDatetime;

/**
 * (no documentation provided)
 */
- (NSString *) userPoints;

/**
 * (no documentation provided)
 */
- (void) setUserPoints: (NSString *) newUserPoints;

/**
 * (no documentation provided)
 */
- (NSString *) twitterUsrUrl;

/**
 * (no documentation provided)
 */
- (void) setTwitterUsrUrl: (NSString *) newTwitterUsrUrl;

/**
 * (no documentation provided)
 */
- (NSString *) userDisabledFlag;

/**
 * (no documentation provided)
 */
- (void) setUserDisabledFlag: (NSString *) newUserDisabledFlag;

/**
 * (no documentation provided)
 */
- (NSString *) userActivationKey;

/**
 * (no documentation provided)
 */
- (void) setUserActivationKey: (NSString *) newUserActivationKey;

/**
 * (no documentation provided)
 */
- (NSString *) userGender;

/**
 * (no documentation provided)
 */
- (void) setUserGender: (NSString *) newUserGender;

/**
 * (no documentation provided)
 */
- (NSString *) userCityId;

/**
 * (no documentation provided)
 */
- (void) setUserCityId: (NSString *) newUserCityId;

/**
 * (no documentation provided)
 */
- (NSString *) userState;

/**
 * (no documentation provided)
 */
- (void) setUserState: (NSString *) newUserState;

/**
 * (no documentation provided)
 */
- (NSString *) isOnline;

/**
 * (no documentation provided)
 */
- (void) setIsOnline: (NSString *) newIsOnline;

/**
 * (no documentation provided)
 */
- (NSString *) userCountry;

/**
 * (no documentation provided)
 */
- (void) setUserCountry: (NSString *) newUserCountry;

/**
 * (no documentation provided)
 */
- (NSString *) userFbId;

/**
 * (no documentation provided)
 */
- (void) setUserFbId: (NSString *) newUserFbId;

/**
 * (no documentation provided)
 */
- (NSString *) about;

/**
 * (no documentation provided)
 */
- (void) setAbout: (NSString *) newAbout;

/**
 * (no documentation provided)
 */
- (NSString *) currentStatus;

/**
 * (no documentation provided)
 */
- (void) setCurrentStatus: (NSString *) newCurrentStatus;

/**
 * (no documentation provided)
 */
- (NSString *) photo;

/**
 * (no documentation provided)
 */
- (void) setPhoto: (NSString *) newPhoto;
@end /* interface ENUNCIATENS0TSUserObj */

#endif /* DEF_ENUNCIATENS0TSUserObj_H */
#ifndef DEF_ENUNCIATENS0TSSocialSettingsObj_H
#define DEF_ENUNCIATENS0TSSocialSettingsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSSocialSettingsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_usncORDER;
    NSString *_usncYN;
    NSArray *_auto_publishing;
}

/**
 * (no documentation provided)
 */
- (NSString *) usncORDER;

/**
 * (no documentation provided)
 */
- (void) setUsncORDER: (NSString *) newUsncORDER;

/**
 * (no documentation provided)
 */
- (NSString *) usncYN;

/**
 * (no documentation provided)
 */
- (void) setUsncYN: (NSString *) newUsncYN;

/**
 * (no documentation provided)
 */
- (NSArray *) auto_publishing;

/**
 * (no documentation provided)
 */
- (void) setAuto_publishing: (NSArray *) newAuto_publishing;
@end /* interface ENUNCIATENS0TSSocialSettingsObj */

#endif /* DEF_ENUNCIATENS0TSSocialSettingsObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantView_H
#define DEF_ENUNCIATENS0TSRestaurantView_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantView : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    ENUNCIATENS0TSRestaurantPhotoObj *_photo;
    ENUNCIATENS0TSRestaurantsTileSearchObj *_information;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantPhotoObj *) photo;

/**
 * (no documentation provided)
 */
- (void) setPhoto: (ENUNCIATENS0TSRestaurantPhotoObj *) newPhoto;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantsTileSearchObj *) information;

/**
 * (no documentation provided)
 */
- (void) setInformation: (ENUNCIATENS0TSRestaurantsTileSearchObj *) newInformation;
@end /* interface ENUNCIATENS0TSRestaurantView */

#endif /* DEF_ENUNCIATENS0TSRestaurantView_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantPhotoObj_H
#define DEF_ENUNCIATENS0TSRestaurantPhotoObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantPhotoObj : NSObject <EnunciateXML>
{
  @private
    NSString *_restaurantId;
    NSString *_photoId;
    NSString *_prefix;
    NSString *_suffix;
    NSString *_width;
    NSString *_height;
    NSString *_ultimateSourceName;
    NSString *_ultimateSourceUrl;
    NSString *_photoSource;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId;

/**
 * (no documentation provided)
 */
- (NSString *) photoId;

/**
 * (no documentation provided)
 */
- (void) setPhotoId: (NSString *) newPhotoId;

/**
 * (no documentation provided)
 */
- (NSString *) prefix;

/**
 * (no documentation provided)
 */
- (void) setPrefix: (NSString *) newPrefix;

/**
 * (no documentation provided)
 */
- (NSString *) suffix;

/**
 * (no documentation provided)
 */
- (void) setSuffix: (NSString *) newSuffix;

/**
 * (no documentation provided)
 */
- (NSString *) width;

/**
 * (no documentation provided)
 */
- (void) setWidth: (NSString *) newWidth;

/**
 * (no documentation provided)
 */
- (NSString *) height;

/**
 * (no documentation provided)
 */
- (void) setHeight: (NSString *) newHeight;

/**
 * (no documentation provided)
 */
- (NSString *) ultimateSourceName;

/**
 * (no documentation provided)
 */
- (void) setUltimateSourceName: (NSString *) newUltimateSourceName;

/**
 * (no documentation provided)
 */
- (NSString *) ultimateSourceUrl;

/**
 * (no documentation provided)
 */
- (void) setUltimateSourceUrl: (NSString *) newUltimateSourceUrl;

/**
 * (no documentation provided)
 */
- (NSString *) photoSource;

/**
 * (no documentation provided)
 */
- (void) setPhotoSource: (NSString *) newPhotoSource;
@end /* interface ENUNCIATENS0TSRestaurantPhotoObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantPhotoObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantExtendInfoObj_H
#define DEF_ENUNCIATENS0TSRestaurantExtendInfoObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantExtendInfoObj : NSObject <EnunciateXML>
{
  @private
    NSString *_phoneNumber;
    NSString *_website;
    NSString *_healthyOptionsFlag;
    NSString *_wifiFlag;
    NSString *_payCashonlyFlag;
    NSString *_reservationsFlag;
    NSString *_open24HoursFlag;
    NSString *_attire;
    NSString *_attireRequiredList;
    NSString *_attireProhibitedList;
    NSString *_parkingFlag;
    NSString *_parkingValetFlag;
    NSString *_parkingFreeFlag;
    NSString *_parkingGarageFlag;
    NSString *_parkingLotFlag;
    NSString *_parkingStreetFlag;
    NSString *_parkingValidatedFlag;
    NSString *_smokingFlag;
    NSString *_accessibleWheelchairFlag;
    NSString *_alcoholFlag;
    NSString *_alcoholBarFlag;
    NSString *_alcoholBeerWineFlag;
    NSString *_alcoholByobFlag;
    NSString *_groupsGoodForFlag;
    NSString *_kidsGoodForFlag;
    NSString *_kidsMenuFlag;
    NSString *_mealBreakfastFlag;
    NSString *_mealCaterFlag;
    NSString *_mealDeliverFlag;
    NSString *_mealDinnerFlag;
    NSString *_mealLunchFlag;
    NSString *_mealTakeoutFlag;
    NSString *_optionsGlutenfreeFlag;
    NSString *_optionsLowfatFlag;
    NSString *_optionsOrganicFlag;
    NSString *_optionsVeganFlag;
    NSString *_optionsVegetarianFlag;
    NSString *_roomPrivateFlag;
    NSString *_seatingOutdoorFlag;
    NSString *_address;
    NSString *_lat;
    NSString *_lon;
}

/**
 * (no documentation provided)
 */
- (NSString *) phoneNumber;

/**
 * (no documentation provided)
 */
- (void) setPhoneNumber: (NSString *) newPhoneNumber;

/**
 * (no documentation provided)
 */
- (NSString *) website;

/**
 * (no documentation provided)
 */
- (void) setWebsite: (NSString *) newWebsite;

/**
 * (no documentation provided)
 */
- (NSString *) healthyOptionsFlag;

/**
 * (no documentation provided)
 */
- (void) setHealthyOptionsFlag: (NSString *) newHealthyOptionsFlag;

/**
 * (no documentation provided)
 */
- (NSString *) wifiFlag;

/**
 * (no documentation provided)
 */
- (void) setWifiFlag: (NSString *) newWifiFlag;

/**
 * (no documentation provided)
 */
- (NSString *) payCashonlyFlag;

/**
 * (no documentation provided)
 */
- (void) setPayCashonlyFlag: (NSString *) newPayCashonlyFlag;

/**
 * (no documentation provided)
 */
- (NSString *) reservationsFlag;

/**
 * (no documentation provided)
 */
- (void) setReservationsFlag: (NSString *) newReservationsFlag;

/**
 * (no documentation provided)
 */
- (NSString *) open24HoursFlag;

/**
 * (no documentation provided)
 */
- (void) setOpen24HoursFlag: (NSString *) newOpen24HoursFlag;

/**
 * (no documentation provided)
 */
- (NSString *) attire;

/**
 * (no documentation provided)
 */
- (void) setAttire: (NSString *) newAttire;

/**
 * (no documentation provided)
 */
- (NSString *) attireRequiredList;

/**
 * (no documentation provided)
 */
- (void) setAttireRequiredList: (NSString *) newAttireRequiredList;

/**
 * (no documentation provided)
 */
- (NSString *) attireProhibitedList;

/**
 * (no documentation provided)
 */
- (void) setAttireProhibitedList: (NSString *) newAttireProhibitedList;

/**
 * (no documentation provided)
 */
- (NSString *) parkingFlag;

/**
 * (no documentation provided)
 */
- (void) setParkingFlag: (NSString *) newParkingFlag;

/**
 * (no documentation provided)
 */
- (NSString *) parkingValetFlag;

/**
 * (no documentation provided)
 */
- (void) setParkingValetFlag: (NSString *) newParkingValetFlag;

/**
 * (no documentation provided)
 */
- (NSString *) parkingFreeFlag;

/**
 * (no documentation provided)
 */
- (void) setParkingFreeFlag: (NSString *) newParkingFreeFlag;

/**
 * (no documentation provided)
 */
- (NSString *) parkingGarageFlag;

/**
 * (no documentation provided)
 */
- (void) setParkingGarageFlag: (NSString *) newParkingGarageFlag;

/**
 * (no documentation provided)
 */
- (NSString *) parkingLotFlag;

/**
 * (no documentation provided)
 */
- (void) setParkingLotFlag: (NSString *) newParkingLotFlag;

/**
 * (no documentation provided)
 */
- (NSString *) parkingStreetFlag;

/**
 * (no documentation provided)
 */
- (void) setParkingStreetFlag: (NSString *) newParkingStreetFlag;

/**
 * (no documentation provided)
 */
- (NSString *) parkingValidatedFlag;

/**
 * (no documentation provided)
 */
- (void) setParkingValidatedFlag: (NSString *) newParkingValidatedFlag;

/**
 * (no documentation provided)
 */
- (NSString *) smokingFlag;

/**
 * (no documentation provided)
 */
- (void) setSmokingFlag: (NSString *) newSmokingFlag;

/**
 * (no documentation provided)
 */
- (NSString *) accessibleWheelchairFlag;

/**
 * (no documentation provided)
 */
- (void) setAccessibleWheelchairFlag: (NSString *) newAccessibleWheelchairFlag;

/**
 * (no documentation provided)
 */
- (NSString *) alcoholFlag;

/**
 * (no documentation provided)
 */
- (void) setAlcoholFlag: (NSString *) newAlcoholFlag;

/**
 * (no documentation provided)
 */
- (NSString *) alcoholBarFlag;

/**
 * (no documentation provided)
 */
- (void) setAlcoholBarFlag: (NSString *) newAlcoholBarFlag;

/**
 * (no documentation provided)
 */
- (NSString *) alcoholBeerWineFlag;

/**
 * (no documentation provided)
 */
- (void) setAlcoholBeerWineFlag: (NSString *) newAlcoholBeerWineFlag;

/**
 * (no documentation provided)
 */
- (NSString *) alcoholByobFlag;

/**
 * (no documentation provided)
 */
- (void) setAlcoholByobFlag: (NSString *) newAlcoholByobFlag;

/**
 * (no documentation provided)
 */
- (NSString *) groupsGoodForFlag;

/**
 * (no documentation provided)
 */
- (void) setGroupsGoodForFlag: (NSString *) newGroupsGoodForFlag;

/**
 * (no documentation provided)
 */
- (NSString *) kidsGoodForFlag;

/**
 * (no documentation provided)
 */
- (void) setKidsGoodForFlag: (NSString *) newKidsGoodForFlag;

/**
 * (no documentation provided)
 */
- (NSString *) kidsMenuFlag;

/**
 * (no documentation provided)
 */
- (void) setKidsMenuFlag: (NSString *) newKidsMenuFlag;

/**
 * (no documentation provided)
 */
- (NSString *) mealBreakfastFlag;

/**
 * (no documentation provided)
 */
- (void) setMealBreakfastFlag: (NSString *) newMealBreakfastFlag;

/**
 * (no documentation provided)
 */
- (NSString *) mealCaterFlag;

/**
 * (no documentation provided)
 */
- (void) setMealCaterFlag: (NSString *) newMealCaterFlag;

/**
 * (no documentation provided)
 */
- (NSString *) mealDeliverFlag;

/**
 * (no documentation provided)
 */
- (void) setMealDeliverFlag: (NSString *) newMealDeliverFlag;

/**
 * (no documentation provided)
 */
- (NSString *) mealDinnerFlag;

/**
 * (no documentation provided)
 */
- (void) setMealDinnerFlag: (NSString *) newMealDinnerFlag;

/**
 * (no documentation provided)
 */
- (NSString *) mealLunchFlag;

/**
 * (no documentation provided)
 */
- (void) setMealLunchFlag: (NSString *) newMealLunchFlag;

/**
 * (no documentation provided)
 */
- (NSString *) mealTakeoutFlag;

/**
 * (no documentation provided)
 */
- (void) setMealTakeoutFlag: (NSString *) newMealTakeoutFlag;

/**
 * (no documentation provided)
 */
- (NSString *) optionsGlutenfreeFlag;

/**
 * (no documentation provided)
 */
- (void) setOptionsGlutenfreeFlag: (NSString *) newOptionsGlutenfreeFlag;

/**
 * (no documentation provided)
 */
- (NSString *) optionsLowfatFlag;

/**
 * (no documentation provided)
 */
- (void) setOptionsLowfatFlag: (NSString *) newOptionsLowfatFlag;

/**
 * (no documentation provided)
 */
- (NSString *) optionsOrganicFlag;

/**
 * (no documentation provided)
 */
- (void) setOptionsOrganicFlag: (NSString *) newOptionsOrganicFlag;

/**
 * (no documentation provided)
 */
- (NSString *) optionsVeganFlag;

/**
 * (no documentation provided)
 */
- (void) setOptionsVeganFlag: (NSString *) newOptionsVeganFlag;

/**
 * (no documentation provided)
 */
- (NSString *) optionsVegetarianFlag;

/**
 * (no documentation provided)
 */
- (void) setOptionsVegetarianFlag: (NSString *) newOptionsVegetarianFlag;

/**
 * (no documentation provided)
 */
- (NSString *) roomPrivateFlag;

/**
 * (no documentation provided)
 */
- (void) setRoomPrivateFlag: (NSString *) newRoomPrivateFlag;

/**
 * (no documentation provided)
 */
- (NSString *) seatingOutdoorFlag;

/**
 * (no documentation provided)
 */
- (void) setSeatingOutdoorFlag: (NSString *) newSeatingOutdoorFlag;

/**
 * (no documentation provided)
 */
- (NSString *) address;

/**
 * (no documentation provided)
 */
- (void) setAddress: (NSString *) newAddress;

/**
 * (no documentation provided)
 */
- (NSString *) lat;

/**
 * (no documentation provided)
 */
- (void) setLat: (NSString *) newLat;

/**
 * (no documentation provided)
 */
- (NSString *) lon;

/**
 * (no documentation provided)
 */
- (void) setLon: (NSString *) newLon;
@end /* interface ENUNCIATENS0TSRestaurantExtendInfoObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantExtendInfoObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantBasicObj_H
#define DEF_ENUNCIATENS0TSRestaurantBasicObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantBasicObj : NSObject <EnunciateXML>
{
  @private
    NSString *_restaurantId;
    NSString *_restaurantName;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId;

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantName;

/**
 * (no documentation provided)
 */
- (void) setRestaurantName: (NSString *) newRestaurantName;
@end /* interface ENUNCIATENS0TSRestaurantBasicObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantBasicObj_H */
#ifndef DEF_ENUNCIATENS0TSPrivacySettingsObj_H
#define DEF_ENUNCIATENS0TSPrivacySettingsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSPrivacySettingsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_privacy_id_order;
    NSString *_privacy_flag;
}

/**
 * (no documentation provided)
 */
- (NSString *) privacy_id_order;

/**
 * (no documentation provided)
 */
- (void) setPrivacy_id_order: (NSString *) newPrivacy_id_order;

/**
 * (no documentation provided)
 */
- (NSString *) privacy_flag;

/**
 * (no documentation provided)
 */
- (void) setPrivacy_flag: (NSString *) newPrivacy_flag;
@end /* interface ENUNCIATENS0TSPrivacySettingsObj */

#endif /* DEF_ENUNCIATENS0TSPrivacySettingsObj_H */
#ifndef DEF_ENUNCIATENS0TSNotificationSettingsObj_H
#define DEF_ENUNCIATENS0TSNotificationSettingsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotificationSettingsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_order_id;
    NSString *_phoneFlag;
    NSString *_emailFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) order_id;

/**
 * (no documentation provided)
 */
- (void) setOrder_id: (NSString *) newOrder_id;

/**
 * (no documentation provided)
 */
- (NSString *) phoneFlag;

/**
 * (no documentation provided)
 */
- (void) setPhoneFlag: (NSString *) newPhoneFlag;

/**
 * (no documentation provided)
 */
- (NSString *) emailFlag;

/**
 * (no documentation provided)
 */
- (void) setEmailFlag: (NSString *) newEmailFlag;
@end /* interface ENUNCIATENS0TSNotificationSettingsObj */

#endif /* DEF_ENUNCIATENS0TSNotificationSettingsObj_H */
#ifndef DEF_ENUNCIATENS0TSCuisineTier2Obj_H
#define DEF_ENUNCIATENS0TSCuisineTier2Obj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSCuisineTier2Obj : NSObject
{
  @private
    NSString *_cuisineId;
    NSString *_cuisineDesc;
    NSString *_cuisineValidCurrent;
}

/**
 * (no documentation provided)
 */
- (NSString *) cuisineId;

/**
 * (no documentation provided)
 */
- (void) setCuisineId: (NSString *) newCuisineId;

/**
 * (no documentation provided)
 */
- (NSString *) cuisineDesc;

/**
 * (no documentation provided)
 */
- (void) setCuisineDesc: (NSString *) newCuisineDesc;

/**
 * (no documentation provided)
 */
- (NSString *) cuisineValidCurrent;

/**
 * (no documentation provided)
 */
- (void) setCuisineValidCurrent: (NSString *) newCuisineValidCurrent;
@end /* interface ENUNCIATENS0TSCuisineTier2Obj */

#endif /* DEF_ENUNCIATENS0TSCuisineTier2Obj_H */
#ifndef DEF_ENUNCIATENS0TSCityObj_H
#define DEF_ENUNCIATENS0TSCityObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSCityObj : NSObject
{
  @private
    NSString *_cityId;
    NSString *_country;
    NSString *_state;
    NSString *_city;
}

/**
 * (no documentation provided)
 */
- (NSString *) cityId;

/**
 * (no documentation provided)
 */
- (void) setCityId: (NSString *) newCityId;

/**
 * (no documentation provided)
 */
- (NSString *) country;

/**
 * (no documentation provided)
 */
- (void) setCountry: (NSString *) newCountry;

/**
 * (no documentation provided)
 */
- (NSString *) state;

/**
 * (no documentation provided)
 */
- (void) setState: (NSString *) newState;

/**
 * (no documentation provided)
 */
- (NSString *) city;

/**
 * (no documentation provided)
 */
- (void) setCity: (NSString *) newCity;
@end /* interface ENUNCIATENS0TSCityObj */

#endif /* DEF_ENUNCIATENS0TSCityObj_H */
#ifndef DEF_ENUNCIATENS0TSNotifRecoLikeObj_H
#define DEF_ENUNCIATENS0TSNotifRecoLikeObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotifRecoLikeObj : ENUNCIATENS0TSRecoNotificationBaseObj <EnunciateXML>
{
  @private
    NSString *_likeId;
    NSString *_likeDatetime;
    NSString *_viewed;
    ENUNCIATENS0TSUserProfileBasicObj *_recommendeeUser;
}

/**
 * (no documentation provided)
 */
- (NSString *) likeId;

/**
 * (no documentation provided)
 */
- (void) setLikeId: (NSString *) newLikeId;

/**
 * (no documentation provided)
 */
- (NSString *) likeDatetime;

/**
 * (no documentation provided)
 */
- (void) setLikeDatetime: (NSString *) newLikeDatetime;

/**
 * (no documentation provided)
 */
- (NSString *) viewed;

/**
 * (no documentation provided)
 */
- (void) setViewed: (NSString *) newViewed;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) recommendeeUser;

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUser: (ENUNCIATENS0TSUserProfileBasicObj *) newRecommendeeUser;
@end /* interface ENUNCIATENS0TSNotifRecoLikeObj */

#endif /* DEF_ENUNCIATENS0TSNotifRecoLikeObj_H */
#ifndef DEF_ENUNCIATENS0TSNotifRecorequestNeededObj_H
#define DEF_ENUNCIATENS0TSNotifRecorequestNeededObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotifRecorequestNeededObj : ENUNCIATENS0TSRecoNotificationBaseObj <EnunciateXML>
{
  @private
    NSString *_recorequestId;
    NSString *_assignedDatetime;
    NSString *_recorequestassignedViewed;
    NSString *_recorequestassignedActioned;
    ENUNCIATENS0TSUserProfileBasicObj *_recommendeeUser;
    NSString *_recorequestText;
}

/**
 * (no documentation provided)
 */
- (NSString *) recorequestId;

/**
 * (no documentation provided)
 */
- (void) setRecorequestId: (NSString *) newRecorequestId;

/**
 * (no documentation provided)
 */
- (NSString *) assignedDatetime;

/**
 * (no documentation provided)
 */
- (void) setAssignedDatetime: (NSString *) newAssignedDatetime;

/**
 * (no documentation provided)
 */
- (NSString *) recorequestassignedViewed;

/**
 * (no documentation provided)
 */
- (void) setRecorequestassignedViewed: (NSString *) newRecorequestassignedViewed;

/**
 * (no documentation provided)
 */
- (NSString *) recorequestassignedActioned;

/**
 * (no documentation provided)
 */
- (void) setRecorequestassignedActioned: (NSString *) newRecorequestassignedActioned;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) recommendeeUser;

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUser: (ENUNCIATENS0TSUserProfileBasicObj *) newRecommendeeUser;

/**
 * (no documentation provided)
 */
- (NSString *) recorequestText;

/**
 * (no documentation provided)
 */
- (void) setRecorequestText: (NSString *) newRecorequestText;
@end /* interface ENUNCIATENS0TSNotifRecorequestNeededObj */

#endif /* DEF_ENUNCIATENS0TSNotifRecorequestNeededObj_H */
#ifndef DEF_ENUNCIATENS0TSNotifRecorequestAnswerObj_H
#define DEF_ENUNCIATENS0TSNotifRecorequestAnswerObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotifRecorequestAnswerObj : ENUNCIATENS0TSRecoNotificationBaseObj <EnunciateXML>
{
  @private
    NSString *_recorequestId;
    NSString *_minViewedIndicator;
    NSString *_recoActioned;
    NSArray *_recoReply;
    ENUNCIATENS0TSRecommendationsForYouObj *_recommendationsForYou;
}

/**
 * (no documentation provided)
 */
- (NSString *) recorequestId;

/**
 * (no documentation provided)
 */
- (void) setRecorequestId: (NSString *) newRecorequestId;

/**
 * (no documentation provided)
 */
- (NSString *) minViewedIndicator;

/**
 * (no documentation provided)
 */
- (void) setMinViewedIndicator: (NSString *) newMinViewedIndicator;

/**
 * (no documentation provided)
 */
- (NSString *) recoActioned;

/**
 * (no documentation provided)
 */
- (void) setRecoActioned: (NSString *) newRecoActioned;

/**
 * (no documentation provided)
 */
- (NSArray *) recoReply;

/**
 * (no documentation provided)
 */
- (void) setRecoReply: (NSArray *) newRecoReply;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRecommendationsForYouObj *) recommendationsForYou;

/**
 * (no documentation provided)
 */
- (void) setRecommendationsForYou: (ENUNCIATENS0TSRecommendationsForYouObj *) newRecommendationsForYou;
@end /* interface ENUNCIATENS0TSNotifRecorequestAnswerObj */

#endif /* DEF_ENUNCIATENS0TSNotifRecorequestAnswerObj_H */
#ifndef DEF_ENUNCIATENS0TSNotifFollowupQuestionObj_H
#define DEF_ENUNCIATENS0TSNotifFollowupQuestionObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotifFollowupQuestionObj : ENUNCIATENS0TSRecoNotificationBaseObj <EnunciateXML>
{
  @private
    NSString *_questionId;
    NSString *_assignedDatetime;
    NSString *_viewed;
    NSString *_actioned;
    ENUNCIATENS0TSUserProfileBasicObj *_questionUser;
    NSString *_questionText;
}

/**
 * (no documentation provided)
 */
- (NSString *) questionId;

/**
 * (no documentation provided)
 */
- (void) setQuestionId: (NSString *) newQuestionId;

/**
 * (no documentation provided)
 */
- (NSString *) assignedDatetime;

/**
 * (no documentation provided)
 */
- (void) setAssignedDatetime: (NSString *) newAssignedDatetime;

/**
 * (no documentation provided)
 */
- (NSString *) viewed;

/**
 * (no documentation provided)
 */
- (void) setViewed: (NSString *) newViewed;

/**
 * (no documentation provided)
 */
- (NSString *) actioned;

/**
 * (no documentation provided)
 */
- (void) setActioned: (NSString *) newActioned;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) questionUser;

/**
 * (no documentation provided)
 */
- (void) setQuestionUser: (ENUNCIATENS0TSUserProfileBasicObj *) newQuestionUser;

/**
 * (no documentation provided)
 */
- (NSString *) questionText;

/**
 * (no documentation provided)
 */
- (void) setQuestionText: (NSString *) newQuestionText;
@end /* interface ENUNCIATENS0TSNotifFollowupQuestionObj */

#endif /* DEF_ENUNCIATENS0TSNotifFollowupQuestionObj_H */
#ifndef DEF_ENUNCIATENS0TSNotifMessageForYouObj_H
#define DEF_ENUNCIATENS0TSNotifMessageForYouObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotifMessageForYouObj : ENUNCIATENS0TSRecoNotificationBaseObj <EnunciateXML>
{
  @private
    NSString *_messageId;
    NSString *_messageCreatedTime;
    NSString *_viewed;
    NSString *_actioned;
    ENUNCIATENS0TSUserProfileBasicObj *_senderUser;
    NSString *_message;
}

/**
 * (no documentation provided)
 */
- (NSString *) messageId;

/**
 * (no documentation provided)
 */
- (void) setMessageId: (NSString *) newMessageId;

/**
 * (no documentation provided)
 */
- (NSString *) messageCreatedTime;

/**
 * (no documentation provided)
 */
- (void) setMessageCreatedTime: (NSString *) newMessageCreatedTime;

/**
 * (no documentation provided)
 */
- (NSString *) viewed;

/**
 * (no documentation provided)
 */
- (void) setViewed: (NSString *) newViewed;

/**
 * (no documentation provided)
 */
- (NSString *) actioned;

/**
 * (no documentation provided)
 */
- (void) setActioned: (NSString *) newActioned;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) senderUser;

/**
 * (no documentation provided)
 */
- (void) setSenderUser: (ENUNCIATENS0TSUserProfileBasicObj *) newSenderUser;

/**
 * (no documentation provided)
 */
- (NSString *) message;

/**
 * (no documentation provided)
 */
- (void) setMessage: (NSString *) newMessage;
@end /* interface ENUNCIATENS0TSNotifMessageForYouObj */

#endif /* DEF_ENUNCIATENS0TSNotifMessageForYouObj_H */
#ifndef DEF_ENUNCIATENS0TSNotifDidYouLikeObj_H
#define DEF_ENUNCIATENS0TSNotifDidYouLikeObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotifDidYouLikeObj : ENUNCIATENS0TSRecoNotificationBaseObj <EnunciateXML>
{
  @private
    NSString *_recorequestId;
    NSString *_datetime;
    NSString *_viewed;
    NSArray *_restaurantbasic;
}

/**
 * (no documentation provided)
 */
- (NSString *) recorequestId;

/**
 * (no documentation provided)
 */
- (void) setRecorequestId: (NSString *) newRecorequestId;

/**
 * (no documentation provided)
 */
- (NSString *) datetime;

/**
 * (no documentation provided)
 */
- (void) setDatetime: (NSString *) newDatetime;

/**
 * (no documentation provided)
 */
- (NSString *) viewed;

/**
 * (no documentation provided)
 */
- (void) setViewed: (NSString *) newViewed;

/**
 * (no documentation provided)
 */
- (NSArray *) restaurantbasic;

/**
 * (no documentation provided)
 */
- (void) setRestaurantbasic: (NSArray *) newRestaurantbasic;
@end /* interface ENUNCIATENS0TSNotifDidYouLikeObj */

#endif /* DEF_ENUNCIATENS0TSNotifDidYouLikeObj_H */
#ifndef DEF_ENUNCIATENS0TSKeyValueObj_H
#define DEF_ENUNCIATENS0TSKeyValueObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSKeyValueObj : ENUNCIATENS0JSONObject <EnunciateXML>
{
  @private
    NSString *_keyName;
    NSString *_keyNameValue;
    NSString *_valueName;
    NSString *_valueNameValue;
}

/**
 * (no documentation provided)
 */
- (NSString *) keyName;

/**
 * (no documentation provided)
 */
- (void) setKeyName: (NSString *) newKeyName;

/**
 * (no documentation provided)
 */
- (NSString *) keyNameValue;

/**
 * (no documentation provided)
 */
- (void) setKeyNameValue: (NSString *) newKeyNameValue;

/**
 * (no documentation provided)
 */
- (NSString *) valueName;

/**
 * (no documentation provided)
 */
- (void) setValueName: (NSString *) newValueName;

/**
 * (no documentation provided)
 */
- (NSString *) valueNameValue;

/**
 * (no documentation provided)
 */
- (void) setValueNameValue: (NSString *) newValueNameValue;
@end /* interface ENUNCIATENS0TSKeyValueObj */

#endif /* DEF_ENUNCIATENS0TSKeyValueObj_H */
