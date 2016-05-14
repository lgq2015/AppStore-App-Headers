/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIView.h>

@protocol GTRLanguageHeaderDelegate;
@class GTRLanguageHeaderBevelView, QTMButton;

@interface GTRLanguageHeader : UIView {

	GTRLanguageHeaderBevelView* _bevelView;
	char _swapEnabled;
	char _isRTL;
	QTMButton* _sourceButton;
	QTMButton* _targetButton;
	QTMButton* _swapButton;
	id<GTRLanguageHeaderDelegate> _delegate;

}

@property (nonatomic,retain) QTMButton * sourceButton;                                   //@synthesize sourceButton=_sourceButton - In the implementation block
@property (nonatomic,retain) QTMButton * targetButton;                                   //@synthesize targetButton=_targetButton - In the implementation block
@property (nonatomic,retain) QTMButton * swapButton;                                     //@synthesize swapButton=_swapButton - In the implementation block
@property (assign,nonatomic,__weak) id<GTRLanguageHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char swapEnabled;                                           //@synthesize swapEnabled=_swapEnabled - In the implementation block
@property (nonatomic,readonly) char isRTL;                                               //@synthesize isRTL=_isRTL - In the implementation block
+(id)languageButton:(id)arg1 ;
+(id)commonButton:(id)arg1 ;
+(id)sourceLanguageButton:(id)arg1 ;
+(id)targetLanguageButton:(id)arg1 ;
+(id)swapButton:(id)arg1 visible:(char)arg2 ;
-(void)accessibilityFontAttributesChanged:(id)arg1 ;
-(void)setSourceButton:(QTMButton *)arg1 ;
-(QTMButton *)sourceButton;
-(void)setTargetButton:(QTMButton *)arg1 ;
-(QTMButton *)targetButton;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)languageButtonDidPress:(id)arg1 ;
-(QTMButton *)swapButton;
-(void)swapLanguageButtonDidPress:(id)arg1 ;
-(void)swapLanguagesAnimated:(char)arg1 ;
-(void)setSwapButton:(QTMButton *)arg1 ;
-(void)setSwapEnabled:(char)arg1 ;
-(char)swapEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<GTRLanguageHeaderDelegate>)arg1 ;
-(void)dealloc;
-(id<GTRLanguageHeaderDelegate>)delegate;
-(char)isRTL;
@end

