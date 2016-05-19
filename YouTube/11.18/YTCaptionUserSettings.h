/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface YTCaptionUserSettings : NSObject {

	char _forceFontName;
	char _forceTextEdgeStyle;
	char _forceTextOpacity;
	char _forceTextColor;
	char _forceTextBackgroundOpacity;
	char _forceTextBackgroundColor;
	char _forceWindowOpacity;
	char _forceWindowColor;
	char _forceRelativeCharacterSize;
	NSString* _fontName;
	int _textEdgeStyle;
	float _textOpacity;
	UIColor* _textColor;
	float _textBackgroundOpacity;
	UIColor* _textBackgroundColor;
	float _windowOpacity;
	UIColor* _windowColor;
	float _relativeCharacterSize;

}

@property (nonatomic,readonly) NSString * fontName;                          //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) char forceFontName;                           //@synthesize forceFontName=_forceFontName - In the implementation block
@property (nonatomic,readonly) int textEdgeStyle;                            //@synthesize textEdgeStyle=_textEdgeStyle - In the implementation block
@property (nonatomic,readonly) char forceTextEdgeStyle;                      //@synthesize forceTextEdgeStyle=_forceTextEdgeStyle - In the implementation block
@property (nonatomic,readonly) float textOpacity;                            //@synthesize textOpacity=_textOpacity - In the implementation block
@property (nonatomic,readonly) char forceTextOpacity;                        //@synthesize forceTextOpacity=_forceTextOpacity - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) char forceTextColor;                          //@synthesize forceTextColor=_forceTextColor - In the implementation block
@property (nonatomic,readonly) float textBackgroundOpacity;                  //@synthesize textBackgroundOpacity=_textBackgroundOpacity - In the implementation block
@property (nonatomic,readonly) char forceTextBackgroundOpacity;              //@synthesize forceTextBackgroundOpacity=_forceTextBackgroundOpacity - In the implementation block
@property (nonatomic,readonly) UIColor * textBackgroundColor;                //@synthesize textBackgroundColor=_textBackgroundColor - In the implementation block
@property (nonatomic,readonly) char forceTextBackgroundColor;                //@synthesize forceTextBackgroundColor=_forceTextBackgroundColor - In the implementation block
@property (nonatomic,readonly) float windowOpacity;                          //@synthesize windowOpacity=_windowOpacity - In the implementation block
@property (nonatomic,readonly) char forceWindowOpacity;                      //@synthesize forceWindowOpacity=_forceWindowOpacity - In the implementation block
@property (nonatomic,readonly) UIColor * windowColor;                        //@synthesize windowColor=_windowColor - In the implementation block
@property (nonatomic,readonly) char forceWindowColor;                        //@synthesize forceWindowColor=_forceWindowColor - In the implementation block
@property (nonatomic,readonly) float relativeCharacterSize;                  //@synthesize relativeCharacterSize=_relativeCharacterSize - In the implementation block
@property (nonatomic,readonly) char forceRelativeCharacterSize;              //@synthesize forceRelativeCharacterSize=_forceRelativeCharacterSize - In the implementation block
+(id)currentUserSettings;
+(id)hexStringFromColor:(id)arg1 ;
-(UIColor *)windowColor;
-(id)MDXFormat;
-(float)textBackgroundOpacity;
-(id)textEdgeStyleString;
-(id)fontFamilyOption;
-(float)relativeCharacterSize;
-(float)windowOpacity;
-(int)textEdgeStyle;
-(char)forceWindowOpacity;
-(char)forceWindowColor;
-(char)forceRelativeCharacterSize;
-(char)forceFontName;
-(char)forceTextOpacity;
-(char)forceTextColor;
-(char)forceTextBackgroundOpacity;
-(char)forceTextBackgroundColor;
-(char)forceTextEdgeStyle;
-(id)initWithFontName:(id)arg1 forceFontName:(char)arg2 textEdgeStyle:(int)arg3 forceTextEdgeStyle:(char)arg4 textOpacity:(float)arg5 forceTextOpacity:(char)arg6 textColor:(id)arg7 forceTextColor:(char)arg8 textBackgroundOpacity:(float)arg9 forceTextBackgroundOpacity:(char)arg10 textBackgroundColor:(id)arg11 forceTextBackgroundColor:(char)arg12 windowOpacity:(float)arg13 forceWindowOpacity:(char)arg14 windowColor:(id)arg15 forceWindowColor:(char)arg16 relativeCharacterSize:(float)arg17 forceRelativeCharacterSize:(char)arg18 ;
-(UIColor *)textBackgroundColor;
-(UIColor *)textColor;
-(NSString *)fontName;
-(float)textOpacity;
@end

