/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TAGRateLimiter : NSObject {

	double _secondsPerToken;
	double _maxTokens;
	double _tokens;
	double _lastTrackTime;

}

@property (assign,nonatomic) double secondsPerToken;              //@synthesize secondsPerToken=_secondsPerToken - In the implementation block
@property (assign,nonatomic) double maxTokens;                    //@synthesize maxTokens=_maxTokens - In the implementation block
@property (assign,nonatomic) double tokens;                       //@synthesize tokens=_tokens - In the implementation block
@property (assign,nonatomic) double lastTrackTime;                //@synthesize lastTrackTime=_lastTrackTime - In the implementation block
+(id)rateLimiterWithMaxTokens:(double)arg1 secondsPerToken:(double)arg2 ;
-(void)setMaxTokens:(double)arg1 ;
-(void)setSecondsPerToken:(double)arg1 ;
-(double)secondsPerToken;
-(double)maxTokens;
-(double)lastTrackTime;
-(void)setLastTrackTime:(double)arg1 ;
-(char)tokenAvailable;
-(double)tokens;
-(void)setTokens:(double)arg1 ;
@end

