/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GTLObject.h>

@class GTLPlusMediasetAuthor, GTLPlusMediasetCoverPhoto, NSString, NSArray, GTLPlusMediasetMedia, GTLDateTime;

@interface GTLPlusMediaset : GTLObject

@property (retain) GTLPlusMediasetAuthor * author; 
@property (retain) GTLPlusMediasetCoverPhoto * coverPhoto; 
@property (copy) NSString * displayName; 
@property (copy) NSString * ETag; 
@property (copy) NSString * identifier; 
@property (copy) NSString * kind; 
@property (retain) NSArray * labels; 
@property (retain) GTLPlusMediasetMedia * media; 
@property (retain) GTLDateTime * published; 
@property (retain) GTLDateTime * updated; 
@property (copy) NSString * url; 
+(id)arrayPropertyToClassMap;
+(id)propertyToJSONKeyMap;
+(void)load;
@end

