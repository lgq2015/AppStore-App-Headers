/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>
#import <YouTube/GPUImageInput.h>

@class GPUImageFramebuffer, GLProgram, NSString;

@interface GPUImageView : UIView <GPUImageInput> {

	int inputRotation;
	GPUImageFramebuffer* inputFramebufferForDisplay;
	unsigned displayRenderbuffer;
	unsigned displayFramebuffer;
	GLProgram* displayProgram;
	int displayPositionAttribute;
	int displayTextureCoordinateAttribute;
	int displayInputTextureUniform;
	CGSize inputImageSize;
	float imageVertices[8];
	float backgroundColorRed;
	float backgroundColorGreen;
	float backgroundColorBlue;
	float backgroundColorAlpha;
	CGSize boundsSizeAtFrameBufferEpoch;
	char enabled;
	unsigned aspectRatio;
	int _fillMode;
	CGSize _sizeInPixels;

}

@property (assign,nonatomic) int fillMode;                          //@synthesize fillMode=_fillMode - In the implementation block
@property (nonatomic,readonly) CGSize sizeInPixels;                 //@synthesize sizeInPixels=_sizeInPixels - In the implementation block
@property (assign,nonatomic) char enabled; 
@property (assign,nonatomic) unsigned aspectRatio; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const float*)textureCoordinatesForRotation:(int)arg1 ;
+(Class)layerClass;
-(void)setInputRotation:(int)arg1 atIndex:(int)arg2 ;
-(void)newFrameReadyAtTime:(SCD_Struct_YT44)arg1 atIndex:(int)arg2 ;
-(void)setInputSize:(CGSize)arg1 atIndex:(int)arg2 ;
-(CGSize)maximumOutputSize;
-(void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(char)wantsMonochromeInput;
-(void)setInputFramebuffer:(id)arg1 atIndex:(int)arg2 ;
-(int)nextAvailableTextureIndex;
-(void)endProcessing;
-(char)shouldIgnoreUpdatesToThisTarget;
-(void)setCurrentlyReceivingMonochromeInput:(char)arg1 ;
-(void)createDisplayFramebuffer;
-(void)destroyDisplayFramebuffer;
-(void)recalculateViewGeometry;
-(void)setDisplayFramebuffer;
-(void)presentFramebuffer;
-(unsigned)aspectRatio;
-(int)fillMode;
-(char)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(void)setFillMode:(int)arg1 ;
-(void)commonInit;
-(CGSize)sizeInPixels;
-(void)setAspectRatio:(unsigned)arg1 ;
@end

