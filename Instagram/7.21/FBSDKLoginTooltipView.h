/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKTooltipView.h>

@protocol FBSDKLoginTooltipViewDelegate;
@interface FBSDKLoginTooltipView : FBSDKTooltipView {

	char _forceDisplay;
	id<FBSDKLoginTooltipViewDelegate> _delegate;

}

@property (assign,nonatomic) id<FBSDKLoginTooltipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char forceDisplay;                                       //@synthesize forceDisplay=_forceDisplay - In the implementation block
-(void)setForceDisplay:(char)arg1 ;
-(char)forceDisplay;
-(void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned)arg3 ;
-(void)setDelegate:(id<FBSDKLoginTooltipViewDelegate>)arg1 ;
-(id)init;
-(id<FBSDKLoginTooltipViewDelegate>)delegate;
@end

