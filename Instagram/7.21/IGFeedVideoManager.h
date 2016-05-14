/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface IGFeedVideoManager : NSObject {

	NSMutableSet* _inUsePool;
	NSMutableSet* _availablePool;

}

@property (nonatomic,readonly) int playerInUseCount; 
@property (nonatomic,readonly) NSMutableSet * inUsePool;                  //@synthesize inUsePool=_inUsePool - In the implementation block
@property (nonatomic,readonly) NSMutableSet * availablePool;              //@synthesize availablePool=_availablePool - In the implementation block
+(id)sharedFeedVideoManager;
-(void)finishUsingPlayer:(id)arg1 ;
-(id)dequeueReusablePlayer;
-(NSMutableSet *)inUsePool;
-(NSMutableSet *)availablePool;
-(void)notifyPlayerUsageChange;
-(int)playerInUseCount;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning:(id)arg1 ;
@end

