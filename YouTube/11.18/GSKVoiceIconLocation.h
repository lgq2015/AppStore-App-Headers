/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <YouTube/YouTube-Structs.h>
@interface GSKVoiceIconLocation : NSObject {

	float _iconScale;
	CGPoint _iconCenter;

}

@property (assign,nonatomic) CGPoint iconCenter;              //@synthesize iconCenter=_iconCenter - In the implementation block
@property (assign,nonatomic) float iconScale;                 //@synthesize iconScale=_iconScale - In the implementation block
+(id)locationWithIconCenter:(CGPoint)arg1 iconScale:(float)arg2 ;
+(id)locationFromView:(id)arg1 iconCenter:(CGPoint)arg2 iconScale:(float)arg3 ;
-(void)setIconCenter:(CGPoint)arg1 ;
-(void)setIconScale:(float)arg1 ;
-(CGPoint)iconCenter;
-(CGPoint)iconCenterInView:(id)arg1 ;
-(float)iconScale;
@end

