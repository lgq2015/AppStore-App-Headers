/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTView.h>
#import <Instagram/RCTInvalidating.h>

@class RCTBridge, UIColor, RCTTouchHandler, NSString;

@interface RCTRootContentView : RCTView <RCTInvalidating> {

	RCTBridge* _bridge;
	UIColor* _backgroundColor;
	char _contentHasAppeared;
	RCTTouchHandler* _touchHandler;

}

@property (nonatomic,readonly) char contentHasAppeared;                     //@synthesize contentHasAppeared=_contentHasAppeared - In the implementation block
@property (nonatomic,readonly) RCTTouchHandler * touchHandler;              //@synthesize touchHandler=_touchHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)contentHasAppeared;
-(id)initWithFrame:(CGRect)arg1 bridge:(id)arg2 reactTag:(id)arg3 sizeFlexiblity:(int)arg4 ;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setFrame:(CGRect)arg1 ;
-(void)invalidate;
-(RCTTouchHandler *)touchHandler;
@end

