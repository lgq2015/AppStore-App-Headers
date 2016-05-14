/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@interface IGTiltShiftOverlayFilter : IGImageFilter {

	unsigned _mode;
	float _radius;
	float _angle;
	float _opacity;
	CGPoint _center;

}

@property (assign,nonatomic) unsigned mode;               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float radius;                //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGPoint center;              //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) float angle;                 //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) float opacity;               //@synthesize opacity=_opacity - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(id)fragmentShader;
-(id)init;
-(CGPoint)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)setRadius:(float)arg1 ;
-(float)radius;
@end

