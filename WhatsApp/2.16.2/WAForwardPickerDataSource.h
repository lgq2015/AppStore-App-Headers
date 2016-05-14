/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UITableViewDataSource.h>

@protocol WAForwardPickerDataSourceDelegate;
@class NSArray, NSString;

@interface WAForwardPickerDataSource : NSObject <UITableViewDataSource> {

	NSArray* _sections;
	int _totalCount;
	id<WAForwardPickerDataSourceDelegate> _delegate;

}

@property (nonatomic,readonly) int totalCount; 
@property (getter=isLoaded,nonatomic,readonly) char loaded; 
@property (nonatomic,readonly) char allowsSearch; 
@property (nonatomic,readonly) char showsEmptyListView; 
@property (nonatomic,readonly) UIEdgeInsets separatorInset; 
@property (assign,nonatomic,__weak) id<WAForwardPickerDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allContactInfos;
-(char)showsEmptyListView;
-(char)allowsSearch;
-(id)contactInfoAtIndexPath:(id)arg1 ;
-(id)loadSections;
-(void)setNeedsReloadSections;
-(void)setDelegate:(id<WAForwardPickerDataSourceDelegate>)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3 ;
-(id<WAForwardPickerDataSourceDelegate>)delegate;
-(NSString *)title;
-(UIEdgeInsets)separatorInset;
-(char)isLoaded;
-(id)sections;
-(int)totalCount;
@end

