/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAVCardSerializing.h>

@class NSString, WAMergedContact;

@interface WAVCardSharingUnit : NSObject <WAVCardSerializing> {

	WAMergedContact* _mergedContact;
	unsigned _multiValueIndex;
	char _sharingEnabled;
	NSString* _labelText;
	NSString* _valueText;

}

@property (nonatomic,copy) NSString * labelText;                            //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,copy) NSString * valueText;                            //@synthesize valueText=_valueText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stringForVCard; 
@property (assign,nonatomic) char sharingEnabled;                           //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
+(id)sharingUnitForMergedContact:(id)arg1 ;
+(id)sharingUnitForMergedContact:(id)arg1 index:(unsigned)arg2 ;
+(void)resetVCardCustomItemIndex;
+(int)nextVCardCustomItemIndex;
-(char)sharingEnabled;
-(id)initWithMergedContact:(id)arg1 index:(unsigned)arg2 ;
-(NSString *)stringForVCard;
-(NSString *)valueText;
-(void)setValueText:(NSString *)arg1 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(void)setSharingEnabled:(char)arg1 ;
@end

