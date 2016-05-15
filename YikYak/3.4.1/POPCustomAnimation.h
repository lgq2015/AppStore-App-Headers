/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/POPAnimation.h>

@interface POPCustomAnimation : POPAnimation {

	/*^block*/id _animate;
	double _currentTime;
	double _elapsedTime;

}

@property (nonatomic,readonly) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime;              //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,copy) id animate;                          //@synthesize animate=_animate - In the implementation block
+(id)animationWithBlock:(/*^block*/id)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(char)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(double)currentTime;
-(id)_init;
-(double)beginTime;
-(id)animate;
-(double)elapsedTime;
-(void)setAnimate:(id)arg1 ;
@end

