/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSData, NSMutableData, NSOutputStream;

@interface IGPartialData : NSObject {

	NSData* _data;
	NSMutableData* _streamBuffer;
	NSOutputStream* _downloadStream;
	unsigned _bufferedLength;
	unsigned _totalLength;

}

@property (nonatomic,readonly) unsigned downloadedLength; 
@property (assign,nonatomic) unsigned bufferedLength;                  //@synthesize bufferedLength=_bufferedLength - In the implementation block
@property (assign,nonatomic) unsigned totalLength;                     //@synthesize totalLength=_totalLength - In the implementation block
+(id)emptyData;
-(char)hasDataForRange:(NSRange)arg1 ;
-(unsigned)downloadedLength;
-(id)downloadedData;
-(id)initWithPartialData:(id)arg1 totalLength:(unsigned)arg2 ;
-(void)increaseBufferedDataBy:(unsigned)arg1 ;
-(char)hasBufferedData;
-(unsigned)bufferedLength;
-(void)setBufferedLength:(unsigned)arg1 ;
-(id)description;
-(id)downloadStream;
-(void)setTotalLength:(unsigned)arg1 ;
-(unsigned)totalLength;
-(char)hasData;
-(id)subdataWithRange:(NSRange)arg1 ;
@end

