/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPResponseSerializer.h>

@interface AFJSONResponseSerializer : AFHTTPResponseSerializer {

	unsigned _readingOptions;

}

@property (assign,nonatomic) unsigned readingOptions;              //@synthesize readingOptions=_readingOptions - In the implementation block
+(id)serializerWithReadingOptions:(unsigned)arg1 ;
+(id)serializer;
-(void)setReadingOptions:(unsigned)arg1 ;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(unsigned)readingOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

