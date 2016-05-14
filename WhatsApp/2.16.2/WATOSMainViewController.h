/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <WhatsApp/WALinkLabelDelegate.h>
#import <WhatsApp/WATOSReadMoreViewControllerDelegate.h>

@protocol WATOSMainViewControllerDelegate;
@class NSLayoutConstraint, UIButton, WALinkLabel, UIView, UILabel, WAGradientView, NSString;

@interface WATOSMainViewController : WAViewController <WALinkLabelDelegate, WATOSReadMoreViewControllerDelegate> {

	char _accountInfoSharingOptOut;
	unsigned _stage;
	id<WATOSMainViewControllerDelegate> _delegate;
	NSLayoutConstraint* _dismissButtonTop;
	NSLayoutConstraint* _mainContentContainerTop;
	UIButton* _buttonDismiss;
	UIButton* _buttonAgree;
	WALinkLabel* _helperTextLabel;
	UIView* _mainContentContainer;
	UIView* _bottomPanel;
	UIButton* _buttonReadMore;
	NSLayoutConstraint* _buttonReadMoreLeft;
	UILabel* _readMoreHintLabel;
	WAGradientView* _bottomPanelShadow;
	NSLayoutConstraint* _readMoreLabelLeft;
	NSLayoutConstraint* _readMoreLabelRight;

}

@property (assign,nonatomic) unsigned stage;                                                   //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) char accountInfoSharingOptOut;                                    //@synthesize accountInfoSharingOptOut=_accountInfoSharingOptOut - In the implementation block
@property (assign,nonatomic,__weak) id<WATOSMainViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * dismissButtonTop;                     //@synthesize dismissButtonTop=_dismissButtonTop - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * mainContentContainerTop;              //@synthesize mainContentContainerTop=_mainContentContainerTop - In the implementation block
@property (assign,nonatomic,__weak) UIButton * buttonDismiss;                                  //@synthesize buttonDismiss=_buttonDismiss - In the implementation block
@property (assign,nonatomic,__weak) UIButton * buttonAgree;                                    //@synthesize buttonAgree=_buttonAgree - In the implementation block
@property (assign,nonatomic,__weak) WALinkLabel * helperTextLabel;                             //@synthesize helperTextLabel=_helperTextLabel - In the implementation block
@property (assign,nonatomic,__weak) UIView * mainContentContainer;                             //@synthesize mainContentContainer=_mainContentContainer - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomPanel;                                      //@synthesize bottomPanel=_bottomPanel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * buttonReadMore;                                 //@synthesize buttonReadMore=_buttonReadMore - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * buttonReadMoreLeft;                   //@synthesize buttonReadMoreLeft=_buttonReadMoreLeft - In the implementation block
@property (assign,nonatomic,__weak) UILabel * readMoreHintLabel;                               //@synthesize readMoreHintLabel=_readMoreHintLabel - In the implementation block
@property (assign,nonatomic,__weak) WAGradientView * bottomPanelShadow;                        //@synthesize bottomPanelShadow=_bottomPanelShadow - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * readMoreLabelLeft;                    //@synthesize readMoreLabelLeft=_readMoreLabelLeft - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * readMoreLabelRight;                   //@synthesize readMoreLabelRight=_readMoreLabelRight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controller;
-(void)reloadFonts;
-(char)accountInfoSharingOptOut;
-(void)wa_tintColorDidChange;
-(void)wa_fontSizeDidChange;
-(void)reloadHelperText;
-(NSLayoutConstraint *)dismissButtonTop;
-(NSLayoutConstraint *)mainContentContainerTop;
-(UIButton *)buttonDismiss;
-(WALinkLabel *)helperTextLabel;
-(UILabel *)readMoreHintLabel;
-(UIView *)bottomPanel;
-(UIButton *)buttonAgree;
-(void)agreeButtonTapped:(id)arg1 ;
-(WAGradientView *)bottomPanelShadow;
-(void)handleBottomPanelTap:(id)arg1 ;
-(UIButton *)buttonReadMore;
-(void)readMoreButtonTapped:(id)arg1 ;
-(void)reloadButtonTitleColors;
-(void)reloadDismissButtonVisibility;
-(UIView *)mainContentContainer;
-(NSLayoutConstraint *)buttonReadMoreLeft;
-(NSLayoutConstraint *)readMoreLabelRight;
-(NSLayoutConstraint *)readMoreLabelLeft;
-(void)presentReadMoreScreen;
-(void)setAccountInfoSharingOptOut:(char)arg1 ;
-(void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2 ;
-(void)tosReadMoreControllerDidAccept:(id)arg1 ;
-(void)tosReadMoreControllerDidDismiss:(id)arg1 ;
-(void)setDismissButtonTop:(NSLayoutConstraint *)arg1 ;
-(void)setMainContentContainerTop:(NSLayoutConstraint *)arg1 ;
-(void)setButtonDismiss:(UIButton *)arg1 ;
-(void)setButtonAgree:(UIButton *)arg1 ;
-(void)setHelperTextLabel:(WALinkLabel *)arg1 ;
-(void)setMainContentContainer:(UIView *)arg1 ;
-(void)setBottomPanel:(UIView *)arg1 ;
-(void)setButtonReadMore:(UIButton *)arg1 ;
-(void)setButtonReadMoreLeft:(NSLayoutConstraint *)arg1 ;
-(void)setReadMoreHintLabel:(UILabel *)arg1 ;
-(void)setBottomPanelShadow:(WAGradientView *)arg1 ;
-(void)setReadMoreLabelLeft:(NSLayoutConstraint *)arg1 ;
-(void)setReadMoreLabelRight:(NSLayoutConstraint *)arg1 ;
-(void)setDelegate:(id<WATOSMainViewControllerDelegate>)arg1 ;
-(id<WATOSMainViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(unsigned)stage;
-(void)setStage:(unsigned)arg1 ;
-(void)dismissButtonTapped:(id)arg1 ;
@end

