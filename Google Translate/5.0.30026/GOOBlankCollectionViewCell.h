/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Translate/GOOCollectionViewCell.h>
#import <Translate/NICollectionViewCell.h>
#import <Translate/NIGroupedCellAppearance.h>

@protocol GOOContentView;
@class UIView, UICollectionViewLayoutAttributes, GOOCollectionView, NICollectionViewActions, NICollectionViewModel, NSString;

@interface GOOBlankCollectionViewCell : UICollectionViewCell <GOOCollectionViewCell, NICollectionViewCell, NIGroupedCellAppearance> {

	UIView*<GOOContentView> _cardContentView;
	UICollectionViewLayoutAttributes* _lastLayoutAttributes;
	char _shouldUnhighlightCell;
	GOOCollectionView* _goo_collectionView;
	NICollectionViewActions* _goo_actions;
	NICollectionViewModel* _goo_model;
	UIEdgeInsets _cardContentInset;

}

@property (assign,nonatomic) UIEdgeInsets cardContentInset;                              //@synthesize cardContentInset=_cardContentInset - In the implementation block
@property (assign,nonatomic,__weak) GOOCollectionView * goo_collectionView;              //@synthesize goo_collectionView=_goo_collectionView - In the implementation block
@property (assign,nonatomic,__weak) NICollectionViewActions * goo_actions;               //@synthesize goo_actions=_goo_actions - In the implementation block
@property (assign,nonatomic,__weak) NICollectionViewModel * goo_model;                   //@synthesize goo_model=_goo_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) UIView * selectedBackgroundView; 
+(char)shouldAppendObjectClassToReuseIdentifier;
+(float)heightForObject:(id)arg1 itemWidth:(float)arg2 atIndexPath:(id)arg3 collectionView:(id)arg4 ;
-(char)shouldUpdateCellWithObject:(id)arg1 ;
-(CGRect)goo_cardContentViewFrame;
-(GOOCollectionView *)goo_collectionView;
-(char)cellIsActionable;
-(NICollectionViewModel *)goo_model;
-(NICollectionViewActions *)goo_actions;
-(void)setCardContentInset:(UIEdgeInsets)arg1 ;
-(void)setGoo_collectionView:(GOOCollectionView *)arg1 ;
-(void)setGoo_actions:(NICollectionViewActions *)arg1 ;
-(void)setGoo_model:(NICollectionViewModel *)arg1 ;
-(UIEdgeInsets)cardContentInset;
-(id)accessibilityLabel;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

