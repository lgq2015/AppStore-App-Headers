/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WAMemoryMappedImageStore : NSObject
+(void)scanForAvailableFiles;
+(id)internalImageForKey:(id)arg1 ;
+(void)internalRemoveImageForKey:(id)arg1 ;
+(void)internalSetImage:(id)arg1 forKey:(id)arg2 ;
+(id)mmappedFilesDirectory;
+(id)decodedImageDataWithImage:(id)arg1 ;
+(id)filenameForKey:(id)arg1 width:(int)arg2 height:(int)arg3 ;
+(char)hasImageForKey:(id)arg1 ;
+(void)initialize;
+(id)imageForKey:(id)arg1 ;
+(void)setImage:(id)arg1 forKey:(id)arg2 ;
@end

