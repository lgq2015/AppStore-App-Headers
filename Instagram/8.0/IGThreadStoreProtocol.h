/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGThreadStoreProtocol <NSObject>
@required
-(id)storedThreadWithID:(id)arg1;
-(id)updateStoreWithThreadDictionary:(id)arg1 mergeOption:(unsigned)arg2;
-(void)handleRealtimeAddContent:(id)arg1 threadID:(id)arg2;
-(void)postThreadUpdatedNotificationForThreadID:(id)arg1;

@end

