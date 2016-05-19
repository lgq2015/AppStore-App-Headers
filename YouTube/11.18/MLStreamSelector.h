/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLStreamSelectorDelegate, MLQoEStreamSelectorDelegate, AVAssetResourceLoaderDelegate, MLFormatConstraint;
@class YTIAudioTrack, MLFormat, EXOViewportSize;

@interface MLStreamSelector : NSObject {

	char _visible;
	char _externalPlaybackActive;
	char _audioOnlyPlaybackAllowed;
	id<MLStreamSelectorDelegate> _delegate;
	id<MLQoEStreamSelectorDelegate> _QoEDelegate;
	id<AVAssetResourceLoaderDelegate> _resourceLoaderDelegate;
	YTIAudioTrack* _defaultAudioTrack;
	MLFormat* _selectedAudioFormat;
	id<MLFormatConstraint> _constraint;
	id<MLFormatConstraint> _audioConstraint;
	EXOViewportSize* _viewportSize;

}

@property (assign,nonatomic,__weak) id<MLStreamSelectorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MLQoEStreamSelectorDelegate> QoEDelegate;                           //@synthesize QoEDelegate=_QoEDelegate - In the implementation block
@property (nonatomic,readonly) id<AVAssetResourceLoaderDelegate> resourceLoaderDelegate;                   //@synthesize resourceLoaderDelegate=_resourceLoaderDelegate - In the implementation block
@property (nonatomic,readonly) char isUsingLocalStreams; 
@property (nonatomic,copy) YTIAudioTrack * defaultAudioTrack;                                              //@synthesize defaultAudioTrack=_defaultAudioTrack - In the implementation block
@property (nonatomic,readonly) MLFormat * selectedAudioFormat;                                             //@synthesize selectedAudioFormat=_selectedAudioFormat - In the implementation block
@property (nonatomic,retain) id<MLFormatConstraint> constraint;                                            //@synthesize constraint=_constraint - In the implementation block
@property (nonatomic,retain) id<MLFormatConstraint> audioConstraint;                                       //@synthesize audioConstraint=_audioConstraint - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                                                //@synthesize visible=_visible - In the implementation block
@property (assign,getter=isExternalPlaybackActive,nonatomic) char externalPlaybackActive;                  //@synthesize externalPlaybackActive=_externalPlaybackActive - In the implementation block
@property (assign,getter=isAudioOnlyPlaybackAllowed,nonatomic) char audioOnlyPlaybackAllowed;              //@synthesize audioOnlyPlaybackAllowed=_audioOnlyPlaybackAllowed - In the implementation block
@property (nonatomic,retain) EXOViewportSize * viewportSize;                                               //@synthesize viewportSize=_viewportSize - In the implementation block
+(id)streamSelectorWithServices:(id)arg1 playerConfig:(id)arg2 video:(id)arg3 ;
+(id)localStreamSelectorWithServices:(id)arg1 playerConfig:(id)arg2 videoID:(id)arg3 ;
-(id)debugParameters;
-(MLFormat *)selectedAudioFormat;
-(void)setQoEDelegate:(id<MLQoEStreamSelectorDelegate>)arg1 ;
-(void)setConstraint:(id<MLFormatConstraint>)arg1 ;
-(void)setAudioOnlyPlaybackAllowed:(char)arg1 ;
-(char)selectStreamWithReason:(int)arg1 ;
-(void)setAudioConstraint:(id<MLFormatConstraint>)arg1 ;
-(char)isUsingLocalStreams;
-(void)setDefaultAudioTrack:(YTIAudioTrack *)arg1 ;
-(YTIAudioTrack *)defaultAudioTrack;
-(id<MLFormatConstraint>)audioConstraint;
-(char)isAudioOnlyPlaybackAllowed;
-(id<AVAssetResourceLoaderDelegate>)resourceLoaderDelegate;
-(void)playbackWillStart;
-(id<MLQoEStreamSelectorDelegate>)QoEDelegate;
-(char)selectStreamWithReason:(int)arg1 forceSelection:(char)arg2 ;
-(id<MLFormatConstraint>)constraint;
-(void)terminate;
-(char)isExternalPlaybackActive;
-(EXOViewportSize *)viewportSize;
-(void)setViewportSize:(EXOViewportSize *)arg1 ;
-(void)setDelegate:(id<MLStreamSelectorDelegate>)arg1 ;
-(id)init;
-(id<MLStreamSelectorDelegate>)delegate;
-(void)setVisible:(char)arg1 ;
-(char)isVisible;
-(void)setExternalPlaybackActive:(char)arg1 ;
@end

