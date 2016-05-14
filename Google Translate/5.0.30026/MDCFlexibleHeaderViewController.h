/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIViewController.h>
#import <Translate/MDCFlexibleHeaderViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MDCFlexibleHeaderViewLayoutDelegate;
@class MDCFlexibleHeaderView, NSString;

@interface MDCFlexibleHeaderViewController : UIViewController <MDCFlexibleHeaderViewDelegate, UIScrollViewDelegate, UITableViewDelegate> {

	MDCFlexibleHeaderView* _headerView;
	id<MDCFlexibleHeaderViewLayoutDelegate> _layoutDelegate;

}

@property (nonatomic,readonly) MDCFlexibleHeaderView * headerView;                                       //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) id<MDCFlexibleHeaderViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flexibleHeaderViewFrameDidChange:(id)arg1 ;
-(void)flexibleHeaderViewNeedsStatusBarAppearanceUpdate:(id)arg1 ;
-(id<MDCFlexibleHeaderViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<MDCFlexibleHeaderViewLayoutDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(MDCFlexibleHeaderView *)headerView;
@end

