/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsCarouselsViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsCarouselsView, NSString, IGInsightsQuery, IGInsightsLoggingHelper;

@interface IGInsightsCarouselsViewController : UIViewController <IGInsightsCarouselsViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsCarouselsView* _insightsCarouselsView;
	NSString* _header;
	IGInsightsQuery* _buttonQuery;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,retain) IGInsightsCarouselsView * insightsCarouselsView;                                                //@synthesize insightsCarouselsView=_insightsCarouselsView - In the implementation block
@property (nonatomic,copy,readonly) NSString * header;                                                                       //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;                                                                //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                                        //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(IGInsightsQuery *)buttonQuery;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)didSelectCellOnCarouselsView:(id)arg1 forFeedItem:(id)arg2 atIndex:(int)arg3 ;
-(void)didTapButtonOnCarouselsView:(id)arg1 ;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 loggingHelper:(id)arg4 ;
-(IGInsightsCarouselsView *)insightsCarouselsView;
-(void)setInsightsCarouselsView:(IGInsightsCarouselsView *)arg1 ;
-(NSString *)header;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end

