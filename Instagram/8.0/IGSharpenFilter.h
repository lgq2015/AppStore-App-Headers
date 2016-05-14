/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface, IGGaussianBlurFilter;

@interface IGSharpenFilter : IGImageFilter {

	IGSurface* _blurredImage;
	IGGaussianBlurFilter* _blurFilter;

}

@property (nonatomic,retain) IGGaussianBlurFilter * blurFilter;              //@synthesize blurFilter=_blurFilter - In the implementation block
@property (assign,nonatomic) float sigma; 
@property (assign,nonatomic) unsigned kernelSize; 
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(id)strengthShaderCode;
-(unsigned)kernelSize;
-(void)setKernelSize:(unsigned)arg1 ;
-(IGGaussianBlurFilter *)blurFilter;
-(void)setBlurFilter:(IGGaussianBlurFilter *)arg1 ;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)samplers;
-(float)sigma;
-(void)setSigma:(float)arg1 ;
@end

