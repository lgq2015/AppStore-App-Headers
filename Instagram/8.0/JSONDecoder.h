/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@interface JSONDecoder : NSObject {

	JKParseState* parseState;

}
+(id)decoderWithParseOptions:(unsigned)arg1 ;
+(id)decoder;
-(id)initWithParseOptions:(unsigned)arg1 ;
-(id)objectWithUTF8String:(const char*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)objectWithString:(id)arg1 error:(id*)arg2 ;
-(id)mutableObjectWithUTF8String:(const char*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)mutableObjectWithData:(id)arg1 error:(id*)arg2 ;
-(id)parseUTF8String:(const char*)arg1 length:(unsigned long)arg2 error:(id*)arg3 ;
-(id)parseJSONData:(id)arg1 ;
-(id)objectWithString:(id)arg1 ;
-(id)objectWithUTF8String:(const char*)arg1 length:(unsigned)arg2 ;
-(id)mutableObjectWithUTF8String:(const char*)arg1 length:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(id)objectWithData:(id)arg1 ;
-(id)mutableObjectWithData:(id)arg1 ;
-(id)objectWithData:(id)arg1 error:(id*)arg2 ;
-(id)parseUTF8String:(const char*)arg1 length:(unsigned long)arg2 ;
-(id)parseJSONData:(id)arg1 error:(id*)arg2 ;
@end

