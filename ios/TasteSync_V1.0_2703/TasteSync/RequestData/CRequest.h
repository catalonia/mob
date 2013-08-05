//
//  CRequest.h
//  TasteSync
//
//  Created by HP on 7/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"
#import "ASIFormDataRequest.h"

@protocol RequestDelegate <NSObject>

- (void)responseData:(NSData*)data WithKey:(int)key UserData:(id)userData;

@end

@interface CRequest : NSObject<ASIHTTPRequestDelegate>

typedef enum
{
    RequestTypePost = 1,
    RequestTypeGet = 2
}RequestType;

typedef enum
{
    RequestDataUser = 1,
    RequestDataRestaurant = 2
}RequestData;

typedef enum
{
    HeaderTypeJSON = 1,
    HeaderTypeTEXT = 2
}HeaderType;

typedef enum
{
    ApplicationForm = 1,
    ApplicationJson = 2
}RequestCategory;

@property(nonatomic,assign) id<RequestDelegate> delegate;
@property(nonatomic,assign) int key;
@property(nonatomic,assign) id userData;

-(id)initWithURL:(NSString*)url RQType:(RequestType)type RQData:(RequestData)data RQCategory:(RequestCategory)category;
-(id)initWithURL:(NSString*)url RQType:(RequestType)type RQData:(RequestData)data RQCategory:(RequestCategory)category withKey:(int)key;
-(void)setHeader:(HeaderType)type;
-(void)setJSON:(NSString*)JsonText;
-(void)startRequest;
-(void)setFormPostValue:(NSString*)value forKey:(NSString*)key;
-(void)startFormRequest;
@end
