/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface YTModalViewControllerCoordinator : NSObject {

	char _transitionInProgress;
	NSMutableArray* _queue;

}

@property (nonatomic,retain) NSMutableArray * queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char transitionInProgress;              //@synthesize transitionInProgress=_transitionInProgress - In the implementation block
-(void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissModalViewControllerFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissAllModalViewControllersFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentModalViewControllerWithQueueItem:(id)arg1 ;
-(void)dismissModalViewControllerWithQueueItem:(id)arg1 ;
-(/*^block*/id)completionWrapperWithCompletion:(/*^block*/id)arg1 ;
-(void)dispatchDismissModalViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)performNextQueuedTransition;
-(void)setTransitionInProgress:(char)arg1 ;
-(NSMutableArray *)queue;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(id)init;
-(char)transitionInProgress;
@end

