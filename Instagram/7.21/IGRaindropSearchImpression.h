/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropInstagramEntity, NSNumber, NSString;

@interface IGRaindropSearchImpression : TBaseStruct {

	IGRaindropInstagramEntity* __thrift_object;
	NSNumber* __thrift_position;
	NSNumber* __thrift_hasSeen;
	NSNumber* __thrift_isLocal;
	NSString* __thrift_algorithm;

}
-(id)toDict;
-(id)initWithObject:(id)arg1 position:(id)arg2 hasSeen:(id)arg3 isLocal:(id)arg4 algorithm:(id)arg5 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

