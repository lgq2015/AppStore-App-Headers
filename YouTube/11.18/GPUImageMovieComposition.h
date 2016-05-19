/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GPUImageMovie.h>

@class AVComposition, AVVideoComposition, AVAudioMix;

@interface GPUImageMovieComposition : GPUImageMovie {

	AVComposition* _compositon;
	AVVideoComposition* _videoComposition;
	AVAudioMix* _audioMix;

}

@property (retain) AVComposition * compositon;                         //@synthesize compositon=_compositon - In the implementation block
@property (retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (retain) AVAudioMix * audioMix;                              //@synthesize audioMix=_audioMix - In the implementation block
-(id)createAssetReader;
-(void)setCompositon:(AVComposition *)arg1 ;
-(AVComposition *)compositon;
-(id)initWithComposition:(id)arg1 andVideoComposition:(id)arg2 andAudioMix:(id)arg3 ;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(AVAudioMix *)audioMix;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
@end

