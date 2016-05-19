/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GPUImageFilter.h>

@interface GPUImage3x3TextureSamplingFilter : GPUImageFilter {

	int texelWidthUniform;
	int texelHeightUniform;
	float texelWidth;
	float texelHeight;
	char hasOverriddenImageSizeFactor;
	float _texelWidth;
	float _texelHeight;

}

@property (assign,nonatomic) float texelWidth;               //@synthesize texelWidth=_texelWidth - In the implementation block
@property (assign,nonatomic) float texelHeight;              //@synthesize texelHeight=_texelHeight - In the implementation block
-(void)setupFilterForSize:(CGSize)arg1 ;
-(id)initWithFragmentShaderFromString:(id)arg1 ;
-(id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2 ;
-(void)setTexelWidth:(float)arg1 ;
-(void)setTexelHeight:(float)arg1 ;
-(float)texelWidth;
-(float)texelHeight;
@end

