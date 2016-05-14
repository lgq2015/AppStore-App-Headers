/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFilterTintColorPickerDelegate;
@class NSMutableArray, NSString;

@interface IGFilterTintColorPicker : UIControl <UIGestureRecognizerDelegate> {

	id<IGFilterTintColorPickerDelegate> _delegate;
	unsigned _currentTintType;
	unsigned _currentColorIndex;
	NSMutableArray* _boundingBoxes;

}

@property (assign,nonatomic,__weak) id<IGFilterTintColorPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned currentTintType;                                         //@synthesize currentTintType=_currentTintType - In the implementation block
@property (assign,nonatomic) unsigned currentColorIndex;                                       //@synthesize currentColorIndex=_currentColorIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * boundingBoxes;                                   //@synthesize boundingBoxes=_boundingBoxes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)paddedPickerWidth;
-(unsigned)currentTintType;
-(unsigned)currentColorIndex;
-(unsigned)closestColorIndex:(CGPoint)arg1 ;
-(void)setCurrentColorIndex:(unsigned)arg1 ;
-(char)isAnyColorSelected;
-(unsigned)currentTintColor;
-(void)setCurrentTintType:(unsigned)arg1 ;
-(void)setBoundingBoxes:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFilterTintColorPickerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFilterTintColorPickerDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)handleTapFrom:(id)arg1 ;
-(NSMutableArray *)boundingBoxes;
@end

