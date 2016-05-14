/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class FBSDKLikeBoxBorderView, UILabel, NSString;

@interface FBSDKLikeBoxView : UIView {

	FBSDKLikeBoxBorderView* _borderView;
	UILabel* _likeCountLabel;
	unsigned _caretPosition;

}

@property (assign,nonatomic) unsigned caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(void)_initializeContent;
-(void)setCaretPosition:(unsigned)arg1 ;
-(unsigned)caretPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
@end

