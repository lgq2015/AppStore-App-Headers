/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QTMCollectionViewStyleDelegate;
#import <Translate/Translate-Structs.h>
@class UIColor, QTMCollectionView, QTMColorGroup, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface QTMCollectionViewStyleController : NSObject {

	UIColor* _collectionViewBackgroundColor;
	char _shouldInvalidateLayout;
	char _usesDarkTheme;
	char _allowsItemInlay;
	char _allowsMultipleItemInlays;
	char _shouldAnimateCellsOnAppearance;
	char _willAnimateCellsOnAppearance;
	QTMCollectionView* _collectionView;
	id<QTMCollectionViewStyleDelegate> _delegate;
	unsigned _sectionItemStyle;
	unsigned _sectionHeaderStyle;
	unsigned _sectionFooterStyle;
	unsigned _accessoryType;
	unsigned _headerAccessoryType;
	unsigned _footerAccessoryType;
	unsigned _cellDividerStyle;
	unsigned _cellDividerStyleInsets;
	QTMColorGroup* _collectionViewBackgroundColorGroup;
	unsigned _cellStyle;
	unsigned _cellLayoutType;
	int _gridColumnCount;
	float _gridPadding;
	float _animateCellsOnAppearancePadding;
	UIColor* _innerBackgroundColor;
	NSMutableArray* _highlightedInnerGradientColors;
	UIColor* _borderColor;
	float _borderRadius;
	float _borderWidth;
	UIColor* _shadowColor;
	float _shadowWidth;
	UIColor* _cellDividerColor;
	float _cellDividerHeight;
	unsigned _inkTouchStyle;
	NSMutableDictionary* _cellBackgroundCaches;
	NSMutableSet* _inlaidIndexPathSet;
	double _animateCellsOnAppearanceDuration;
	CGSize _shadowOffset;
	UIEdgeInsets _accessoryInsets;
	UIEdgeInsets _cellDividerInsets;

}

@property (assign,nonatomic) char shouldInvalidateLayout;                                     //@synthesize shouldInvalidateLayout=_shouldInvalidateLayout - In the implementation block
@property (nonatomic,__weak,readonly) QTMCollectionView * collectionView;                     //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<QTMCollectionViewStyleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char usesDarkTheme;                                              //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) unsigned sectionItemStyle;                                       //@synthesize sectionItemStyle=_sectionItemStyle - In the implementation block
@property (assign,nonatomic) unsigned sectionHeaderStyle;                                     //@synthesize sectionHeaderStyle=_sectionHeaderStyle - In the implementation block
@property (assign,nonatomic) unsigned sectionFooterStyle;                                     //@synthesize sectionFooterStyle=_sectionFooterStyle - In the implementation block
@property (assign,nonatomic) unsigned accessoryType;                                          //@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,nonatomic) unsigned headerAccessoryType;                                    //@synthesize headerAccessoryType=_headerAccessoryType - In the implementation block
@property (assign,nonatomic) unsigned footerAccessoryType;                                    //@synthesize footerAccessoryType=_footerAccessoryType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accessoryInsets;                                    //@synthesize accessoryInsets=_accessoryInsets - In the implementation block
@property (assign,nonatomic) unsigned cellDividerStyle;                                       //@synthesize cellDividerStyle=_cellDividerStyle - In the implementation block
@property (assign,nonatomic) unsigned cellDividerStyleInsets;                                 //@synthesize cellDividerStyleInsets=_cellDividerStyleInsets - In the implementation block
@property (nonatomic,retain) QTMColorGroup * collectionViewBackgroundColorGroup;              //@synthesize collectionViewBackgroundColorGroup=_collectionViewBackgroundColorGroup - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellDividerInsets;                                  //@synthesize cellDividerInsets=_cellDividerInsets - In the implementation block
@property (assign,nonatomic) unsigned cellStyle;                                              //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic) unsigned cellLayoutType;                                         //@synthesize cellLayoutType=_cellLayoutType - In the implementation block
@property (assign,nonatomic) int gridColumnCount;                                             //@synthesize gridColumnCount=_gridColumnCount - In the implementation block
@property (assign,nonatomic) float gridPadding;                                               //@synthesize gridPadding=_gridPadding - In the implementation block
@property (assign,nonatomic) char allowsItemInlay;                                            //@synthesize allowsItemInlay=_allowsItemInlay - In the implementation block
@property (assign,nonatomic) char allowsMultipleItemInlays;                                   //@synthesize allowsMultipleItemInlays=_allowsMultipleItemInlays - In the implementation block
@property (assign,nonatomic) char shouldAnimateCellsOnAppearance;                             //@synthesize shouldAnimateCellsOnAppearance=_shouldAnimateCellsOnAppearance - In the implementation block
@property (nonatomic,readonly) char willAnimateCellsOnAppearance;                             //@synthesize willAnimateCellsOnAppearance=_willAnimateCellsOnAppearance - In the implementation block
@property (nonatomic,readonly) float animateCellsOnAppearancePadding;                         //@synthesize animateCellsOnAppearancePadding=_animateCellsOnAppearancePadding - In the implementation block
@property (nonatomic,readonly) double animateCellsOnAppearanceDuration;                       //@synthesize animateCellsOnAppearanceDuration=_animateCellsOnAppearanceDuration - In the implementation block
@property (nonatomic,retain) UIColor * innerBackgroundColor;                                  //@synthesize innerBackgroundColor=_innerBackgroundColor - In the implementation block
@property (nonatomic,retain) NSMutableArray * highlightedInnerGradientColors;                 //@synthesize highlightedInnerGradientColors=_highlightedInnerGradientColors - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                           //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderRadius;                                              //@synthesize borderRadius=_borderRadius - In the implementation block
@property (assign,nonatomic) float borderWidth;                                               //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                           //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) float shadowWidth;                                               //@synthesize shadowWidth=_shadowWidth - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                             //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * cellDividerColor;                                      //@synthesize cellDividerColor=_cellDividerColor - In the implementation block
@property (assign,nonatomic) float cellDividerHeight;                                         //@synthesize cellDividerHeight=_cellDividerHeight - In the implementation block
@property (assign,nonatomic) unsigned inkTouchStyle;                                          //@synthesize inkTouchStyle=_inkTouchStyle - In the implementation block
@property (nonatomic,readonly) UIColor * collectionViewBackgroundColor; 
@property (nonatomic,readonly) NSMutableDictionary * cellBackgroundCaches;                    //@synthesize cellBackgroundCaches=_cellBackgroundCaches - In the implementation block
@property (nonatomic,retain) NSMutableSet * inlaidIndexPathSet;                               //@synthesize inlaidIndexPathSet=_inlaidIndexPathSet - In the implementation block
+(id)cellBackgroundImageWithStyleController:(id)arg1 sectionOrdinalPosition:(unsigned)arg2 atIndexPath:(id)arg3 elementKind:(unsigned)arg4 ;
+(id)dividerLineWithStyleController:(id)arg1 cellBounds:(CGRect)arg2 sectionOrdinalPosition:(unsigned)arg3 atIndexPath:(id)arg4 elementKind:(unsigned)arg5 ;
+(unsigned)backgroundCacheKeyForCardStyle:(char)arg1 isGroupedStyle:(char)arg2 isTop:(char)arg3 isBottom:(char)arg4 isHighlighted:(char)arg5 ;
+(id)cellBackgroundCache;
+(void)applyBackgroundPathToContext:(CGContextRef)arg1 rect:(CGRect)arg2 isTop:(char)arg3 isBottom:(char)arg4 isCard:(char)arg5 borderRadius:(float)arg6 ;
+(float)minPixelOffset;
+(void)applyBorderPathToContext:(CGContextRef)arg1 rect:(CGRect)arg2 isTop:(char)arg3 isBottom:(char)arg4 isCard:(char)arg5 borderRadius:(float)arg6 ;
+(id)resizableImage:(id)arg1 ;
+(void)applyDividerPathToContext:(CGContextRef)arg1 bounds:(CGRect)arg2 isCard:(char)arg3 dividerHeight:(float)arg4 dividerInsets:(UIEdgeInsets)arg5 ;
-(UIEdgeInsets)accessoryInsets;
-(UIEdgeInsets)contentViewInsetsForCellWithAttribute:(id)arg1 ;
-(UIEdgeInsets)backgroundImageViewOutsetsForCellWithAttribute:(id)arg1 ;
-(char)shouldAnimateCellsOnAppearance;
-(char)willAnimateCellsOnAppearance;
-(double)animateCellsOnAppearanceDuration;
-(UIColor *)innerBackgroundColor;
-(unsigned)sectionHeaderStyleAtSection:(int)arg1 ;
-(unsigned)sectionFooterStyleAtSection:(int)arg1 ;
-(void)setInnerBackgroundColor:(UIColor *)arg1 ;
-(void)setShouldInvalidateLayout:(char)arg1 ;
-(float)gridPadding;
-(float)cellWidthAtSectionIndex:(int)arg1 ;
-(unsigned)inkTouchStyle;
-(void)setAllowsItemInlay:(char)arg1 ;
-(void)setAllowsMultipleItemInlays:(char)arg1 ;
-(void)applyInlayToAllItemsAnimated:(char)arg1 ;
-(void)removeInlayFromAllItemsAnimated:(char)arg1 ;
-(void)resetIndexPathsForInlaidItems;
-(unsigned)cellLayoutType;
-(unsigned)accessoryTypeAtIndexPath:(id)arg1 ;
-(UIEdgeInsets)accessoryInsetsAtIndexPath:(id)arg1 ;
-(void)setAccessoryInsets:(UIEdgeInsets)arg1 ;
-(unsigned)headerAccessoryTypeAtSection:(int)arg1 ;
-(UIEdgeInsets)headerAccessoryInsetsAtSection:(unsigned)arg1 ;
-(unsigned)footerAccessoryTypeAtSection:(int)arg1 ;
-(UIEdgeInsets)footerAccessoryInsetsAtSection:(unsigned)arg1 ;
-(UIEdgeInsets)insetsAtSectionIndex:(int)arg1 ;
-(char)isItemInlaidAtIndexPath:(id)arg1 ;
-(int)gridColumnCount;
-(id)indexPathsForInlaidItems;
-(float)animateCellsOnAppearancePadding;
-(void)beginCellAppearanceAnimation;
-(char)shouldShowGridBackgroundAtSection:(int)arg1 ;
-(char)shouldInvalidateLayoutForStyleChange;
-(void)setShouldAnimateCellsOnAppearance:(char)arg1 ;
-(void)clearBackgroundCaches;
-(void)invalidateLayoutForStyleChange;
-(char)isCardStyleAtSectionIndex:(int)arg1 ;
-(char)isGroupedStyleAtSectionIndex:(int)arg1 ;
-(char)drawShadowForCellWithIsCardStye:(char)arg1 isGroupStyle:(char)arg2 isHighlighted:(char)arg3 ;
-(unsigned)cellDividerStyleInsets;
-(UIEdgeInsets)cellDividerInsets;
-(unsigned)cellDividerStyleInsetsWithDelegateOverrideForSection:(int)arg1 ;
-(UIEdgeInsets)edgeInsetsForCellDividerStyleInsets:(unsigned)arg1 ;
-(unsigned)sectionFooterStyle;
-(unsigned)sectionItemStyle;
-(unsigned)headerAccessoryType;
-(unsigned)footerAccessoryType;
-(unsigned)cellDividerStyleAtSectionIndex:(int)arg1 ;
-(unsigned)cellDividerStyle;
-(void)removeInlayFromItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)updateLayoutAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(UIColor *)collectionViewBackgroundColor;
-(QTMColorGroup *)collectionViewBackgroundColorGroup;
-(float)shadowWidth;
-(unsigned)sectionItemStyleAtIndexPath:(id)arg1 ;
-(id)innerBackgroundColorAtIndexPath:(id)arg1 isSectionHeader:(char)arg2 isSectionFooter:(char)arg3 ;
-(NSMutableDictionary *)cellBackgroundCaches;
-(char)isCellDividerVisibleAtSectionIndex:(int)arg1 ;
-(char)allowDividerAtIndexPath:(id)arg1 sectionOrdinalPosition:(unsigned)arg2 elementKind:(unsigned)arg3 ;
-(float)cellDividerHeight;
-(UIColor *)cellDividerColor;
-(void)setSectionItemStyle:(unsigned)arg1 ;
-(void)setSectionFooterStyle:(unsigned)arg1 ;
-(void)setBorderRadius:(float)arg1 ;
-(void)setShadowWidth:(float)arg1 ;
-(void)setCellDividerColor:(UIColor *)arg1 ;
-(void)setCellDividerHeight:(float)arg1 ;
-(void)setCellDividerStyle:(unsigned)arg1 ;
-(UIEdgeInsets)cellDividerInsetsAtSectionIndex:(int)arg1 ;
-(void)setCellStyle:(unsigned)arg1 animated:(char)arg2 ;
-(void)applyInlayToItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)setCollectionViewBackgroundColorGroup:(QTMColorGroup *)arg1 ;
-(char)shouldInvalidateLayout;
-(void)setHeaderAccessoryType:(unsigned)arg1 ;
-(void)setFooterAccessoryType:(unsigned)arg1 ;
-(void)setCellDividerStyleInsets:(unsigned)arg1 ;
-(void)setCellDividerInsets:(UIEdgeInsets)arg1 ;
-(void)setCellLayoutType:(unsigned)arg1 ;
-(void)setGridColumnCount:(int)arg1 ;
-(void)setGridPadding:(float)arg1 ;
-(char)allowsItemInlay;
-(char)allowsMultipleItemInlays;
-(NSMutableArray *)highlightedInnerGradientColors;
-(void)setHighlightedInnerGradientColors:(NSMutableArray *)arg1 ;
-(void)setInkTouchStyle:(unsigned)arg1 ;
-(NSMutableSet *)inlaidIndexPathSet;
-(void)setInlaidIndexPathSet:(NSMutableSet *)arg1 ;
-(void)clearCaches;
-(unsigned)sectionHeaderStyle;
-(void)setDelegate:(id<QTMCollectionViewStyleDelegate>)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id<QTMCollectionViewStyleDelegate>)delegate;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(unsigned)accessoryType;
-(void)setAccessoryType:(unsigned)arg1 ;
-(QTMCollectionView *)collectionView;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(float)borderWidth;
-(void)updateAnimated:(char)arg1 ;
-(char)usesDarkTheme;
-(void)setUsesDarkTheme:(char)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
-(void)setSectionHeaderStyle:(unsigned)arg1 ;
-(unsigned)cellStyle;
-(void)setCellStyle:(unsigned)arg1 ;
-(float)borderRadius;
@end

