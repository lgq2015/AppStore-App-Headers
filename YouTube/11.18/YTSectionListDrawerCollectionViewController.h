/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTInnerTubeCollectionViewController.h>
#import <YouTube/YTScrollsToTopResponderProvider.h>

@class UICollectionReusableView, UICollectionViewFlowLayout, NSString;

@interface YTSectionListDrawerCollectionViewController : YTInnerTubeCollectionViewController <YTScrollsToTopResponderProvider> {

	UICollectionReusableView* _headerView;
	UICollectionViewFlowLayout* _layout;
	char _hasChannelsEndpoint;
	int _lastMultiSizeType;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollToTop_regular;
-(void)scrollToTop_compact;
-(void)viewWillLayoutSubviews_regular;
-(void)viewWillLayoutSubviews_compact;
-(void)updateCollectionViewLayout_regular;
-(void)updateCollectionViewLayout_compact;
-(void)updateCollectionViewLayout;
-(id)initWithGlobals:(id)arg1 service:(id)arg2 parentResponder:(id)arg3 format:(int)arg4 layout:(id)arg5 ;
-(void)prepareForSizeClassChange;
-(void)collectionViewDataDidChange;
-(char)shouldScrollToTop:(id)arg1 ;
-(void)resetRefreshBehavior;
-(void)setHasChannelsEndpoint:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)scrollToTop;
@end

