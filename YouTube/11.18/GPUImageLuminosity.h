/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GPUImageAverageColor.h>

@class GLProgram;

@interface GPUImageLuminosity : GPUImageAverageColor {

	GLProgram* secondFilterProgram;
	int secondFilterPositionAttribute;
	int secondFilterTextureCoordinateAttribute;
	int secondFilterInputTextureUniform;
	int secondFilterInputTextureUniform2;
	int secondFilterTexelWidthUniform;
	int secondFilterTexelHeightUniform;
	/*^block*/id _luminosityProcessingFinishedBlock;

}

@property (nonatomic,copy) id luminosityProcessingFinishedBlock;              //@synthesize luminosityProcessingFinishedBlock=_luminosityProcessingFinishedBlock - In the implementation block
-(void)setLuminosityProcessingFinishedBlock:(id)arg1 ;
-(void)initializeSecondaryAttributes;
-(void)extractLuminosityAtFrameTime:(SCD_Struct_YT44)arg1 ;
-(id)luminosityProcessingFinishedBlock;
-(id)init;
@end

