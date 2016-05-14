/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteAlmostAbstractDataSource.h>

@class NSString, NSArray;

@interface IGAutocompleteAbstractDataSource : IGAutocompleteAlmostAbstractDataSource {

	char _shouldReverseSort;
	int _defaultSet;
	NSString* _query;
	NSArray* _filteredStrings;

}

@property (assign,nonatomic) int defaultSet;                         //@synthesize defaultSet=_defaultSet - In the implementation block
@property (assign,nonatomic) char shouldReverseSort;                 //@synthesize shouldReverseSort=_shouldReverseSort - In the implementation block
@property (nonatomic,copy) NSString * query;                         //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * filteredStrings;              //@synthesize filteredStrings=_filteredStrings - In the implementation block
-(void)setFilteredStrings:(NSArray *)arg1 ;
-(int)sortedOrder:(int)arg1 ;
-(int)defaultSet;
-(void)setDefaultSet:(int)arg1 ;
-(char)shouldReverseSort;
-(void)setShouldReverseSort:(char)arg1 ;
-(NSArray *)filteredStrings;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
@end

