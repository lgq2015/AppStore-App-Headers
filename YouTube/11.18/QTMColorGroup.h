/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
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
+(id)youTubeRedColors;
+(id)googleBlueColors;
+(id)youTubeBlueColors;
+(id)colorGroupFromTargetColor:(id)arg1 ;
+(id)greyColors;
+(id)googleRedColors;
+(id)whiteColors;
+(id)colorGroupWithID:(int)arg1 ;
+(id)googleYellowColors;
+(id)bodyTextColorOnColor:(id)arg1 withFont:(id)arg2 ;
+(float)contrastRatioForColor:(id)arg1 onColor:(id)arg2 ;
+(float)luminanceOfColor:(id)arg1 ;
+(id)textColorOnColor:(id)arg1 textAlpha:(float)arg2 font:(id)arg3 ;
+(id)googleGreenColors;
+(id)textColorOnColor:(id)arg1 textAlpha:(float)arg2 options:(unsigned)arg3 ;
+(id)colorGroupFromTargetColor:(id)arg1 checkStandardGroups:(char)arg2 ;
+(id)exceptionColorFromChoices:(id)arg1 onColor:(id)arg2 options:(unsigned)arg3 ;
+(float)minContrastRatioForOptions:(unsigned)arg1 ;
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
-(UIColor *)buttonInkColor;
-(id)colorWithTone:(int)arg1 ;
-(UIColor *)darkerColor;
-(UIColor *)lighterColor;
-(UIColor *)lightestColor;
-(UIColor *)lightBodyTextColor;
-(UIColor *)accentColor;
-(UIColor *)buttonDisabledBackgroundColorLight;
-(UIColor *)buttonDisabledBackgroundColorDark;
-(id)initWithPredefinedColorGroupID:(int)arg1 ;
-(id)initWithTargetColor:(id)arg1 checkStandardGroups:(char)arg2 ;
-(id)initWithGroupID:(int)arg1 tones:(const UIEdgeInsets*)arg2 numTones:(unsigned)arg3 ;
-(void)initBodyTextColors;
-(void)initButtonColors;
-(id)lightBodyTextColorOnColor:(id)arg1 withFont:(id)arg2 ;
-(UIColor *)brightAccentColor;
-(UIColor *)statusBarColor;
-(id)bodyTextColorOnLightestColorWithFont:(id)arg1 ;
-(id)bodyTextColorOnLighterColorWithFont:(id)arg1 ;
-(id)bodyTextColorOnRegularColorWithFont:(id)arg1 ;
-(id)bodyTextColorOnDarkerColorWithFont:(id)arg1 ;
-(id)bodyTextColorOnTone:(int)arg1 withFont:(id)arg2 ;
-(id)lightBodyTextColorOnTone:(int)arg1 withFont:(id)arg2 ;
-(char)hasAccentColors;
-(UIColor *)bodyTextColorOnLightestColor;
-(UIColor *)bodyTextColorOnLighterColor;
-(UIColor *)bodyTextColorOnRegularColor;
-(UIColor *)bodyTextColorOnDarkerColor;
-(UIColor *)bodyTextColorOnAccentColor;
-(UIColor *)bodyTextColorOnBrightAccentColor;
-(UIColor *)buttonBackgroundColor;
-(UIColor *)buttonActionTextColor;
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

