#import "enunciate-common.h"

@class ENUNCIATENS0TSNotificationSettingsObj;
@class ENUNCIATENS0TSPrivacySettingsObj;
@class ENUNCIATENS0TSRestaurantDetailsObj;
@class ENUNCIATENS0TSSocialAutoPubSettingsObj;
@class ENUNCIATENS0TSSuccessObj;
@class ENUNCIATENS0TSUserProfileObj;
@class ENUNCIATENS0TSUserProfileRestaurantsObj;
@class ENUNCIATENS0TSUserObj;
@class ENUNCIATENS0TSSocialSettingsObj;
@class ENUNCIATENS0TSRestaurantObj;
@class ENUNCIATENS0TSRecommendersDetailsObj;
@class ENUNCIATENS0TSPhotoObj;
@class ENUNCIATENS0TSErrorObj;
@class ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj;

#ifndef DEF_ENUNCIATENS0TSNotificationSettingsObj_H
#define DEF_ENUNCIATENS0TSNotificationSettingsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSNotificationSettingsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_notificationSettingsId;
    NSString *_phoneFlag;
    NSString *_emailFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) notificationSettingsId;

/**
 * (no documentation provided)
 */
- (void) setNotificationSettingsId: (NSString *) newNotificationSettingsId;

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
#ifndef DEF_ENUNCIATENS0TSPrivacySettingsObj_H
#define DEF_ENUNCIATENS0TSPrivacySettingsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSPrivacySettingsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_privacySettingsIds;
    NSString *_privacyUserFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) privacySettingsIds;

/**
 * (no documentation provided)
 */
- (void) setPrivacySettingsIds: (NSString *) newPrivacySettingsIds;

/**
 * (no documentation provided)
 */
- (NSString *) privacyUserFlag;

/**
 * (no documentation provided)
 */
- (void) setPrivacyUserFlag: (NSString *) newPrivacyUserFlag;
@end /* interface ENUNCIATENS0TSPrivacySettingsObj */

#endif /* DEF_ENUNCIATENS0TSPrivacySettingsObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantDetailsObj_H
#define DEF_ENUNCIATENS0TSRestaurantDetailsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantDetailsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_openNowFlag;
    NSString *_dealHeadline;
    NSArray *_photoList;
    NSString *_moreInfoFlag;
    NSString *_menuFlag;
    NSString *_userRestaurantSavedFlag;
    NSString *_userRestaurantFavFlag;
    NSString *_userRestaurantTipFlag;
}

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
@end /* interface ENUNCIATENS0TSRestaurantDetailsObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantDetailsObj_H */
#ifndef DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_H
#define DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSSocialAutoPubSettingsObj : NSObject <EnunciateXML>
{
  @private
    NSString *_favFbFlag;
    NSString *_favTwitterFlag;
    NSString *_favTumblrFlag;
    NSString *_tipsFbFlag;
    NSString *_tipsTwitterFlag;
    NSString *_tipsTumblrFlag;
    NSString *_recoFbFlag;
    NSString *_recoTwitterFlag;
    NSString *_recoTumblrFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) favFbFlag;

/**
 * (no documentation provided)
 */
- (void) setFavFbFlag: (NSString *) newFavFbFlag;

/**
 * (no documentation provided)
 */
- (NSString *) favTwitterFlag;

/**
 * (no documentation provided)
 */
- (void) setFavTwitterFlag: (NSString *) newFavTwitterFlag;

/**
 * (no documentation provided)
 */
- (NSString *) favTumblrFlag;

/**
 * (no documentation provided)
 */
- (void) setFavTumblrFlag: (NSString *) newFavTumblrFlag;

/**
 * (no documentation provided)
 */
- (NSString *) tipsFbFlag;

/**
 * (no documentation provided)
 */
- (void) setTipsFbFlag: (NSString *) newTipsFbFlag;

/**
 * (no documentation provided)
 */
- (NSString *) tipsTwitterFlag;

/**
 * (no documentation provided)
 */
- (void) setTipsTwitterFlag: (NSString *) newTipsTwitterFlag;

/**
 * (no documentation provided)
 */
- (NSString *) tipsTumblrFlag;

/**
 * (no documentation provided)
 */
- (void) setTipsTumblrFlag: (NSString *) newTipsTumblrFlag;

/**
 * (no documentation provided)
 */
- (NSString *) recoFbFlag;

/**
 * (no documentation provided)
 */
- (void) setRecoFbFlag: (NSString *) newRecoFbFlag;

/**
 * (no documentation provided)
 */
- (NSString *) recoTwitterFlag;

/**
 * (no documentation provided)
 */
- (void) setRecoTwitterFlag: (NSString *) newRecoTwitterFlag;

/**
 * (no documentation provided)
 */
- (NSString *) recoTumblrFlag;

/**
 * (no documentation provided)
 */
- (void) setRecoTumblrFlag: (NSString *) newRecoTumblrFlag;
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
#ifndef DEF_ENUNCIATENS0TSUserProfileObj_H
#define DEF_ENUNCIATENS0TSUserProfileObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSUserProfileObj : NSObject <EnunciateXML>
{
  @private
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
    NSArray *_testaurantDetailsList;
}

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
- (NSArray *) testaurantDetailsList;

/**
 * (no documentation provided)
 */
- (void) setTestaurantDetailsList: (NSArray *) newTestaurantDetailsList;
@end /* interface ENUNCIATENS0TSUserProfileObj */

#endif /* DEF_ENUNCIATENS0TSUserProfileObj_H */
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
    NSString *_restaurantCity;
    NSString *_restaurantState;
    NSString *_restaurantCountry;
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
- (NSString *) restaurantCity;

/**
 * (no documentation provided)
 */
- (void) setRestaurantCity: (NSString *) newRestaurantCity;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantState;

/**
 * (no documentation provided)
 */
- (void) setRestaurantState: (NSString *) newRestaurantState;

/**
 * (no documentation provided)
 */
- (NSString *) restaurantCountry;

/**
 * (no documentation provided)
 */
- (void) setRestaurantCountry: (NSString *) newRestaurantCountry;

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
    ENUNCIATENS0TSSocialAutoPubSettingsObj *_tsSocialAutoPubSettingsObj;
    NSString *_facebookStatus;
    NSString *_twitterStatus;
    NSString *_foursquareStatus;
    NSString *_tumblrStatus;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSSocialAutoPubSettingsObj *) tsSocialAutoPubSettingsObj;

/**
 * (no documentation provided)
 */
- (void) setTsSocialAutoPubSettingsObj: (ENUNCIATENS0TSSocialAutoPubSettingsObj *) newTsSocialAutoPubSettingsObj;

/**
 * (no documentation provided)
 */
- (NSString *) facebookStatus;

/**
 * (no documentation provided)
 */
- (void) setFacebookStatus: (NSString *) newFacebookStatus;

/**
 * (no documentation provided)
 */
- (NSString *) twitterStatus;

/**
 * (no documentation provided)
 */
- (void) setTwitterStatus: (NSString *) newTwitterStatus;

/**
 * (no documentation provided)
 */
- (NSString *) foursquareStatus;

/**
 * (no documentation provided)
 */
- (void) setFoursquareStatus: (NSString *) newFoursquareStatus;

/**
 * (no documentation provided)
 */
- (NSString *) tumblrStatus;

/**
 * (no documentation provided)
 */
- (void) setTumblrStatus: (NSString *) newTumblrStatus;
@end /* interface ENUNCIATENS0TSSocialSettingsObj */

#endif /* DEF_ENUNCIATENS0TSSocialSettingsObj_H */
#ifndef DEF_ENUNCIATENS0TSRestaurantObj_H
#define DEF_ENUNCIATENS0TSRestaurantObj_H

/**
 * (no documentation provided)
 */
@interface ENUNCIATENS0TSRestaurantObj : NSObject <EnunciateXML>
{
  @private
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
@end /* interface ENUNCIATENS0TSRestaurantObj */

#endif /* DEF_ENUNCIATENS0TSRestaurantObj_H */
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