/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTStyledViewController.h>
#import <YouTube/YTTopController.h>
#import <YouTube/YTHelpKitContextProvider.h>
#import <YouTube/YTTitleControlResponderProvider.h>

@protocol YTServices, YTResponder;
@class NSHashTable, UIButton, GIMMe, NSString;

@interface YTBaseViewController : YTStyledViewController <YTTopController, YTHelpKitContextProvider, YTTitleControlResponderProvider> {

	id<YTServices> _services;
	NSHashTable* _titleTapListeners;
	UIButton* _backButton;
	char _viewAppeared;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                  //@synthesize gimme=_gimme - In the implementation block
@property (nonatomic,readonly) char viewAppeared;                                   //@synthesize viewAppeared=_viewAppeared - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)loadWithModel:(id)arg1 fromView:(id)arg2 ;
-(void)canBePushedWithBlock:(/*^block*/id)arg1 ;
-(char)isEqualTopController:(id)arg1 ;
-(void)didTapBack:(id)arg1 ;
-(void)didTapTitle:(id)arg1 ;
-(void)updateBackButtonStyle;
-(void)addTitleTapObserver:(id)arg1 ;
-(void)removeTitleTapObserver:(id)arg1 ;
-(id)helpKitContext;
-(char)viewAppeared;
-(CGSize)preferredContentSize;
-(id)model;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidDisappear:(char)arg1 ;
@end

