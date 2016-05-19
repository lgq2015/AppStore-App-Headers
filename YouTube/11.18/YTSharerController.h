/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTTopController.h>

@protocol YTShareServices, YTResponder;
@class YTINavigationEndpoint, YTActionRouter, NSString;

@interface YTSharerController : NSObject <YTTopController> {

	id<YTShareServices> _shareServices;
	YTINavigationEndpoint* _model;
	id<YTResponder> _parentResponder;
	YTActionRouter* _actionRouter;

}

@property (nonatomic,readonly) YTActionRouter * actionRouter;                       //@synthesize actionRouter=_actionRouter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(YTActionRouter *)actionRouter;
-(void)loadWithModel:(id)arg1 fromView:(id)arg2 ;
-(void)canBePushedWithBlock:(/*^block*/id)arg1 ;
-(char)isEqualTopController:(id)arg1 ;
-(id)initWithShareServices:(id)arg1 dataServices:(id)arg2 parentResponder:(id)arg3 ;
-(id)model;
@end

