/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTInnerTubeSectionController.h>
#import <YouTube/YTTopicObserver.h>
#import <YouTube/YTSystemNotificationsObserver.h>
#import <YouTube/YTConversationObserver.h>

@protocol YTConversationGlobals, YTTopicController;
@class YTGetSharedConversationService, YTIConversationSwitcherSectionRenderer, NSMutableArray, NSTimer, NSString;

@interface YTConversationSwitcherSectionController : YTInnerTubeSectionController <YTTopicObserver, YTSystemNotificationsObserver, YTConversationObserver> {

	id<YTConversationGlobals> _conversationGlobals;
	YTGetSharedConversationService* _getSharedConversationService;
	YTIConversationSwitcherSectionRenderer* _conversationSwitcherSectionRenderer;
	id<YTTopicController> _pushNotificationController;
	NSMutableArray* _hiddenEntries;
	int _showMoreIndex;
	char _expanded;
	char _updating;
	NSTimer* _updateTimestampsTimer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectItemAtIndex:(int)arg1 fromView:(id)arg2 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(id)initWithGlobals:(id)arg1 dataServices:(id)arg2 service:(id)arg3 parentResponder:(id)arg4 ;
-(void)loadWithModel:(id)arg1 ;
-(id)initWithGlobals:(id)arg1 dataServices:(id)arg2 service:(id)arg3 conversationGlobals:(id)arg4 parentResponder:(id)arg5 ;
-(void)updateTimestampDeltas;
-(void)didLeaveConversation:(id)arg1 ;
-(void)conversationDidChange:(id)arg1 ;
-(void)didSelectConversationAttachment:(id)arg1 conversationId:(id)arg2 ;
-(void)conversationListShouldRefresh;
-(void)updateTimestampsTimerFired:(id)arg1 ;
-(void)startTimestampTimer;
-(void)setupPrefetchedConversations:(id)arg1 ;
-(id)setupInvites:(id)arg1 ;
-(void)clearPrefetchedConversationResponseForTopicName:(id)arg1 ;
-(void)updateFromResponse:(id)arg1 ;
-(void)didReceiveMessageWithTopicName:(id)arg1 content:(id)arg2 ;
-(id)conversationSwitcherSectionRenderer;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)dealloc;
-(void)expand;
-(void)requestUpdate;
@end

