/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol YTVariableHeightHeaderResponderProvider <YTResponderProviderProtocol,YTResponder>
@property (assign,nonatomic,__weak) UIView * touchForwardingTarget; 
@required
-(char)isAttachedToPage;
-(void)maximizeHeaderAnimated:(char)arg1;
-(float)headerMaximumHeight;
-(char)hasVariableHeightHeader;
-(float)currentHeaderHeight;
-(float)headerMinimumHeight;
-(void)minimizeHeaderAnimated:(char)arg1;
-(void)snapHeaderHeightAnimated:(char)arg1;
-(void)adjustHeaderHeight:(float)arg1;
-(UIView *)touchForwardingTarget;
-(void)setTouchForwardingTarget:(id)arg1;

@end

