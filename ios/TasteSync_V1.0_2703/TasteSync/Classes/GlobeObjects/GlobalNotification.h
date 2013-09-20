//
//  GlobalNotification.h
//  TasteSync
//
//  Created by Victor on 1/29/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NotificationObj.h"
#import "CRequest.h"
@protocol NotificationDelegate
-(void)getDataSuccess;
@end
@interface GlobalNotification : NSObject<RequestDelegate>

@property (nonatomic, assign) int total,unread,read, index;
@property (nonatomic, strong) NSMutableArray *arrData,*arrDataUnread,*arrDataRead;
@property (nonatomic, strong) NotificationObj *notifObj;
@property (nonatomic, assign) BOOL isSend;
@property (nonatomic, assign) id<NotificationDelegate> delegate;

- (id) initWithALlType;

- (NotificationObj *) gotoNextNotification;

//- (void) reOrder;

- (void) addObject:(NotificationObj *) obj;

-(void)requestData;

-(void)reloadUpData;

-(void)reloadDownData:(int)index;
@end
