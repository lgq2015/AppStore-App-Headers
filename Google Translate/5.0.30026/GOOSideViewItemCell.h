/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GOOSideViewCell.h>

@protocol GOOSideViewItem;
@class UIImageView, UILabel, UIView, NSString;

@interface GOOSideViewItemCell : GOOSideViewCell {

	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _accessoryView;
	UIView* _currentBackgroundView;
	UIView* _currentSelectedBackgroundView;
	NSString* _accessibilityLabel;
	id<GOOSideViewItem> _item;

}

@property (nonatomic,retain) id<GOOSideViewItem> item;              //@synthesize item=_item - In the implementation block
-(void)updateCellWithItem:(id)arg1 ;
-(id)defaultSelectedBackgroundView;
-(void)updateHighlightedState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<GOOSideViewItem>)item;
-(void)setLineBreakMode:(id)arg1 ;
-(id)accessibilityLabel;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(void)setItem:(id<GOOSideViewItem>)arg1 ;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
@end

