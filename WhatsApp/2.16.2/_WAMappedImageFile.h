/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface _WAMappedImageFile : NSObject {

	NSURL* _fileURL;
	NSString* _key;
	int _width;
	int _height;

}

@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) int width;                    //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                   //@synthesize height=_height - In the implementation block
-(NSString *)key;
-(int)width;
-(int)height;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
@end

