/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor, NSString;

@interface QTMColorGroup : NSObject <NSSecureCoding> {

	const UIEdgeInsets* _tones;
	unsigned _numTones;
	int _groupID;
	UIColor* _bodyTextColor;
	UIColor* _bodyTextColorOnLightestColor;
	UIColor* _bodyTextColorOnLighterColor;
	UIColor* _bodyTextColorOnRegularColor;
	UIColor* _bodyTextColorOnDarkerColor;
	UIColor* _bodyTextColorOnAccentColor;
	UIColor* _bodyTextColorOnBrightAccentColor;
	UIColor* _lightBodyTextColor;
	UIColor* _buttonBackgroundColor;
	UIColor* _buttonDisabledBackgroundColorDark;
	UIColor* _buttonDisabledBackgroundColorLight;
	UIColor* _buttonActionTextColor;
	UIColor* _buttonTextColor;
	UIColor* _buttonInkColor;

}

@property (nonatomic,readonly) int groupID;                                               //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) UIColor * lightestColor; 
@property (nonatomic,readonly) UIColor * lighterColor; 
@property (nonatomic,readonly) UIColor * regularColor; 
@property (nonatomic,readonly) UIColor * darkerColor; 
@property (nonatomic,readonly) UIColor * accentColor; 
@property (nonatomic,readonly) UIColor * brightAccentColor; 
@property (nonatomic,readonly) UIColor * bodyTextColor;                                   //@synthesize bodyTextColor=_bodyTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * bodyTextColorOnLightestColor;                    //@synthesize bodyTextColorOnLightestColor=_bodyTextColorOnLightestColor - In the implementation block
@property (nonatomic,readonly) UIColor * bodyTextColorOnLighterColor;                     //@synthesize bodyTextColorOnLighterColor=_bodyTextColorOnLighterColor - In the implementation block
@property (nonatomic,readonly) UIColor * bodyTextColorOnRegularColor;                     //@synthesize bodyTextColorOnRegularColor=_bodyTextColorOnRegularColor - In the implementation block
@property (nonatomic,readonly) UIColor * bodyTextColorOnDarkerColor;                      //@synthesize bodyTextColorOnDarkerColor=_bodyTextColorOnDarkerColor - In the implementation block
@property (nonatomic,readonly) UIColor * bodyTextColorOnAccentColor;                      //@synthesize bodyTextColorOnAccentColor=_bodyTextColorOnAccentColor - In the implementation block
@property (nonatomic,readonly) UIColor * bodyTextColorOnBrightAccentColor;                //@synthesize bodyTextColorOnBrightAccentColor=_bodyTextColorOnBrightAccentColor - In the implementation block
@property (nonatomic,readonly) UIColor * lightBodyTextColor;                              //@synthesize lightBodyTextColor=_lightBodyTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * buttonBackgroundColor;                           //@synthesize buttonBackgroundColor=_buttonBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * buttonDisabledBackgroundColorDark;               //@synthesize buttonDisabledBackgroundColorDark=_buttonDisabledBackgroundColorDark - In the implementation block
@property (nonatomic,readonly) UIColor * buttonDisabledBackgroundColorLight;              //@synthesize buttonDisabledBackgroundColorLight=_buttonDisabledBackgroundColorLight - In the implementation block
@property (nonatomic,readonly) UIColor * buttonActionTextColor;                           //@synthesize buttonActionTextColor=_buttonActionTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * buttonTextColor;                                 //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * buttonInkColor;                                  //@synthesize buttonInkColor=_buttonInkColor - In the implementation block
@property (nonatomic,readonly) UIColor * statusBarColor; 
+(id)greyColors;
+(id)googleBlueColors;
+(id)googleYellowColors;
+(id)whiteColors;
+(id)googleRedColors;
+(id)colorGroupWithID:(int)arg1 ;
+(id)textColorOnColor:(id)arg1 textAlpha:(float)arg2 options:(unsigned)arg3 ;
+(id)bodyTextColorOnColor:(id)arg1 withFont:(id)arg2 ;
+(id)colorGroupFromTargetColor:(id)arg1 ;
+(id)textColorOnColor:(id)arg1 textAlpha:(float)arg2 font:(id)arg3 ;
+(id)googleGreenColors;
+(float)luminanceOfColor:(id)arg1 ;
+(id)colorGroupFromTargetColor:(id)arg1 checkStandardGroups:(char)arg2 ;
+(id)exceptionColorFromChoices:(id)arg1 onColor:(id)arg2 options:(unsigned)arg3 ;
+(float)minContrastRatioForOptions:(unsigned)arg1 ;
+(float)contrastRatioForColor:(id)arg1 onColor:(id)arg2 ;
+(float)minAlphaOfColor:(id)arg1 onColor:(id)arg2 options:(unsigned)arg3 ;
+(id)textColorFromChoices:(id)arg1 onColor:(id)arg2 options:(unsigned)arg3 ;
+(id)bodyTextColorOnBackgroundImage:(id)arg1 inRegion:(CGRect)arg2 withFont:(id)arg3 ;
+(char)colorToneIsAccent:(int)arg1 ;
+(char)colorToneIsTint:(int)arg1 ;
+(id)colorWithRGBA:(UIEdgeInsets)arg1 ;
+(id)clearColors;
+(id)colorGroupWithName:(id)arg1 ;
+(id)bodyTextColorOnBackgroundImage:(id)arg1 withFont:(id)arg2 ;
+(char)supportsSecureCoding;
+(void)initialize;
-(UIColor *)bodyTextColorOnLighterColor;
-(UIColor *)buttonActionTextColor;
-(UIColor *)darkerColor;
-(UIColor *)accentColor;
-(UIColor *)buttonBackgroundColor;
-(UIColor *)lightestColor;
-(id)colorWithTone:(int)arg1 ;
-(UIColor *)lightBodyTextColor;
-(UIColor *)lighterColor;
-(UIColor *)bodyTextColorOnDarkerColor;
-(UIColor *)brightAccentColor;
-(UIColor *)statusBarColor;
-(UIColor *)buttonInkColor;
-(UIColor *)buttonDisabledBackgroundColorLight;
-(UIColor *)buttonDisabledBackgroundColorDark;
-(id)initWithPredefinedColorGroupID:(int)arg1 ;
-(id)initWithTargetColor:(id)arg1 checkStandardGroups:(char)arg2 ;
-(id)initWithGroupID:(int)arg1 tones:(const UIEdgeInsets*)arg2 numTones:(unsigned)arg3 ;
-(void)initBodyTextColors;
-(void)initButtonColors;
-(id)lightBodyTextColorOnColor:(id)arg1 withFont:(id)arg2 ;
-(id)bodyTextColorOnLightestColorWithFont:(id)arg1 ;
-(id)bodyTextColorOnLighterColorWithFont:(id)arg1 ;
-(id)bodyTextColorOnRegularColorWithFont:(id)arg1 ;
-(id)bodyTextColorOnDarkerColorWithFont:(id)arg1 ;
-(id)bodyTextColorOnTone:(int)arg1 withFont:(id)arg2 ;
-(id)lightBodyTextColorOnTone:(int)arg1 withFont:(id)arg2 ;
-(char)hasAccentColors;
-(UIColor *)bodyTextColorOnLightestColor;
-(UIColor *)bodyTextColorOnRegularColor;
-(UIColor *)bodyTextColorOnAccentColor;
-(UIColor *)bodyTextColorOnBrightAccentColor;
-(UIColor *)buttonTextColor;
-(int)groupID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(UIColor *)regularColor;
-(UIColor *)bodyTextColor;
@end

