/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/RCTBridgeDelegate.h>
#import <Instagram/IGUserSessionObject.h>

@class RCTBridge, NSString;

@interface IGReactModule : NSObject <RCTBridgeDelegate, IGUserSessionObject> {

	RCTBridge* _bridge;

}

@property (nonatomic,retain) RCTBridge * bridge;                    //@synthesize bridge=_bridge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)sourceURLForBridge:(id)arg1 ;
-(id)createBridgeIfNecessaryWithPerfLoggerSession:(id)arg1 ;
-(id)viewControllerForModuleName:(id)arg1 initialProperties:(id)arg2 perfLoggerSession:(id)arg3 title:(id)arg4 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

