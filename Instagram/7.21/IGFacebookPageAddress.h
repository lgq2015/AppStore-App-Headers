/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGFacebookPageAddress : NSObject <NSCopying> {

	NSString* _street;
	NSString* _postalCode;

}

@property (nonatomic,copy) NSString * street;                  //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) NSString * postalCode;              //@synthesize postalCode=_postalCode - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
@end

