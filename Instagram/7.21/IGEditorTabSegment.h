/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, NSString;

@interface IGEditorTabSegment : UIControl {

	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
-(void)updateLabelAttributes;
-(id)viewForNux;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)label;
@end

