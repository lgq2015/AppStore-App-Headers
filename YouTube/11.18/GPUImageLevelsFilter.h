/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GPUImageFilter.h>

@interface GPUImageLevelsFilter : GPUImageFilter {

	int minUniform;
	int midUniform;
	int maxUniform;
	int minOutputUniform;
	int maxOutputUniform;
	GPUVector3 minVector;
	GPUVector3 midVector;
	GPUVector3 maxVector;
	GPUVector3 minOutputVector;
	GPUVector3 maxOutputVector;

}
-(void)setMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 ;
-(void)setRedMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5 ;
-(void)setGreenMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5 ;
-(void)setBlueMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5 ;
-(void)setMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5 ;
-(void)updateUniforms;
-(void)setRedMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 ;
-(void)setGreenMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 ;
-(void)setBlueMin:(float)arg1 gamma:(float)arg2 max:(float)arg3 ;
-(id)init;
@end

