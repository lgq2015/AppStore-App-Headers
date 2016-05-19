/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIViewController.h>
#import <YouTube/GOONavigationCustomization.h>

@class GOONavigationStyle, UIScrollView, NSSet, UIView, NSString;

@interface GSCLicenseViewController : UIViewController <GOONavigationCustomization> {

	NSString* _filename;
	GOONavigationStyle* _style;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GOONavigationStyle * navigationStyle; 
@property (nonatomic,readonly) UIScrollView * navigationPrimaryScrollView; 
@property (nonatomic,readonly) UIEdgeInsets navigationPrimaryScrollInsets; 
@property (nonatomic,readonly) NSSet * navigationSecondaryScrollViews; 
@property (nonatomic,readonly) UIView * navigationCustomHeaderBackgroundView; 
@property (nonatomic,readonly) UIView * navigationBannerView; 
-(GOONavigationStyle *)navigationStyle;
-(id)initWithFilename:(id)arg1 libraryName:(id)arg2 style:(id)arg3 ;
-(void)viewDidLoad;
@end

