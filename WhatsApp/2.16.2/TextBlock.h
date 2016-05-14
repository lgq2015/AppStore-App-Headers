/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TextBlockDelegate;
#import <WhatsApp/WhatsApp-Structs.h>
@class NSMutableArray, NSString, NSTextCheckingResult;

@interface TextBlock : NSObject {

	NSMutableArray* _textRects;
	id<TextBlockDelegate> _delegate;
	char _highlighted;
	char _bold;
	NSString* _text;
	NSString* _url;
	NSTextCheckingResult* _checkingResult;
	NSString* _styledText;
	NSRange _range;
	unsigned long long _type;

}

@property (assign,nonatomic) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * url;                                       //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSTextCheckingResult * checkingResult;              //@synthesize checkingResult=_checkingResult - In the implementation block
@property (assign,nonatomic) char highlighted;                                   //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) char bold;                                          //@synthesize bold=_bold - In the implementation block
@property (nonatomic,copy) NSString * styledText;                                //@synthesize styledText=_styledText - In the implementation block
+(id)blockWithRange:(NSRange)arg1 text:(id)arg2 ;
+(id)applicationURLForOutlookFromMailtoURL:(id)arg1 ;
+(id)applicationURLForGmailFromMailtoURL:(id)arg1 ;
+(id)applicationURLForInboxFromMailtoURL:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 text:(id)arg2 ;
-(char)isEqualToTextBlock:(id)arg1 ;
-(id)actionSheetForMailtoURL:(id)arg1 ;
-(id)actionSheetForWebURL:(id)arg1 ;
-(id)actionSheetForPhoneNumber;
-(id)actionSheetForAddress;
-(id)actionSheetForDate;
-(void*)copyPersonRecord;
-(void)addTextRect:(id)arg1 ;
-(void)deleteAllTextRects;
-(id)actionSheetWithDelegate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSTextCheckingResult *)checkingResult;
-(void)setCheckingResult:(NSTextCheckingResult *)arg1 ;
-(NSString *)styledText;
-(void)setStyledText:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)url;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)text;
-(void)setHighlighted:(char)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSRange)range;
-(char)highlighted;
-(void)setRange:(NSRange)arg1 ;
-(id)textRects;
-(char)bold;
-(void)setBold:(char)arg1 ;
@end

