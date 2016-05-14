/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOrderedSet, IGDirectThreadStore;

@interface IGDirectCoreService : NSObject

@property (nonatomic,readonly) NSOrderedSet * inboxThreads; 
@property (nonatomic,readonly) unsigned inboxSubscriptionStatus; 
@property (nonatomic,readonly) IGDirectThreadStore * threadStore; 
-(IGDirectThreadStore *)threadStore;
-(void)fetchThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOrderedSet *)inboxThreads;
-(unsigned)inboxSubscriptionStatus;
-(id)threadWithId:(id)arg1 ;
-(void)refreshWithNextMaxId:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

