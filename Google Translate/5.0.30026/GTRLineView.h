/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface GTRLineView : UIView {

	char _lineDashed;
	float _lineDashPhase;
	float _lineDashLengths[1];
	float _lineDashCount;
	UIColor* _color;
	float _inset;
	float _lineWidth;
	int _lineCap;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float inset;                  //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) float lineWidth;              //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) int lineCap;                  //@synthesize lineCap=_lineCap - In the implementation block
-(int)lineCap;
-(void)setInset:(float)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(float)inset;
@end

