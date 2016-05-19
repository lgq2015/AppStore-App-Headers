/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTPlayerOverlayFactory.h>

@protocol YTDataServices, YTCaptionConfig;
@class MDXAutoplayCoordinator, GIMMe, NSString;

@interface MDXPlayerOverlayFactory : NSObject <YTPlayerOverlayFactory> {

	id<YTDataServices> _dataServices;
	id<YTCaptionConfig> _captionConfig;
	MDXAutoplayCoordinator* _autoplayCoordinator;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                  //@synthesize gimme=_gimme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GIMMe *)gimme;
-(id)fadePlayerOverlayWithPlayerResponse:(id)arg1 parentResponder:(id)arg2 delegate:(id)arg3 ;
-(id)surveyPlayerOverlayWithParentResponder:(id)arg1 adTrackingController:(id)arg2 adsState:(id)arg3 ;
-(void)setGimme:(GIMMe *)arg1 ;
-(id)inlineAdVideoPlayerOverlayWithParentResponder:(id)arg1 ;
-(id)initWithAutoplayCoordinator:(id)arg1 ;
-(id)contentVideoPlayerOverlayWithParentResponder:(id)arg1 ;
-(id)adVideoPlayerOverlayWithParentResponder:(id)arg1 ;
-(void)setInlinePlayerActive:(char)arg1 ;
@end

