/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class YTLabel, YTFormattedStringLabel, UIImageView, UITapGestureRecognizer;

@interface YTFormTextPreviewView : UIView {

	YTLabel* _titleLabel;
	YTLabel* _placeholderLabel;
	YTFormattedStringLabel* _previewTextLabel;
	UIImageView* _editIconImageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id _tapTarget;
	SEL _tapTargetAction;
	id _model;

}

@property (nonatomic,retain) id model;              //@synthesize model=_model - In the implementation block
-(void)didTap;
-(void)setTapTarget:(id)arg1 action:(SEL)arg2 ;
-(void)sizeLabelsWithWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contentFontTypeKind:(int)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(id)model;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(void)setModel:(id)arg1 ;
-(id)previewText;
-(void)setPreviewText:(id)arg1 ;
@end

