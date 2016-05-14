/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>

@class UILabel, UIButton, NSLayoutConstraint;

@interface WAThreeItemWarningViewController : WAViewController {

	char _allowsUserToContinueUsingApp;
	UILabel* _labelItem1;
	UILabel* _labelItem2;
	UILabel* _labelItem3;
	UILabel* _labelTitle;
	UILabel* _labelBody;
	UILabel* _labelDescription1;
	UILabel* _labelDescription2;
	UILabel* _labelDescription3;
	UIButton* _buttonClose;
	NSLayoutConstraint* _closeButtonWidthConstraint;
	NSLayoutConstraint* _exitButtonToBottomConstraint;
	NSLayoutConstraint* _label3ToBottomConstraint;
	UIButton* _exitButton;

}

@property (assign,nonatomic,__weak) UILabel * labelItem1;                                           //@synthesize labelItem1=_labelItem1 - In the implementation block
@property (assign,nonatomic,__weak) UILabel * labelItem2;                                           //@synthesize labelItem2=_labelItem2 - In the implementation block
@property (assign,nonatomic,__weak) UILabel * labelItem3;                                           //@synthesize labelItem3=_labelItem3 - In the implementation block
@property (assign,nonatomic,__weak) UILabel * labelTitle;                                           //@synthesize labelTitle=_labelTitle - In the implementation block
@property (assign,nonatomic,__weak) UILabel * labelBody;                                            //@synthesize labelBody=_labelBody - In the implementation block
@property (assign,nonatomic,__weak) UILabel * labelDescription1;                                    //@synthesize labelDescription1=_labelDescription1 - In the implementation block
@property (assign,nonatomic,__weak) UILabel * labelDescription2;                                    //@synthesize labelDescription2=_labelDescription2 - In the implementation block
@property (assign,nonatomic,__weak) UILabel * labelDescription3;                                    //@synthesize labelDescription3=_labelDescription3 - In the implementation block
@property (assign,nonatomic) char allowsUserToContinueUsingApp;                                     //@synthesize allowsUserToContinueUsingApp=_allowsUserToContinueUsingApp - In the implementation block
@property (assign,nonatomic,__weak) UIButton * buttonClose;                                         //@synthesize buttonClose=_buttonClose - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * closeButtonWidthConstraint;                //@synthesize closeButtonWidthConstraint=_closeButtonWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * exitButtonToBottomConstraint;              //@synthesize exitButtonToBottomConstraint=_exitButtonToBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * label3ToBottomConstraint;                  //@synthesize label3ToBottomConstraint=_label3ToBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIButton * exitButton;                                          //@synthesize exitButton=_exitButton - In the implementation block
-(void)exitApp:(id)arg1 ;
-(void)closeAction:(id)arg1 ;
-(UIButton *)buttonClose;
-(UILabel *)labelTitle;
-(UILabel *)labelItem1;
-(UILabel *)labelItem2;
-(UILabel *)labelItem3;
-(void)setButtonClose:(UIButton *)arg1 ;
-(void)setLabelItem1:(UILabel *)arg1 ;
-(void)setLabelItem2:(UILabel *)arg1 ;
-(void)setLabelItem3:(UILabel *)arg1 ;
-(void)setLabelTitle:(UILabel *)arg1 ;
-(char)allowsUserToContinueUsingApp;
-(UIButton *)exitButton;
-(NSLayoutConstraint *)exitButtonToBottomConstraint;
-(NSLayoutConstraint *)label3ToBottomConstraint;
-(NSLayoutConstraint *)closeButtonWidthConstraint;
-(UILabel *)labelBody;
-(UILabel *)labelDescription1;
-(UILabel *)labelDescription2;
-(UILabel *)labelDescription3;
-(void)setLabelBody:(UILabel *)arg1 ;
-(void)setLabelDescription1:(UILabel *)arg1 ;
-(void)setLabelDescription2:(UILabel *)arg1 ;
-(void)setLabelDescription3:(UILabel *)arg1 ;
-(void)setAllowsUserToContinueUsingApp:(char)arg1 ;
-(void)setCloseButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setExitButtonToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLabel3ToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setExitButton:(UIButton *)arg1 ;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dismiss;
@end

