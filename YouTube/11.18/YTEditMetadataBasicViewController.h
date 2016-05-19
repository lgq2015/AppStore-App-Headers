/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTStyledViewController.h>
#import <YouTube/YTStyleContextResponderProvider.h>
#import <YouTube/YTEditMetadataViewControllerDelegate.h>
#import <YouTube/YTTopController.h>
#import <YouTube/YTGraftingViewController.h>

@protocol YTDataServices, YTIdentityGlobals, YTResponder;
@class YTINavigationEndpoint, YTEditPlayerViewController, YTEditMetadataBasicUploadPreviewView, NSString;

@interface YTEditMetadataBasicViewController : YTStyledViewController <YTStyleContextResponderProvider, YTEditMetadataViewControllerDelegate, YTTopController, YTGraftingViewController> {

	id<YTDataServices> _dataServices;
	id<YTIdentityGlobals> _identityGlobals;
	YTINavigationEndpoint* _model;
	id<YTResponder> _parentResponder;
	YTEditPlayerViewController* _playerViewController;

}

@property (nonatomic,retain) YTEditPlayerViewController * playerViewController;                  //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,readonly) YTEditMetadataBasicUploadPreviewView * metadataView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * styleContext; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                           //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(void)loadWithModel:(id)arg1 fromView:(id)arg2 ;
-(void)canBePushedWithBlock:(/*^block*/id)arg1 ;
-(char)isEqualTopController:(id)arg1 ;
-(id)navEndpoint;
-(/*^block*/id)clientDataBlock;
-(YTEditMetadataBasicUploadPreviewView *)metadataView;
-(NSString *)styleContext;
-(void)animateTitleExpansionToHeight:(float)arg1 duration:(double)arg2 options:(unsigned)arg3 ;
-(void)didRequestMetadata;
-(void)metadataRequestCompleted;
-(id)initWithParentResponder:(id)arg1 dataServices:(id)arg2 identityGlobals:(id)arg3 ;
-(void)setPlayerViewController:(YTEditPlayerViewController *)arg1 ;
-(YTEditPlayerViewController *)playerViewController;
-(void)loadView;
-(id)model;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

