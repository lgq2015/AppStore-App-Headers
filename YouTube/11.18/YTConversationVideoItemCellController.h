/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTInlinePlaybackCellController.h>
#import <YouTube/YTConversationItemControllerDelegate.h>

@class YTConversationService, YTConversationItemController, NSString;

@interface YTConversationVideoItemCellController : YTInlinePlaybackCellController <YTConversationItemControllerDelegate> {

	YTConversationService* _conversationService;
	YTConversationItemController* _conversationItemController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationEndpoint;
-(id)initWithEntry:(id)arg1 inlinePlaybackLayoutCoordinator:(id)arg2 inlinePlaybackSnapshotProvider:(id)arg3 imageService:(id)arg4 parentResponder:(id)arg5 conversationService:(id)arg6 conversationGlobals:(id)arg7 setSettingService:(id)arg8 ;
-(void)cellDidBecomeVisible;
-(void)handleLongPressBegan:(id)arg1 ;
-(void)didToggleHeart:(char)arg1 ;
-(void)didTapContactMenu;
-(id)conversationVideoItemCell;
-(void)setCell:(id)arg1 ;
-(void)handleAction:(id)arg1 ;
-(id)renderer;
@end

