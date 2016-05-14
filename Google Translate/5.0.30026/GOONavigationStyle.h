/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIFont, NSDictionary;

@interface GOONavigationStyle : NSObject <NSCopying> {

	UIColor* _headerTitleTintColor;
	UIColor* _headerIconTintColor;
	char _shouldEnableHeaderTitleGrowth;
	char _bannerVisibility;
	UIColor* _statusBarBackgroundColor;
	UIColor* _headerBackgroundColor;
	UIColor* _headerBevelColor;
	int _contentStyle;
	float _headerMinimumHeight;
	float _headerMaximumHeight;
	float _headerTitleMinimumScaleFactor;
	UIFont* _headerTitleMinimumFont;
	UIFont* _headerTitleMaximumFont;
	float _headerTitleTopInsetRatio;
	NSDictionary* _headerTitleTabStops;
	int _headerScrollBehavior;
	int _headerBarButtonItemBehavior;
	int _headerTitleBehavior;
	int _headerShadowBehavior;
	int _headerUpdateAnimationBehavior;
	unsigned _secondaryScrollViewsHeaderBehavior;
	int _headerInteractionBehavior;
	float _headerScrollBehaviorShrinkAndHideVelocityThreshold;
	int _statusBarBehavior;

}

@property (nonatomic,retain) UIColor * statusBarBackgroundColor;                                    //@synthesize statusBarBackgroundColor=_statusBarBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * headerBackgroundColor;                                       //@synthesize headerBackgroundColor=_headerBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * headerBevelColor;                                            //@synthesize headerBevelColor=_headerBevelColor - In the implementation block
@property (nonatomic,retain) UIColor * headerTitleTintColor; 
@property (nonatomic,retain) UIColor * headerIconTintColor; 
@property (assign,nonatomic) int contentStyle;                                                      //@synthesize contentStyle=_contentStyle - In the implementation block
@property (assign,nonatomic) float headerMinimumHeight;                                             //@synthesize headerMinimumHeight=_headerMinimumHeight - In the implementation block
@property (assign,nonatomic) float headerMaximumHeight;                                             //@synthesize headerMaximumHeight=_headerMaximumHeight - In the implementation block
@property (assign,nonatomic) float headerTitleMinimumScaleFactor;                                   //@synthesize headerTitleMinimumScaleFactor=_headerTitleMinimumScaleFactor - In the implementation block
@property (nonatomic,retain) UIFont * headerTitleMinimumFont;                                       //@synthesize headerTitleMinimumFont=_headerTitleMinimumFont - In the implementation block
@property (nonatomic,retain) UIFont * headerTitleMaximumFont;                                       //@synthesize headerTitleMaximumFont=_headerTitleMaximumFont - In the implementation block
@property (assign,nonatomic) float headerTitleTopInsetRatio;                                        //@synthesize headerTitleTopInsetRatio=_headerTitleTopInsetRatio - In the implementation block
@property (nonatomic,copy) NSDictionary * headerTitleTabStops;                                      //@synthesize headerTitleTabStops=_headerTitleTabStops - In the implementation block
@property (assign,nonatomic) char shouldEnableHeaderTitleGrowth;                                    //@synthesize shouldEnableHeaderTitleGrowth=_shouldEnableHeaderTitleGrowth - In the implementation block
@property (assign,nonatomic) int headerScrollBehavior;                                              //@synthesize headerScrollBehavior=_headerScrollBehavior - In the implementation block
@property (assign,nonatomic) int headerBarButtonItemBehavior;                                       //@synthesize headerBarButtonItemBehavior=_headerBarButtonItemBehavior - In the implementation block
@property (assign,nonatomic) int headerTitleBehavior;                                               //@synthesize headerTitleBehavior=_headerTitleBehavior - In the implementation block
@property (assign,nonatomic) int headerShadowBehavior;                                              //@synthesize headerShadowBehavior=_headerShadowBehavior - In the implementation block
@property (assign,nonatomic) int headerUpdateAnimationBehavior;                                     //@synthesize headerUpdateAnimationBehavior=_headerUpdateAnimationBehavior - In the implementation block
@property (assign,nonatomic) unsigned secondaryScrollViewsHeaderBehavior;                           //@synthesize secondaryScrollViewsHeaderBehavior=_secondaryScrollViewsHeaderBehavior - In the implementation block
@property (assign,nonatomic) int headerInteractionBehavior;                                         //@synthesize headerInteractionBehavior=_headerInteractionBehavior - In the implementation block
@property (assign,nonatomic) float headerScrollBehaviorShrinkAndHideVelocityThreshold;              //@synthesize headerScrollBehaviorShrinkAndHideVelocityThreshold=_headerScrollBehaviorShrinkAndHideVelocityThreshold - In the implementation block
@property (assign,nonatomic) char bannerVisibility;                                                 //@synthesize bannerVisibility=_bannerVisibility - In the implementation block
@property (assign,nonatomic) int statusBarBehavior;                                                 //@synthesize statusBarBehavior=_statusBarBehavior - In the implementation block
+(id)defaultStyle;
-(void)setStatusBarBackgroundColor:(UIColor *)arg1 ;
-(void)setContentStyle:(int)arg1 ;
-(void)setHeaderBevelColor:(UIColor *)arg1 ;
-(void)setHeaderMinimumHeight:(float)arg1 ;
-(void)setHeaderMaximumHeight:(float)arg1 ;
-(float)headerMaximumHeight;
-(UIColor *)headerIconTintColor;
-(unsigned)secondaryScrollViewsHeaderBehavior;
-(float)computedHeaderMaximumHeight;
-(id)colorForHeaderContentStyle;
-(int)statusBarBehavior;
-(char)bannerVisibility;
-(int)contentStyle;
-(int)headerUpdateAnimationBehavior;
-(void)setStatusBarBehavior:(int)arg1 ;
-(UIColor *)headerTitleTintColor;
-(float)computedHeaderMinimumHeight;
-(int)headerScrollBehavior;
-(float)headerScrollBehaviorShrinkAndHideVelocityThreshold;
-(int)headerShadowBehavior;
-(UIColor *)statusBarBackgroundColor;
-(int)headerInteractionBehavior;
-(int)headerBarButtonItemBehavior;
-(int)headerTitleBehavior;
-(UIColor *)headerBevelColor;
-(float)headerTitleMinimumScaleFactor;
-(float)headerMinimumHeight;
-(float)headerTitleTopInsetRatio;
-(UIFont *)headerTitleMinimumFont;
-(UIFont *)headerTitleMaximumFont;
-(NSDictionary *)headerTitleTabStops;
-(char)shouldEnableHeaderTitleGrowth;
-(void)setHeaderTitleTintColor:(UIColor *)arg1 ;
-(void)setHeaderIconTintColor:(UIColor *)arg1 ;
-(void)setHeaderTitleMinimumFont:(UIFont *)arg1 ;
-(void)setHeaderTitleMaximumFont:(UIFont *)arg1 ;
-(void)setHeaderTitleTopInsetRatio:(float)arg1 ;
-(void)setHeaderTitleMinimumScaleFactor:(float)arg1 ;
-(void)setHeaderTitleTabStops:(NSDictionary *)arg1 ;
-(void)setShouldEnableHeaderTitleGrowth:(char)arg1 ;
-(void)setHeaderScrollBehavior:(int)arg1 ;
-(void)setHeaderBarButtonItemBehavior:(int)arg1 ;
-(void)setHeaderTitleBehavior:(int)arg1 ;
-(void)setHeaderShadowBehavior:(int)arg1 ;
-(void)setHeaderUpdateAnimationBehavior:(int)arg1 ;
-(void)setSecondaryScrollViewsHeaderBehavior:(unsigned)arg1 ;
-(void)setHeaderInteractionBehavior:(int)arg1 ;
-(void)setHeaderScrollBehaviorShrinkAndHideVelocityThreshold:(float)arg1 ;
-(void)setBannerVisibility:(char)arg1 ;
-(void)setHeaderBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)headerBackgroundColor;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

