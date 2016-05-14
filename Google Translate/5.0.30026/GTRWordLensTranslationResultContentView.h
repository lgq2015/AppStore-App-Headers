/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GOOTextContentView.h>

@protocol GTRWordLensTranslateButtonDelegate, GTRTranslationHistoryContentViewDelegate;
@class TranslatedItem, UILabel, NSMutableArray, GTRTtsButton, QTMButton;

@interface GTRWordLensTranslationResultContentView : GOOTextContentView {

	id<GTRWordLensTranslateButtonDelegate> _translateButtonDelegate;
	TranslatedItem* _translatedItem;
	id<GTRTranslationHistoryContentViewDelegate> _delegate;
	UILabel* _targetText;
	NSMutableArray* _dictionaryLabels;
	GTRTtsButton* _audioButton;
	QTMButton* _translateButton;
	float _audioButtonWidth;
	float _audioButtonTopMargin;
	float _textHorizontalPadding;

}

@property (assign,nonatomic,__weak) id<GTRWordLensTranslateButtonDelegate> translateButtonDelegate;              //@synthesize translateButtonDelegate=_translateButtonDelegate - In the implementation block
@property (nonatomic,retain) TranslatedItem * translatedItem;                                                    //@synthesize translatedItem=_translatedItem - In the implementation block
@property (assign,nonatomic,__weak) id<GTRTranslationHistoryContentViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * targetText;                                                               //@synthesize targetText=_targetText - In the implementation block
@property (nonatomic,retain) NSMutableArray * dictionaryLabels;                                                  //@synthesize dictionaryLabels=_dictionaryLabels - In the implementation block
@property (nonatomic,retain) GTRTtsButton * audioButton;                                                         //@synthesize audioButton=_audioButton - In the implementation block
@property (nonatomic,retain) QTMButton * translateButton;                                                        //@synthesize translateButton=_translateButton - In the implementation block
@property (assign,nonatomic) float audioButtonWidth;                                                             //@synthesize audioButtonWidth=_audioButtonWidth - In the implementation block
@property (assign,nonatomic) float audioButtonTopMargin;                                                         //@synthesize audioButtonTopMargin=_audioButtonTopMargin - In the implementation block
@property (assign,nonatomic) float textHorizontalPadding;                                                        //@synthesize textHorizontalPadding=_textHorizontalPadding - In the implementation block
+(int)textLineBreakMode;
+(float)heightForObject:(id)arg1 constrainedToWidth:(float)arg2 ;
+(float)dictionaryLabelLineHeight:(id)arg1 ;
-(UILabel *)targetText;
-(TranslatedItem *)translatedItem;
-(void)updateViewWithObject:(id)arg1 ;
-(void)setTranslatedItem:(TranslatedItem *)arg1 ;
-(void)setTargetText:(UILabel *)arg1 ;
-(void)addObservers;
-(float)textHorizontalPadding;
-(void)setTextHorizontalPadding:(float)arg1 ;
-(void)setAudioButtonWidth:(float)arg1 ;
-(void)setTranslateButton:(QTMButton *)arg1 ;
-(QTMButton *)translateButton;
-(void)didPressTranslateButton;
-(void)setDictionaryLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dictionaryLabels;
-(float)audioButtonWidth;
-(float)audioButtonTopMargin;
-(id<GTRWordLensTranslateButtonDelegate>)translateButtonDelegate;
-(void)initDictionary;
-(void)setAudioButtonTopMargin:(float)arg1 ;
-(void)setTranslateButtonDelegate:(id<GTRWordLensTranslateButtonDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<GTRTranslationHistoryContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<GTRTranslationHistoryContentViewDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(char)shouldGroupAccessibilityChildren;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(GTRTtsButton *)audioButton;
-(void)setAudioButton:(GTRTtsButton *)arg1 ;
@end

