/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFastEnumeration;
@class GPPClientLoggedSuggestionInfo, NSObject;

@interface GPPClientLoggedRHSComponentItem : NSObject {

	GPPClientLoggedSuggestionInfo* _suggestionInfo;
	NSObject*<NSFastEnumeration> _circles;
	NSObject*<NSFastEnumeration> _persons;

}

@property (nonatomic,retain) GPPClientLoggedSuggestionInfo * suggestionInfo;              //@synthesize suggestionInfo=_suggestionInfo - In the implementation block
@property (nonatomic,retain) NSObject*<NSFastEnumeration> circles;                        //@synthesize circles=_circles - In the implementation block
@property (nonatomic,retain) NSObject*<NSFastEnumeration> persons;                        //@synthesize persons=_persons - In the implementation block
-(NSObject*<NSFastEnumeration>)circles;
-(void)setCircles:(NSObject*<NSFastEnumeration>)arg1 ;
-(void)setSuggestionInfo:(GPPClientLoggedSuggestionInfo *)arg1 ;
-(GPPClientLoggedSuggestionInfo *)suggestionInfo;
-(char)isEqual:(id)arg1 ;
-(NSObject*<NSFastEnumeration>)persons;
-(void)setPersons:(NSObject*<NSFastEnumeration>)arg1 ;
@end

