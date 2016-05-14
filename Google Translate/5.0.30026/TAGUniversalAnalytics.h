/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/TAGTrackingTag.h>

@class GAILoggerImpl, TAGDataLayer, NSSet, NSNumberFormatter, NSDictionary, NSRegularExpression;

@interface TAGUniversalAnalytics : TAGTrackingTag {

	GAILoggerImpl* _logger;
	TAGDataLayer* _dataLayer;
	NSSet* _turnOffAnonymizeIpValues;
	NSNumberFormatter* _numberFormatter;
	NSDictionary* _defaultTransactionMap;
	NSDictionary* _defaultItemMap;
	NSRegularExpression* _productDimensionRegex;
	NSRegularExpression* _productMetricRegex;

}

@property (nonatomic,retain) GAILoggerImpl * logger;                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) TAGDataLayer * dataLayer;                                 //@synthesize dataLayer=_dataLayer - In the implementation block
@property (nonatomic,retain) NSSet * turnOffAnonymizeIpValues;                         //@synthesize turnOffAnonymizeIpValues=_turnOffAnonymizeIpValues - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                      //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultTransactionMap;                     //@synthesize defaultTransactionMap=_defaultTransactionMap - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultItemMap;                            //@synthesize defaultItemMap=_defaultItemMap - In the implementation block
@property (nonatomic,retain) NSRegularExpression * productDimensionRegex;              //@synthesize productDimensionRegex=_productDimensionRegex - In the implementation block
@property (nonatomic,retain) NSRegularExpression * productMetricRegex;                 //@synthesize productMetricRegex=_productMetricRegex - In the implementation block
+(id)functionId;
-(TAGDataLayer *)dataLayer;
-(id)initWithDataLayer:(id)arg1 ;
-(void)evaluateTrackingTag:(id)arg1 ;
-(void)setLoggerIfNecessary;
-(id)openTracker;
-(char)checkBooleanPropertyForTag:(id)arg1 key:(id)arg2 ;
-(void)sendEnhancedEcommerce:(id)arg1 withTracker:(id)arg2 ;
-(id)gaFieldsWithAnalyticsFields:(id)arg1 ;
-(void)sendTransaction:(id)arg1 withTracker:(id)arg2 ;
-(void)closeTracker:(id)arg1 ;
-(id)valueToStringMap:(id)arg1 ;
-(NSSet *)turnOffAnonymizeIpValues;
-(id)dataLayerString:(id)arg1 ;
-(id)transactionFieldsForTag:(id)arg1 ;
-(void)addParam:(id)arg1 value:(id)arg2 toParams:(id)arg3 ;
-(id)getArrayOfDictionariesFromObject:(id)arg1 ;
-(id)transactionItemFieldsForTag:(id)arg1 ;
-(NSDictionary *)defaultTransactionMap;
-(void)setDefaultTransactionMap:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultItemMap;
-(void)setDefaultItemMap:(NSDictionary *)arg1 ;
-(id)NSNumberFromObject:(id)arg1 ;
-(id)productFromDataLayerDictionary:(id)arg1 ;
-(id)promotionFromDataLayerDictionary:(id)arg1 ;
-(id)actionDataFromDataLayerDictionary:(id)arg1 ;
-(void)setDataLayer:(TAGDataLayer *)arg1 ;
-(void)setTurnOffAnonymizeIpValues:(NSSet *)arg1 ;
-(NSRegularExpression *)productDimensionRegex;
-(void)setProductDimensionRegex:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)productMetricRegex;
-(void)setProductMetricRegex:(NSRegularExpression *)arg1 ;
-(GAILoggerImpl *)logger;
-(void)setLogger:(GAILoggerImpl *)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
@end

