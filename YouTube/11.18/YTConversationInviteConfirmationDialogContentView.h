/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class YTFormattedStringLabel, YTImageView;

@interface YTConversationInviteConfirmationDialogContentView : UIView {

	YTFormattedStringLabel* _titleLabel;
	YTFormattedStringLabel* _textLabel;
	YTFormattedStringLabel* _userNameLabel;
	YTImageView* _userThumbnailImage;

}

@property (nonatomic,retain) YTImageView * userThumbnailImage;              //@synthesize userThumbnailImage=_userThumbnailImage - In the implementation block
-(id)initWithTitle:(id)arg1 text:(id)arg2 userName:(id)arg3 ;
-(YTImageView *)userThumbnailImage;
-(void)setUserThumbnailImage:(YTImageView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityLabel;
-(char)isAccessibilityElement;
@end

