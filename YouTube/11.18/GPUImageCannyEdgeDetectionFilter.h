/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GPUImageFilterGroup.h>

@class GPUImageGrayscaleFilter, GPUImageSingleComponentGaussianBlurFilter, GPUImageDirectionalSobelEdgeDetectionFilter, GPUImageDirectionalNonMaximumSuppressionFilter, GPUImageWeakPixelInclusionFilter;

@interface GPUImageCannyEdgeDetectionFilter : GPUImageFilterGroup {

	GPUImageGrayscaleFilter* luminanceFilter;
	GPUImageSingleComponentGaussianBlurFilter* blurFilter;
	GPUImageDirectionalSobelEdgeDetectionFilter* edgeDetectionFilter;
	GPUImageDirectionalNonMaximumSuppressionFilter* nonMaximumSuppressionFilter;
	GPUImageWeakPixelInclusionFilter* weakPixelInclusionFilter;
	float upperThreshold;
	float lowerThreshold;
	float blurRadiusInPixels;
	float blurTexelSpacingMultiplier;
	float texelWidth;
	float texelHeight;

}

@property (assign,nonatomic) float texelWidth; 
@property (assign,nonatomic) float texelHeight; 
@property (assign,nonatomic) float blurRadiusInPixels; 
@property (assign,nonatomic) float blurTexelSpacingMultiplier; 
@property (assign,nonatomic) float upperThreshold; 
@property (assign,nonatomic) float lowerThreshold; 
-(void)setTexelWidth:(float)arg1 ;
-(void)setTexelHeight:(float)arg1 ;
-(float)texelWidth;
-(float)texelHeight;
-(void)setBlurRadiusInPixels:(float)arg1 ;
-(float)blurRadiusInPixels;
-(void)setBlurTexelSpacingMultiplier:(float)arg1 ;
-(float)blurTexelSpacingMultiplier;
-(void)setUpperThreshold:(float)arg1 ;
-(void)setLowerThreshold:(float)arg1 ;
-(float)upperThreshold;
-(float)lowerThreshold;
-(id)init;
@end

