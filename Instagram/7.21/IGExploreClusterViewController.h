/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGExploreFeedViewController.h>
#import <Instagram/IGFeedStatusViewDataSource.h>
#import <Instagram/IGNetworkSourceDelegate.h>
#import <Instagram/IGAnalyticsModule.h>

@class IGNetworkSource, NSMutableSet, NSString;

@interface IGExploreClusterViewController : IGExploreFeedViewController <IGFeedStatusViewDataSource, IGNetworkSourceDelegate, IGAnalyticsModule> {

	IGNetworkSource* _networkSource;
	int _networkSourceStatus;
	NSMutableSet* _loggedImpressions;
	NSString* _clusterKey;

}

@property (nonatomic,retain) IGNetworkSource * networkSource;               //@synthesize networkSource=_networkSource - In the implementation block
@property (assign,nonatomic) int networkSourceStatus;                       //@synthesize networkSourceStatus=_networkSourceStatus - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;              //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,retain) NSString * clusterKey;                         //@synthesize clusterKey=_clusterKey - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int status; 
-(char)enableNavState;
-(id)analyticsModule;
-(id)initWithClusterKey:(id)arg1 type:(id)arg2 ;
-(NSMutableSet *)loggedImpressions;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(IGNetworkSource *)networkSource;
-(void)followStatusNotification:(id)arg1 ;
-(void)setNetworkSourceStatus:(int)arg1 ;
-(void)fetchMoreData;
-(void)logTap:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)logFollow:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logImpression:(id)arg1 viewed:(char)arg2 atIndex:(unsigned)arg3 ;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 mediaIndex:(unsigned)arg4 ;
-(int)networkSourceStatus;
-(void)logEvent:(id)arg1 item:(id)arg2 atPosition:(unsigned)arg3 fullScreen:(char)arg4 ;
-(NSString *)clusterKey;
-(char)loadedOnce;
-(char)failedWithAuthorizationError;
-(id)emptyMessage;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(id)feedStatusViewDataSource;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didFollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didUnfollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)setNetworkSource:(IGNetworkSource *)arg1 ;
-(void)setClusterKey:(NSString *)arg1 ;
-(unsigned)itemCount;
-(void)fetchData;
-(void)dealloc;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(int)status;
-(char)moreAvailable;
-(id)errorMessage;
@end

