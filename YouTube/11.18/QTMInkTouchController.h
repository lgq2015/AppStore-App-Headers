/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol QTMInkTouchControllerDelegate;
@class QTMInkGestureRecognizer, QTMInkView, UIView, NSString;

@interface QTMInkTouchController : NSObject <UIGestureRecognizerDelegate> {

	char _delayResponseToTouch;
	char _shouldRespondToTouch;
	QTMInkGestureRecognizer* _gestureRecognizer;
	QTMInkView* _inkView;
	UIView* _baseView;
	id<QTMInkTouchControllerDelegate> _delegate;
	QTMInkView* _defaultInkView;
	CGPoint _previousLocation;

}

@property (assign,nonatomic) char delayResponseToTouch;                                      //@synthesize delayResponseToTouch=_delayResponseToTouch - In the implementation block
@property (nonatomic,retain) QTMInkGestureRecognizer * gestureRecognizer;                    //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) QTMInkView * inkView;                                           //@synthesize inkView=_inkView - In the implementation block
@property (assign,nonatomic,__weak) UIView * baseView;                                       //@synthesize baseView=_baseView - In the implementation block
@property (assign,nonatomic,__weak) id<QTMInkTouchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) QTMInkView * defaultInkView;                                    //@synthesize defaultInkView=_defaultInkView - In the implementation block
@property (assign,nonatomic) char shouldRespondToTouch;                                      //@synthesize shouldRespondToTouch=_shouldRespondToTouch - In the implementation block
@property (assign,nonatomic) CGPoint previousLocation;                                       //@synthesize previousLocation=_previousLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(QTMInkView *)inkView;
-(id)initWithTouchableView:(id)arg1 delegate:(id)arg2 ;
-(void)setDelayResponseToTouch:(char)arg1 ;
-(void)cancelInkTouchProcessing;
-(void)setInkView:(QTMInkView *)arg1 ;
-(id)initWithTouchableView:(id)arg1 backgroundColorGroup:(id)arg2 delegate:(id)arg3 ;
-(id)initWithTouchableView:(id)arg1 inkColor:(id)arg2 delegate:(id)arg3 ;
-(void)handleInkGesture:(id)arg1 ;
-(void)cancelInkGestureWithRecognizer:(id)arg1 ;
-(void)spreadInkFromPoint:(CGPoint)arg1 touchLocation:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(char)delayResponseToTouch;
-(QTMInkView *)defaultInkView;
-(void)setDefaultInkView:(QTMInkView *)arg1 ;
-(char)shouldRespondToTouch;
-(void)setShouldRespondToTouch:(char)arg1 ;
-(CGPoint)previousLocation;
-(void)setPreviousLocation:(CGPoint)arg1 ;
-(UIView *)baseView;
-(void)setDelegate:(id<QTMInkTouchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<QTMInkTouchControllerDelegate>)delegate;
-(void)setGestureRecognizer:(QTMInkGestureRecognizer *)arg1 ;
-(QTMInkGestureRecognizer *)gestureRecognizer;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setBaseView:(UIView *)arg1 ;
@end

