/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBSDKContainerViewControllerDelegate;
@interface FBSDKContainerViewController : UIViewController {

	id<FBSDKContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSDKContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)displayChildController:(id)arg1 ;
-(void)setDelegate:(id<FBSDKContainerViewControllerDelegate>)arg1 ;
-(id<FBSDKContainerViewControllerDelegate>)delegate;
-(void)viewDidDisappear:(char)arg1 ;
@end

