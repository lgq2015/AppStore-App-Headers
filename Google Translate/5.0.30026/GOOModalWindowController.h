/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, GOOModalWindowViewController;

@interface GOOModalWindowController : NSObject {

	UIWindow* _displacedKeyWindow;
	UIWindow* _window;
	GOOModalWindowViewController* _modalViewController;

}

@property (nonatomic,retain) UIWindow * displacedKeyWindow;                                   //@synthesize displacedKeyWindow=_displacedKeyWindow - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                               //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) GOOModalWindowViewController * modalViewController;              //@synthesize modalViewController=_modalViewController - In the implementation block
+(id)sharedController;
-(id)modalViewStack;
-(void)presentModal:(id)arg1 ;
-(void)dismissModal:(id)arg1 withAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)windowDidBecomeKeyWindow:(id)arg1 ;
-(void)windowDidResignKeyWindow:(id)arg1 ;
-(void)setDisplacedKeyWindow:(UIWindow *)arg1 ;
-(UIWindow *)displacedKeyWindow;
-(void)setModalViewStackHidden:(char)arg1 ;
-(void)setModalViewController:(GOOModalWindowViewController *)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(GOOModalWindowViewController *)modalViewController;
@end

