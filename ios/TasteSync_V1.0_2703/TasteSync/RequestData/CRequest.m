//
//  CRequest.m
//  TasteSync
//
//  Created by HP on 7/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "CRequest.h"

#define LINK_REQUEST @"http://192.168.0.101:8080/tsws/services/"
#define USER_REQUEST @"user/"
#define RESTAURANT_REQUEST @"restaurant/"

@interface CRequest()
{
    NSString* _url;
    NSMutableData* _data;
    ASIHTTPRequest* _request;
    ASIFormDataRequest* _formRequest;
}
@end

@implementation CRequest
-(id)initWithURL:(NSString*)url RQType:(RequestType)type RQData:(RequestData)data RQCategory:(RequestCategory)category
{
    self = [super init];
    if (self) {
        if (data == RequestDataUser)
            _url = [LINK_REQUEST stringByAppendingString:USER_REQUEST];
        if (data == RequestDataRestaurant) 
            _url = [LINK_REQUEST stringByAppendingString:RESTAURANT_REQUEST];
        _url = [_url stringByAppendingString:url];
        
        _data = [[NSMutableData alloc]init];
        
        NSURL* linkRequest = [NSURL URLWithString:_url];
        
        if (category == ApplicationForm) {
            _formRequest = [ASIFormDataRequest requestWithURL:linkRequest];
            _formRequest.delegate = self;
            if (type == RequestTypePost){
                [_formRequest setRequestMethod:@"POST"];
            }
            else
            {
                [_formRequest setRequestMethod:@"GET"];
            }
        }
        else
        {
            _request = [ASIHTTPRequest requestWithURL:linkRequest];
            _request.delegate = self;
        
            if (type == RequestTypePost){
                [_request setRequestMethod:@"POST"];
            }
            else
            {
                [_request setRequestMethod:@"GET"];
            }
        }
    }
    return self;
}

-(void)setHeader:(HeaderType)type
{
    
    NSMutableDictionary* dic = [NSMutableDictionary dictionary];
    if (type == HeaderTypeJSON) 
        [dic setValue:@"application/json" forKey:@"Content-Type"];
    if (type == HeaderTypeTEXT)
        [dic setValue:@"application/text" forKey:@"Content-Type"];
    [_request setRequestHeaders:dic];
}

-(void)setJSON:(NSString*)JsonText
{
    [_request appendPostData:[JsonText dataUsingEncoding:NSUTF8StringEncoding]];
}

-(void)startRequest
{
    [_request startSynchronous];
}

-(void)setFormPostValue:(NSString*)value forKey:(NSString*)key
{
    [_formRequest setPostValue:value forKey:key];
}

-(void)startFormRequest
{
    [_formRequest startSynchronous];
}

- (void)requestStarted:(ASIHTTPRequest *)request
{
    NSLog(@"requestStarted");
}
- (void)request:(ASIHTTPRequest *)request didReceiveResponseHeaders:(NSDictionary *)responseHeaders
{
    NSLog(@"didReceiveResponseHeaders");
}
- (void)request:(ASIHTTPRequest *)request willRedirectToURL:(NSURL *)newURL{
    NSLog(@"willRedirectToURL");
}
- (void)requestFinished:(ASIHTTPRequest *)request
{
    [self.delegate responseData:_data];
}
- (void)requestFailed:(ASIHTTPRequest *)request{
    NSLog(@"requestFailed");
}
- (void)requestRedirected:(ASIHTTPRequest *)request{
    NSLog(@"requestRedirected");
}
- (void)request:(ASIHTTPRequest *)request didReceiveData:(NSData *)data
{
    [_data appendData:data];
}
- (void)authenticationNeededForRequest:(ASIHTTPRequest *)request
{
    NSLog(@"authenticationNeededForRequest");
}
- (void)proxyAuthenticationNeededForRequest:(ASIHTTPRequest *)request
{
    NSLog(@"proxyAuthenticationNeededForRequest");
}
@end
