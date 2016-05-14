/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WAChatSession, NSArray;

@interface XMPPRequestWebClientChatSessionState : NSObject {

	char _archived;
	char _needsClear;
	char _readOnly;
	char _active;
	char _readAhead;
	char _spam;
	NSString* _jid;
	WAChatSession* _chatSession;
	NSArray* _recentMessages;
	int _unreadCount;
	long long _muteTime;

}

@property (nonatomic,copy) NSString * jid;                                 //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) WAChatSession * chatSession;                  //@synthesize chatSession=_chatSession - In the implementation block
@property (assign,getter=isArchived,nonatomic) char archived;              //@synthesize archived=_archived - In the implementation block
@property (assign,nonatomic) char needsClear;                              //@synthesize needsClear=_needsClear - In the implementation block
@property (nonatomic,retain) NSArray * recentMessages;                     //@synthesize recentMessages=_recentMessages - In the implementation block
@property (assign,nonatomic) long long muteTime;                           //@synthesize muteTime=_muteTime - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) char readOnly;              //@synthesize readOnly=_readOnly - In the implementation block
@property (assign,nonatomic) int unreadCount;                              //@synthesize unreadCount=_unreadCount - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) char readAhead;                               //@synthesize readAhead=_readAhead - In the implementation block
@property (assign,getter=isSpam,nonatomic) char spam;                      //@synthesize spam=_spam - In the implementation block
-(NSString *)jid;
-(WAChatSession *)chatSession;
-(void)setArchived:(char)arg1 ;
-(void)setChatSession:(WAChatSession *)arg1 ;
-(void)setJid:(NSString *)arg1 ;
-(char)needsClear;
-(void)setNeedsClear:(char)arg1 ;
-(NSArray *)recentMessages;
-(void)setRecentMessages:(NSArray *)arg1 ;
-(long long)muteTime;
-(void)setMuteTime:(long long)arg1 ;
-(char)readAhead;
-(void)setReadAhead:(char)arg1 ;
-(char)isSpam;
-(void)setSpam:(char)arg1 ;
-(void)setReadOnly:(char)arg1 ;
-(char)isActive;
-(void)setActive:(char)arg1 ;
-(int)unreadCount;
-(char)isArchived;
-(void)setUnreadCount:(int)arg1 ;
-(char)isReadOnly;
@end

