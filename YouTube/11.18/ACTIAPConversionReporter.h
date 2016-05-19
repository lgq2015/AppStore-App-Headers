/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/ACTConversionReporterPrivate.h>
#import <YouTube/ACTReportingInfoDelegate.h>
#import <YouTube/ACTPingerDelegate.h>

@class NSString;

@interface ACTIAPConversionReporter : ACTConversionReporterPrivate <ACTReportingInfoDelegate, ACTPingerDelegate> {

	NSString* _productID;

}

@property (nonatomic,copy) NSString * productID;                    //@synthesize productID=_productID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProductID:(NSString *)arg1 ;
-(id)reportingURLPrefix;
-(id)initWithProductID:(id)arg1 value:(id)arg2 currencyCode:(id)arg3 isRepeatable:(char)arg4 ;
-(id)deduplicationID;
-(void)dealloc;
-(id)queryParameters;
-(NSString *)productID;
@end

