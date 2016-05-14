/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class PTHTweetbotPostDraft, UITableView, PTHLocationManager, PTHColorGroupTableViewCell, PTHTweetbotLoadingCell, PTHTweetbotMessageCell, NSMutableArray, NSIndexPath, CLLocation, NSString;

@interface PTHTweetbotGeoSearchController : PTHViewController <UITableViewDelegate, UITableViewDataSource> {

	PTHTweetbotPostDraft* _draft;
	UITableView* _tableView;
	char _firstTime;
	PTHLocationManager* _locationManager;
	PTHColorGroupTableViewCell* _disableCell;
	PTHColorGroupTableViewCell* _coordinateCell;
	PTHTweetbotLoadingCell* _loadingCell;
	PTHTweetbotMessageCell* _messageCell;
	NSMutableArray* _places;
	NSIndexPath* _accessorySelectedPath;
	CLLocation* _location;

}

@property (nonatomic,retain) CLLocation * location;                 //@synthesize location=_location - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDraft:(id)arg1 ;
-(void)_accessoryTapped:(id)arg1 ;
-(void)_usePlace;
-(void)ok:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

