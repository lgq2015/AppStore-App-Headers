/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface GCKNNetworkAddress : NSObject <NSCopying, NSCoding> {

	int _type;
	NSString* _ipAddress;

}

@property (nonatomic,readonly) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * ipAddress;              //@synthesize ipAddress=_ipAddress - In the implementation block
+(id)wildcardAddressOfType:(int)arg1 ;
+(id)addressWithIPv4Address:(id)arg1 ;
-(id)initWithType:(int)arg1 ipAddress:(id)arg2 ;
-(id)initWithType:(int)arg1 addressData:(id)arg2 ;
-(id)addressData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ipAddress;
@end

