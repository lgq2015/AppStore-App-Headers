/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GOOWebView, GOOWebViewToolbarControllerDelegate;
@class UIView, GOOWebViewToolbar;

@interface GOOWebViewToolbarController : NSObject {

	UIView*<GOOWebView> _webView;
	GOOWebViewToolbar* _toolbar;
	char _toolbarHidden;
	char _webViewVisible;
	id<GOOWebViewToolbarControllerDelegate> _delegate;
	int _toolbarStyle;

}

@property (assign,nonatomic,__weak) id<GOOWebViewToolbarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showActionButton; 
@property (assign,getter=isViewVisible,nonatomic) char webViewVisible;                             //@synthesize webViewVisible=_webViewVisible - In the implementation block
@property (assign,nonatomic) int toolbarStyle;                                                     //@synthesize toolbarStyle=_toolbarStyle - In the implementation block
-(void)didTapAction;
-(void)didTapBackButton;
-(void)setToolbarStyle:(int)arg1 ;
-(void)setWebViewVisible:(char)arg1 ;
-(void)setShowActionButton:(char)arg1 ;
-(int)toolbarStyle;
-(id)webViewContainer;
-(void)didTapForwardButton;
-(void)didTapReload;
-(void)layoutToolbarWithHidden:(char)arg1 ;
-(void)updateToolbar:(char)arg1 animated:(char)arg2 ;
-(void)setDelegate:(id<GOOWebViewToolbarControllerDelegate>)arg1 ;
-(id<GOOWebViewToolbarControllerDelegate>)delegate;
-(void)setToolbarHidden:(char)arg1 animated:(char)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(char)showActionButton;
-(char)isViewVisible;
-(id)initWithWebView:(id)arg1 ;
@end

