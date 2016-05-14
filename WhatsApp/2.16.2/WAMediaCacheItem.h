/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WAMediaCacheItem : NSObject {

	NSString* _path;
	NSString* _mediaHash;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSString * path;                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * mediaHash;              //@synthesize mediaHash=_mediaHash - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
+(id)mediaCacheItemForReferenceURL:(id)arg1 ;
+(void)insertMediaCacheItemWithReferenceURL:(id)arg1 storedAtPath:(id)arg2 ;
-(NSString *)mediaHash;
-(void)setMediaHash:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
@end

