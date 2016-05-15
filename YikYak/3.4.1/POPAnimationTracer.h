/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Yik Yak/Yik Yak-Structs.h>
@class POPAnimation, NSMutableArray, NSArray;

@interface POPAnimationTracer : NSObject {

	POPAnimation* _animation;
	POPAnimationState* _animationState;
	NSMutableArray* _events;
	char _animationHasVelocity;
	char _shouldLogAndResetOnCompletion;

}

@property (nonatomic,readonly) NSArray * allEvents; 
@property (nonatomic,readonly) NSArray * writeEvents; 
@property (assign,nonatomic) char shouldLogAndResetOnCompletion;              //@synthesize shouldLogAndResetOnCompletion=_shouldLogAndResetOnCompletion - In the implementation block
-(id)initWithAnimation:(id)arg1 ;
-(id)eventsWithType:(unsigned)arg1 ;
-(void)readPropertyValue:(id)arg1 ;
-(void)writePropertyValue:(id)arg1 ;
-(void)updateToValue:(id)arg1 ;
-(void)updateFromValue:(id)arg1 ;
-(void)updateVelocity:(id)arg1 ;
-(void)updateSpeed:(float)arg1 ;
-(void)updateBounciness:(float)arg1 ;
-(void)updateFriction:(float)arg1 ;
-(void)updateMass:(float)arg1 ;
-(void)updateTension:(float)arg1 ;
-(void)didReachToValue:(id)arg1 ;
-(void)autoreversed;
-(NSArray *)writeEvents;
-(char)shouldLogAndResetOnCompletion;
-(void)setShouldLogAndResetOnCompletion:(char)arg1 ;
-(NSArray *)allEvents;
-(void)reset;
-(void)stop;
-(void)start;
-(void)didStop:(char)arg1 ;
-(void)didStart;
@end

