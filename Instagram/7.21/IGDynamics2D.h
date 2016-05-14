/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDynamicsModel.h>

@interface IGDynamics2D : IGDynamicsModel {

	/*^block*/id _stepBlock;
	CGPoint _currentValue;
	CGPoint _targetValue;
	CGPoint _velocity;
	CGPoint _minValue;

}

@property (assign,nonatomic) CGPoint currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) CGPoint targetValue;               //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                  //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) CGPoint minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) id stepBlock;                        //@synthesize stepBlock=_stepBlock - In the implementation block
-(CGPoint)currentValue;
-(void)setCurrentValue:(CGPoint)arg1 ;
-(id)init;
-(id)description;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)targetValue;
-(void)setTargetValue:(CGPoint)arg1 ;
-(CGPoint)velocity;
-(CGPoint)minValue;
-(void)setMinValue:(CGPoint)arg1 ;
-(char)isDone;
-(id)stepBlock;
-(void)setStepBlock:(id)arg1 ;
-(void)step:(double)arg1 ;
-(char)notify;
@end

