/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTCollectionViewCell.h>
#import <YouTube/YTFormattedStringLabelDelegate.h>
#import <YouTube/YTCellActionProtocol.h>
#import <YouTube/YTFeedViewCellProtocol.h>

@protocol YTResponder;
@class YTIUnlimitedManageSubscriptionPageRenderer, YTUnlimitedManageSubscriptionView, NSString;

@interface YTUnlimitedManageSubscriptionCell : YTCollectionViewCell <YTFormattedStringLabelDelegate, YTCellActionProtocol, YTFeedViewCellProtocol> {

	YTIUnlimitedManageSubscriptionPageRenderer* _renderer;
	YTUnlimitedManageSubscriptionView* _view;
	id<YTResponder> _parentResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 locator:(id)arg3 ;
-(id<YTResponder>)parentResponder;
-(void)removeActionTarget;
-(void)setLocator:(id)arg1 ;
-(void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2 ;
-(void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3 ;
-(void)removeLongPressTarget;
-(void)setActionTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(void)setLongPressTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(id)entry;
@end

