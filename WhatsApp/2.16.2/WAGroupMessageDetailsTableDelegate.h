/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <WhatsApp/WAMessageDetailsTableUpdateDelegate.h>

@protocol WADetailsTableSizeObzerver;
@class NSDictionary, NSDate, NSArray, NSMutableDictionary, UIFont, NSMutableArray, NSIndexPath, NSString;

@interface WAGroupMessageDetailsTableDelegate : NSObject <UITableViewDelegate, UITableViewDataSource, WAMessageDetailsTableUpdateDelegate> {

	id<WADetailsTableSizeObzerver> _sizeObserver;
	NSDictionary* _receiptsInfo;
	NSDate* _sentDate;
	NSArray* _groupMembers;
	NSMutableDictionary* _pushNames;
	char _isMediaMessage;
	char _isPttMessage;
	int _numberOfReceipients;
	float _selectedHeightUnit;
	UIFont* _contactNameFont;
	UIFont* _pushNameFont;
	UIFont* _dateTimeFont;
	float _timeLabelWidth;
	float _dateTimeLabelSpace;
	NSMutableArray* _receipts[3];
	int _receiptSection[3];
	int _numberOfReceipts[3];
	char _showUnfinishedIndication[3];
	NSIndexPath* _expandedIndexPath;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadFonts;
-(void)stopOperations;
-(void)tableView:(id)arg1 messageUpdated:(id)arg2 ;
-(id)initWithMessage:(id)arg1 sizeObzerver:(id)arg2 ;
-(id)imageForHeaderInSection:(int)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)footerViewForTableView:(id)arg1 ;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

