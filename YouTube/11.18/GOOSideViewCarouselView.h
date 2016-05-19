/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol GOOSideViewProfileDataSource, GOOSideViewCarouselViewDelegate, GOOSideViewProfile;
@class GOOSideViewBackgroundContainerView, NSArray, NSMutableDictionary, UIPanGestureRecognizer, NSSet, GOOSideViewChevronButton, UIView, NSString;

@interface GOOSideViewCarouselView : UIView <UIGestureRecognizerDelegate> {

	GOOSideViewBackgroundContainerView* _backgroundView;
	float _backgroundViewportHeight;
	float _backgroundViewportOutset;
	CGRect _lastBounds;
	NSArray* _profiles;
	int _selectedProfileIndex;
	NSMutableDictionary* _carouselItemsByLocation;
	int _panningDirection;
	float _panningTrackDistance;
	UIPanGestureRecognizer* _panRecognizer;
	NSSet* _panTransitions;
	float _lastPanTween;
	GOOSideViewChevronButton* _chevronButton;
	UIView* _carouselAccessibilityView;
	NSArray* _accessibilityViews;
	id<GOOSideViewProfileDataSource> _dataSource;
	id<GOOSideViewCarouselViewDelegate> _delegate;
	int _viewMode;
	id<GOOSideViewProfile> _selectedProfile;

}

@property (assign,nonatomic,__weak) id<GOOSideViewProfileDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<GOOSideViewCarouselViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int viewMode;                                                     //@synthesize viewMode=_viewMode - In the implementation block
@property (nonatomic,retain) id<GOOSideViewProfile> selectedProfile;                           //@synthesize selectedProfile=_selectedProfile - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)chevronTouched;
-(void)updateAccessibilityElements;
-(char)itemShouldBeEnabled:(id)arg1 ;
-(char)itemShouldBeHidden:(id)arg1 ;
-(void)updateVisibleCarouselItems;
-(void)setSelectedProfile:(id)arg1 animated:(char)arg2 ;
-(void)removeAllCarouselItemsFromSuperviews;
-(void)animateTransitionToProfile:(id)arg1 shouldNotify:(char)arg2 ;
-(void)internalSetSelectedProfile:(id)arg1 notifyDelegate:(char)arg2 ;
-(void)updateProfileCount;
-(id<GOOSideViewProfile>)selectedProfile;
-(id)carouselItemForLocation:(int)arg1 ;
-(char)locationShouldReceiveAccessibilityFocus:(int)arg1 ;
-(id)accessibilityLabelForProfile:(id)arg1 ;
-(void)handlePanBegan:(id)arg1 ;
-(void)handlePanChange:(id)arg1 ;
-(void)handlePanEnded:(id)arg1 ;
-(void)handlePanCancelled:(id)arg1 ;
-(void)removeNonVisibleCarouselItems;
-(id)transitionsWithShift:(int)arg1 ;
-(void)handlePanComplete:(char)arg1 ;
-(void)performTransitions:(id)arg1 complete:(char)arg2 shouldSelect:(char)arg3 shouldNotify:(char)arg4 duration:(double)arg5 ;
-(int)profileIndexForLocation:(int)arg1 ;
-(id)generateItemForProfileIndex:(int)arg1 ;
-(void)avatarTouched:(id)arg1 ;
-(int)profileIndexForProfile:(id)arg1 ;
-(void)setSelectedProfile:(id<GOOSideViewProfile>)arg1 ;
-(void)setBackgroundViewportHeight:(float)arg1 outset:(float)arg2 ;
-(void)updateNonVisibleCarouselItems;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<GOOSideViewProfileDataSource>)arg1 ;
-(void)setDelegate:(id<GOOSideViewCarouselViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id<GOOSideViewProfileDataSource>)dataSource;
-(id<GOOSideViewCarouselViewDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)handlePan:(id)arg1 ;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(char)isPanning;
-(int)viewMode;
-(void)reloadProfile:(id)arg1 ;
-(void)setViewMode:(int)arg1 ;
@end

