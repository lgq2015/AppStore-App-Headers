/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <YouTube/YouTube-Structs.h>
@interface GVRCardboardAudioEngine : NSObject {

	VrAudioEngine* _engine;

}

@property (assign) VrAudioEngine* engine;              //@synthesize engine=_engine - In the implementation block
-(id)initWithRenderingMode:(int)arg1 ;
-(void)uninitialize;
-(int)convertMaterialName:(int)arg1 ;
-(BOOL)preloadSoundFile:(id)arg1 ;
-(int)createSoundObject:(id)arg1 ;
-(int)createSoundfield:(id)arg1 ;
-(void)playSound:(int)arg1 loopingEnabled:(BOOL)arg2 ;
-(void)setSoundObjectPosition:(int)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 ;
-(void)setSoundVolume:(int)arg1 volume:(float)arg2 ;
-(BOOL)isSoundPlaying:(int)arg1 ;
-(void)setHeadPosition:(float)arg1 y:(float)arg2 z:(float)arg3 ;
-(void)setHeadRotation:(float)arg1 y:(float)arg2 z:(float)arg3 w:(float)arg4 ;
-(void)enableRoom:(BOOL)arg1 ;
-(void)setRoomProperties:(float)arg1 size_y:(float)arg2 size_z:(float)arg3 wall_material:(int)arg4 ceiling_material:(int)arg5 floor_material:(int)arg6 ;
-(VrAudioEngine*)engine;
-(void)dealloc;
-(id)init;
-(void)stop;
-(BOOL)start;
-(void)update;
-(void)setEngine:(VrAudioEngine*)arg1 ;
-(void)stopSound:(int)arg1 ;
@end

