/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, IGUnreadBubbleView;

@interface IGNewsAdManagerCell : UITableViewCell {

	unsigned _pendingAdsCount;
	UILabel* _title;
	UILabel* _subtitle;
	UIImageView* _icon;
	UIImageView* _rightArrow;
	IGUnreadBubbleView* _unreadBubbleView;

}

@property (nonatomic,readonly) UILabel * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) UIImageView * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UIImageView * rightArrow;                           //@synthesize rightArrow=_rightArrow - In the implementation block
@property (nonatomic,readonly) IGUnreadBubbleView * unreadBubbleView;              //@synthesize unreadBubbleView=_unreadBubbleView - In the implementation block
@property (assign,nonatomic) unsigned pendingAdsCount;                             //@synthesize pendingAdsCount=_pendingAdsCount - In the implementation block
+(float)maxTextWidthForFrameWidth:(float)arg1 ;
+(float)preferredSizeForCellWithWidth:(float)arg1 ;
+(id)subtitleString;
+(id)titleFont;
+(id)subtitleFont;
+(id)titleString;
-(void)setUpSubtitle;
-(void)setUpRightArrow;
-(void)setUpViewHierarchy;
-(IGUnreadBubbleView *)unreadBubbleView;
-(void)setUpIcon;
-(void)setUpUnreadBubbleView;
-(CGRect)layoutForIcon;
-(CGRect)layoutForRightArrow;
-(CGRect)layoutForTitleWithIconRect:(CGRect)arg1 titleSize:(CGSize)arg2 ;
-(CGRect)layoutForSubtitleWithIconRect:(CGRect)arg1 subtitleSize:(CGSize)arg2 ;
-(CGRect)layoutForUnreadBubbleWithTitleRect:(CGRect)arg1 iconRect:(CGRect)arg2 ;
-(unsigned)pendingAdsCount;
-(void)setPendingAdsCount:(unsigned)arg1 ;
-(void)setUpTitle;
-(UIImageView *)rightArrow;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)title;
-(UILabel *)subtitle;
-(UIImageView *)icon;
@end

