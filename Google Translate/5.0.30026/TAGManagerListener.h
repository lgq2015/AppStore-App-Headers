/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/TAGDataLayerListener.h>

@class TAGManager, NSString;

@interface TAGManagerListener : NSObject <TAGDataLayerListener> {

	TAGManager* _tagManager;

}

@property (nonatomic,retain) TAGManager * tagManager;               //@synthesize tagManager=_tagManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TAGManager *)tagManager;
-(void)setTagManager:(TAGManager *)arg1 ;
-(void)changed:(id)arg1 ;
-(id)initWithTagManager:(id)arg1 ;
@end

