/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol YTAdTimeoutControllerDelegate;
@class YTIAdTimeoutConfig, NSTimer;

@interface YTAdTimeoutController : NSObject {

	YTIAdTimeoutConfig* _config;
	double _cumulativeRebufferTime;
	char _playbackStarted;
	double _rebufferStartTime;
	id<YTAdTimeoutControllerDelegate> _delegate;
	NSTimer* _timer;

}

@property (assign,nonatomic,__weak) id<YTAdTimeoutControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSTimer * timer;                                              //@synthesize timer=_timer - In the implementation block
-(void)setTimerWithTimeoutMillis:(int)arg1 delegateSelector:(SEL)arg2 ;
-(void)startVideoLoadTimer;
-(void)startRebufferTimerAtAbsoluteTime:(double)arg1 ;
-(void)clearRebufferTimerAtAbsoluteTime:(double)arg1 ;
-(id)initWithAdTimeoutConfig:(id)arg1 ;
-(void)metadataLoadDidBegin;
-(void)metadataLoadDidEnd;
-(void)playerStateDidChangeToState:(int)arg1 atAbsoluteTime:(double)arg2 ;
-(void)setDelegate:(id<YTAdTimeoutControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<YTAdTimeoutControllerDelegate>)delegate;
-(void)invalidate;
-(void)clearTimer;
-(NSTimer *)timer;
@end

