/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIWindow.h>

@protocol IGStatusBarWindowDelegate;
@class NSObject, UILabel;

@interface IGStatusBarWindow : UIWindow {

	NSObject*<IGStatusBarWindowDelegate> _tapDelegate;
	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) NSObject*<IGStatusBarWindowDelegate> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                                  //@synthesize textLabel=_textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)rootViewController;
-(void)setTapDelegate:(NSObject*<IGStatusBarWindowDelegate>)arg1 ;
-(NSObject*<IGStatusBarWindowDelegate>)tapDelegate;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

