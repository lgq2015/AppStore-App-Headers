/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <WhatsApp/WAScrollTracking.h>

@protocol WATranslucentTableViewCellDelegate;
@class UIImageView, NSString;

@interface WATranslucentTableViewCell : UITableViewCell <WAScrollTracking> {

	UIImageView* _blurMaskImageView;
	char _blurEnabled;
	UIImageView* _blurOverlayImageView;
	id<WATranslucentTableViewCellDelegate> _delegate;

}

@property (nonatomic,readonly) UIImageView * blurOverlayImageView;                                //@synthesize blurOverlayImageView=_blurOverlayImageView - In the implementation block
@property (assign,nonatomic,__weak) id<WATranslucentTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float translucency; 
@property (nonatomic,readonly) char blurEnabled;                                                  //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)blurImageMask;
-(UIImageView *)blurOverlayImageView;
-(id)blurMaskTrackingView;
-(char)blurEnabled;
-(void)updateBlurredBackground;
-(void)setDidScrollWithUserInteraction:(char)arg1 ;
-(float)translucency;
-(void)setTranslucency:(float)arg1 ;
-(void)setDelegate:(id<WATranslucentTableViewCellDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<WATranslucentTableViewCellDelegate>)delegate;
-(void)tintColorDidChange;
@end

