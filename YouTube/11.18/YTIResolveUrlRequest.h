/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTInnerTubeResponseCacheKeyProtocol.h>

@class NSString, YTIInnerTubeContext, YTIPlayerRequest;

@interface YTIResolveUrlRequest : PBGeneratedMessage <YTInnerTubeResponseCacheKeyProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasContext; 
@property (nonatomic,retain) YTIInnerTubeContext * context; 
@property (assign,nonatomic) char hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) char hasReferringApp; 
@property (nonatomic,retain) NSString * referringApp; 
@property (assign,nonatomic) char hasReferrer; 
@property (nonatomic,retain) NSString * referrer; 
@property (assign,nonatomic) char hasPlayerRequest; 
@property (nonatomic,retain) YTIPlayerRequest * playerRequest; 
@property (assign,nonatomic) char hasSuppressAutoplay; 
@property (assign,nonatomic) char suppressAutoplay; 
+(id)descriptor;
-(id)innerTubeResponseCacheKey;
@end

