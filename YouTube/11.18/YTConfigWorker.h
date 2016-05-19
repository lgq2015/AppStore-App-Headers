/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseWorker.h>
#import <YouTube/YTWorker.h>

@protocol YTWorkerDelegate;
@class YTConfigService, NSDate, YTGlobalConfig, NSString;

@interface YTConfigWorker : YTBaseWorker <YTWorker> {

	YTConfigService* _configService;
	id<YTWorkerDelegate> _workerDelegate;
	NSDate* _lastRequestDate;
	YTGlobalConfig* _globalConfig;

}

@property (nonatomic,retain) NSDate * lastRequestDate;                                //@synthesize lastRequestDate=_lastRequestDate - In the implementation block
@property (nonatomic,readonly) YTGlobalConfig * globalConfig;                         //@synthesize globalConfig=_globalConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<YTWorkerDelegate> workerDelegate;              //@synthesize workerDelegate=_workerDelegate - In the implementation block
-(YTGlobalConfig *)globalConfig;
-(void)startWorkWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(int)workerRequirements;
-(char)runsAsynchronously;
-(char)isWorkingAsynchronously;
-(id<YTWorkerDelegate>)workerDelegate;
-(void)setWorkerDelegate:(id<YTWorkerDelegate>)arg1 ;
-(id)initWithGlobalConfig:(id)arg1 configService:(id)arg2 ;
-(void)setLastRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastRequestDate;
@end

