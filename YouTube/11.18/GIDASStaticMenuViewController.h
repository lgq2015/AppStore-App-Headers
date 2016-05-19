/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/QTMCollectionViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <YouTube/QTMCollectionViewStyleDelegate.h>
#import <YouTube/GOOWebViewControllerDelegate.h>
#import <YouTube/GOONavigationCustomization.h>

@protocol GIDBrowserOpener;
@class SSOIdentity, GOONavigationStyle, NSString, UIScrollView, NSSet, UIView;

@interface GIDASStaticMenuViewController : QTMCollectionViewController <UICollectionViewDelegate, QTMCollectionViewStyleDelegate, GOOWebViewControllerDelegate, GOONavigationCustomization> {

	SSOIdentity* _identity;
	GOONavigationStyle* _navigationStyle;
	id<GIDBrowserOpener> _browserOpener;

}

@property (nonatomic,retain) GOONavigationStyle * navigationStyle;                         //@synthesize navigationStyle=_navigationStyle - In the implementation block
@property (nonatomic,retain) id<GIDBrowserOpener> browserOpener;                           //@synthesize browserOpener=_browserOpener - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * navigationPrimaryScrollView; 
@property (nonatomic,readonly) UIEdgeInsets navigationPrimaryScrollInsets; 
@property (nonatomic,readonly) NSSet * navigationSecondaryScrollViews; 
@property (nonatomic,readonly) UIView * navigationCustomHeaderBackgroundView; 
@property (nonatomic,readonly) UIView * navigationBannerView; 
-(char)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(GOONavigationStyle *)navigationStyle;
-(void)setBrowserOpener:(id<GIDBrowserOpener>)arg1 ;
-(id<GIDBrowserOpener>)browserOpener;
-(void)openBrowserWithURL:(id)arg1 view:(id)arg2 ;
-(id)helpTopic;
-(id)URLWithHLAndUTMParams:(id)arg1 ;
-(unsigned)collectionView:(id)arg1 cellDividerStyleInsetsForSection:(int)arg2 ;
-(void)setNavigationStyle:(GOONavigationStyle *)arg1 ;
-(id)initWithIdentity:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(void)viewDidLoad;
-(void)showHelp;
-(id)menuTitles;
@end

