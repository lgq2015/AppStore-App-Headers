/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _WAProgressAlertController, _WAProgressAlertViewLegacy, NSString;

@interface WAProgressAlertController : NSObject {

	_WAProgressAlertController* _alertController;
	_WAProgressAlertViewLegacy* _alertView;
	/*^block*/id _cancelHandler;

}

@property (getter=isDismissed,nonatomic,readonly) char dismissed; 
@property (assign,nonatomic) float progress; 
@property (nonatomic,copy) NSString * title; 
-(id)initWithTitle:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isDismissed;
-(void)cancel;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)presentFromViewController:(id)arg1 ;
@end

