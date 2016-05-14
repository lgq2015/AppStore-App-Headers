/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class IGInsightsCenteredParagraphPageView, IGInsightsParagraphComponent, IGInsightsLoggingHelper, NSString;

@interface IGInsightsCenteredParagraphComponentAdapter : NSObject <IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	IGInsightsCenteredParagraphPageView* _componentView;
	IGInsightsParagraphComponent* _component;
	IGInsightsLoggingHelper* _loggingHelper;
	unsigned _surface;

}

@property (nonatomic,retain) IGInsightsCenteredParagraphPageView * componentView;                              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsParagraphComponent * component;                                         //@synthesize component=_component - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                          //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (assign,nonatomic) unsigned surface;                                                                 //@synthesize surface=_surface - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(void)setSurface:(unsigned)arg1 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(char)isComponentValid;
-(IGInsightsCenteredParagraphPageView *)componentView;
-(void)setComponentView:(IGInsightsCenteredParagraphPageView *)arg1 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(unsigned)surface;
-(IGInsightsParagraphComponent *)component;
-(void)setComponent:(IGInsightsParagraphComponent *)arg1 ;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
@end

