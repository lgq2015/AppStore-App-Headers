/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <YouTube/YouTube-Structs.h>
@class LDImpressionBitVectors, NSMutableArray;

@interface LDAdVisibilityAggregator : NSObject {

	char _paused;
	char _skipped;
	char _fullscreen;
	char _miniplayer;
	char _viewableImpressionSent;
	char _measurable;
	char _measurableImpressionSent;
	char _groupMImpressionSent;
	int _duration;
	float _screenShare;
	int _lastMediaTime;
	int _timeCalculationMode;
	int _bufferingTime;
	int _negativeMediaTime;
	float _averageViewabilityPercentage;
	float _maximumViewabilityPercentage;
	LDImpressionBitVectors* _impressionBitVectors;
	float _coverage;
	float _volume;
	NSMutableArray* _tos;
	NSMutableArray* _mtos;
	NSMutableArray* _ctos;
	int _dtos;
	int _dtosNumber;
	NSMutableArray* _viewablePercentageSnapshots;
	NSMutableArray* _atos;
	int _audibleViewableTimeDelta;
	int _fullscreenTime;
	int _fullscreenTimeDelta;
	int _audibleTime;
	int _playTime;
	int _audibleTimeDelta;
	CGSize _documentSize;
	long long _lastTime;
	long long _firstTime;
	long long _createdTime;
	long long _vastStartEventTime;
	long long _playbackStartedTime;
	CGRect _position;

}

@property (assign,nonatomic) CGRect position;                                                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGSize documentSize;                                                          //@synthesize documentSize=_documentSize - In the implementation block
@property (assign,nonatomic) long long lastTime;                                                           //@synthesize lastTime=_lastTime - In the implementation block
@property (assign,nonatomic) long long firstTime;                                                          //@synthesize firstTime=_firstTime - In the implementation block
@property (assign,nonatomic) long long createdTime;                                                        //@synthesize createdTime=_createdTime - In the implementation block
@property (assign,nonatomic) long long vastStartEventTime;                                                 //@synthesize vastStartEventTime=_vastStartEventTime - In the implementation block
@property (assign,getter=isPaused,nonatomic) char paused;                                                  //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isSkipped,nonatomic) char skipped;                                                //@synthesize skipped=_skipped - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) char fullscreen;                                          //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,getter=isMiniplayer,nonatomic) char miniplayer;                                          //@synthesize miniplayer=_miniplayer - In the implementation block
@property (assign,getter=isViewableImpressionSent,nonatomic) char viewableImpressionSent;                  //@synthesize viewableImpressionSent=_viewableImpressionSent - In the implementation block
@property (assign,getter=isMeasurable,nonatomic) char measurable;                                          //@synthesize measurable=_measurable - In the implementation block
@property (assign,getter=isMeasurableImpressionSent,nonatomic) char measurableImpressionSent;              //@synthesize measurableImpressionSent=_measurableImpressionSent - In the implementation block
@property (assign,getter=isGroupMImpressionSent,nonatomic) char groupMImpressionSent;                      //@synthesize groupMImpressionSent=_groupMImpressionSent - In the implementation block
@property (assign,nonatomic) int duration;                                                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float screenShare;                                                            //@synthesize screenShare=_screenShare - In the implementation block
@property (assign,nonatomic) int lastMediaTime;                                                            //@synthesize lastMediaTime=_lastMediaTime - In the implementation block
@property (assign,nonatomic) int timeCalculationMode;                                                      //@synthesize timeCalculationMode=_timeCalculationMode - In the implementation block
@property (assign,nonatomic) int bufferingTime;                                                            //@synthesize bufferingTime=_bufferingTime - In the implementation block
@property (assign,nonatomic) int negativeMediaTime;                                                        //@synthesize negativeMediaTime=_negativeMediaTime - In the implementation block
@property (assign,nonatomic) long long playbackStartedTime;                                                //@synthesize playbackStartedTime=_playbackStartedTime - In the implementation block
@property (nonatomic,readonly) float averageViewabilityPercentage;                                         //@synthesize averageViewabilityPercentage=_averageViewabilityPercentage - In the implementation block
@property (nonatomic,readonly) float maximumViewabilityPercentage;                                         //@synthesize maximumViewabilityPercentage=_maximumViewabilityPercentage - In the implementation block
@property (nonatomic,retain) LDImpressionBitVectors * impressionBitVectors;                                //@synthesize impressionBitVectors=_impressionBitVectors - In the implementation block
@property (assign,nonatomic) float coverage;                                                               //@synthesize coverage=_coverage - In the implementation block
@property (assign,nonatomic) float volume;                                                                 //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSMutableArray * tos;                                                         //@synthesize tos=_tos - In the implementation block
@property (nonatomic,retain) NSMutableArray * mtos;                                                        //@synthesize mtos=_mtos - In the implementation block
@property (nonatomic,retain) NSMutableArray * ctos;                                                        //@synthesize ctos=_ctos - In the implementation block
@property (assign,nonatomic) int dtos;                                                                     //@synthesize dtos=_dtos - In the implementation block
@property (assign,nonatomic) int dtosNumber;                                                               //@synthesize dtosNumber=_dtosNumber - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewablePercentageSnapshots;                                 //@synthesize viewablePercentageSnapshots=_viewablePercentageSnapshots - In the implementation block
@property (nonatomic,retain) NSMutableArray * atos;                                                        //@synthesize atos=_atos - In the implementation block
@property (assign,nonatomic) int audibleViewableTimeDelta;                                                 //@synthesize audibleViewableTimeDelta=_audibleViewableTimeDelta - In the implementation block
@property (assign,nonatomic) int fullscreenTime;                                                           //@synthesize fullscreenTime=_fullscreenTime - In the implementation block
@property (assign,nonatomic) int fullscreenTimeDelta;                                                      //@synthesize fullscreenTimeDelta=_fullscreenTimeDelta - In the implementation block
@property (assign,nonatomic) int audibleTime;                                                              //@synthesize audibleTime=_audibleTime - In the implementation block
@property (assign,nonatomic) int playTime;                                                                 //@synthesize playTime=_playTime - In the implementation block
@property (assign,nonatomic) int audibleTimeDelta;                                                         //@synthesize audibleTimeDelta=_audibleTimeDelta - In the implementation block
+(void)initialize;
-(float)maximumViewabilityPercentage;
-(float)averageViewabilityPercentage;
-(float)systemVolume;
-(void)setTimeCalculationMode:(int)arg1 ;
-(void)setMeasurable:(char)arg1 ;
-(void)setDocumentSize:(CGSize)arg1 ;
-(char)isMeasurableImpressionSent;
-(char)isMeasurable;
-(void)setMeasurableImpressionSent:(char)arg1 ;
-(id)viewabilityData:(char)arg1 ;
-(void)setCoverage:(float)arg1 index:(unsigned)arg2 ;
-(void)setSkipped:(char)arg1 ;
-(void)setLastTime:(long long)arg1 ;
-(void)setVastStartEventTime:(long long)arg1 ;
-(char)isMiniplayer;
-(void)setMiniplayer:(char)arg1 ;
-(void)updateViewability:(long long)arg1 mediaTime:(int)arg2 coverage:(float)arg3 playing:(char)arg4 pauseMonitoring:(char)arg5 ;
-(void)setScreenShare:(float)arg1 ;
-(char)viewed;
-(char)isViewableImpressionSent;
-(void)setViewableImpressionSent:(char)arg1 ;
-(char)groupMViewed;
-(char)isGroupMImpressionSent;
-(void)setGroupMImpressionSent:(char)arg1 ;
-(void)updateViewabilityMetrics:(int)arg1 coverage:(float)arg2 volume:(float)arg3 pauseMonitoring:(char)arg4 ;
-(void)updateTimeBasedMetrics:(int)arg1 coverage:(float)arg2 volume:(float)arg3 pauseMonitoring:(char)arg4 ;
-(void)updateImpressionsStateBitVectors:(float)arg1 volume:(float)arg2 ;
-(char)audible:(float)arg1 ;
-(int)bucketIndexFromCoverage:(float)arg1 ;
-(char)halfDurationReached;
-(CGSize)documentSize;
-(long long)lastTime;
-(long long)firstTime;
-(void)setFirstTime:(long long)arg1 ;
-(long long)createdTime;
-(void)setCreatedTime:(long long)arg1 ;
-(long long)vastStartEventTime;
-(char)isSkipped;
-(float)screenShare;
-(int)lastMediaTime;
-(void)setLastMediaTime:(int)arg1 ;
-(int)timeCalculationMode;
-(int)negativeMediaTime;
-(void)setNegativeMediaTime:(int)arg1 ;
-(long long)playbackStartedTime;
-(void)setPlaybackStartedTime:(long long)arg1 ;
-(LDImpressionBitVectors *)impressionBitVectors;
-(void)setImpressionBitVectors:(LDImpressionBitVectors *)arg1 ;
-(NSMutableArray *)mtos;
-(void)setMtos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ctos;
-(void)setCtos:(NSMutableArray *)arg1 ;
-(int)dtos;
-(void)setDtos:(int)arg1 ;
-(int)dtosNumber;
-(void)setDtosNumber:(int)arg1 ;
-(NSMutableArray *)viewablePercentageSnapshots;
-(void)setViewablePercentageSnapshots:(NSMutableArray *)arg1 ;
-(NSMutableArray *)atos;
-(void)setAtos:(NSMutableArray *)arg1 ;
-(int)audibleViewableTimeDelta;
-(void)setAudibleViewableTimeDelta:(int)arg1 ;
-(int)fullscreenTime;
-(void)setFullscreenTime:(int)arg1 ;
-(int)fullscreenTimeDelta;
-(void)setFullscreenTimeDelta:(int)arg1 ;
-(int)audibleTime;
-(void)setAudibleTime:(int)arg1 ;
-(void)setPlayTime:(int)arg1 ;
-(int)audibleTimeDelta;
-(void)setAudibleTimeDelta:(int)arg1 ;
-(void)setCoverage:(float)arg1 ;
-(float)coverage;
-(void)setFullscreen:(char)arg1 ;
-(char)isPaused;
-(void)setVolume:(float)arg1 ;
-(id)init;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(void)setPosition:(CGRect)arg1 ;
-(CGRect)position;
-(void)setPaused:(char)arg1 ;
-(int)bufferingTime;
-(void)setBufferingTime:(int)arg1 ;
-(int)playTime;
-(NSMutableArray *)tos;
-(void)setTos:(NSMutableArray *)arg1 ;
-(float)volume;
-(char)isFullscreen;
@end

