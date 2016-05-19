/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GCKMDNSRecord.h>

@interface GCKMDNSDataRecord : GCKMDNSRecord {

	unsigned _ttl;
	unsigned short _dataLength;

}

@property (assign,nonatomic) int timeToLive; 
-(unsigned)getRemainingTTLUntil:(double)arg1 ;
-(char)writeWith:(id)arg1 currentTime:(double)arg2 ;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 recordClass:(unsigned short)arg3 ;
-(char)readDataWith:(id)arg1 ;
-(char)writeDataWith:(id)arg1 ;
-(char)isDataEqualTo:(id)arg1 ;
-(char)readWith:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)timeToLive;
-(void)setTimeToLive:(int)arg1 ;
@end

