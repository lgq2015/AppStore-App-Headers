/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTBaseInfoCardContentCell.h>
#import <YouTube/YTCellActionProtocol.h>
#import <YouTube/YTFeedViewCellProtocol.h>
#import <YouTube/YTThumbnailMapping.h>

@protocol YTInfoCardViewProtocol, YTResponder;
@class UIView, NSString;

@interface YTCollaboratorInfoCardContentCell : YTBaseInfoCardContentCell <YTCellActionProtocol, YTFeedViewCellProtocol, YTThumbnailMapping> {

	int _infoCardAppearanceStyle;
	UIView*<YTInfoCardViewProtocol> _infoCardView;
	id<YTResponder> _parentResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 ;
+(Class)infoCardViewClassForAppearanceStyle:(int)arg1 ;
+(CGSize)cellSizeForEntry:(id)arg1 size:(CGSize)arg2 appearanceStyle:(int)arg3 ;
+(id)infoCardViewForAppearanceStyle:(int)arg1 frame:(CGRect)arg2 ;
-(id<YTResponder>)parentResponder;
-(id)thumbnailMappings;
-(void)removeActionTarget;
-(void)removeLongPressTarget;
-(void)setActionTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setParentResponder:(id<YTResponder>)arg1 ;
-(void)updateInfoCardWithFrame:(CGRect)arg1 ;
-(void)setInfoCardAppearanceStyle:(int)arg1 ;
-(void)setInfoCardView:(id)arg1 ;
-(void)setLongPressTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEntry:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)entry;
@end

