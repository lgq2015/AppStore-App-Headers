/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GOOAlertViewDelegate.h>
#import <YouTube/YTServiceEndpointCommand.h>

@protocol YTUserAuth, YTResponder;
@class YTFlagService, GOOAlertView, YTIServiceEndpoint, NSString;

@interface YTFlagEndpointCommand : NSObject <GOOAlertViewDelegate, YTServiceEndpointCommand> {

	YTFlagService* _flagService;
	id<YTUserAuth> _userAuthenticator;
	GOOAlertView* _alertView;
	YTIServiceEndpoint* _endpoint;
	id<YTResponder> _sender;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertViewDidDisappear:(id)arg1 cancelAction:(char)arg2 ;
-(id)initWithFlagService:(id)arg1 userAuthenticator:(id)arg2 ;
-(void)executeWithEndpoint:(id)arg1 entry:(id)arg2 sender:(id)arg3 ;
-(void)authenticateThenMakeFlagRequest;
-(void)makeFlagRequest;
-(void)reset;
@end

