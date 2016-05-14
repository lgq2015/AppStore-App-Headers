/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, UIColor, UIImage, NSArray, NSString, QTMColorGroup;

@interface GOOHUDMessage : NSObject <NSCopying> {

	char _hasSetTextAlignment;
	int _textAlignment;
	NSAttributedString* _attributedText;
	UIColor* _backgroundColor;
	UIColor* _buttonTextColor;
	UIColor* _highlightedButtonTextColor;
	UIImage* _image;
	NSArray* _actions;
	int _displayType;
	/*^block*/id _completionHandler;
	NSString* _category;
	NSString* _accessibilityLabel;
	QTMColorGroup* _colorGroup;
	double _duration;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                               //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedButtonTextColor;                    //@synthesize highlightedButtonTextColor=_highlightedButtonTextColor - In the implementation block
@property (assign,nonatomic) int textAlignment;                                       //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIImage * image;                                         //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                         //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) int displayType;                                         //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) double duration;                                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * category;                                       //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                             //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) NSString * voiceNotificationText; 
@property (nonatomic,retain) QTMColorGroup * colorGroup;                              //@synthesize colorGroup=_colorGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> targetQueue; 
@property (assign,nonatomic) char hasSetTextAlignment;                                //@synthesize hasSetTextAlignment=_hasSetTextAlignment - In the implementation block
+(id)messageWithText:(id)arg1 ;
+(id)messageWithAttributedText:(id)arg1 ;
-(void)setColorGroup:(QTMColorGroup *)arg1 ;
-(QTMColorGroup *)colorGroup;
-(NSString *)voiceNotificationText;
-(void)executeCompletionHandlerWithUserInteraction:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)executeActionHandler:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UIColor *)highlightedButtonTextColor;
-(void)setHighlightedButtonTextColor:(UIColor *)arg1 ;
-(char)hasSetTextAlignment;
-(void)setHasSetTextAlignment:(char)arg1 ;
-(UIColor *)buttonTextColor;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(double)duration;
-(void)setDisplayType:(int)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSArray *)actions;
-(void)setDuration:(double)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(NSString *)accessibilityLabel;
-(NSAttributedString *)attributedText;
-(int)textAlignment;
-(int)displayType;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(Class)viewClass;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)setButtonTextColor:(UIColor *)arg1 ;
@end

