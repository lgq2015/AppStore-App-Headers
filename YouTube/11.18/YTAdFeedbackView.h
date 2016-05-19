/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@protocol YTAdFeedbackViewDelegate;
@class UILabel, NSMutableArray;

@interface YTAdFeedbackView : UIView {

	UILabel* _titleLabel;
	NSMutableArray* _optionViews;
	NSMutableArray* _separatorViews;
	id<YTAdFeedbackViewDelegate> _delegate;
	int _selectedOptionIndex;

}

@property (assign,nonatomic,__weak) id<YTAdFeedbackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int selectedOptionIndex;                                 //@synthesize selectedOptionIndex=_selectedOptionIndex - In the implementation block
-(int)selectedOptionIndex;
-(void)selectOption:(id)arg1 ;
-(void)setDelegate:(id<YTAdFeedbackViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<YTAdFeedbackViewDelegate>)delegate;
-(id)initWithRenderer:(id)arg1 ;
@end

