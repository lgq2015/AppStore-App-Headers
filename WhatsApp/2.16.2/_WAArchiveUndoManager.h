/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@class NSString;

@interface _WAArchiveUndoManager : NSUndoManager {

	NSString* _jid;

}

@property (nonatomic,copy) NSString * jid;              //@synthesize jid=_jid - In the implementation block
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(void)removeAllActionsWithTarget:(id)arg1 ;
-(void)removeAllActions;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
@end

