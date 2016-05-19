/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol YTServices, YTDataServices, YTPlayerServices, MDXServices, YTUploadServices, YTConversationGlobals, YTIdentityGlobals;
@class YTServiceEndpointRouter, GIMMe;

@interface YTServiceEndpointController : NSObject {

	id<YTServices> _services;
	id<YTDataServices> _dataServices;
	id<YTPlayerServices> _playerServices;
	id<MDXServices> _MDXServices;
	id<YTUploadServices> _uploadServices;
	id<YTConversationGlobals> _conversationGlobals;
	id<YTIdentityGlobals> _identityGlobals;
	YTServiceEndpointRouter* _serviceEndpointRouter;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;              //@synthesize gimme=_gimme - In the implementation block
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)addServiceEndpointRoutesWithActionRouter:(id)arg1 ;
-(char)handleServiceEndpoint:(id)arg1 entry:(id)arg2 sender:(id)arg3 ;
-(id)init;
@end

