/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseWorker.h>
#import <YouTube/YTWorker.h>

@protocol YTWorkerDelegate;
@class YTOfflineImageController, YTUserDefaults, NSTimer, NSDate, NSString;

@interface YTOfflineImageRepairWorker : YTBaseWorker <YTWorker> {

	YTOfflineImageController* _offlineImageController;
	YTUserDefaults* _userDefaults;
	NSTimer* _triggerTimer;
	id<YTWorkerDelegate> _workerDelegate;
	NSDate* _nextWorkDate;

}

@property (nonatomic,retain) NSDate * nextWorkDate;                                   //@synthesize nextWorkDate=_nextWorkDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<YTWorkerDelegate> workerDelegate;              //@synthesize workerDelegate=_workerDelegate - In the implementation block
-(void)startWorkWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(int)workerRequirements;
-(char)runsAsynchronously;
-(char)isWorkingAsynchronously;
-(id<YTWorkerDelegate>)workerDelegate;
-(void)setWorkerDelegate:(id<YTWorkerDelegate>)arg1 ;
-(id)initWithOfflineImageController:(id)arg1 userDefaults:(id)arg2 ;
-(void)setNextWorkDate:(NSDate *)arg1 ;
-(void)stopTriggerTimer;
-(void)doWorkWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)hasWorkWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(char)refreshIntervalHasExpired;
-(void)startTriggerTimer;
-(NSDate *)nextWorkDate;
-(void)triggerTimerDidFire;
-(void)dealloc;
@end

