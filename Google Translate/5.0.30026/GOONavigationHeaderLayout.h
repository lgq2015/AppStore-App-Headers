/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Translate/Translate-Structs.h>
@class NSArray, UILabel, GOONavigationStyle, UIFont;

@interface GOONavigationHeaderLayout : NSObject {

	NSArray* _leftBarItemLayouts;
	NSArray* _rightBarItemLayouts;
	NSArray* _leftBarViews;
	NSArray* _rightBarViews;
	UILabel* _titleLabel;
	GOONavigationStyle* _navigationStyle;
	UIFont* _titleFont;
	float _fractionHeightGrowth;
	CGRect _titleFrame;
	CGRect _headerBackgroundFrame;
	CGRect _headerBevelFrame;
	CGRect _statusBarFrame;
	CGRect _bannerFrame;

}

@property (nonatomic,copy) NSArray * leftBarViews;                              //@synthesize leftBarViews=_leftBarViews - In the implementation block
@property (nonatomic,copy) NSArray * rightBarViews;                             //@synthesize rightBarViews=_rightBarViews - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) GOONavigationStyle * navigationStyle;              //@synthesize navigationStyle=_navigationStyle - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,readonly) float fractionHeightGrowth;                      //@synthesize fractionHeightGrowth=_fractionHeightGrowth - In the implementation block
@property (nonatomic,readonly) CGRect titleFrame;                               //@synthesize titleFrame=_titleFrame - In the implementation block
@property (nonatomic,readonly) CGRect headerBackgroundFrame;                    //@synthesize headerBackgroundFrame=_headerBackgroundFrame - In the implementation block
@property (nonatomic,readonly) CGRect headerBevelFrame;                         //@synthesize headerBevelFrame=_headerBevelFrame - In the implementation block
@property (nonatomic,readonly) CGRect statusBarFrame;                           //@synthesize statusBarFrame=_statusBarFrame - In the implementation block
@property (nonatomic,readonly) CGRect bannerFrame;                              //@synthesize bannerFrame=_bannerFrame - In the implementation block
-(GOONavigationStyle *)navigationStyle;
-(float)fractionHeightGrowth;
-(float)calculatedStatusBarHeight;
-(float)verticalOffsetForHeaderContent;
-(id)layoutForBarView:(id)arg1 leftAlign:(char)arg2 isFirst:(char)arg3 ;
-(float)fractionHeightGrowthFromBounds:(CGRect)arg1 ;
-(char)shouldGrowTitleText;
-(float)tweenFrom:(float)arg1 to:(float)arg2 fraction:(float)arg3 ;
-(CGRect)insetTitleFrameHorizontallyWithContentRect:(CGRect)arg1 barIconContentRemainderRect:(CGRect)arg2 ;
-(id)clampFontSize:(id)arg1 withWidth:(float)arg2 ;
-(CGRect)insetTitleFrameVerticallyWithContentRect:(CGRect)arg1 ;
-(void)setNavigationStyle:(GOONavigationStyle *)arg1 ;
-(void)setLeftBarViews:(NSArray *)arg1 ;
-(void)setRightBarViews:(NSArray *)arg1 ;
-(void)evaluateWithBounds:(CGRect)arg1 ;
-(CGRect)headerBackgroundFrame;
-(CGRect)bannerFrame;
-(CGRect)titleFrame;
-(CGRect)headerBevelFrame;
-(id)layoutForLeftBarButtonItemAtIndex:(unsigned)arg1 ;
-(id)layoutForRightBarButtonItemAtIndex:(unsigned)arg1 ;
-(NSArray *)leftBarViews;
-(NSArray *)rightBarViews;
-(CGRect)statusBarFrame;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIFont *)titleFont;
-(float)minimumHeight;
-(void)setTitleFont:(UIFont *)arg1 ;
@end

