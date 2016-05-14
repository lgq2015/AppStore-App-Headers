/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDynamicsModel.h>

@interface IGDynamics1D : IGDynamicsModel {

	char _disabled;
	float _currentValue;
	float _targetValue;
	float _velocity;
	float _minValue;
	/*^block*/id _stepBlock;

}

@property (assign,nonatomic) float currentValue;                           //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) float minValue;                               //@synthesize minValue=_minValue - In the implementation block
@property (assign,getter=isDisabled,nonatomic) char disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) id stepBlock;                                   //@synthesize stepBlock=_stepBlock - In the implementation block
@property (assign,nonatomic) float targetValue;                            //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) float velocity;                               //@synthesize velocity=_velocity - In the implementation block
-(float)currentValue;
-(void)setCurrentValue:(float)arg1 ;
-(id)init;
-(id)description;
-(void)setVelocity:(float)arg1 ;
-(float)targetValue;
-(void)setTargetValue:(float)arg1 ;
-(float)velocity;
-(float)minValue;
-(void)setDisabled:(char)arg1 ;
-(void)setMinValue:(float)arg1 ;
-(char)isDone;
-(id)stepBlock;
-(void)setStepBlock:(id)arg1 ;
-(void)step:(double)arg1 ;
-(char)isDisabled;
-(char)notify;
@end

