/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTGLSceneNode.h>

@class YTGLModelMatrix, YTGLAnaglyph3DVideoProgram, YTGLMesh, NSString;

@interface YTGLAnaglyph3DVideoNode : NSObject <YTGLSceneNode> {

	YTGLAnaglyph3DVideoProgram* _videoProgram;
	YTGLMesh* _mesh;
	char _hidden;
	YTGLModelMatrix* _model;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) YTGLModelMatrix * model;              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char hidden;                            //@synthesize hidden=_hidden - In the implementation block
-(void)setupFrameWithFrameViewState:(id)arg1 ;
-(char)isInRangeWithFrameViewState:(id)arg1 ;
-(void)drawWithEyeViewState:(id)arg1 ;
-(char)isFocusedWithFrameViewState:(id)arg1 ;
-(id)initWithVideoProvider:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)init;
-(YTGLModelMatrix *)model;
-(void)shutDown;
-(char)hidden;
@end

