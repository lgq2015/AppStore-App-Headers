/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTMutableInnerTubeControllerFactory.h>

@class YTInnerTubeControllerFactory;

@interface YTChainedInnerTubeControllerFactory : YTMutableInnerTubeControllerFactory {

	YTInnerTubeControllerFactory* _fallbackFactory;

}
-(id)controllerForNavigationEndpoint:(id)arg1 parentResponder:(id)arg2 ;
-(id)viewControllerForModelClass:(Class)arg1 service:(id)arg2 parentResponder:(id)arg3 ;
-(id)initWithFallbackFactory:(id)arg1 innerTubeUIServiceMapper:(id)arg2 ;
-(id)sectionControllerForModelClass:(Class)arg1 service:(id)arg2 parentResponder:(id)arg3 ;
@end

