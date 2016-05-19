/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GHKButtonContentViewDelegate.h>

@protocol GHKEscalationOptionsSectionDelegate;
@class NSArray, GHKConfig, GHKConnectivity, GHKFlags, GHKMetricsReporter, GHKSessionDataManager;

@interface GHKEscalationOptionsSection : NSObject <GHKButtonContentViewDelegate> {

	NSArray* _escalationOptionObjects;
	char _showingHours;
	id<GHKEscalationOptionsSectionDelegate> _delegate;
	GHKConfig* _config;
	GHKConnectivity* _connectivity;
	GHKFlags* _flags;
	GHKMetricsReporter* _metricsReporter;
	GHKSessionDataManager* _sessionDataManager;

}

@property (assign,nonatomic,__weak) id<GHKEscalationOptionsSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GHKConfig * config;                                                   //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) GHKConnectivity * connectivity;                                       //@synthesize connectivity=_connectivity - In the implementation block
@property (nonatomic,retain) GHKFlags * flags;                                                     //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) GHKMetricsReporter * metricsReporter;                                 //@synthesize metricsReporter=_metricsReporter - In the implementation block
@property (nonatomic,retain) GHKSessionDataManager * sessionDataManager;                           //@synthesize sessionDataManager=_sessionDataManager - In the implementation block
+(id)objectionRequires;
-(GHKSessionDataManager *)sessionDataManager;
-(GHKMetricsReporter *)metricsReporter;
-(void)setMetricsReporter:(GHKMetricsReporter *)arg1 ;
-(void)setSessionDataManager:(GHKSessionDataManager *)arg1 ;
-(void)didTapGHKButtonContentView;
-(id)optionFromClickRank:(int)arg1 ;
-(void)disableEscalationOptionOfContactModeType:(int)arg1 ;
-(void)updateSectionWithOptions:(id)arg1 ;
-(char)appendToSectionTable:(id)arg1 ;
-(void)reportContactOptionsDisplayed;
-(char)supportsContactModeType:(int)arg1 ;
-(id)sectionHeaderContentViewObject;
-(void)toggleHoursOff;
-(void)toggleHoursOn;
-(char)supportShowHours;
-(void)setDelegate:(id<GHKEscalationOptionsSectionDelegate>)arg1 ;
-(id)init;
-(id<GHKEscalationOptionsSectionDelegate>)delegate;
-(GHKConfig *)config;
-(void)setConfig:(GHKConfig *)arg1 ;
-(void)setConnectivity:(GHKConnectivity *)arg1 ;
-(GHKConnectivity *)connectivity;
-(void)setFlags:(GHKFlags *)arg1 ;
-(GHKFlags *)flags;
@end

