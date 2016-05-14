/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIViewController.h>
#import <Translate/GTRTextToSpeechControllerDelegate.h>
#import <Translate/GTRVoiceInputControllerDelegate.h>
#import <Translate/TextTranslatorDelegate.h>
#import <Translate/GTRS2SDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol GSKRecognizerClient;
@class TextTranslator, UIColor, UIView, QTMButton, GTRConversationInputView, GTRLineView, GTRTtsButton, GTRConversationLangButton, GTRVoiceInputController, NSString, TranslatedItem, QTMColorGroup, GTRTooltipView, NSMutableArray;

@interface GTRConversationViewController : UIViewController <GTRTextToSpeechControllerDelegate, GTRVoiceInputControllerDelegate, TextTranslatorDelegate, GTRS2SDelegate, UITextViewDelegate> {

	int conversationLangChoice;
	int currTranslateSessionNumber;
	TextTranslator* _textTranslator;
	char _isAutoDetect;
	char _needToResetSourceLanguageToAutoDetect;
	char _isMultiRecognition;
	char _isAutoRestart;
	char _toLangIsSupportedForSpeechInput;
	char _firstRecognitionResult;
	/*^block*/id _onFinishBlock;
	/*^block*/id _onFinishWithTranslatedItemBlock;
	UIColor* _activeButtonColor;
	UIColor* _inactiveButtonColor;
	UIView* _headerView;
	QTMButton* _doneButton;
	UIColor* _langButtonDisabledTitleColor;
	UIView* _outerContentView;
	UIView* _contentView;
	GTRConversationInputView* _sourceInputView;
	GTRLineView* _contentSeparator;
	GTRConversationInputView* _targetInputView;
	GTRTtsButton* _sneakyTtsButton;
	UIView* _controlView;
	GTRConversationLangButton* _sourceButton;
	GTRConversationLangButton* _targetButton;
	GTRVoiceInputController* _voiceInputController;
	id<GSKRecognizerClient> _recognizer;
	int _state;
	NSString* _sourceLanguage;
	NSString* _targetLanguage;
	int _latestTranslationLangChoice;
	TranslatedItem* _latestTranslation;
	NSString* _recognizedLanguage;
	int _conversationTurnCount;
	QTMColorGroup* _blueColors;
	QTMColorGroup* _redColors;
	GTRTooltipView* _pleaseWaitTooltipView;
	GTRTooltipView* _sourceSpeakNowTooltipView;
	GTRTooltipView* _targetSpeakNowTooltipView;
	GTRTooltipView* _multiSpeakNowTooltipView;
	GTRTooltipView* _currentSpeakNowTooltipView;
	GTRTooltipView* _preparingToSpeakTooltipView;
	NSMutableArray* _tooltipViews;
	QTMColorGroup* _colorGroup;
	CGPoint _transitionSourcePos;

}

@property (assign,nonatomic) CGPoint transitionSourcePos;                                 //@synthesize transitionSourcePos=_transitionSourcePos - In the implementation block
@property (nonatomic,copy) id onFinishBlock;                                              //@synthesize onFinishBlock=_onFinishBlock - In the implementation block
@property (nonatomic,copy) id onFinishWithTranslatedItemBlock;                            //@synthesize onFinishWithTranslatedItemBlock=_onFinishWithTranslatedItemBlock - In the implementation block
@property (nonatomic,readonly) UIColor * activeButtonColor;                               //@synthesize activeButtonColor=_activeButtonColor - In the implementation block
@property (nonatomic,readonly) UIColor * inactiveButtonColor;                             //@synthesize inactiveButtonColor=_inactiveButtonColor - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) QTMButton * doneButton;                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIColor * langButtonDisabledTitleColor;                      //@synthesize langButtonDisabledTitleColor=_langButtonDisabledTitleColor - In the implementation block
@property (nonatomic,retain) UIView * outerContentView;                                   //@synthesize outerContentView=_outerContentView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) GTRConversationInputView * sourceInputView;                  //@synthesize sourceInputView=_sourceInputView - In the implementation block
@property (nonatomic,retain) GTRLineView * contentSeparator;                              //@synthesize contentSeparator=_contentSeparator - In the implementation block
@property (nonatomic,retain) GTRConversationInputView * targetInputView;                  //@synthesize targetInputView=_targetInputView - In the implementation block
@property (nonatomic,retain) GTRTtsButton * sneakyTtsButton;                              //@synthesize sneakyTtsButton=_sneakyTtsButton - In the implementation block
@property (nonatomic,retain) UIView * controlView;                                        //@synthesize controlView=_controlView - In the implementation block
@property (nonatomic,retain) GTRConversationLangButton * sourceButton;                    //@synthesize sourceButton=_sourceButton - In the implementation block
@property (nonatomic,retain) GTRConversationLangButton * targetButton;                    //@synthesize targetButton=_targetButton - In the implementation block
@property (nonatomic,retain) GTRVoiceInputController * voiceInputController;              //@synthesize voiceInputController=_voiceInputController - In the implementation block
@property (nonatomic,retain) id<GSKRecognizerClient> recognizer;                          //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) int state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * sourceLanguage;                                   //@synthesize sourceLanguage=_sourceLanguage - In the implementation block
@property (nonatomic,retain) NSString * targetLanguage;                                   //@synthesize targetLanguage=_targetLanguage - In the implementation block
@property (nonatomic,readonly) int latestTranslationLangChoice;                           //@synthesize latestTranslationLangChoice=_latestTranslationLangChoice - In the implementation block
@property (nonatomic,readonly) TranslatedItem * latestTranslation;                        //@synthesize latestTranslation=_latestTranslation - In the implementation block
@property (nonatomic,retain) NSString * recognizedLanguage;                               //@synthesize recognizedLanguage=_recognizedLanguage - In the implementation block
@property (assign,nonatomic) char isAutoDetect;                                           //@synthesize isAutoDetect=_isAutoDetect - In the implementation block
@property (assign,nonatomic) char needToResetSourceLanguageToAutoDetect;                  //@synthesize needToResetSourceLanguageToAutoDetect=_needToResetSourceLanguageToAutoDetect - In the implementation block
@property (assign,nonatomic) char isMultiRecognition;                                     //@synthesize isMultiRecognition=_isMultiRecognition - In the implementation block
@property (assign,nonatomic) char isAutoRestart;                                          //@synthesize isAutoRestart=_isAutoRestart - In the implementation block
@property (assign,nonatomic) char toLangIsSupportedForSpeechInput;                        //@synthesize toLangIsSupportedForSpeechInput=_toLangIsSupportedForSpeechInput - In the implementation block
@property (assign,nonatomic) int conversationTurnCount;                                   //@synthesize conversationTurnCount=_conversationTurnCount - In the implementation block
@property (nonatomic,retain) QTMColorGroup * blueColors;                                  //@synthesize blueColors=_blueColors - In the implementation block
@property (nonatomic,retain) QTMColorGroup * redColors;                                   //@synthesize redColors=_redColors - In the implementation block
@property (assign,nonatomic) char firstRecognitionResult;                                 //@synthesize firstRecognitionResult=_firstRecognitionResult - In the implementation block
@property (nonatomic,retain) GTRTooltipView * pleaseWaitTooltipView;                      //@synthesize pleaseWaitTooltipView=_pleaseWaitTooltipView - In the implementation block
@property (nonatomic,retain) GTRTooltipView * sourceSpeakNowTooltipView;                  //@synthesize sourceSpeakNowTooltipView=_sourceSpeakNowTooltipView - In the implementation block
@property (nonatomic,retain) GTRTooltipView * targetSpeakNowTooltipView;                  //@synthesize targetSpeakNowTooltipView=_targetSpeakNowTooltipView - In the implementation block
@property (nonatomic,retain) GTRTooltipView * multiSpeakNowTooltipView;                   //@synthesize multiSpeakNowTooltipView=_multiSpeakNowTooltipView - In the implementation block
@property (nonatomic,retain) GTRTooltipView * currentSpeakNowTooltipView;                 //@synthesize currentSpeakNowTooltipView=_currentSpeakNowTooltipView - In the implementation block
@property (nonatomic,retain) GTRTooltipView * preparingToSpeakTooltipView;                //@synthesize preparingToSpeakTooltipView=_preparingToSpeakTooltipView - In the implementation block
@property (nonatomic,retain) NSMutableArray * tooltipViews;                               //@synthesize tooltipViews=_tooltipViews - In the implementation block
@property (nonatomic,retain) QTMColorGroup * colorGroup;                                  //@synthesize colorGroup=_colorGroup - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)sourceLanguage;
-(NSString *)targetLanguage;
-(void)setColorGroup:(QTMColorGroup *)arg1 ;
-(void)initUI;
-(void)updateUIAnimated:(char)arg1 ;
-(void)updateLanguageButtonsAccessibilityAttributes;
-(GTRVoiceInputController *)voiceInputController;
-(GTRConversationInputView *)sourceInputView;
-(GTRConversationInputView *)targetInputView;
-(UIColor *)activeButtonColor;
-(UIColor *)inactiveButtonColor;
-(void)setVoiceInputController:(GTRVoiceInputController *)arg1 ;
-(QTMColorGroup *)colorGroup;
-(void)doDoneButton;
-(void)setOuterContentView:(UIView *)arg1 ;
-(UIView *)outerContentView;
-(GTRLineView *)contentSeparator;
-(void)doClearSourceInput;
-(void)doDismissWithDetail;
-(void)doClearTargetInput;
-(void)setTargetInputView:(GTRConversationInputView *)arg1 ;
-(void)setControlView:(UIView *)arg1 ;
-(void)setSourceButton:(GTRConversationLangButton *)arg1 ;
-(GTRConversationLangButton *)sourceButton;
-(void)configVoiceLangButton:(id)arg1 ;
-(void)onSourceButtonTapped;
-(void)setTargetButton:(GTRConversationLangButton *)arg1 ;
-(GTRConversationLangButton *)targetButton;
-(void)onTargetButtonTapped;
-(void)setSneakyTtsButton:(GTRTtsButton *)arg1 ;
-(GTRTtsButton *)sneakyTtsButton;
-(void)setPleaseWaitTooltipView:(GTRTooltipView *)arg1 ;
-(GTRTooltipView *)pleaseWaitTooltipView;
-(void)setSourceSpeakNowTooltipView:(GTRTooltipView *)arg1 ;
-(GTRTooltipView *)sourceSpeakNowTooltipView;
-(void)setTargetSpeakNowTooltipView:(GTRTooltipView *)arg1 ;
-(GTRTooltipView *)targetSpeakNowTooltipView;
-(void)setMultiSpeakNowTooltipView:(GTRTooltipView *)arg1 ;
-(GTRTooltipView *)multiSpeakNowTooltipView;
-(void)setPreparingToSpeakTooltipView:(GTRTooltipView *)arg1 ;
-(GTRTooltipView *)preparingToSpeakTooltipView;
-(void)layoutContentViewWithFrame:(CGRect)arg1 ;
-(void)updateTooltipsUI;
-(void)keyboardNotifications:(char)arg1 ;
-(void)beginListening:(int)arg1 withTransition:(char)arg2 ;
-(void)cancelCurrentUserActions:(char)arg1 ;
-(void)animateContentViewFrame:(CGRect)arg1 forKeyboard:(id)arg2 ;
-(void)updateInputViews;
-(void)updateLanguageButtons;
-(void)updateMicButton;
-(void)calcSourceActive:(char*)arg1 targetActive:(char*)arg2 ;
-(char)waitingForRecognizer;
-(TranslatedItem *)latestTranslation;
-(int)latestTranslationLangChoice;
-(UIColor *)langButtonDisabledTitleColor;
-(void)setLanguageButtonColors;
-(void)setLatestTranslation:(id)arg1 langChoice:(int)arg2 ;
-(void)doClearAllTextViews;
-(id)languageCodeForChoice:(int)arg1 ;
-(int)otherChoice:(int)arg1 ;
-(int)currentRecognitionType;
-(void)doDismiss;
-(void)setIsAutoRestart:(char)arg1 ;
-(void)voiceButtonPressed:(int)arg1 ;
-(void)stopTTSPlayback;
-(void)setSourceLanguage:(NSString *)arg1 ;
-(void)setTargetLanguage:(NSString *)arg1 ;
-(void)commonDismissShutdown;
-(void)doDismissWithDetailAfterCancel;
-(id)onFinishWithTranslatedItemBlock;
-(void)doDismissAfterCancel;
-(id)onFinishBlock;
-(void)setFirstRecognitionResult:(char)arg1 ;
-(void)showTooltipView:(id)arg1 ;
-(void)setCurrentSpeakNowTooltipView:(GTRTooltipView *)arg1 ;
-(id)recognizerClient;
-(CGPoint)transitionSourcePos;
-(int)nextTranslateSessionNumber;
-(void)startTranslationOfChoice:(int)arg1 isPartial:(char)arg2 speakResult:(char)arg3 ;
-(void)commitTextWithStablePrefix:(id)arg1 unstableSuffix:(id)arg2 destination:(int)arg3 ;
-(void)onConversationTurnEnd;
-(void)updateFromTranslator:(id)arg1 withResult:(id)arg2 ;
-(int)choiceByLanguage:(id)arg1 ;
-(void)s2sDidReceiveTranslationUpdate:(id)arg1 ;
-(void)hideTooltips;
-(void)s2sTtsDidFinishPlaying;
-(int)choiceFromTextView:(id)arg1 ;
-(void)translateTextWithIsPartial:(char)arg1 speakResult:(char)arg2 ;
-(void)voiceInputController:(id)arg1 didReceiveResult:(id)arg2 isPartial:(char)arg3 ;
-(NSString *)recognizedLanguage;
-(char)firstRecognitionResult;
-(QTMColorGroup *)redColors;
-(QTMColorGroup *)blueColors;
-(GTRTooltipView *)currentSpeakNowTooltipView;
-(void)restartConversation:(int)arg1 ;
-(char)toLangIsSupportedForSpeechInput;
-(void)beginListening:(int)arg1 ;
-(void)TTSPlayerDidFinishPlaying:(id)arg1 ;
-(NSMutableArray *)tooltipViews;
-(void)updateTooltipUI:(id)arg1 ;
-(void)TTSPlayerDidStartDownloading:(id)arg1 ;
-(void)TTSPlayerDidStartPlaying:(id)arg1 ;
-(void)TTSPlayerDidFailPlaying:(id)arg1 error:(id)arg2 ;
-(void)voiceInputController:(id)arg1 didReceiveResult:(id)arg2 ;
-(void)voiceInputControllerDidStartListening:(id)arg1 ;
-(void)voiceInputControllerDidFailToStart:(id)arg1 ;
-(void)voiceInputControllerDidDismiss:(id)arg1 ;
-(id)voiceInputSpeechSessionConfig;
-(void)voiceInputDidReceivePartialStableResult:(id)arg1 unstableSuffix:(id)arg2 ;
-(void)voiceInputControllerDidCancel:(id)arg1 ;
-(void)voiceInputDidFailToCapture:(id)arg1 error:(int)arg2 ;
-(void)voiceButtonPressed;
-(void)translator:(id)arg1 finishedWithTranslation:(id)arg2 ;
-(void)translator:(id)arg1 failedWithError:(id)arg2 ;
-(void)s2sDidReceiveTranslationFinal:(id)arg1 withTtsSupport:(char)arg2 withTtsDisabled:(char)arg3 ;
-(void)s2sTtsDidStartPlaying;
-(void)s2sTtsFailedWithError:(id)arg1 ;
-(void)setTransitionSourcePos:(CGPoint)arg1 ;
-(void)setOnFinishBlock:(id)arg1 ;
-(void)setOnFinishWithTranslatedItemBlock:(id)arg1 ;
-(void)setLangButtonDisabledTitleColor:(UIColor *)arg1 ;
-(void)setSourceInputView:(GTRConversationInputView *)arg1 ;
-(void)setContentSeparator:(GTRLineView *)arg1 ;
-(void)setRecognizedLanguage:(NSString *)arg1 ;
-(char)isAutoDetect;
-(void)setIsAutoDetect:(char)arg1 ;
-(char)needToResetSourceLanguageToAutoDetect;
-(void)setNeedToResetSourceLanguageToAutoDetect:(char)arg1 ;
-(char)isMultiRecognition;
-(void)setIsMultiRecognition:(char)arg1 ;
-(char)isAutoRestart;
-(void)setToLangIsSupportedForSpeechInput:(char)arg1 ;
-(int)conversationTurnCount;
-(void)setConversationTurnCount:(int)arg1 ;
-(void)setBlueColors:(QTMColorGroup *)arg1 ;
-(void)setRedColors:(QTMColorGroup *)arg1 ;
-(void)setTooltipViews:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(char)textViewShouldEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(char)accessibilityPerformEscape;
-(id<GSKRecognizerClient>)recognizer;
-(void)setRecognizer:(id<GSKRecognizerClient>)arg1 ;
-(void)setDoneButton:(QTMButton *)arg1 ;
-(QTMButton *)doneButton;
-(UIView *)controlView;
-(void)updateUI;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

