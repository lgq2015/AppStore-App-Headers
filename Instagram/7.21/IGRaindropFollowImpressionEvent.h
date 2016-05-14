/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropFollowImpressionEvent : TBaseStruct {

	NSNumber* __thrift_isFollow;
	NSNumber* __thrift_targetUserId;
	NSNumber* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clickPoint;
	NSString* __thrift_errorMessage;
	NSNumber* __thrift_sectionNumber;

}
-(id)toDict;
-(id)initWithIsFollow:(id)arg1 targetUserId:(id)arg2 position:(id)arg3 algorithm:(id)arg4 clickPoint:(id)arg5 errorMessage:(id)arg6 sectionNumber:(id)arg7 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

