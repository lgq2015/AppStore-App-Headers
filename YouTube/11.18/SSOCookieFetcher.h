/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>

@class SSOService, NSMutableArray, UIWebView, SSOCookieFetchRequest, NSTimer, NSString;

@interface SSOCookieFetcher : NSObject <UIWebViewDelegate> {

	SSOService* _ssoService;
	NSMutableArray* _requestQueue;
	UIWebView* _cookieFetchWebView;
	SSOCookieFetchRequest* _currentRequest;
	char _continueURLStartedLoading;
	NSTimer* _timeoutTimer;
	double _fetchTimeout;

}

@property (assign,nonatomic) double fetchTimeout;                   //@synthesize fetchTimeout=_fetchTimeout - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)currentRequestDidFinishWithError:(id)arg1 ;
-(void)performFetchRequest:(id)arg1 ;
-(char)isURL:(id)arg1 terminationURL:(id)arg2 service:(id)arg3 ;
-(void)timeoutDidFire:(id)arg1 ;
-(double)fetchTimeout;
-(void)fetchCookiesForIdentity:(id)arg1 service:(id)arg2 continueURL:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)setFetchTimeout:(double)arg1 ;
-(void)dealloc;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
@end

