/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <QuartzCore/CALayer.h>

@class CAShapeLayer;

@interface QTMShadow : CALayer {

	char _applyShadowMask;
	float _elevation;
	CAShapeLayer* _topShadow;
	CAShapeLayer* _bottomShadow;

}

@property (assign,nonatomic) float elevation;                          //@synthesize elevation=_elevation - In the implementation block
@property (assign,nonatomic) char applyShadowMask;                     //@synthesize applyShadowMask=_applyShadowMask - In the implementation block
@property (nonatomic,retain) CAShapeLayer * topShadow;                 //@synthesize topShadow=_topShadow - In the implementation block
@property (nonatomic,retain) CAShapeLayer * bottomShadow;              //@synthesize bottomShadow=_bottomShadow - In the implementation block
+(float)ambientShadowBlur:(float)arg1 ;
+(float)keyShadowBlur:(float)arg1 ;
+(float)keyShadowYOff:(float)arg1 ;
+(SCD_Struct_QT57)shadowMetricsWithElevation:(float)arg1 ;
-(void)commonLayoutSublayers;
-(CAShapeLayer *)topShadow;
-(CAShapeLayer *)bottomShadow;
-(id)shadowLayerMaskForLayer:(id)arg1 ;
-(CGSize)shadowSpreadForElevation:(float)arg1 ;
-(void)setElevation:(float)arg1 animationDuration:(double)arg2 ;
-(void)setMetrics:(SCD_Struct_QT57)arg1 animationDuration:(double)arg2 ;
-(id)defaultShadowPath;
-(void)setApplyShadowMask:(char)arg1 ;
-(char)applyShadowMask;
-(void)setTopShadow:(CAShapeLayer *)arg1 ;
-(void)setBottomShadow:(CAShapeLayer *)arg1 ;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setShouldRasterize:(char)arg1 ;
-(void)setShadowPath:(CGPathRef)arg1 ;
-(void)layoutSublayers;
-(float)elevation;
-(void)setElevation:(float)arg1 ;
@end

