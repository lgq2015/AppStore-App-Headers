/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface YTVideoState : NSObject <NSCopying> {

	int _code;
	NSString* _reason;

}

@property (nonatomic,readonly) int code;                       //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)initWithCode:(int)arg1 reason:(id)arg2 ;
-(int)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
@end

