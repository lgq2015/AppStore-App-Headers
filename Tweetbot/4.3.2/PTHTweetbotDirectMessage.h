/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class NSArray, PTHTweetbotUser, NSDate, NSString, PTHTweetbotDirectMessageThread, NSAttributedString;

@interface PTHTweetbotDirectMessage : PTHTweetbotObject {

	NSArray* _entities;
	char _isSentMessage;
	char _isDraft;
	char _postingFailed;
	PTHTweetbotUser* _otherUser;
	NSDate* _createdAt;
	NSString* _text;
	PTHTweetbotDirectMessageThread* _thread;
	long long _otherUserTID;
	long long _senderUserTID;
	long long _recipientUserTID;

}

@property (assign,nonatomic,__weak) PTHTweetbotDirectMessageThread * thread;              //@synthesize thread=_thread - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                                        //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                      //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long otherUserTID;                                    //@synthesize otherUserTID=_otherUserTID - In the implementation block
@property (nonatomic,readonly) long long senderUserTID;                                   //@synthesize senderUserTID=_senderUserTID - In the implementation block
@property (nonatomic,readonly) long long recipientUserTID;                                //@synthesize recipientUserTID=_recipientUserTID - In the implementation block
@property (nonatomic,__weak,readonly) NSAttributedString * attributedText; 
@property (nonatomic,__weak,readonly) NSString * decodedText; 
@property (nonatomic,__weak,readonly) NSString * expandedURLText; 
@property (nonatomic,readonly) char isReceivedMessage; 
@property (nonatomic,readonly) char isSentMessage;                                        //@synthesize isSentMessage=_isSentMessage - In the implementation block
@property (nonatomic,readonly) char isDraft;                                              //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,readonly) char postingFailed;                                        //@synthesize postingFailed=_postingFailed - In the implementation block
@property (nonatomic,readonly) NSArray * entities; 
@property (nonatomic,readonly) char hasMedia; 
@property (nonatomic,readonly) PTHTweetbotUser * otherUser;                               //@synthesize otherUser=_otherUser - In the implementation block
@property (nonatomic,readonly) PTHTweetbotUser * senderUser; 
@property (nonatomic,readonly) PTHTweetbotUser * recipientUser; 
+(id)setup:(id)arg1 userVersion:(int)arg2 ;
+(id)verify:(id)arg1 ;
+(id)fetchAllWithConnection:(id)arg1 ;
-(NSString *)decodedText;
-(char)hasString:(id)arg1 ;
-(void)destroy:(/*^block*/id)arg1 ;
-(PTHTweetbotUser *)otherUser;
-(void)post:(/*^block*/id)arg1 ;
-(char)isSentMessage;
-(char)postingFailed;
-(NSString *)expandedURLText;
-(PTHTweetbotUser *)senderUser;
-(id)emailHTML;
-(void)updateFromDictionary:(id)arg1 ;
-(long long)otherUserTID;
-(long long)recipientUserTID;
-(long long)senderUserTID;
-(char)isReceivedMessage;
-(PTHTweetbotUser *)recipientUser;
-(void)store;
-(char)hasMedia;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)compare:(id)arg1 ;
-(NSString *)text;
-(NSAttributedString *)attributedText;
-(void)remove;
-(char)isDraft;
-(void)setThread:(PTHTweetbotDirectMessageThread *)arg1 ;
-(PTHTweetbotDirectMessageThread *)thread;
-(NSArray *)entities;
-(NSDate *)createdAt;
-(void)setAccount:(id)arg1 ;
@end

