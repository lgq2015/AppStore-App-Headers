/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class IGSimpleButton, UIImage, UIImageView, IGCoreTextView;

@interface IGNewsEmptyFeedView : UIView {

	IGSimpleButton* _followButton;
	UIImage* _heartImage;
	UIImageView* _heartView;
	IGCoreTextView* _textView;

}

@property (nonatomic,readonly) IGSimpleButton * followButton;              //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * textView;                  //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIImageView * heartView;                    //@synthesize heartView=_heartView - In the implementation block
@property (nonatomic,readonly) UIImage * heartImage;                       //@synthesize heartImage=_heartImage - In the implementation block
-(UIImageView *)heartView;
-(IGSimpleButton *)followButton;
-(id)setUpHeartImage;
-(id)setUpHeartView;
-(id)noStoriesTextViewHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 ;
-(id)setUpFollowButton;
-(void)setFollowButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 showFollowButton:(char)arg4 ;
-(void)layoutSubviews;
-(IGCoreTextView *)textView;
-(UIImage *)heartImage;
@end

