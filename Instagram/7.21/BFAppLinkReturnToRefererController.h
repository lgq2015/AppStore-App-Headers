/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/BFAppLinkReturnToRefererViewDelegate.h>

@protocol BFAppLinkReturnToRefererControllerDelegate;
@class BFURL, NSURL, BFAppLinkReturnToRefererView, UINavigationController, NSString;

@interface BFAppLinkReturnToRefererController : NSObject <BFAppLinkReturnToRefererViewDelegate> {

	BFURL* _lastShownBFUrl;
	NSURL* _lastShownUrl;
	BFAppLinkReturnToRefererView* _view;
	id<BFAppLinkReturnToRefererControllerDelegate> _delegate;
	UINavigationController* _attachedToNavController;

}

@property (assign,nonatomic,__weak) id<BFAppLinkReturnToRefererControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BFAppLinkReturnToRefererView * view;                                         //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UINavigationController * attachedToNavController;                            //@synthesize attachedToNavController=_attachedToNavController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForDisplayAboveNavController:(id)arg1 ;
-(void)statusBarFrameDidChange:(id)arg1 ;
-(void)moveNavigationBar;
-(void)showViewForRefererAppLink:(id)arg1 ;
-(void)closeViewAnimated:(char)arg1 ;
-(void)openRefererAppLink:(id)arg1 ;
-(void)returnToRefererViewDidTapInsideCloseButton:(id)arg1 ;
-(void)returnToRefererViewDidTapInsideLink:(id)arg1 link:(id)arg2 ;
-(void)showViewForRefererURL:(id)arg1 ;
-(void)removeFromNavController;
-(UINavigationController *)attachedToNavController;
-(void)setAttachedToNavController:(UINavigationController *)arg1 ;
-(void)setDelegate:(id<BFAppLinkReturnToRefererControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BFAppLinkReturnToRefererControllerDelegate>)delegate;
-(BFAppLinkReturnToRefererView *)view;
-(void)setView:(BFAppLinkReturnToRefererView *)arg1 ;
-(void)statusBarFrameWillChange:(id)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
@end

