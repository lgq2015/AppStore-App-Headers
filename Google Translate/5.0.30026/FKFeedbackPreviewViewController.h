/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/GOOTableViewController.h>

@protocol FKFeedbackPreviewViewControllerDelegate;
@class FKFeedbackReport, FKFeedbackReportUploader, NITableViewActions, FKResources;

@interface FKFeedbackPreviewViewController : GOOTableViewController {

	FKFeedbackReport* _feedbackReport;
	FKFeedbackReportUploader* _feedbackReportUploader;
	NITableViewActions* _actions;
	id<FKFeedbackPreviewViewControllerDelegate> _delegate;
	FKResources* _feedbackKitResources;

}

@property (assign,nonatomic,__weak) id<FKFeedbackPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FKResources * feedbackKitResources;                                       //@synthesize feedbackKitResources=_feedbackKitResources - In the implementation block
-(id)initWithFeedbackReport:(id)arg1 feedbackReportUploader:(id)arg2 ;
-(id)objectWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)didTapSendButton:(id)arg1 ;
-(id)createTableViewModel;
-(void)configureTextContentViewObject:(id)arg1 ;
-(id)contentViewObjectsForApplicationSpecificData:(id)arg1 ;
-(void)didTapOnSystemLog:(id)arg1 ;
-(void)didTapProductSpecificBinaryData:(id)arg1 ;
-(FKResources *)feedbackKitResources;
-(void)setFeedbackKitResources:(FKResources *)arg1 ;
-(void)setDelegate:(id<FKFeedbackPreviewViewControllerDelegate>)arg1 ;
-(id<FKFeedbackPreviewViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
@end

