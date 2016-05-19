/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface YTOfflineAd : NSObject {

	int _adBreakIndex;
	int _adSlotIndex;
	NSString* _adVideoID;

}

@property (assign,nonatomic) int adBreakIndex;                //@synthesize adBreakIndex=_adBreakIndex - In the implementation block
@property (assign,nonatomic) int adSlotIndex;                 //@synthesize adSlotIndex=_adSlotIndex - In the implementation block
@property (nonatomic,copy) NSString * adVideoID;              //@synthesize adVideoID=_adVideoID - In the implementation block
-(NSString *)adVideoID;
-(int)adBreakIndex;
-(int)adSlotIndex;
-(id)initWithAdBreakIndex:(int)arg1 adSlotIndex:(int)arg2 adVideoID:(id)arg3 ;
-(void)setAdBreakIndex:(int)arg1 ;
-(void)setAdSlotIndex:(int)arg1 ;
-(void)setAdVideoID:(NSString *)arg1 ;
@end

