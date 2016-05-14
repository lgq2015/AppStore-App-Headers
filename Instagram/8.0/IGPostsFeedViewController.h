/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGAnalyticsModule.h>

@class IGContextualFeedItemConfiguration, UIView, IGFeedItem, NSIndexPath, NSString;

@interface IGPostsFeedViewController : IGFeedViewController_DEPRECATED <IGAnalyticsModule> {

	IGContextualFeedItemConfiguration* _configuration;
	UIView* _previewSplashView;
	IGFeedItem* _originalMediaPost;
	NSIndexPath* _savedVisibleIndexPath;
	float _savedVisibleIndexPathOffset;
	int _entryPoint;

}

@property (nonatomic,retain) NSIndexPath * savedVisibleIndexPath;                              //@synthesize savedVisibleIndexPath=_savedVisibleIndexPath - In the implementation block
@property (assign,nonatomic) float savedVisibleIndexPathOffset;                                //@synthesize savedVisibleIndexPathOffset=_savedVisibleIndexPathOffset - In the implementation block
@property (assign,nonatomic) int entryPoint;                                                   //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) IGContextualFeedItemConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) UIView * previewSplashView;                                       //@synthesize previewSplashView=_previewSplashView - In the implementation block
@property (nonatomic,retain) IGFeedItem * originalMediaPost;                                   //@synthesize originalMediaPost=_originalMediaPost - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 ;
-(void)displayPivots:(id)arg1 ;
-(void)setEntryPoint:(int)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)insertPreviewSplashView;
-(UIView *)previewSplashView;
-(CGRect)frameForCell:(id)arg1 ;
-(void)setSavedVisibleIndexPath:(NSIndexPath *)arg1 ;
-(void)setSavedVisibleIndexPathOffset:(float)arg1 ;
-(void)saveCurrentScrollPosition;
-(NSIndexPath *)savedVisibleIndexPath;
-(float)savedVisibleIndexPathOffset;
-(void)scrollToIndexPath:(id)arg1 verticalOffset:(float)arg2 ;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 showsPullToRefresh:(char)arg5 entryPoint:(int)arg6 ;
-(void)setPreviewSplashView:(UIView *)arg1 ;
-(IGFeedItem *)originalMediaPost;
-(void)setOriginalMediaPost:(IGFeedItem *)arg1 ;
-(void)dealloc;
-(int)viewType;
-(void)viewDidLoad;
-(IGContextualFeedItemConfiguration *)configuration;
-(void)setFeedLayout:(int)arg1 ;
-(int)entryPoint;
@end

