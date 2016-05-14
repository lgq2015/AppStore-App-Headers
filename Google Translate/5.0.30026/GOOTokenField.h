/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol GOOTokenFieldDelegate;
@class NSMutableArray, NSString, GOOTokenTextField, UILabel, UITextField, UIMenuController, NSArray;

@interface GOOTokenField : UIView <UITextFieldDelegate> {

	NSMutableArray* _tokens;
	char _showPlaceholderWithTokens;
	NSString* _placeholder;
	unsigned _delimiter;
	id<GOOTokenFieldDelegate> _delegate;
	GOOTokenTextField* _textField;
	NSString* _previousInputText;
	UILabel* _placeholderLabel;
	UITextField* _hiddenField;

}

@property (nonatomic,readonly) UIMenuController * tokenMenuController; 
@property (nonatomic,copy) NSString * placeholder;                                   //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) char showPlaceholderWithTokens;                         //@synthesize showPlaceholderWithTokens=_showPlaceholderWithTokens - In the implementation block
@property (assign,nonatomic) unsigned delimiter;                                     //@synthesize delimiter=_delimiter - In the implementation block
@property (assign,nonatomic) int underlineViewMode; 
@property (nonatomic,copy) NSString * textFieldAccessibilityValue; 
@property (nonatomic,retain) NSArray * tokens;                                       //@synthesize tokens=_tokens - In the implementation block
@property (assign,nonatomic,__weak) id<GOOTokenFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GOOTokenTextField * textField;                          //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) NSString * previousInputText;                             //@synthesize previousInputText=_previousInputText - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                             //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) UITextField * hiddenField;                              //@synthesize hiddenField=_hiddenField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenFramesWithSize:(CGSize)arg1 tokens:(id)arg2 ;
+(CGRect)frameForTextFieldWithTokenFieldSize:(CGSize)arg1 relativeToLastTokenFrame:(CGRect)arg2 textFieldHeight:(float)arg3 placeholder:(id)arg4 ;
+(CGSize)calculateSize:(CGSize)arg1 tokens:(id)arg2 textField:(id)arg3 ;
+(float)heightWithTokens:(id)arg1 placeholder:(id)arg2 constrainedToWidth:(float)arg3 ;
+(float)placeholderWidthWithTokenFieldSize:(CGSize)arg1 placeholder:(id)arg2 ;
+(float)heightWithTokens:(id)arg1 constrainedToWidth:(float)arg2 ;
-(void)setUnderlineViewMode:(int)arg1 ;
-(int)underlineViewMode;
-(void)tokenMenuControllerDeleteAction:(id)arg1 ;
-(UIMenuController *)tokenMenuController;
-(void)toggleTokenMenuController:(id)arg1 token:(id)arg2 ;
-(void)textFieldDidChange;
-(void)setHiddenField:(UITextField *)arg1 ;
-(UITextField *)hiddenField;
-(float)textRectOriginXWithTokenFieldSize:(CGSize)arg1 tokens:(id)arg2 placeholder:(id)arg3 ;
-(void)removeTokenSubview:(id)arg1 ;
-(void)addTokenSubview:(id)arg1 ;
-(void)notifyDelegateIfSizeNeedsToBeUpdated;
-(void)removeToken:(id)arg1 ;
-(void)createNewTokenFromInput;
-(void)deselectAllTokens;
-(void)commitInput;
-(void)selectLastToken;
-(void)removeSelectedTokens;
-(void)tokenPressed:(id)arg1 ;
-(void)clearTextInput;
-(NSString *)previousInputText;
-(void)setPreviousInputText:(NSString *)arg1 ;
-(void)addToken:(id)arg1 ;
-(char)showPlaceholderWithTokens;
-(void)setShowPlaceholderWithTokens:(char)arg1 ;
-(unsigned)delimiter;
-(void)setDelimiter:(unsigned)arg1 ;
-(NSString *)textFieldAccessibilityValue;
-(void)setTextFieldAccessibilityValue:(NSString *)arg1 ;
-(void)selectToken:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<GOOTokenFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<GOOTokenFieldDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(void)setPlaceholder:(NSString *)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(GOOTokenTextField *)textField;
-(NSString *)placeholder;
-(NSArray *)tokens;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(void)setTextField:(GOOTokenTextField *)arg1 ;
-(void)setTokens:(NSArray *)arg1 ;
@end

