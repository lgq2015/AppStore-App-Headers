/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class PTHTweetbotStatus, PTHTweetbotStatusView, PTHTweetbotEntityTextFontAppearance, PTHTweetbotEntityTextColorAppearance, UIViewController;

@interface PTHTweetbotStatusSubview : UIControl {

	PTHTweetbotStatus* _status;
	PTHTweetbotStatusView* _statusView;

}

@property (nonatomic,retain) PTHTweetbotStatus * status;                                            //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotStatusView * statusView;                             //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,readonly) PTHTweetbotEntityTextFontAppearance * fontAppearance; 
@property (nonatomic,readonly) PTHTweetbotEntityTextColorAppearance * colorAppearance; 
@property (nonatomic,__weak,readonly) UIViewController * viewController; 
-(void)colorAppearanceDidChange;
-(void)fontAppearanceDidChange;
-(PTHTweetbotEntityTextFontAppearance *)fontAppearance;
-(PTHTweetbotEntityTextColorAppearance *)colorAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIViewController *)viewController;
-(PTHTweetbotStatusView *)statusView;
-(void)setStatusView:(PTHTweetbotStatusView *)arg1 ;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
@end

