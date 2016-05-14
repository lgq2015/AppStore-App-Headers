/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, IGFilteredPhotoView, NSString;

@interface IGTiltShiftGestureController : NSObject <UIGestureRecognizerDelegate> {

	char _maskNeedsRedraw;
	CGPoint _startPanPoint;
	CGPoint _startPanOrigin;
	float _startRadius;
	float _startTheta;
	double _startAnimationTime;
	float _targetFogLevel;
	float _animationDuration;
	float _startFogLevel;
	NSArray* _gestureRecognizers;
	IGFilteredPhotoView* _filterView;

}

@property (nonatomic,copy) NSArray * gestureRecognizers;                    //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (nonatomic,retain) IGFilteredPhotoView * filterView;              //@synthesize filterView=_filterView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFilteredPhotoView *)filterView;
-(void)fadeOutMaskHighlight;
-(void)tiltDidPan:(id)arg1 ;
-(void)tiltDidScale:(id)arg1 ;
-(void)tiltDidTap:(id)arg1 ;
-(void)tiltDidRotate:(id)arg1 ;
-(void)fadeInMaskHighlight;
-(void)flashMaskHighlight;
-(void)startControllingFilterView:(id)arg1 ;
-(void)setFilterView:(IGFilteredPhotoView *)arg1 ;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSArray *)gestureRecognizers;
-(void)setEnabled:(char)arg1 ;
-(void)setGestureRecognizers:(NSArray *)arg1 ;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(void)removeGestureRecognizersFromView:(id)arg1 ;
@end

