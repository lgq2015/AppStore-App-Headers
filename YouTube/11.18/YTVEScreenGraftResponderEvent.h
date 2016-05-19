/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTResponderEvent.h>

@class NSString, YTIClientData, NSData, YTIVisualElement;

@interface YTVEScreenGraftResponderEvent : YTResponderEvent {

	Class _callerClass;
	int _VEType;
	NSString* _CSN;
	YTIClientData* _clientData;
	NSData* _requestTrackingParams;
	YTIVisualElement* _parentVisualElement;
	NSString* _parentCSN;

}

@property (assign,nonatomic) int VEType;                                          //@synthesize VEType=_VEType - In the implementation block
@property (nonatomic,copy) NSString * CSN;                                        //@synthesize CSN=_CSN - In the implementation block
@property (nonatomic,retain) YTIClientData * clientData;                          //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,retain) NSData * requestTrackingParams;                      //@synthesize requestTrackingParams=_requestTrackingParams - In the implementation block
@property (nonatomic,retain) YTIVisualElement * parentVisualElement;              //@synthesize parentVisualElement=_parentVisualElement - In the implementation block
@property (nonatomic,copy) NSString * parentCSN;                                  //@synthesize parentCSN=_parentCSN - In the implementation block
+(id)eventWithCallerClass:(Class)arg1 firstResponder:(id)arg2 ;
-(NSString *)CSN;
-(NSString *)parentCSN;
-(id)initWithCallerClass:(Class)arg1 firstResponder:(id)arg2 ;
-(int)VEType;
-(void)setVEType:(int)arg1 ;
-(void)setCSN:(NSString *)arg1 ;
-(NSData *)requestTrackingParams;
-(void)setRequestTrackingParams:(NSData *)arg1 ;
-(YTIVisualElement *)parentVisualElement;
-(void)setParentVisualElement:(YTIVisualElement *)arg1 ;
-(void)setParentCSN:(NSString *)arg1 ;
-(id)description;
-(YTIClientData *)clientData;
-(void)setClientData:(YTIClientData *)arg1 ;
@end

