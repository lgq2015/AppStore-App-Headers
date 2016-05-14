/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol WATOSReadMoreViewControllerDelegate;
@class NSLayoutConstraint, UIView, UIButton, UILabel, UIActivityIndicatorView, WAGradientView, WALinkLabel, UISwitch, UITapGestureRecognizer, WATooltipView, NSString;

@interface WATOSReadMoreViewController : WAViewController <WKNavigationDelegate, UIWebViewDelegate, UIScrollViewDelegate> {

	char _accountInfoSharingOptOut;
	id<WATOSReadMoreViewControllerDelegate> _delegate;
	NSLayoutConstraint* _topPanelTop;
	UIView* _topPanel;
	UIButton* _buttonDismiss;
	UIButton* _buttonShare;
	UILabel* _titleLabel;
	UIView* _webViewContainer;
	UIView* _noConnectionView;
	UILabel* _noConnectionLabel;
	UIButton* _buttonReload;
	UIActivityIndicatorView* _webViewActivityIndicator;
	UIView* _webView;
	UIView* _bottomPanel;
	UIView* _switchContainer;
	WAGradientView* _bottomPanelShadow;
	WALinkLabel* _shareAccountInfoLabel;
	NSLayoutConstraint* _shareAccountInfoLabelTrailing;
	UISwitch* _switchOptOut;
	UIButton* _buttonAgree;
	UITapGestureRecognizer* _switchContainerTap;
	WATooltipView* _switchTooltip;

}

@property (assign,nonatomic,__weak) id<WATOSReadMoreViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char accountInfoSharingOptOut;                                          //@synthesize accountInfoSharingOptOut=_accountInfoSharingOptOut - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * topPanelTop;                                //@synthesize topPanelTop=_topPanelTop - In the implementation block
@property (assign,nonatomic,__weak) UIView * topPanel;                                               //@synthesize topPanel=_topPanel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * buttonDismiss;                                        //@synthesize buttonDismiss=_buttonDismiss - In the implementation block
@property (assign,nonatomic,__weak) UIButton * buttonShare;                                          //@synthesize buttonShare=_buttonShare - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIView * webViewContainer;                                       //@synthesize webViewContainer=_webViewContainer - In the implementation block
@property (assign,nonatomic,__weak) UIView * noConnectionView;                                       //@synthesize noConnectionView=_noConnectionView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * noConnectionLabel;                                     //@synthesize noConnectionLabel=_noConnectionLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * buttonReload;                                         //@synthesize buttonReload=_buttonReload - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * webViewActivityIndicator;              //@synthesize webViewActivityIndicator=_webViewActivityIndicator - In the implementation block
@property (nonatomic,retain) UIView * webView;                                                       //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomPanel;                                            //@synthesize bottomPanel=_bottomPanel - In the implementation block
@property (assign,nonatomic,__weak) UIView * switchContainer;                                        //@synthesize switchContainer=_switchContainer - In the implementation block
@property (assign,nonatomic,__weak) WAGradientView * bottomPanelShadow;                              //@synthesize bottomPanelShadow=_bottomPanelShadow - In the implementation block
@property (assign,nonatomic,__weak) WALinkLabel * shareAccountInfoLabel;                             //@synthesize shareAccountInfoLabel=_shareAccountInfoLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * shareAccountInfoLabelTrailing;              //@synthesize shareAccountInfoLabelTrailing=_shareAccountInfoLabelTrailing - In the implementation block
@property (assign,nonatomic,__weak) UISwitch * switchOptOut;                                         //@synthesize switchOptOut=_switchOptOut - In the implementation block
@property (assign,nonatomic,__weak) UIButton * buttonAgree;                                          //@synthesize buttonAgree=_buttonAgree - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * switchContainerTap;                            //@synthesize switchContainerTap=_switchContainerTap - In the implementation block
@property (assign,nonatomic,__weak) WATooltipView * switchTooltip;                                   //@synthesize switchTooltip=_switchTooltip - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controller;
-(void)reloadFonts;
-(void)prepareToBeDismissed;
-(char)accountInfoSharingOptOut;
-(void)wa_tintColorDidChange;
-(void)wa_fontSizeDidChange;
-(void)reloadAction:(id)arg1 ;
-(void)setNoConnectionLabel:(UILabel *)arg1 ;
-(UILabel *)noConnectionLabel;
-(UIButton *)buttonDismiss;
-(UIView *)bottomPanel;
-(UIButton *)buttonAgree;
-(WAGradientView *)bottomPanelShadow;
-(void)reloadButtonTitleColors;
-(void)setAccountInfoSharingOptOut:(char)arg1 ;
-(void)setButtonDismiss:(UIButton *)arg1 ;
-(void)setButtonAgree:(UIButton *)arg1 ;
-(void)setBottomPanel:(UIView *)arg1 ;
-(void)setBottomPanelShadow:(WAGradientView *)arg1 ;
-(NSLayoutConstraint *)topPanelTop;
-(UIButton *)buttonShare;
-(WALinkLabel *)shareAccountInfoLabel;
-(UIView *)switchContainer;
-(void)switchContainerTap:(id)arg1 ;
-(void)setSwitchContainerTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)switchContainerTap;
-(UISwitch *)switchOptOut;
-(void)optOutSwitchAction:(id)arg1 ;
-(void)reloadSwitchAccessibilityValue;
-(UIButton *)buttonReload;
-(void)dismissAction:(id)arg1 ;
-(void)shareAction:(id)arg1 ;
-(void)agreeAction:(id)arg1 ;
-(UIView *)webViewContainer;
-(UIView *)noConnectionView;
-(void)reloadWebContent;
-(void)accessibilityVoiceOverStatusChanged:(id)arg1 ;
-(NSLayoutConstraint *)shareAccountInfoLabelTrailing;
-(void)updateVisibilityOfBottomPanelShadowWithScrollView:(id)arg1 ;
-(UIActivityIndicatorView *)webViewActivityIndicator;
-(WATooltipView *)switchTooltip;
-(void)setSwitchTooltip:(WATooltipView *)arg1 ;
-(void)setTopPanelTop:(NSLayoutConstraint *)arg1 ;
-(UIView *)topPanel;
-(void)setTopPanel:(UIView *)arg1 ;
-(void)setButtonShare:(UIButton *)arg1 ;
-(void)setWebViewContainer:(UIView *)arg1 ;
-(void)setNoConnectionView:(UIView *)arg1 ;
-(void)setButtonReload:(UIButton *)arg1 ;
-(void)setWebViewActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setSwitchContainer:(UIView *)arg1 ;
-(void)setShareAccountInfoLabel:(WALinkLabel *)arg1 ;
-(void)setShareAccountInfoLabelTrailing:(NSLayoutConstraint *)arg1 ;
-(void)setSwitchOptOut:(UISwitch *)arg1 ;
-(id)webPageURL;
-(void)setDelegate:(id<WATOSReadMoreViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<WATOSReadMoreViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(UIView *)webView;
-(void)setWebView:(UIView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
@end

