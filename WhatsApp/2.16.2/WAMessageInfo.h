/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDictionary;

@interface WAMessageInfo : NSManagedObject

@property (nonatomic,retain) NSDictionary * receiptInfo; 
@property (nonatomic,readonly) double lastTimestamp; 
@property (nonatomic,copy,readonly) NSDictionary * allDeliveredReceipts; 
@property (nonatomic,copy,readonly) NSDictionary * allReadReceipts; 
@property (nonatomic,copy,readonly) NSDictionary * allPlayedReceipts; 
-(NSDictionary *)allDeliveredReceipts;
-(double)lastTimestamp;
-(NSDictionary *)allReadReceipts;
-(NSDictionary *)allPlayedReceipts;
-(id)allReceiptsForKey:(id)arg1 ;
@end

