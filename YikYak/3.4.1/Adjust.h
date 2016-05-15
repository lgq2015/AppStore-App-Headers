/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADJActivityHandler, ADJLogger;
@interface Adjust : NSObject {

	id<ADJActivityHandler> _activityHandler;
	id<ADJLogger> _logger;

}

@property (nonatomic,retain) id<ADJActivityHandler> activityHandler;              //@synthesize activityHandler=_activityHandler - In the implementation block
@property (nonatomic,retain) id<ADJLogger> logger;                                //@synthesize logger=_logger - In the implementation block
+(void)appDidLaunch:(id)arg1 ;
+(void)trackEvent:(id)arg1 ;
+(void)trackSubsessionStart;
+(void)trackSubsessionEnd;
+(void)appWillOpenUrl:(id)arg1 ;
+(void)setDeviceToken:(id)arg1 ;
+(void)setOfflineMode:(char)arg1 ;
+(id)getInstance;
+(void)setEnabled:(char)arg1 ;
+(char)isEnabled;
-(void)appDidLaunch:(id)arg1 ;
-(void)trackEvent:(id)arg1 ;
-(void)trackSubsessionStart;
-(void)trackSubsessionEnd;
-(void)appWillOpenUrl:(id)arg1 ;
-(void)setDeviceToken:(id)arg1 ;
-(void)setOfflineMode:(char)arg1 ;
-(char)checkActivityHandler;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
-(void)setActivityHandler:(id<ADJActivityHandler>)arg1 ;
-(id<ADJActivityHandler>)activityHandler;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
@end

