/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/GOOTextContentViewObject.h>

@interface GOOWeightedValueContentViewObject : GOOTextContentViewObject {

	char _accessibilityLabelIsAllLabels;
	float _leftTextWeight;
	float _rightTextWeight;

}

@property (assign,nonatomic) float leftTextWeight;                            //@synthesize leftTextWeight=_leftTextWeight - In the implementation block
@property (assign,nonatomic) float rightTextWeight;                           //@synthesize rightTextWeight=_rightTextWeight - In the implementation block
@property (assign,nonatomic) char accessibilityLabelIsAllLabels;              //@synthesize accessibilityLabelIsAllLabels=_accessibilityLabelIsAllLabels - In the implementation block
-(Class)contentViewClass;
-(float)leftTextWeight;
-(float)rightTextWeight;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 ;
-(void)setLeftTextWeight:(float)arg1 ;
-(void)setRightTextWeight:(float)arg1 ;
-(char)accessibilityLabelIsAllLabels;
-(void)setAccessibilityLabelIsAllLabels:(char)arg1 ;
@end

