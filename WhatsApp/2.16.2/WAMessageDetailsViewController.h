/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAChatBaseViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <WhatsApp/WADetailsTableSizeObzerver.h>
#import <WhatsApp/_WAContainerScrollViewDelegate.h>
#import <WhatsApp/WANavigationControllerPopFromAnimating.h>

@protocol UITableViewDelegateUITableViewDataSourceWAMessageDetailsTableUpdateDelegate;
@class UITableView, UIView, UIScrollView, _WAContainerScrollViewHelper, WAMessage, NSString;

@interface WAMessageDetailsViewController : WAChatBaseViewController <UIGestureRecognizerDelegate, WADetailsTableSizeObzerver, _WAContainerScrollViewDelegate, WANavigationControllerPopFromAnimating> {

	UITableView* _tableViewDetails;
	UIView* _messagesTableBorder;
	id<UITableViewDelegate><UITableViewDataSource><WAMessageDetailsTableUpdateDelegate> _detailsTableDelegate;
	UIScrollView* _containerScrollView;
	_WAContainerScrollViewHelper* _containerScrollViewHelper;
	char _needToSetInitialPosition;
	WAMessage* _message;
	char _detailsTableUpdateScheduled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wa_fontSizeDidChange;
-(id)popFromAnimationIdentifier;
-(char)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
-(id)messageDateStringFromDate:(id)arg1 ;
-(void)updateLayoutForCurrentOrientation;
-(void)containerScrollViewDidScroll:(id)arg1 ;
-(void)containerScrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)containerScrollViewDidEndDecelerating:(id)arg1 ;
-(void)chatStorageDidDeleteMessages:(id)arg1 ;
-(void)updateViewPositions;
-(void)updateDetailsTable;
-(void)messageUpdated:(id)arg1 ;
-(void)setNeedsSizeUpdate;
-(void)openMediaViewerFromMessageCell:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)initWithMessage:(id)arg1 ;
@end

