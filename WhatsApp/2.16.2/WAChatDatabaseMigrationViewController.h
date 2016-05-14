/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>

@protocol WAChatDatabaseMigrationViewControllerDelegate;
@class NSTimer, NSNumber, WAChatStorage, UIView, UILabel, UIProgressView, WACircularProgressView, UIButton;

@interface WAChatDatabaseMigrationViewController : WAViewController {

	NSTimer* _progressTimer;
	double _estimatedMigrationTime;
	unsigned long long _databaseSize;
	double _migrationStartTime;
	NSNumber* _migrationStatus;
	char _excessiveMigrationTimeLogUploaded;
	WAChatStorage* _chatStorage;
	id<WAChatDatabaseMigrationViewControllerDelegate> _delegate;
	UIView* _viewMigrationProgress;
	UILabel* _labelMigrationProgress;
	UIProgressView* _progressView;
	WACircularProgressView* _circularProgressView;
	UILabel* _labelProgress;
	UIView* _viewNoSpace;
	UILabel* _labelNoSpace;
	UIButton* _buttonTryAgain;

}

@property (nonatomic,retain) WAChatStorage * chatStorage;                                                    //@synthesize chatStorage=_chatStorage - In the implementation block
@property (assign,nonatomic,__weak) id<WAChatDatabaseMigrationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * viewMigrationProgress;                                                 //@synthesize viewMigrationProgress=_viewMigrationProgress - In the implementation block
@property (nonatomic,retain) UILabel * labelMigrationProgress;                                               //@synthesize labelMigrationProgress=_labelMigrationProgress - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                  //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) WACircularProgressView * circularProgressView;                                  //@synthesize circularProgressView=_circularProgressView - In the implementation block
@property (nonatomic,retain) UILabel * labelProgress;                                                        //@synthesize labelProgress=_labelProgress - In the implementation block
@property (nonatomic,retain) UIView * viewNoSpace;                                                           //@synthesize viewNoSpace=_viewNoSpace - In the implementation block
@property (nonatomic,retain) UILabel * labelNoSpace;                                                         //@synthesize labelNoSpace=_labelNoSpace - In the implementation block
@property (nonatomic,retain) UIButton * buttonTryAgain;                                                      //@synthesize buttonTryAgain=_buttonTryAgain - In the implementation block
+(void)showInWindow:(id)arg1 withDelegate:(id)arg2 ;
+(id)controller;
-(WAChatStorage *)chatStorage;
-(void)setChatStorage:(WAChatStorage *)arg1 ;
-(void)setViewMigrationProgress:(UIView *)arg1 ;
-(void)setLabelMigrationProgress:(UILabel *)arg1 ;
-(UILabel *)labelMigrationProgress;
-(UIView *)viewMigrationProgress;
-(void)setCircularProgressView:(WACircularProgressView *)arg1 ;
-(WACircularProgressView *)circularProgressView;
-(void)setLabelProgress:(UILabel *)arg1 ;
-(UILabel *)labelProgress;
-(long long)requiredDiskSpace;
-(UILabel *)labelNoSpace;
-(UIButton *)buttonTryAgain;
-(UIView *)viewNoSpace;
-(char)hasSufficientDiskSpaceForMigration;
-(void)reallyPerformMigration;
-(void)didFinishMigrationWithStatus:(char)arg1 ;
-(void)tryAgain:(id)arg1 ;
-(void)setViewNoSpace:(UIView *)arg1 ;
-(void)setLabelNoSpace:(UILabel *)arg1 ;
-(void)setButtonTryAgain:(UIButton *)arg1 ;
-(void)setDelegate:(id<WAChatDatabaseMigrationViewControllerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<WAChatDatabaseMigrationViewControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)updateProgress:(id)arg1 ;
-(void)performMigration;
@end

