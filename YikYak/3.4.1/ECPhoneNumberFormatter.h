/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <Foundation/NSFormatter.h>

@interface ECPhoneNumberFormatter : NSFormatter
-(id)parseStringStartingWithOne:(id)arg1 ;
-(id)stripNonDigits:(id)arg1 ;
-(unsigned)formattedNewLocationFromOldFormatted:(id)arg1 formattedNew:(id)arg2 formattedOldLocation:(unsigned)arg3 lengthAdded:(unsigned)arg4 ;
-(id)parseLastSevenDigits:(id)arg1 ;
-(id)parsePartialStringStartingWithOne:(id)arg1 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(id)parseString:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
@end

