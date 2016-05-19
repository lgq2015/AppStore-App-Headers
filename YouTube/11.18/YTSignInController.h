/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTTopController.h>

@protocol YTResponder;
@class YTIdentityController, YTINavigationEndpoint, NSString;

@interface YTSignInController : NSObject <YTTopController> {

	YTIdentityController* _identityController;
	YTINavigationEndpoint* _model;
	id<YTResponder> _parentResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(void)loadWithModel:(id)arg1 fromView:(id)arg2 ;
-(void)canBePushedWithBlock:(/*^block*/id)arg1 ;
-(char)isEqualTopController:(id)arg1 ;
-(id)initWithIdentityController:(id)arg1 parentResponder:(id)arg2 ;
-(void)navigateToEndpoint:(id)arg1 responder:(id)arg2 ;
-(id)model;
@end

