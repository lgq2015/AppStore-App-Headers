/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GTMHTTPFetcherService, NSString, NSDictionary, QTMColorGroup;

@interface GHKAPIBaseConfig : NSObject {

	GTMHTTPFetcherService* _fetcherService;
	NSString* _productID;
	NSDictionary* _productSpecificData;
	QTMColorGroup* _colorGroup;

}

@property (nonatomic,retain) GTMHTTPFetcherService * fetcherService;              //@synthesize fetcherService=_fetcherService - In the implementation block
@property (nonatomic,copy) NSString * productID;                                  //@synthesize productID=_productID - In the implementation block
@property (nonatomic,retain) NSDictionary * productSpecificData;                  //@synthesize productSpecificData=_productSpecificData - In the implementation block
@property (nonatomic,retain) QTMColorGroup * colorGroup;                          //@synthesize colorGroup=_colorGroup - In the implementation block
-(NSDictionary *)productSpecificData;
-(GTMHTTPFetcherService *)fetcherService;
-(void)setColorGroup:(QTMColorGroup *)arg1 ;
-(void)setFetcherService:(GTMHTTPFetcherService *)arg1 ;
-(void)setProductID:(NSString *)arg1 ;
-(QTMColorGroup *)colorGroup;
-(void)setProductSpecificData:(NSDictionary *)arg1 ;
-(id)initWithFetcherService:(id)arg1 productID:(id)arg2 ;
-(NSString *)productID;
@end

