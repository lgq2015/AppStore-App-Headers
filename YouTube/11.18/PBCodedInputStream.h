/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <YouTube/YouTube-Structs.h>
@class NSData;

@interface PBCodedInputStream : NSObject {

	NSData* buffer_;
	PBInputBufferState state_;
	int lastTag_;
	unsigned recursionDepth_;

}
+(id)streamWithData:(id)arg1 ;
-(void)skipMessage;
-(void)checkLastTagWas:(int)arg1 ;
-(char)skipField:(int)arg1 ;
-(int)readTag;
-(char)readBool;
-(void)readGroup:(int)arg1 builder:(id)arg2 extensionRegistry:(id)arg3 ;
-(void)readUnknownGroup:(int)arg1 builder:(id)arg2 ;
-(void)readMessage:(id)arg1 extensionRegistry:(id)arg2 ;
-(int)readEnum;
-(int)readSFixed32;
-(long long)readSFixed64;
-(long long)readSInt64;
-(unsigned long)pushLimit:(unsigned long)arg1 ;
-(void)popLimit:(unsigned long)arg1 ;
-(unsigned long)bytesUntilLimit;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned long)position;
-(char)isAtEnd;
-(id)readData;
-(float)readFloat;
-(id)readString;
-(int)readSInt32;
-(unsigned)readUInt32;
-(unsigned long long)readUInt64;
-(long long)readInt64;
-(double)readDouble;
-(int)readInt32;
-(unsigned long long)readFixed64;
-(unsigned)readFixed32;
@end

