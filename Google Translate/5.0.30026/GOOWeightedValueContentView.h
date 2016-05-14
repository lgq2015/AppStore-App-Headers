/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GOOTextContentView.h>

@class GOOWeightedValueContentViewObject;

@interface GOOWeightedValueContentView : GOOTextContentView

@property (nonatomic,readonly) GOOWeightedValueContentViewObject * object; 
+(float)heightForObject:(id)arg1 constrainedToWidth:(float)arg2 ;
+(float)leftTextWeight;
+(float)rightTextWeight;
+(int)viewToExpandIfNecessary;
+(void)calculateTextSize:(CGSize*)arg1 detailTextSize:(CGSize*)arg2 actualTextFontSize:(float*)arg3 actualDetailTextFontSize:(float*)arg4 forObject:(id)arg5 constrainedToWidth:(float)arg6 ;
+(void)calculateLeftTextMaxWidth:(float*)arg1 rightTextMaxWidth:(float*)arg2 forObject:(id)arg3 constrainedToWidth:(float)arg4 ;
+(void)calculateTextWidth:(float*)arg1 detailTextWidth:(float*)arg2 forObject:(id)arg3 constrainedToWidth:(float)arg4 ;
+(float)leftTextWeightFromObject:(id)arg1 ;
+(float)rightTextWeightFromObject:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(id)accessibilityValue;
@end

