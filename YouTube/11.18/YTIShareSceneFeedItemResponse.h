/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIResponseContext, NSString;

@interface YTIShareSceneFeedItemResponse : PBGeneratedMessage

@property (assign,nonatomic) char hasResponseContext; 
@property (nonatomic,retain) YTIResponseContext * responseContext; 
@property (assign,nonatomic) char hasShareUrl; 
@property (nonatomic,retain) NSString * shareUrl; 
@property (assign,nonatomic) char hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage; 
@property (assign,nonatomic) char hasKind; 
@property (nonatomic,retain) NSString * kind; 
+(id)descriptor;
@end

