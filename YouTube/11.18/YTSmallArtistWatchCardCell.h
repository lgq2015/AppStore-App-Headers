/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTCollectionViewCell.h>
#import <YouTube/YTFeedViewCellProtocol.h>
#import <YouTube/YTResponder.h>
#import <YouTube/YTThumbnailMapping.h>

@protocol YTResponder;
@class YTIWatchCardListRenderer, UIImageView, YTSmallArtistWatchCardHeaderView, YTSmallArtistWatchCardListView, YTWatchCardRelatedView, NSString;

@interface YTSmallArtistWatchCardCell : YTCollectionViewCell <YTFeedViewCellProtocol, YTResponder, YTThumbnailMapping> {

	YTIWatchCardListRenderer* _renderer;
	UIImageView* _backgroundView;
	YTSmallArtistWatchCardHeaderView* _headerView;
	YTSmallArtistWatchCardListView* _listView;
	YTWatchCardRelatedView* _relatedView;
	id _expandTapTarget;
	SEL _expandSelector;
	char _expanded;
	id<YTResponder> _parentResponder;

}

@property (assign,nonatomic) char expanded;                                         //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
+(CGSize)cellSizeForEntry:(id)arg1 expanded:(char)arg2 size:(CGSize)arg3 ;
-(id<YTResponder>)parentResponder;
-(id)thumbnailMappings;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(void)removeExpandTapTarget;
-(void)setExpandTapTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(id)entry;
@end

