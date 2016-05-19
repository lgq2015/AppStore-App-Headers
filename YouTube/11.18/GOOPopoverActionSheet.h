/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GOOActionSheet.h>
#import <YouTube/GOOPopoverViewDelegate.h>

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
-(void)dismissWithCancelAction:(char)arg1 ;
-(void)reposition;
-(char)shouldDimBackground;
-(void)configureView;
-(void)showPointingAtView:(id)arg1 withOffset:(CGSize)arg2 arrowDirections:(unsigned)arg3 ;
-(void)showPointingAtView:(id)arg1 withRect:(CGRect)arg2 arrowDirections:(unsigned)arg3 ;
-(void)openViewBasedPopover:(id)arg1 arrowDirections:(unsigned)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)popoverViewDidAppear:(id)arg1 ;
-(void)popoverViewDidDisappear:(id)arg1 ;
-(void)showPointingAtView:(id)arg1 withOffset:(CGSize)arg2 anchorCorner:(unsigned)arg3 ;
-(char)shouldDismissOnRotate;
-(void)setShouldDismissOnRotate:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
@end

