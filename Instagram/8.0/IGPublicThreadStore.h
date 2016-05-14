/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGThreadStoreNetworkingProtocol.h>
#import <Instagram/IGUserSessionClearableObject.h>
#import <Instagram/IGThreadStoreProtocol.h>

@class IGDirectThread, NSString, IGNonCurrentUserDefaults, NSMutableArray, NSArray, IGDirectThreadDiskCache;

@interface IGPublicThreadStore : NSObject <IGThreadStoreNetworkingProtocol, IGUserSessionClearableObject, IGThreadStoreProtocol> {

	IGDirectThread* _ownedPublicThread;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSMutableArray* _unreadFollowedPublicThreads;
	NSMutableArray* _readFollowedPublicThreads;
	NSArray* _orderedFollowedPublicThreads;
	IGDirectThreadDiskCache* _directThreadDiskCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * userSessionPK;                                     //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;               //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) NSMutableArray * unreadFollowedPublicThreads;                 //@synthesize unreadFollowedPublicThreads=_unreadFollowedPublicThreads - In the implementation block
@property (nonatomic,retain) NSMutableArray * readFollowedPublicThreads;                   //@synthesize readFollowedPublicThreads=_readFollowedPublicThreads - In the implementation block
@property (nonatomic,retain) IGDirectThread * ownedPublicThread;                           //@synthesize ownedPublicThread=_ownedPublicThread - In the implementation block
@property (nonatomic,retain) NSArray * orderedFollowedPublicThreads;                       //@synthesize orderedFollowedPublicThreads=_orderedFollowedPublicThreads - In the implementation block
@property (nonatomic,retain) IGDirectThreadDiskCache * directThreadDiskCache;              //@synthesize directThreadDiskCache=_directThreadDiskCache - In the implementation block
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)fetchThreadWithID:(id)arg1 cursorOption:(unsigned)arg2 cursorValue:(id)arg3 mergeOption:(unsigned)arg4 successfulThreadHandler:(/*^block*/id)arg5 failureHandler:(/*^block*/id)arg6 ;
-(id)storedThreadWithID:(id)arg1 ;
-(id)updateStoreWithThreadDictionary:(id)arg1 mergeOption:(unsigned)arg2 ;
-(IGDirectThread *)ownedPublicThread;
-(void)setOwnedPublicThread:(IGDirectThread *)arg1 ;
-(void)refreshInboxWithNextMaxID:(id)arg1 successfulInboxHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)onBackground;
-(IGDirectThreadDiskCache *)directThreadDiskCache;
-(void)postInboxUpdatedNotification;
-(void)cacheThreadsToDisk:(id)arg1 ;
-(void)cacheThreadToDisk:(id)arg1 withAdditionalContent:(char)arg2 ;
-(void)postThreadUpdatedNotificationForThread:(id)arg1 withReason:(int)arg2 ;
-(void)postThreadUpdatedNotificationForThreadID:(id)arg1 withReason:(int)arg2 ;
-(void)postThreadUpdatedNotificationForThread:(id)arg1 ;
-(char)removeThreadWithID:(id)arg1 ;
-(void)handleRealtimeAddContent:(id)arg1 threadID:(id)arg2 ;
-(void)postThreadUpdatedNotificationForThreadID:(id)arg1 ;
-(void)postInboxUpdatedNotificationWithMegaphone:(id)arg1 ;
-(void)setDirectThreadDiskCache:(IGDirectThreadDiskCache *)arg1 ;
-(NSMutableArray *)unreadFollowedPublicThreads;
-(NSMutableArray *)readFollowedPublicThreads;
-(void)recordThreadsDisplayingOrder;
-(void)getOwnedPublicThreadwithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)setUnreadFollowedPublicThreads:(NSMutableArray *)arg1 ;
-(void)getUnreadFollowedPublicThreadsWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)setReadFollowedPublicThreads:(NSMutableArray *)arg1 ;
-(void)getReadFollowedPublicThreadsWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)unarchiveCachedThreads;
-(void)storeMergedThread:(id)arg1 fromExistingThread:(id)arg2 ;
-(void)storeFollowedThread:(id)arg1 ;
-(NSArray *)orderedFollowedPublicThreads;
-(unsigned)indexOfThreadID:(id)arg1 inArray:(id)arg2 ;
-(void)storeThread:(id)arg1 into:(id)arg2 ;
-(void)storeThreadExistingThread:(id)arg1 ;
-(void)setOrderedFollowedPublicThreads:(NSArray *)arg1 ;
-(void)updateFollowedThreadsStatusWithDictionaries:(id)arg1 ;
-(void)updateOwnedThreadStatusWithDictionary:(id)arg1 ;
-(void)getPublicThreadForUserPK:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)sendSeenTimestampForThreadID:(id)arg1 forContent:(id)arg2 ;
-(id)getNextFollowedThreadIDForCurrentThreadId:(id)arg1 ;
-(void)fetchThreadWithID:(id)arg1 retryCount:(int)arg2 cursorOption:(unsigned)arg3 cursorValue:(id)arg4 mergeOption:(unsigned)arg5 successfulThreadHandler:(/*^block*/id)arg6 failureHandler:(/*^block*/id)arg7 ;
-(void)markFollowedThreadAsRead:(id)arg1 ;
-(void)deleteContent:(id)arg1 fromThread:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)threads;
@end

