/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GOOActionSheet.h>
#import <Translate/GOOPopoverViewDelegate.h>

@class GOOPopoverMenuView, UIView, NSString;

@interface GOOPopoverActionSheet : GOOActionSheet <GOOPopoverViewDelegate> {

	GOOPopoverMenuView* _popoverView;
	UIView* _pointingAtView;
	CGRect _viewInnerRect;
	unsigned _allowedDirections;
	CGSize _offset;
	char _shouldDismissOnRotate;

}

@property (assign,nonatomic) char shouldDismissOnRotate;              //@synthesize shouldDismissOnRotate=_shouldDismissOnRotate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureView;
-(void)showPointingAtView:(id)arg1 withOffset:(CGSize)arg2 arrowDirections:(unsigned)arg3 ;
-(void)dismissWithCancelAction:(char)arg1 ;
-(void)showPointingAtView:(id)arg1 withRect:(CGRect)arg2 arrowDirections:(unsigned)arg3 ;
-(void)reposition;
-(void)openViewBasedPopover:(id)arg1 arrowDirections:(unsigned)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)popoverViewDidAppear:(id)arg1 ;
-(void)popoverViewDidDisappear:(id)arg1 ;
-(void)showPointingAtView:(id)arg1 withOffset:(CGSize)arg2 anchorCorner:(unsigned)arg3 ;
-(char)shouldDimBackground;
-(char)shouldDismissOnRotate;
-(void)setShouldDismissOnRotate:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
@end

