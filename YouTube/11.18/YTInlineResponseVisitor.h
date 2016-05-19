/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTVisitor.h>

@class NSMutableArray, GIMMe, NSString;

@interface YTInlineResponseVisitor : NSObject <YTVisitor> {

	NSMutableArray* _processors;
	char _shouldOperate;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                  //@synthesize gimme=_gimme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)addProcessor:(id)arg1 ;
-(void)visit:(id)arg1 ;
-(id)init;
@end

