/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <UIKit/UIImageView.h>

@protocol YYDraggableImageViewDelegate;
@class UIPanGestureRecognizer;

@interface YYDraggableImageView : UIImageView {

	id<YYDraggableImageViewDelegate> _delegate;
	UIPanGestureRecognizer* _panGR;
	CGPoint _originalPoint;

}

@property (assign,nonatomic,__weak) id<YYDraggableImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGR;                                //@synthesize panGR=_panGR - In the implementation block
@property (assign) CGPoint originalPoint;                                                   //@synthesize originalPoint=_originalPoint - In the implementation block
-(void)panned:(id)arg1 ;
-(void)setPanGR:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)panGR;
-(void)setOriginalPoint:(CGPoint)arg1 ;
-(CGPoint)originalPoint;
-(void)animateOutView:(unsigned)arg1 ;
-(void)resetView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<YYDraggableImageViewDelegate>)arg1 ;
-(id<YYDraggableImageViewDelegate>)delegate;
@end

