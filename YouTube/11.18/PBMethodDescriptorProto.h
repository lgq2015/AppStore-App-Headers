/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class NSString, PBMethodOptions;

@interface PBMethodDescriptorProto : PBGeneratedMessage

@property (assign,nonatomic) char hasName; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) char hasInputType; 
@property (nonatomic,retain) NSString * inputType; 
@property (assign,nonatomic) char hasOutputType; 
@property (nonatomic,retain) NSString * outputType; 
@property (assign,nonatomic) char hasOptions; 
@property (nonatomic,retain) PBMethodOptions * options; 
@property (assign,nonatomic) char hasClientStreaming; 
@property (assign,nonatomic) char clientStreaming; 
@property (assign,nonatomic) char hasServerStreaming; 
@property (assign,nonatomic) char serverStreaming; 
+(id)descriptor;
@end

