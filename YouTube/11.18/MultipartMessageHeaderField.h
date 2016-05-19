/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface MultipartMessageHeaderField : NSObject {

	NSString* name;
	NSString* value;
	NSMutableDictionary* params;

}

@property (readonly) NSString * value; 
@property (readonly) NSDictionary * params; 
@property (readonly) NSString * name; 
-(id)initWithData:(id)arg1 contentEncoding:(unsigned)arg2 ;
-(char)parseHeaderValueBytes:(char*)arg1 length:(unsigned)arg2 encoding:(unsigned)arg3 ;
-(NSDictionary *)params;
-(id)description;
-(NSString *)name;
-(NSString *)value;
@end

