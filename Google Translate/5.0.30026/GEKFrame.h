/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Translate/Translate-Structs.h>
@class NSDate, NSData, UIImage, NSMutableData, GEKImageSignature;

@interface GEKFrame : NSObject {

	opaqueCMSampleBufferRef sampleBuffer_;
	CVBufferRef imageBuffer_;
	int pixelBufferRetainCount_;
	NSDate* timestamp_;
	NSData* yData_;
	NSData* uvData_;
	int orientation_;
	CGSize size_;
	int sceneNumber_;
	UIImage* image_;
	NSMutableData* argbData_;
	NSMutableData* downsampledLuminance_;
	GEKImageSignature* signature_;
	int requestSequenceNumber_;

}

@property (nonatomic,readonly) NSDate * timestamp; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) GEKImageSignature * signature; 
@property (nonatomic,readonly) NSMutableData * downsampledLuminance; 
@property (nonatomic,readonly) NSData * yData; 
@property (nonatomic,readonly) NSData * uvData; 
@property (assign,nonatomic) int requestSequenceNumber; 
@property (nonatomic,readonly) NSMutableData * argbData; 
@property (assign,nonatomic) int sceneNumber; 
@property (nonatomic,readonly) int uiImageOrientation; 
-(float)jpegQualityForExpectedSize:(int)arg1 ;
-(id)jpegRepresentationWithQuality:(float)arg1 ;
-(void)retainPixelBuffer;
-(void)setRequestSequenceNumber:(int)arg1 ;
-(int)requestSequenceNumber;
-(void)releasePixelBuffer;
-(void)setYUVDataFromImageBuffer;
-(id)rgbBitmapForImage:(id)arg1 ;
-(id)initWithRGB:(id)arg1 size:(CGSize)arg2 ;
-(void)unlockPixelBuffer;
-(NSData *)yData;
-(NSData *)uvData;
-(NSMutableData *)argbData;
-(unsigned long)rgbBytesPerRow;
-(int)uiImageOrientation;
-(int)downsamplingScale;
-(int)sceneNumber;
-(void)setSceneNumber:(int)arg1 ;
-(id)transposeRgb:(id)arg1 ofSize:(CGSize)arg2 ;
-(void)loadRgb:(id)arg1 ;
-(id)initWithSidewaysUIImage:(id)arg1 ;
-(id)initWithY:(id)arg1 uv:(id)arg2 size:(CGSize)arg3 ;
-(void)logAsciiArt:(void*)arg1 size:(CGSize)arg2 ;
-(NSMutableData *)downsampledLuminance;
-(CGSize)downsampledSize;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(NSDate *)timestamp;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(UIImage *)image;
-(GEKImageSignature *)signature;
-(id)initWithUIImage:(id)arg1 ;
-(CVBufferRef)imageBuffer;
@end

