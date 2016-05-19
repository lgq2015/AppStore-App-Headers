/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface YTPersonalizedSuggestionsCache : NSObject {

	NSArray* _personalizedSuggestions;
	NSDate* _personalizedSuggestionsCacheDate;

}

@property (nonatomic,copy) NSArray * personalizedSuggestions;                        //@synthesize personalizedSuggestions=_personalizedSuggestions - In the implementation block
@property (nonatomic,retain) NSDate * personalizedSuggestionsCacheDate;              //@synthesize personalizedSuggestionsCacheDate=_personalizedSuggestionsCacheDate - In the implementation block
-(char)isUnpopulated;
-(void)setPersonalizedSuggestions:(NSArray *)arg1 ;
-(NSArray *)personalizedSuggestions;
-(void)removeSuggestion:(id)arg1 ;
-(NSDate *)personalizedSuggestionsCacheDate;
-(id)personalizedSuggestionsTitles;
-(void)setPersonalizedSuggestionsCacheDate:(NSDate *)arg1 ;
-(id)init;
-(id)description;
-(void)reset;
-(char)isEmpty;
-(char)isExpired;
@end

