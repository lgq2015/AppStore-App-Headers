/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MLLivePlaylistCachedData : NSObject {

	char _hasEndlist;
	int _lastSequenceNumber;
	NSData* _playlistData;

}

@property (nonatomic,readonly) int lastSequenceNumber;              //@synthesize lastSequenceNumber=_lastSequenceNumber - In the implementation block
@property (nonatomic,readonly) NSData * playlistData;               //@synthesize playlistData=_playlistData - In the implementation block
@property (nonatomic,readonly) char hasEndlist;                     //@synthesize hasEndlist=_hasEndlist - In the implementation block
-(id)initWithLastSequenceNumber:(int)arg1 playlistData:(id)arg2 hasEndlist:(char)arg3 ;
-(int)lastSequenceNumber;
-(char)hasEndlist;
-(NSData *)playlistData;
@end

