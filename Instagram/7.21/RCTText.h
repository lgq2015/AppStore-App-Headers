/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSTextStorage, NSMutableArray, CAShapeLayer;

@interface RCTText : UIView {

	NSTextStorage* _textStorage;
	NSMutableArray* _reactSubviews;
	CAShapeLayer* _highlightLayer;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSTextStorage * textStorage;              //@synthesize textStorage=_textStorage - In the implementation block
-(id)reactTagAtPoint:(CGPoint)arg1 ;
-(void)reactSetFrame:(CGRect)arg1 ;
-(void)reactSetInheritedBackgroundColor:(id)arg1 ;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(id)reactSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)description;
-(UIEdgeInsets)contentInset;
-(id)accessibilityLabel;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(NSTextStorage *)textStorage;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
@end

