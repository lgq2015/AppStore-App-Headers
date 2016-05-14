/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GOOBaseContentViewObject.h>
#import <Translate/GOOTextFieldTraits.h>

@protocol GOOTextFieldCharacterCounter, GOOTextFieldValidator, GOOMultilineTextFieldDelegate;
@class NSString, QTMColorGroup, UIColor, UIFont;

@interface GOOMultilineTextFieldContentViewObject : GOOBaseContentViewObject <GOOTextFieldTraits> {

	char _textFieldEnabled;
	NSString* _text;
	NSString* _placeholder;
	int _presentationStyle;
	QTMColorGroup* _colorGroup;
	UIColor* _textColor;
	UIColor* _placeholderColor;
	UIColor* _errorColor;
	UIColor* _borderColor;
	unsigned _characterLimit;
	id<GOOTextFieldCharacterCounter> _characterCounter;
	int _underlineViewMode;
	id<GOOTextFieldValidator> _validator;
	id<GOOMultilineTextFieldDelegate> _textFieldDelegate;
	UIFont* _textFieldFont;
	int _elementID;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) id<GOOMultilineTextFieldDelegate> textFieldDelegate;                   //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
@property (assign,getter=isTextFieldEnabled,nonatomic) char textFieldEnabled;                       //@synthesize textFieldEnabled=_textFieldEnabled - In the implementation block
@property (nonatomic,retain) UIFont * textFieldFont;                                                //@synthesize textFieldFont=_textFieldFont - In the implementation block
@property (assign,nonatomic) int elementID;                                                         //@synthesize elementID=_elementID - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                  //@synthesize padding=_padding - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * text;                                                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                  //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                                 //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) QTMColorGroup * colorGroup;                                            //@synthesize colorGroup=_colorGroup - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                                            //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,retain) UIColor * errorColor;                                                  //@synthesize errorColor=_errorColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                                 //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) unsigned characterLimit;                                               //@synthesize characterLimit=_characterLimit - In the implementation block
@property (assign,nonatomic,__weak) id<GOOTextFieldCharacterCounter> characterCounter;              //@synthesize characterCounter=_characterCounter - In the implementation block
@property (assign,nonatomic) int underlineViewMode;                                                 //@synthesize underlineViewMode=_underlineViewMode - In the implementation block
@property (assign,nonatomic,__weak) id<GOOTextFieldValidator> validator;                            //@synthesize validator=_validator - In the implementation block
-(Class)contentViewClass;
-(void)setColorGroup:(QTMColorGroup *)arg1 ;
-(QTMColorGroup *)colorGroup;
-(void)setUnderlineViewMode:(int)arg1 ;
-(UIFont *)textFieldFont;
-(UIColor *)errorColor;
-(void)setErrorColor:(UIColor *)arg1 ;
-(id<GOOTextFieldCharacterCounter>)characterCounter;
-(void)setCharacterCounter:(id<GOOTextFieldCharacterCounter>)arg1 ;
-(int)underlineViewMode;
-(char)isTextFieldEnabled;
-(void)setTextFieldEnabled:(char)arg1 ;
-(void)setTextFieldFont:(UIFont *)arg1 ;
-(id<GOOTextFieldValidator>)validator;
-(void)setElementID:(int)arg1 ;
-(void)setValidator:(id<GOOTextFieldValidator>)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(id)init;
-(int)presentationStyle;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)textColor;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UIColor *)borderColor;
-(NSString *)placeholder;
-(unsigned)characterLimit;
-(void)setCharacterLimit:(unsigned)arg1 ;
-(void)setTextFieldDelegate:(id<GOOMultilineTextFieldDelegate>)arg1 ;
-(id<GOOMultilineTextFieldDelegate>)textFieldDelegate;
-(int)elementID;
@end

