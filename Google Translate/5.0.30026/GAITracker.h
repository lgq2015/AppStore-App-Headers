/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GAITracker <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) char allowIDFACollection; 
@required
-(void)set:(id)arg1 value:(id)arg2;
-(id)get:(id)arg1;
-(char)allowIDFACollection;
-(void)setAllowIDFACollection:(char)arg1;
-(void)send:(id)arg1;
-(NSString *)name;

@end

