/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol IGVideoViewLogging <NSObject>
@property (retain) NSNumber * lastPlaybackTime; 
@property (assign) int originalPlaybackReason; 
@required
-(NSNumber *)lastPlaybackTime;
-(int)originalPlaybackReason;
-(void)setLastPlaybackTime:(id)arg1;
-(void)logVideoStopForPlayer:(id)arg1 reason:(int)arg2;
-(void)logAudioWillPlay:(char)arg1 player:(id)arg2 reason:(int)arg3;
-(void)logVideoError;
-(void)logVideoUnpauseForPlayer:(id)arg1 playbackReason:(int)arg2;
-(void)logVideoStartForPlayer:(id)arg1 playbackReason:(int)arg2 videoStartDelay:(float)arg3;
-(void)logVideoComplete;
-(void)logVideoTapForPlayer:(id)arg1;
-(void)logVideoShouldStart;
-(void)logVideoDisplayed;
-(void)setOriginalPlaybackReason:(int)arg1;

@end

