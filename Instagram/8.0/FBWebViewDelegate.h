/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebViewDelegate <NSObject>
@optional
-(void)webView:(id)arg1 loadingStateChanged:(char)arg2;
-(void)webView:(id)arg1 progressChanged:(double)arg2;
-(void)webView:(id)arg1 titleChanged:(id)arg2;
-(void)webView:(id)arg1 URLChanged:(id)arg2;
-(void)webView:(id)arg1 navigationHistoryChangedCanGoBack:(char)arg2 canGoForward:(char)arg3;
-(char)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(int)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5;
-(void)webView:(id)arg1 didStartNavigationRequest:(id)arg2;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3;
-(void)webViewBlockingResourcesLoaded:(id)arg1;
-(void)webViewWillPushNavigationState:(id)arg1;
-(void)webViewWillPopNavigationState:(id)arg1;
-(void)webViewSelectionChanged:(id)arg1;
-(void)webView:(id)arg1 scriptMessageReceivedFrom:(id)arg2 forHandler:(id)arg3 withMessage:(id)arg4;

@end

