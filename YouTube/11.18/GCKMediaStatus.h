/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GCKMediaInformation, NSArray;

@interface GCKMediaStatus : NSObject <NSCopying> {

	int _supportedMediaCommands;
	char _isMuted;
	int _mediaSessionID;
	int _playerState;
	int _idleReason;
	float _playbackRate;
	GCKMediaInformation* _mediaInformation;
	float _volume;
	NSArray* _activeTrackIDs;
	id _customData;
	double _streamPosition;

}

@property (assign,nonatomic) int mediaSessionID;                                  //@synthesize mediaSessionID=_mediaSessionID - In the implementation block
@property (assign,nonatomic) int playerState;                                     //@synthesize playerState=_playerState - In the implementation block
@property (assign,nonatomic) int idleReason;                                      //@synthesize idleReason=_idleReason - In the implementation block
@property (assign,nonatomic) float playbackRate;                                  //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,retain) GCKMediaInformation * mediaInformation;              //@synthesize mediaInformation=_mediaInformation - In the implementation block
@property (assign,nonatomic) double streamPosition;                               //@synthesize streamPosition=_streamPosition - In the implementation block
@property (assign,nonatomic) float volume;                                        //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) char isMuted;                                        //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,retain) NSArray * activeTrackIDs;                            //@synthesize activeTrackIDs=_activeTrackIDs - In the implementation block
@property (nonatomic,retain) id customData;                                       //@synthesize customData=_customData - In the implementation block
-(int)mediaSessionID;
-(GCKMediaInformation *)mediaInformation;
-(double)streamPosition;
-(int)updateFromJSONObject:(id)arg1 ignoreFields:(int)arg2 ;
-(void)setActiveTrackIDs:(NSArray *)arg1 ;
-(void)setMediaSessionID:(int)arg1 ;
-(void)setIdleReason:(int)arg1 ;
-(void)setStreamPosition:(double)arg1 ;
-(NSArray *)activeTrackIDs;
-(int)idleReason;
-(id)initWithSessionID:(int)arg1 mediaInformation:(id)arg2 ;
-(char)isMediaCommandSupported:(int)arg1 ;
-(void)setMediaInformation:(GCKMediaInformation *)arg1 ;
-(void)setCustomData:(id)arg1 ;
-(id)customData;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)setVolume:(float)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)volume;
-(char)isMuted;
-(void)setIsMuted:(char)arg1 ;
-(id)initWithJSONObject:(id)arg1 ;
-(int)playerState;
-(void)setPlayerState:(int)arg1 ;
@end

