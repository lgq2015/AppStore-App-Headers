/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, NSString;

@interface IGEditorTabSegment : UIControl {

	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(void)updateLabelAttributes;
-(id)viewForNux;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)label;
@end

