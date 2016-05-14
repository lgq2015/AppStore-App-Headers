/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGShareServiceConfigureManagerDelegate.h>

@protocol IGShareListManagerDelegate;
@class NSArray, IGShareServiceConfigureManager, NSString;

@interface IGShareListManager : NSObject <IGShareServiceConfigureManagerDelegate> {

	char _locationEnabled;
	char _showFullList;
	id<IGShareListManagerDelegate> _delegate;
	int _shortListCount;
	int _presentationStyle;
	NSArray* _services;
	IGShareServiceConfigureManager* _configureManager;

}

@property (assign,nonatomic) char locationEnabled;                                           //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareListManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showFullList;                                              //@synthesize showFullList=_showFullList - In the implementation block
@property (assign,nonatomic) int shortListCount;                                             //@synthesize shortListCount=_shortListCount - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                          //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) NSArray * services;                                             //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) IGShareServiceConfigureManager * configureManager;              //@synthesize configureManager=_configureManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sharingInfo;
-(id)initWithMediaType:(int)arg1 locationAvailable:(char)arg2 ;
-(int)numberOfShareServices;
-(void)toggleShareServiceAtIndex:(int)arg1 ;
-(id)shareServiceAtIndex:(int)arg1 ;
-(void)updateShareServiceWillShare:(char)arg1 index:(int)arg2 ;
-(id)viewControllerForShareConfiguration;
-(id)analyticsExtra;
-(char)readyToShare;
-(IGShareServiceConfigureManager *)configureManager;
-(id)orderedServiceTypesForServiceList:(id)arg1 ;
-(void)configureStickyShareService:(id)arg1 withValue:(char)arg2 ;
-(char)serviceWillShare:(id)arg1 ;
-(void)setShortListCount:(int)arg1 ;
-(char)locationEnabled;
-(char)showFullList;
-(void)setShowFullList:(char)arg1 ;
-(int)shortListCount;
-(void)setConfigureManager:(IGShareServiceConfigureManager *)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setDelegate:(id<IGShareListManagerDelegate>)arg1 ;
-(void)reloadData;
-(id<IGShareListManagerDelegate>)delegate;
-(int)presentationStyle;
-(void)setLocationEnabled:(char)arg1 ;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
@end

