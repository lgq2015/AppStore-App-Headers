/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface BKShiftingView : UIView {

	UIView* _currentView;

}

@property (nonatomic,retain) UIView * currentView;              //@synthesize currentView=_currentView - In the implementation block
-(void)setCurrentView:(UIView *)arg1 ;
-(void)showView:(id)arg1 withDirection:(unsigned)arg2 ;
-(void)layoutSubviews;
-(UIView *)currentView;
@end

