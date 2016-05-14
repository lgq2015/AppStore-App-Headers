/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol IGAlbumTitleViewControllerDelegate;
@class IGAlbumCreationModel, IGAlbumCreationViewModel, UITextField, IGTapButton, UILabel, NSString;

@interface IGAlbumTitleViewController : UIViewController <UITextFieldDelegate, UIViewControllerTransitioningDelegate> {

	IGAlbumCreationModel* _albumModel;
	id<IGAlbumTitleViewControllerDelegate> _delegate;
	IGAlbumCreationViewModel* _viewModel;
	UITextField* _albumTitleTextField;
	IGTapButton* _backButton;
	IGTapButton* _nextButton;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) id<IGAlbumTitleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAlbumCreationViewModel * viewModel;                                //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UITextField * albumTitleTextField;                                   //@synthesize albumTitleTextField=_albumTitleTextField - In the implementation block
@property (nonatomic,retain) IGTapButton * backButton;                                            //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) IGTapButton * nextButton;                                            //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) IGAlbumCreationModel * albumModel;                                 //@synthesize albumModel=_albumModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGAlbumCreationModel *)albumModel;
-(id)initWithAlbumModel:(id)arg1 viewModel:(id)arg2 delegate:(id)arg3 ;
-(void)nextButtonTapped;
-(void)tappedView:(id)arg1 ;
-(void)updateNavigation;
-(void)finishedEditing;
-(UITextField *)albumTitleTextField;
-(void)setAlbumTitleTextField:(UITextField *)arg1 ;
-(IGAlbumCreationViewModel *)viewModel;
-(void)setViewModel:(IGAlbumCreationViewModel *)arg1 ;
-(void)setDelegate:(id<IGAlbumTitleViewControllerDelegate>)arg1 ;
-(id<IGAlbumTitleViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(UILabel *)titleLabel;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(IGTapButton *)nextButton;
-(void)setNextButton:(IGTapButton *)arg1 ;
-(void)setBackButton:(IGTapButton *)arg1 ;
-(void)backButtonTapped;
-(IGTapButton *)backButton;
@end

