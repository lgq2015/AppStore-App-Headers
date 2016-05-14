/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAForwardPickerDataSource.h>
#import <WhatsApp/WAContactsSearchControllerDelegate.h>

@class WAContactsSearchController, NSArray, NSString;

@interface WAForwardPickerSearchDataSource : WAForwardPickerDataSource <WAContactsSearchControllerDelegate> {

	WAContactsSearchController* _searchController;
	NSArray* _searchResults;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactsSearchControllerDelegateDidInvalidateSearchResults:(id)arg1 ;
-(void)configureWithContactsFromDataSource:(id)arg1 ;
-(void)updateSearchText:(id)arg1 ;
-(char)allowsSearch;
-(id)loadSections;
-(id)init;
@end

