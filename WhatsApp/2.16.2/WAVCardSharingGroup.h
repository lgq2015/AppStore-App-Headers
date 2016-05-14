/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAVCardSerializing.h>

@class NSArray, NSString;

@interface WAVCardSharingGroup : NSObject <WAVCardSerializing> {

	char _sharingEnabled;
	NSArray* _sharingUnits;

}

@property (nonatomic,retain) NSArray * sharingUnits;                        //@synthesize sharingUnits=_sharingUnits - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stringForVCard; 
@property (assign,nonatomic) char sharingEnabled;                           //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
+(id)vCardStringWithVCardSerializingObjects:(id)arg1 ;
-(id)initWithMergedContact:(id)arg1 ;
-(NSArray *)sharingUnits;
-(char)sharingEnabled;
-(NSString *)stringForVCard;
-(void)setSharingUnits:(NSArray *)arg1 ;
-(void)addSharingUnitsWithClasses:(id)arg1 forMergedContact:(id)arg2 ;
-(void)addRepeatedSharingUnitWithClass:(Class)arg1 forMergedContact:(id)arg2 ;
-(char)isEmpty;
-(void)setSharingEnabled:(char)arg1 ;
@end

