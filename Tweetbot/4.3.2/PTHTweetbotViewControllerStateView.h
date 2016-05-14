/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class UIView, PTHProgressView, PTHShapeView, UILabel, NSString;

@interface PTHTweetbotViewControllerStateView : UIView {

	UIView* _contentView;
	PTHProgressView* _progressView;
	PTHShapeView* _circleView;
	UILabel* _messageLabel;
	CGRect _keyboardFrame;
	char _keyboardVisible;
	int _state;

}

@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * nothingFoundTitle; 
+(void)showViewControllerContentAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)nothingFoundTitle;
-(void)setNothingFoundTitle:(NSString *)arg1 ;
-(void)_keyboardWillChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setState:(int)arg1 animated:(char)arg2 ;
@end

