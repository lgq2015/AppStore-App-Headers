/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TAGDataLayer, NSMutableDictionary;

@interface TAGManager : NSObject {

	NSString* _ctfeServerAddress;
	int _refreshMode;
	TAGDataLayer* _dataLayer;
	NSMutableDictionary* _containers;

}

@property (nonatomic,retain) id<TAGLogger> logger; 
@property (assign,nonatomic) int refreshMode;                         //@synthesize refreshMode=_refreshMode - In the implementation block
@property (nonatomic,readonly) TAGDataLayer * dataLayer;              //@synthesize dataLayer=_dataLayer - In the implementation block
@property (assign,nonatomic) double dispatchInterval; 
@property (copy) NSString * ctfeServerAddress; 
@property (retain) NSMutableDictionary * containers;                  //@synthesize containers=_containers - In the implementation block
+(void)clearManagerInstance;
+(void)notCalled;
+(id)instance;
-(void)setDispatchInterval:(double)arg1 ;
-(void)dispatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)dispatchInterval;
-(void)removeContainerById:(id)arg1 ;
-(NSString *)ctfeServerAddress;
-(void)setCtfeServerAddress:(NSString *)arg1 ;
-(TAGDataLayer *)dataLayer;
-(int)refreshMode;
-(id)getContainerById:(id)arg1 ;
-(id)openContainerById:(id)arg1 callback:(id)arg2 ;
-(void)refreshTagsInAllContainers:(id)arg1 ;
-(id)initWithSameInstance:(char)arg1 ;
-(id)containerById:(id)arg1 ;
-(char)previewWithUrl:(id)arg1 ;
-(void)setRefreshMode:(int)arg1 ;
-(id<TAGLogger>)logger;
-(void)setLogger:(id<TAGLogger>)arg1 ;
-(NSMutableDictionary *)containers;
-(id)init;
-(void)setContainers:(NSMutableDictionary *)arg1 ;
-(void)dispatch;
@end

