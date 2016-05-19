/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTInnerTubeResponseCacheKeyProtocol.h>

@class NSString, YTIInnerTubeContext, YTIPlayerRequest, PBMutableArray, YTIForceAdParameters;

@interface YTIWatchNextRequest : PBGeneratedMessage <YTInnerTubeResponseCacheKeyProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasContext; 
@property (nonatomic,retain) YTIInnerTubeContext * context; 
@property (assign,nonatomic) char hasVideoId; 
@property (nonatomic,retain) NSString * videoId; 
@property (assign,nonatomic) char hasPlaylistId; 
@property (nonatomic,retain) NSString * playlistId; 
@property (assign,nonatomic) char hasParams; 
@property (nonatomic,retain) NSString * params; 
@property (assign,nonatomic) char hasPlaylistIndex; 
@property (assign,nonatomic) unsigned playlistIndex; 
@property (assign,nonatomic) char hasContinuation; 
@property (nonatomic,retain) NSString * continuation; 
@property (assign,nonatomic) char hasIsAdPlayback; 
@property (assign,nonatomic) char isAdPlayback; 
@property (assign,nonatomic) char hasMdxUseDevServer; 
@property (assign,nonatomic) char mdxUseDevServer; 
@property (assign,nonatomic) char hasPlayerRequest; 
@property (nonatomic,retain) YTIPlayerRequest * playerRequest; 
@property (assign,nonatomic) char hasReferrer; 
@property (nonatomic,retain) NSString * referrer; 
@property (assign,nonatomic) char hasReferringApp; 
@property (nonatomic,retain) NSString * referringApp; 
@property (assign,nonatomic) char hasWatchNextType; 
@property (assign,nonatomic) int watchNextType; 
@property (assign,nonatomic) char hasInstalledSharingServiceIdsArray; 
@property (nonatomic,retain) PBMutableArray * installedSharingServiceIdsArray; 
@property (assign,nonatomic) char hasAdParams; 
@property (nonatomic,retain) NSString * adParams; 
@property (assign,nonatomic) char hasForceAdParameters; 
@property (nonatomic,retain) YTIForceAdParameters * forceAdParameters; 
@property (assign,nonatomic) char hasRequestMusicSequence; 
@property (assign,nonatomic) char requestMusicSequence; 
@property (assign,nonatomic) char hasRequestAutomix; 
@property (assign,nonatomic) char requestAutomix; 
@property (assign,nonatomic) char hasTunerSetting; 
@property (assign,nonatomic) int tunerSetting; 
@property (assign,nonatomic) char hasEnableMdxAutoplay; 
@property (assign,nonatomic) char enableMdxAutoplay; 
@property (assign,nonatomic) char hasIsMdxPlayback; 
@property (assign,nonatomic) char isMdxPlayback; 
@property (assign,nonatomic) char hasTunerSettingValue; 
@property (assign,nonatomic) int tunerSettingValue; 
@property (assign,nonatomic) char hasRacyCheckOk; 
@property (assign,nonatomic) char racyCheckOk; 
@property (assign,nonatomic) char hasContentCheckOk; 
@property (assign,nonatomic) char contentCheckOk; 
@property (assign,nonatomic) char hasIsAudioOnly; 
@property (assign,nonatomic) char isAudioOnly; 
@property (assign,nonatomic) char hasAutonavEnabled; 
@property (assign,nonatomic) char autonavEnabled; 
@property (assign,nonatomic) char hasAutonavState; 
@property (assign,nonatomic) int autonavState; 
@property (assign,nonatomic) char hasGamingEventId; 
@property (nonatomic,retain) NSString * gamingEventId; 
+(id)watchNextRequestWithNavEndpoint:(id)arg1 ;
+(id)watchNextRequestWithNavEndpoint:(id)arg1 autonavSettingsState:(int)arg2 forceAdParameters:(id)arg3 sharingServiceIds:(id)arg4 ;
+(id)watchNextRequestWithAdVideoID:(id)arg1 clickTrackingParams:(id)arg2 contentResponseAdNextParams:(id)arg3 ;
+(id)watchNextRequestWithAdVideoID:(id)arg1 ;
+(id)watchNextRequestWithNavEndpoint:(id)arg1 forceAdParameters:(id)arg2 ;
+(id)watchNextRequestWithNavEndpoint:(id)arg1 autonavSettingsState:(int)arg2 ;
+(id)descriptor;
-(id)innerTubeResponseCacheKey;
@end

