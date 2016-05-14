/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol WARepairDatabaseViewControllerDelegate;
@class UILabel, UIButton, UIProgressView, UIImageView, UIView;

@interface WARepairDatabaseViewController : UIViewController {

	id<WARepairDatabaseViewControllerDelegate> _delegate;
	UILabel* _paragraphLabel;
	UILabel* _warningLabel;
	UIButton* _beginButton;
	UIProgressView* _progressView;
	UILabel* _completionLabel;
	UIImageView* _warningImageView;
	UIView* _topHairlineView;
	UIView* _bottomHairlineView;
	UIView* _buttonBackgroundView;
	UIView* _contentView;

}

@property (assign,nonatomic,__weak) id<WARepairDatabaseViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * paragraphLabel;                                                //@synthesize paragraphLabel=_paragraphLabel - In the implementation block
@property (nonatomic,retain) UILabel * warningLabel;                                                  //@synthesize warningLabel=_warningLabel - In the implementation block
@property (nonatomic,retain) UIButton * beginButton;                                                  //@synthesize beginButton=_beginButton - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                           //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UILabel * completionLabel;                                               //@synthesize completionLabel=_completionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * warningImageView;                                          //@synthesize warningImageView=_warningImageView - In the implementation block
@property (nonatomic,retain) UIView * topHairlineView;                                                //@synthesize topHairlineView=_topHairlineView - In the implementation block
@property (nonatomic,retain) UIView * bottomHairlineView;                                             //@synthesize bottomHairlineView=_bottomHairlineView - In the implementation block
@property (nonatomic,retain) UIView * buttonBackgroundView;                                           //@synthesize buttonBackgroundView=_buttonBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                    //@synthesize contentView=_contentView - In the implementation block
+(void)showInWindow:(id)arg1 withDelegate:(id)arg2 ;
-(UILabel *)paragraphLabel;
-(UIButton *)beginButton;
-(UILabel *)completionLabel;
-(UIImageView *)warningImageView;
-(UIView *)topHairlineView;
-(UIView *)buttonBackgroundView;
-(UIView *)bottomHairlineView;
-(void)handleRepairOutcome:(unsigned)arg1 ;
-(void)performRecovery:(id)arg1 ;
-(void)setParagraphLabel:(UILabel *)arg1 ;
-(void)setBeginButton:(UIButton *)arg1 ;
-(void)setCompletionLabel:(UILabel *)arg1 ;
-(void)setWarningImageView:(UIImageView *)arg1 ;
-(void)setTopHairlineView:(UIView *)arg1 ;
-(void)setBottomHairlineView:(UIView *)arg1 ;
-(void)setButtonBackgroundView:(UIView *)arg1 ;
-(void)setDelegate:(id<WARepairDatabaseViewControllerDelegate>)arg1 ;
-(id<WARepairDatabaseViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
@end

