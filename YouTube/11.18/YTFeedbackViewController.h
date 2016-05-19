/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GOOTableViewController.h>
#import <YouTube/YTFeedbackPreviewViewControllerDelegate.h>
#import <YouTube/YTController.h>

@protocol YTResponder, YTFeedbackViewControllerDelegate;
@class FKFeedbackReport, YTPlaybackDebugData, FKFeedbackReportUploader, YTTextInputContentViewObject, NITableViewActions, UIButton, GIMMe, NSString;

@interface YTFeedbackViewController : GOOTableViewController <YTFeedbackPreviewViewControllerDelegate, YTController> {

	FKFeedbackReport* _feedbackReport;
	YTPlaybackDebugData* _playbackDebugData;
	FKFeedbackReportUploader* _feedbackReportUploader;
	YTTextInputContentViewObject* _textInput;
	NITableViewActions* _actions;
	UIButton* _previewButton;
	char _systemDataEnabled;
	char _playbackDataEnabled;
	char _accountInfoEnabled;
	char _screenshotEnabled;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;
	id<YTFeedbackViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                              //@synthesize gimme=_gimme - In the implementation block
@property (assign,nonatomic,__weak) id<YTFeedbackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                          //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)loadWithModel:(id)arg1 ;
-(char)didTapCheckboxObject:(id)arg1 ;
-(void)didTapPreviewButton:(id)arg1 ;
-(id)createTableViewModel;
-(id)checkboxObjectWithText:(id)arg1 detailText:(id)arg2 checked:(char)arg3 elementID:(int)arg4 ;
-(char)didTapPrivacyPolicy:(id)arg1 ;
-(void)previewViewController:(id)arg1 didSendFeedbackReport:(id)arg2 ;
-(void)setDelegate:(id<YTFeedbackViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<YTFeedbackViewControllerDelegate>)delegate;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
@end

