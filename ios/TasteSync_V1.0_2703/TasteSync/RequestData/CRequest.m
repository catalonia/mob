//
//  CRequest.m
//  TasteSync
//
//  Created by HP on 7/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "CRequest.h"
#import "UserDefault.h"

#define LINK_REQUEST @":8080/tsws/services/"
#define USER_REQUEST @"user/"
#define RESTAURANT_REQUEST @"restaurant/"
#define ASK_REQUEST @"ask/"
#define POPULATE_REQUEST @"populate/"

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
        self.showIndicate = NO;
        _url = [@"http://" stringByAppendingString:[UserDefault userDefault].IPAdress];
        _url = [_url stringByAppendingString:LINK_REQUEST];
        if (data == RequestDataUser)
            _url = [_url stringByAppendingString:USER_REQUEST];
        if (data == RequestDataRestaurant)
            _url = [_url stringByAppendingString:RESTAURANT_REQUEST];
        if (data == RequestDataAsk)
            _url = [_url stringByAppendingString:ASK_REQUEST];
        if (data == RequestPopulate)
            _url = [_url stringByAppendingString:POPULATE_REQUEST];
        _url = [_url stringByAppendingString:url];
        
        NSLog(@"url: %@", _url);
        
        _data = [[NSMutableData alloc]init];
        
        NSURL* linkRequest = [NSURL URLWithString:_url];
        
        self.key = 0;
        
        if (category == ApplicationForm) {
            _formRequest = [ASIFormDataRequest requestWithURL:linkRequest];
            _formRequest.delegate = self;
            if (type == RequestTypePost){
                [_formRequest setRequestMethod:@"POST"];
            }
            else
            {
                [_formRequest setRequestMethod:@"GET"];
                [_formRequest addRequestHeader:@"Content-Type" value:@"application/x-www-form-urlencoded"];
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

-(id)initWithURL:(NSString*)url RQType:(RequestType)type RQData:(RequestData)data RQCategory:(RequestCategory)category withKey:(int)key
{
    self = [super init];
    if (self) {
        self.showIndicate = NO;
        _url = [@"http://" stringByAppendingString:[UserDefault userDefault].IPAdress];
        _url = [_url stringByAppendingString:LINK_REQUEST];
        if (data == RequestDataUser)
            _url = [_url stringByAppendingString:USER_REQUEST];
        if (data == RequestDataRestaurant)
            _url = [_url stringByAppendingString:RESTAURANT_REQUEST];
        if (data == RequestDataAsk)
            _url = [_url stringByAppendingString:ASK_REQUEST];
        if (data == RequestPopulate)
            _url = [_url stringByAppendingString:POPULATE_REQUEST];
        _url = [_url stringByAppendingString:url];
        
        NSLog(@"url: %@", _url);
        
        _data = [[NSMutableData alloc]init];
        
        NSURL* linkRequest = [NSURL URLWithString:_url];
        
        self.key = key;
        
        if (category == ApplicationForm) {
            _formRequest = [ASIFormDataRequest requestWithURL:linkRequest];
            _formRequest.delegate = self;
            if (type == RequestTypePost){
                [_formRequest setRequestMethod:@"POST"];
            }
            else
            {
                [_formRequest setRequestMethod:@"GET"];
                 [_formRequest addRequestHeader:@"Content-Type" value:@"application/x-www-form-urlencoded"];
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
        [self setDefaultHeader];
    }
    return self;
}

-(id)initWithLink:(NSString*)url RQType:(RequestType)type RQCategory:(RequestCategory)category withKey:(int)key
{
    self = [super init];
    if (self) {
        self.showIndicate = NO;
        _url = url;
        
        NSLog(@"url: %@", _url);
        
        _data = [[NSMutableData alloc]init];
        
        NSURL* linkRequest = [NSURL URLWithString:_url];
        
        self.key = key;
        
        if (category == ApplicationForm) {
            _formRequest = [ASIFormDataRequest requestWithURL:linkRequest];
            _formRequest.delegate = self;
            if (type == RequestTypePost){
                [_formRequest setRequestMethod:@"POST"];
            }
            else
            {
                [_formRequest setRequestMethod:@"GET"];
                [_formRequest addRequestHeader:@"Content-Type" value:@"application/x-www-form-urlencoded"];
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
        [self setDefaultHeader];
    }
    return self;
}

-(void)setDefaultHeader
{
    UIDevice *currentDevice = [UIDevice currentDevice];
    NSLog(@"[currentDevice identifierForVendor]: %@",[[currentDevice identifierForVendor] UUIDString]);
    NSMutableDictionary* dic1 = [NSMutableDictionary dictionary];
    [dic1 setValue:@"28112013" forKey:@"version_date"];
    [_request setRequestHeaders:dic1];
    
    NSMutableDictionary* dic2 = [NSMutableDictionary dictionary];
    [dic2 setValue:@"156748431578743asdfasd" forKey:@"oauth_token"];
    [_request setRequestHeaders:dic2];
    
    NSMutableDictionary* dic3 = [NSMutableDictionary dictionary];
    [dic3 setValue:[[currentDevice identifierForVendor] UUIDString] forKey:@"identifierForVendor"];
    [_request setRequestHeaders:dic3];
}
-(void)setHeader:(HeaderType)type
{
    NSMutableDictionary* dic = [NSMutableDictionary dictionary];
    if (type == HeaderTypeJSON) 
        [dic setValue:@"application/json" forKey:@"Content-Type"];
    if (type == HeaderTypeTEXT)
        [dic setValue:@"application/text" forKey:@"Content-Type"];
    [_request setRequestHeaders:dic];
    [_formRequest setRequestHeaders:dic];
}

-(void)setJSON:(NSString*)JsonText
{
    [_request appendPostData:[JsonText dataUsingEncoding:NSUTF8StringEncoding]];
}

-(void)startRequest
{
    [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:YES];
    [_request startSynchronous];
    
}

-(void)setFormPostValue:(NSString*)value forKey:(NSString*)key
{
    [_formRequest setPostValue:value forKey:key];
    
}


-(void)startFormRequest
{
    [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:YES];
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
    NSLog(@"key: %d", self.key);
    if (self.showIndicate) {
        [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:YES];
    }
    else
    {
        [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:NO];
    }
    [self.delegate responseData:_data WithKey:self.key  UserData:self.userData];
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
