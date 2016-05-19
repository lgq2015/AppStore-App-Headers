/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray, NSNumber;

@interface GPPACL : NSObject <NSCopying> {

	NSMutableDictionary* _entriesDictionary;
	char _underageWarning;
	NSArray* _systemGroups;
	NSArray* _circles;
	NSArray* _people;
	NSArray* _suggestions;
	NSNumber* _domainRestricted;

}

@property (nonatomic,retain) NSArray * systemGroups;                   //@synthesize systemGroups=_systemGroups - In the implementation block
@property (nonatomic,retain) NSArray * circles;                        //@synthesize circles=_circles - In the implementation block
@property (nonatomic,retain) NSArray * people;                         //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) NSArray * suggestions;                    //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) unsigned numberOfTypes; 
@property (nonatomic,retain) NSNumber * domainRestricted;              //@synthesize domainRestricted=_domainRestricted - In the implementation block
@property (assign,nonatomic) char underageWarning;                     //@synthesize underageWarning=_underageWarning - In the implementation block
-(NSNumber *)domainRestricted;
-(void)setDomainRestricted:(NSNumber *)arg1 ;
-(void)setUnderageWarning:(char)arg1 ;
-(void)sortSystemGroups;
-(NSArray *)circles;
-(id)matchedEntry:(id)arg1 ;
-(id)selectedEntriesOfType:(id)arg1 ;
-(NSArray *)systemGroups;
-(id)addSuggestedEntry:(id)arg1 ;
-(char)underageWarning;
-(void)updateEntryForUnderageWarning:(id)arg1 ;
-(void)addEntryToDictionary:(id)arg1 ;
-(id)keyForEntry:(id)arg1 ;
-(int)indexForSystemGroupIdentifier:(id)arg1 ;
-(void)updateEntriesForUnderageWarning;
-(unsigned)numberOfTypes;
-(id)visibleEntriesOfType:(id)arg1 ;
-(void)setCircles:(NSArray *)arg1 ;
-(void)setSystemGroups:(NSArray *)arg1 ;
-(id)addEntry:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)entries;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(void)setPeople:(NSArray *)arg1 ;
-(NSArray *)people;
-(void)removeEntry:(id)arg1 ;
@end

