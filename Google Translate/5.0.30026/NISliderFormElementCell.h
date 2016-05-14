/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/NIFormElementCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UISlider, NSString;

@interface NISliderFormElementCell : NIFormElementCell <UITextFieldDelegate> {

	UISlider* _sliderControl;

}

@property (nonatomic,readonly) UISlider * sliderControl;              //@synthesize sliderControl=_sliderControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldUpdateCellWithObject:(id)arg1 ;
-(void)sliderDidChangeValue;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UISlider *)sliderControl;
@end

