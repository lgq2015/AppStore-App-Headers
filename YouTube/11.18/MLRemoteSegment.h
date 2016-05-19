/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/MLSegment.h>

@class NSURL, MLRange;

@interface MLRemoteSegment : MLSegment {

	NSURL* _URL;
	MLRange* _range;

}

@property (nonatomic,readonly) NSURL * URL;                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) MLRange * range;              //@synthesize range=_range - In the implementation block
+(id)remoteSegmentWithPropertiesDictionary:(id)arg1 ;
-(id)propertiesDictionary;
-(id)initWithMediaID:(id)arg1 itag:(int)arg2 index:(int)arg3 URL:(id)arg4 range:(id)arg5 ;
-(id)initWithMediaID:(id)arg1 itag:(int)arg2 index:(int)arg3 ;
-(NSURL *)URL;
-(MLRange *)range;
@end

