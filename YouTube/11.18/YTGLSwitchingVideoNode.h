/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTGLGroupNode.h>

@protocol YTGLVideoProvider, YTGLSceneNode;
@class YTGLSceneNodeFactory, YTGLMeshVideoProgram, YTGLRectangularVideoDecorationNode, YTGLAnimator;

@interface YTGLSwitchingVideoNode : YTGLGroupNode {

	YTGLSceneNodeFactory* _sceneNodeFactory;
	id<YTGLVideoProvider> _videoProvider;
	id<YTGLSceneNode> _videoNode;
	YTGLMeshVideoProgram* _meshVideoProgram;
	YTGLRectangularVideoDecorationNode* _videoDecorationNode;
	int _shaderType;
	char _VRModeEnabled;
	char _externalSetVRModeEnabled;
	float _meshVideoAspectRatio;
	YTGLAnimator* _videoDarkeningAnimator;

}

@property (nonatomic,retain) YTGLAnimator * videoDarkeningAnimator;              //@synthesize videoDarkeningAnimator=_videoDarkeningAnimator - In the implementation block
-(void)setupFrameWithFrameViewState:(id)arg1 ;
-(void)setVRModeEnabled:(char)arg1 ;
-(void)shutDownAndPrepareForReuse;
-(void)setupVideoNodes;
-(void)updateVideoDarkeningAnimatorWithVideoNode:(id)arg1 ;
-(id)initWithSceneNodeFactory:(id)arg1 videoProvider:(id)arg2 ;
-(char)isVideoSpherical;
-(YTGLAnimator *)videoDarkeningAnimator;
-(void)setVideoDarkeningAnimator:(YTGLAnimator *)arg1 ;
-(void)shutDown;
@end

