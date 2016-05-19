/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol GOOModalPresentation <NSObject>
@property (assign,nonatomic,__weak) UIView * viewToReceiveVoiceOverFocusAfterDismissal; 
@property (assign,getter=shouldPostScreenChangeNotificationOnDismiss,nonatomic) char postScreenChangeNotificationOnDismiss; 
@optional
-(UIView *)viewToReceiveVoiceOverFocusAfterDismissal;
-(void)setViewToReceiveVoiceOverFocusAfterDismissal:(id)arg1;
-(char)shouldPostScreenChangeNotificationOnDismiss;
-(void)setPostScreenChangeNotificationOnDismiss:(char)arg1;

@required
-(void)dismissWithCancelAction:(char)arg1;
-(void)reposition;
-(void)dismissDialog:(char)arg1;
-(void)revealDialog;
-(char)shouldDimBackground;
-(double)showAnimationDuration;
-(double)hideAnimationDuration;
-(void)show;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(int)arg1;
-(void)dismiss;

@end

