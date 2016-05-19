/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTCollectionViewCell.h>
#import <YouTube/YTFeedViewCellProtocol.h>
#import <YouTube/YTThumbnailMapping.h>

@protocol YTResponder;
@class YTICompactPromotedItemRenderer, YTFormattedStringLabel, YTImageView, YTButton, NSString;

@interface YTCompactPromotedItemCell : YTCollectionViewCell <YTFeedViewCellProtocol, YTThumbnailMapping> {

	YTICompactPromotedItemRenderer* _entry;
	YTFormattedStringLabel* _titleLabel;
	YTFormattedStringLabel* _subtitleLabel;
	YTImageView* _iconImageView;
	YTButton* _actionButton;
	YTButton* _dismissButton;
	id<YTResponder> _parentResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
-(id<YTResponder>)parentResponder;
-(id)thumbnailMappings;
-(float)thumbnailIndent;
-(void)removeButtonTargets;
-(void)addActionButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addDismissButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(CGSize)sizeThatFits_regular:(CGSize)arg1 ;
-(CGSize)sizeThatFits_compact:(CGSize)arg1 ;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(CGSize)thumbnailSize;
-(float)maxTitleWidth;
-(id)entry;
@end

