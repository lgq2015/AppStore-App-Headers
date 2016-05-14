/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDCStatusBarShifterDelegate;
#import <Translate/Translate-Structs.h>
@class UIView, NSTimer;

@interface MDCStatusBarShifter : NSObject {

	UIView* _statusBarReplicaView;
	CGRect _originalStatusBarFrame;
	double _replicaViewTimestamp;
	double _secondsRemainingInMinute;
	NSTimer* _replicaInvalidatorTimer;
	char _prefersStatusBarHiddenWhileInvalid;
	char _prefersStatusBarHidden;
	int _snapshotState;
	char _enabled;
	char _snapshottingEnabled;
	id<MDCStatusBarShifterDelegate> _delegate;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isSnapshottingEnabled,nonatomic) char snapshottingEnabled;              //@synthesize snapshottingEnabled=_snapshottingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<MDCStatusBarShifterDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(void)interfaceOrientationWillChange;
-(void)interfaceOrientationDidChange;
-(void)setSnapshottingEnabled:(char)arg1 ;
-(void)attemptSnapshotState:(int)arg1 ;
-(char)shouldInvalidateSnapshot;
-(void)invalidateSnapshot;
-(char)canUpdateStatusBarFrame;
-(char)isSnapshottingEnabled;
-(void)setDelegate:(id<MDCStatusBarShifterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MDCStatusBarShifterDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setOffset:(float)arg1 ;
-(void)setPrefersStatusBarHidden:(char)arg1 ;
@end

