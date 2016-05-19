/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/SKProductsRequestDelegate.h>
#import <YouTube/YTResponder.h>
#import <YouTube/YTActivityWaitTimeoutDelegate.h>

@protocol YTDataServices, YTResponder, YTStoreKitPurchaseControllerDelegate;
@class NSString, NSArray;

@interface YTStoreKitPurchaseController : NSObject <SKProductsRequestDelegate, YTResponder, YTActivityWaitTimeoutDelegate> {

	id<YTDataServices> _dataServices;
	NSString* _offerCountry;
	NSString* _offerParams;
	char _hasTimedOut;
	id<YTResponder> _parentResponder;
	NSArray* _productIds;
	id<YTStoreKitPurchaseControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<YTStoreKitPurchaseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * productIds;                                                    //@synthesize productIds=_productIds - In the implementation block
@property (assign) char hasTimedOut;                                                                //@synthesize hasTimedOut=_hasTimedOut - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(void)startPurchaseWithYPCInAppPurchasesEndpoint:(id)arg1 ;
-(id)initWithParentResponder:(id)arg1 dataServices:(id)arg2 ;
-(void)displayStoreUIForProducts:(id)arg1 ;
-(void)startPurchaseFlow:(id)arg1 ;
-(void)setOfferParams:(id)arg1 ;
-(NSArray *)productIds;
-(void)setProductIds:(NSArray *)arg1 ;
-(void)confirm;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setDelegate:(id<YTStoreKitPurchaseControllerDelegate>)arg1 ;
-(id<YTStoreKitPurchaseControllerDelegate>)delegate;
-(void)cleanup;
-(void)didTimeout;
-(void)setHasTimedOut:(char)arg1 ;
-(char)hasTimedOut;
@end

