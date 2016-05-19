/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseInnerTubeRequestService.h>

@class NSHashTable, YTApiaryResourceParser, GIMMe;

@interface YTChannelEditService : YTBaseInnerTubeRequestService {

	NSHashTable* _observers;
	YTApiaryResourceParser* _deleteChannelPostResourceParser;
	YTApiaryResourceParser* _getChannelProfileEditorResourceParser;
	YTApiaryResourceParser* _editChannelBannerResourceParser;
	YTApiaryResourceParser* _editChannelDescriptionResourceParser;
	YTApiaryResourceParser* _editChannelNameResourceParser;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;              //@synthesize gimme=_gimme - In the implementation block
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)makeDeleteChannelPostRequestWithDismissalToken:(id)arg1 clickTrackingParams:(id)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)makeEditChannelDescriptionRequestWithDescription:(id)arg1 clickTrackingParams:(id)arg2 responseBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)makeGetChannelProfileEditorRequestWithClickTrackingParams:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)makeEditChannelNameRequestWithGivenName:(id)arg1 familyName:(id)arg2 clickTrackingParams:(id)arg3 responseBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(void)makeEditChannelBannerRequestWithURL:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)notifyObserversDidEditChannelDescription:(id)arg1 ;
-(void)notifyObserversDidEditChannelName:(id)arg1 givenName:(id)arg2 familyName:(id)arg3 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

