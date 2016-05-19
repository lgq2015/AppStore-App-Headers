/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>
#import <YouTube/YTFPSTicker.h>

@class CAShapeLayer, CATextLayer, NSString;

@interface YTFPSStatusBar : UIWindow <YTFPSTicker> {

	CAShapeLayer* _chartLayer;
	CATextLayer* _textLayer;
	int _tickCountMax;
	int _tickCount;
	double* _ticks;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
-(void)tickWithTimestamp:(double)arg1 ;
-(void)initChartLayer;
-(void)initTextLayer;
-(void)updateStatusBar;
-(void)dealloc;
-(id)init;
-(char)isEnabled;
@end

