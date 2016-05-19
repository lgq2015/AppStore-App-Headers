/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface YTQoEControllerState : NSObject {

	char _hasLastVideoItag;
	char _hasLastAudioItag;
	char _initialPingSent;
	NSString* _CPN;
	NSString* _adFormat;
	int _adBreakType;
	int _lastVideoItag;
	int _lastAudioItag;
	double _startAbsoluteTime;
	double _percentPreloaded;

}

@property (nonatomic,readonly) NSString * CPN;                                           //@synthesize CPN=_CPN - In the implementation block
@property (nonatomic,readonly) NSString * adFormat;                                      //@synthesize adFormat=_adFormat - In the implementation block
@property (nonatomic,readonly) int adBreakType;                                          //@synthesize adBreakType=_adBreakType - In the implementation block
@property (nonatomic,readonly) double startAbsoluteTime;                                 //@synthesize startAbsoluteTime=_startAbsoluteTime - In the implementation block
@property (nonatomic,readonly) char hasLastVideoItag;                                    //@synthesize hasLastVideoItag=_hasLastVideoItag - In the implementation block
@property (nonatomic,readonly) char hasLastAudioItag;                                    //@synthesize hasLastAudioItag=_hasLastAudioItag - In the implementation block
@property (assign,nonatomic) int lastVideoItag;                                          //@synthesize lastVideoItag=_lastVideoItag - In the implementation block
@property (assign,nonatomic) int lastAudioItag;                                          //@synthesize lastAudioItag=_lastAudioItag - In the implementation block
@property (assign,nonatomic) double percentPreloaded;                                    //@synthesize percentPreloaded=_percentPreloaded - In the implementation block
@property (assign,getter=isInitialPingSent,nonatomic) char initialPingSent;              //@synthesize initialPingSent=_initialPingSent - In the implementation block
+(id)stateWithCPN:(id)arg1 adFormat:(id)arg2 adBreakType:(int)arg3 ;
-(NSString *)CPN;
-(NSString *)adFormat;
-(id)initWithCPN:(id)arg1 adFormat:(id)arg2 adBreakType:(int)arg3 ;
-(void)setLastAudioItag:(int)arg1 ;
-(void)setLastVideoItag:(int)arg1 ;
-(int)adBreakType;
-(double)startAbsoluteTime;
-(char)hasLastVideoItag;
-(char)hasLastAudioItag;
-(int)lastVideoItag;
-(int)lastAudioItag;
-(double)percentPreloaded;
-(void)setPercentPreloaded:(double)arg1 ;
-(char)isInitialPingSent;
-(void)setInitialPingSent:(char)arg1 ;
@end

