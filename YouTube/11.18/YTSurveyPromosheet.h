/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@protocol YTSurveyPromosheetDelegate;
@class YTISingleOptionSurveyRenderer, UIView, YTFormattedStringLabel, YTQTMButton, NSMutableArray;

@interface YTSurveyPromosheet : UIView {

	YTISingleOptionSurveyRenderer* _surveyRenderer;
	UIView* _titleBar;
	YTFormattedStringLabel* _questionLabel;
	YTQTMButton* _dismissButton;
	NSMutableArray* _optionIcons;
	NSMutableArray* _optionLabels;
	unsigned _labelDisplayStyle;
	float _toastHeight;
	char _useWhiteBackground;
	id<YTSurveyPromosheetDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<YTSurveyPromosheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)handleOptionTap:(id)arg1 ;
-(id)initWithRenderer:(id)arg1 labelDisplayStyle:(unsigned)arg2 useWhiteBackground:(char)arg3 ;
-(void)handleDismissTap:(id)arg1 ;
-(void)sizeControlsForToastWidth:(float)arg1 ;
-(float)iconGroupWidthForToastWidth:(float)arg1 ;
-(char)onlyShowFirstAndLastLabels;
-(float)maxLabelWidthForToastWidth:(float)arg1 ;
-(void)addOptionWithIcon:(id)arg1 label:(id)arg2 labelVisible:(char)arg3 textAlignment:(int)arg4 ;
-(void)setRenderer:(id)arg1 ;
-(void)setDelegate:(id<YTSurveyPromosheetDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<YTSurveyPromosheetDelegate>)delegate;
-(float)maximumWidth;
-(id)accessibilityElements;
@end

