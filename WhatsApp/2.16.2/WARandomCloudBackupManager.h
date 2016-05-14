/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WACloudBackupManager.h>

@class NSTimer;

@interface WARandomCloudBackupManager : WACloudBackupManager {

	char _internalAvailable;
	NSTimer* _randomTimer;

}

@property (assign,nonatomic) char internalAvailable;              //@synthesize internalAvailable=_internalAvailable - In the implementation block
@property (nonatomic,retain) NSTimer * randomTimer;               //@synthesize randomTimer=_randomTimer - In the implementation block
-(id)initWithAutoBackupSettings:(id)arg1 errorManager:(id)arg2 ;
-(void)flipAvailable:(id)arg1 ;
-(char)internalAvailable;
-(void)setInternalAvailable:(char)arg1 ;
-(NSTimer *)randomTimer;
-(void)setRandomTimer:(NSTimer *)arg1 ;
-(char)initialized;
-(char)available;
@end

