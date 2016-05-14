/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface IGMotionManager : NSObject {

	CMMotionManager* _motionManager;
	NSOperationQueue* _gravityQueue;
	char _gravityActive;
	SCD_Struct_IG73 _gravity;

}

@property (getter=isGravityActive,nonatomic,readonly) char gravityActive;              //@synthesize gravityActive=_gravityActive - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG73 gravity;                                  //@synthesize gravity=_gravity - In the implementation block
-(void)startGravityUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopGravityUpdates;
-(char)isGravityActive;
-(id)init;
-(SCD_Struct_IG73)gravity;
-(void)setGravity:(SCD_Struct_IG73)arg1 ;
@end

