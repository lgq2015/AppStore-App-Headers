/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/RCTEvent.h>

@class NSNumber, NSString, NSArray;

@interface RCTTouchEvent : NSObject <RCTEvent> {

	NSArray* _reactTouches;
	NSArray* _changedIndexes;
	unsigned short _coalescingKey;
	NSString* _eventName;
	NSNumber* _viewTag;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * viewTag;                        //@synthesize viewTag=_viewTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;                 //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) unsigned short coalescingKey; 
+(id)moduleDotMethod;
-(id)coalesceWithEvent:(id)arg1 ;
-(NSNumber *)viewTag;
-(unsigned short)coalescingKey;
-(char)canCoalesce;
-(id)initWithEventName:(id)arg1 reactTouches:(id)arg2 changedIndexes:(id)arg3 coalescingKey:(unsigned short)arg4 ;
-(id)init;
-(NSString *)eventName;
-(id)arguments;
@end

