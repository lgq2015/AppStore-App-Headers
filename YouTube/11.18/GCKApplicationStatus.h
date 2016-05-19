/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GCKApplicationMetadata, NSString;

@interface GCKApplicationStatus : NSObject <NSCopying> {

	char _hasMetadata;
	GCKApplicationMetadata* _metadata;
	NSString* _sessionID;
	NSString* _transportID;
	NSString* _statusText;

}

@property (assign,nonatomic) char hasMetadata;                             //@synthesize hasMetadata=_hasMetadata - In the implementation block
@property (nonatomic,copy) GCKApplicationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * transportID;                         //@synthesize transportID=_transportID - In the implementation block
@property (nonatomic,copy) NSString * statusText;                          //@synthesize statusText=_statusText - In the implementation block
-(NSString *)transportID;
-(id)initWithMetadata:(id)arg1 sessionID:(id)arg2 transportID:(id)arg3 statusText:(id)arg4 ;
-(void)setTransportID:(NSString *)arg1 ;
-(void)setStatusText:(NSString *)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)hasMetadata;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setMetadata:(GCKApplicationMetadata *)arg1 ;
-(void)setHasMetadata:(char)arg1 ;
-(GCKApplicationMetadata *)metadata;
-(id)initWithJSONObject:(id)arg1 ;
-(NSString *)statusText;
@end

