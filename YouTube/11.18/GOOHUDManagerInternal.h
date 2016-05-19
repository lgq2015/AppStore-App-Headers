/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, GOOHUDOverlayView, GOOHUDMessageView;

@interface GOOHUDManagerInternal : NSObject {

	char _showingMessage;
	NSMutableArray* _pendingMessages;
	NSMutableDictionary* _suspensionTokens;
	GOOHUDOverlayView* _overlayView;
	GOOHUDMessageView* _currentHUD;

}

@property (nonatomic,retain) NSMutableArray * pendingMessages;                    //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * suspensionTokens;              //@synthesize suspensionTokens=_suspensionTokens - In the implementation block
@property (nonatomic,retain) GOOHUDOverlayView * overlayView;                     //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) GOOHUDMessageView * currentHUD;                      //@synthesize currentHUD=_currentHUD - In the implementation block
@property (assign,nonatomic) char showingMessage;                                 //@synthesize showingMessage=_showingMessage - In the implementation block
+(id)sharedInstance;
-(id)bestGuessWindow;
-(char)allMessagesSuspendedMainThread;
-(char)categorySuspended:(id)arg1 ;
-(char)shouldShowMessageRightNowMainThread:(id)arg1 ;
-(char)showingMessage;
-(id)dequeueNextShowableMessageMainThread;
-(void)setShowingMessage:(char)arg1 ;
-(void)displayHUDViewForMessage:(id)arg1 ;
-(void)hideHUDViewReally:(id)arg1 withAction:(id)arg2 userPrompted:(char)arg3 ;
-(void)activateOverlay:(id)arg1 ;
-(void)setCurrentHUD:(GOOHUDMessageView *)arg1 ;
-(char)isHUDTransient:(id)arg1 ;
-(void)deactivateOverlay:(id)arg1 ;
-(void)showNextMessageIfNecessaryMainThread;
-(void)dismissAndCallCompletionBlocksOnMainThreadWithCategory:(id)arg1 ;
-(GOOHUDMessageView *)currentHUD;
-(NSMutableDictionary *)suspensionTokens;
-(void)showMessageMainThread:(id)arg1 ;
-(void)addSuspensionIdentifierMainThread:(id)arg1 forCategory:(id)arg2 ;
-(void)removeSuspensionIdentifierMainThread:(id)arg1 forCategory:(id)arg2 ;
-(void)setSuspensionTokens:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSMutableArray *)pendingMessages;
-(void)setPendingMessages:(NSMutableArray *)arg1 ;
-(void)setOverlayView:(GOOHUDOverlayView *)arg1 ;
-(GOOHUDOverlayView *)overlayView;
@end

