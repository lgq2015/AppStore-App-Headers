/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSString;

@interface WAEmailInfo : NSObject {

	NSManagedObjectID* _waContactID;
	NSString* _email;
	NSString* _label;

}

@property (nonatomic,retain) NSManagedObjectID * waContactID;              //@synthesize waContactID=_waContactID - In the implementation block
@property (nonatomic,copy) NSString * email;                               //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * label;                               //@synthesize label=_label - In the implementation block
-(NSManagedObjectID *)waContactID;
-(void)setWaContactID:(NSManagedObjectID *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
@end

