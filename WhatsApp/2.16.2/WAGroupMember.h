/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, WAChatSession;

@interface WAGroupMember : NSManagedObject {

	char _blocked;
	NSString* _statusMessage;

}

@property (nonatomic,retain) NSString * memberJID; 
@property (nonatomic,retain) NSNumber * contactABID; 
@property (nonatomic,retain) NSString * contactName; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSNumber * isActive; 
@property (nonatomic,retain) WAChatSession * chatSession; 
@property (nonatomic,retain) NSNumber * isAdmin; 
@property (nonatomic,retain) NSNumber * senderKeySent; 
@property (nonatomic,retain) NSString * statusMessage;                 //@synthesize statusMessage=_statusMessage - In the implementation block
@property (assign,nonatomic) char blocked;                             //@synthesize blocked=_blocked - In the implementation block
-(char)blocked;
-(void)setBlocked:(char)arg1 ;
-(void)setStatusMessage:(NSString *)arg1 ;
-(NSString *)statusMessage;
@end

