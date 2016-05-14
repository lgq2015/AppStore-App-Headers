/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSString, NSNumber;

@interface WABackupInformation : NSObject {

	NSDictionary* _data;

}

@property (nonatomic,readonly) char exists; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * formattedRelativeDate; 
@property (nonatomic,readonly) NSNumber * includeVideos; 
@property (nonatomic,readonly) NSNumber * version; 
@property (nonatomic,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSNumber * sizeOfVideos; 
@property (nonatomic,readonly) NSDictionary * debugFileSizes; 
@property (nonatomic,retain) NSDictionary * data;                             //@synthesize data=_data - In the implementation block
-(void)postUpdatedNotification;
-(id)initWithBackupInformation:(id)arg1 ;
-(NSNumber *)includeVideos;
-(void)logWithPrefix:(id)arg1 ;
-(NSString *)formattedRelativeDate;
-(NSNumber *)sizeOfVideos;
-(char)replaceData:(id)arg1 ;
-(NSDictionary *)debugFileSizes;
-(char)exists;
-(NSNumber *)size;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)date;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSNumber *)version;
@end

