/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/FBFunnelSenderDelegate.h>

@class NSString;

@interface IGAnalyticsFunnelSender : NSObject <FBFunnelSenderDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)funnelNames;
-(void)reportDebug:(id)arg1 ;
-(unsigned)samplingRateForFunnel:(id)arg1 ;
-(char)isInCTScan;
-(char)isRunningInTestEnvironment;
-(id)prefixFunnelName:(id)arg1 ;
-(void)logFunnelExtra:(id)arg1 ;
-(void)reportWarning:(id)arg1 ;
@end

