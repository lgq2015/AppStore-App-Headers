/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/TAGContainerCallback.h>

@class TAGContainerOpener, NSString;

@interface TAGWaitForFresh : NSObject <TAGContainerCallback> {

	TAGContainerOpener* _containerOpener;
	double _oldestTimeToBeFresh;

}

@property (assign) double oldestTimeToBeFresh;                        //@synthesize oldestTimeToBeFresh=_oldestTimeToBeFresh - In the implementation block
@property (retain) TAGContainerOpener * containerOpener;              //@synthesize containerOpener=_containerOpener - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)containerRefreshBegin:(id)arg1 refreshType:(int)arg2 ;
-(void)containerRefreshSuccess:(id)arg1 refreshType:(int)arg2 ;
-(void)containerRefreshFailure:(id)arg1 failure:(int)arg2 refreshType:(int)arg3 ;
-(TAGContainerOpener *)containerOpener;
-(void)setContainerOpener:(TAGContainerOpener *)arg1 ;
-(char)isFresh;
-(double)oldestTimeToBeFresh;
-(id)initWithContainerOpener:(id)arg1 oldestTimeToBeFresh:(double)arg2 ;
-(void)setOldestTimeToBeFresh:(double)arg1 ;
@end

