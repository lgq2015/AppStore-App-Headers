/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface YTCircularProgressView : UIView {

	char _paused;
	CAShapeLayer* _progressLayer;
	/*^block*/id _animationCompletion;
	float _targetProgress;
	double _duration;

}

@property (nonatomic,retain) CAShapeLayer * progressLayer;              //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,copy) id animationCompletion;                      //@synthesize animationCompletion=_animationCompletion - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float targetProgress;                      //@synthesize targetProgress=_targetProgress - In the implementation block
@property (assign,nonatomic) char paused;                               //@synthesize paused=_paused - In the implementation block
-(void)setProgress:(float)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelProgressAnimation;
-(void)pauseProgressAnimation;
-(void)resumeProgressAnimation;
-(void)configureProgress;
-(void)animateFromValue:(float)arg1 toValue:(float)arg2 duration:(double)arg3 ;
-(id)circlePath;
-(CGRect)circleFrame;
-(id)animationCompletion;
-(void)setAnimationCompletion:(id)arg1 ;
-(float)targetProgress;
-(void)setTargetProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setPaused:(char)arg1 ;
-(char)paused;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
@end

