/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIContentPlaybackContext, YTIAdPlaybackContext, YTIPrefetchPlaybackContext, YTIResumePlaybackContext, YTIOfflinePlaybackContext;

@interface YTIPlaybackContext : PBGeneratedMessage

@property (assign,nonatomic) char hasContentPlaybackContext; 
@property (nonatomic,retain) YTIContentPlaybackContext * contentPlaybackContext; 
@property (assign,nonatomic) char hasAdPlaybackContext; 
@property (nonatomic,retain) YTIAdPlaybackContext * adPlaybackContext; 
@property (assign,nonatomic) char hasPrefetchPlaybackContext; 
@property (nonatomic,retain) YTIPrefetchPlaybackContext * prefetchPlaybackContext; 
@property (assign,nonatomic) char hasResumePlaybackContext; 
@property (nonatomic,retain) YTIResumePlaybackContext * resumePlaybackContext; 
@property (assign,nonatomic) char hasOfflinePlaybackContext; 
@property (nonatomic,retain) YTIOfflinePlaybackContext * offlinePlaybackContext; 
+(id)adPlaybackContextWithAd:(id)arg1 ;
+(id)prefetchContextWithConnection:(int)arg1 millisecondsSinceLastUserAction:(double)arg2 onWiFi:(char)arg3 hasCarrier:(char)arg4 ;
+(id)contentPlaybackContextWithTimeSinceLastAd:(double)arg1 millisecondsSinceLastUserAction:(double)arg2 autoplaysSinceLastAd:(unsigned)arg3 connection:(int)arg4 visibility:(int)arg5 onWiFi:(char)arg6 autoplay:(char)arg7 autonav:(char)arg8 fling:(char)arg9 hasCarrier:(char)arg10 forceAdParameters:(id)arg11 ;
+(id)adSenseClientParametersStringOnWiFi:(char)arg1 ;
+(id)descriptor;
-(char)isEquivalentToPlaybackContext:(id)arg1 ;
@end

