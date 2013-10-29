//
//  NotificationObj.h
//  TasteSync
//
//  Created by Victor on 12/26/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserObj.h"

#define TYPE_1  1
#define TYPE_2  2
#define TYPE_3  3
#define TYPE_4  4
#define TYPE_5  5
#define TYPE_6  6
#define TYPE_7  7

#define NO_TITLE_1     @"needs a recommendation"
#define NO_TITLE_2(res_name)     [NSString stringWithFormat:@"%@ recommendation for you",res_name]
#define NO_TITLE_3     @"has a follow-up question"
#define NO_TITLE_4     @"sent you a message"
#define NO_TITLE_5     @"liked your recommendation"
#define NO_TITLE_6     @"Did you like any of these recommendations?"
#define NO_TITLE_7(res_name)     [NSString stringWithFormat:@"There is a deal available on %@",res_name]

typedef enum
{
     NotificationRecorequestNeeded = 1,
     NotificationRecommendationsForYou = 2,
     NotificationFollowUpQuestion = 3,
     NotificationMessageForYou = 4,
     NotificationSomeoneLiked = 5,
     NotificationDidYouLike = 6,
     NotificationDeal = 7
}NotificationType;

@interface NotificationObj : NSObject

@property (nonatomic, assign) BOOL read;

@property (nonatomic, assign) NotificationType type ;

@property (nonatomic, strong) UserObj *user;

@property (nonatomic, strong) NSString *description;

@property (nonatomic, strong) NSString* linkId;

@end
