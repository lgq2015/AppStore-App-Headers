/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol YTDataServices;
@class NSMutableSet, GIMMe;

@interface YTInnerTubeUIServiceMapper : NSObject {

	id<YTDataServices> _dataServices;
	NSMutableSet* _serviceProviderBlocks;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;              //@synthesize gimme=_gimme - In the implementation block
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(id)innerTubeUIServiceForEndpoint:(id)arg1 ;
-(id)init;
@end

