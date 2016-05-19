/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol GIDBrowserOpener;
@class SSOIdentity, NSString, NSArray, GIDUDCRPCConfig;

@interface GIDUDCConsentParams : NSObject <NSCopying> {

	char _shouldExpandZippies;
	char _shouldShowIcons;
	char _smallHeader;
	SSOIdentity* _authorizedUser;
	NSString* _targetUser;
	int _productID;
	NSString* _productContext;
	NSArray* _settingIDs;
	GIDUDCRPCConfig* _RPCConfig;
	id<GIDBrowserOpener> _browserOpener;

}

@property (nonatomic,retain) SSOIdentity * authorizedUser;                    //@synthesize authorizedUser=_authorizedUser - In the implementation block
@property (nonatomic,copy) NSString * targetUser;                             //@synthesize targetUser=_targetUser - In the implementation block
@property (assign,nonatomic) int productID;                                   //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy) NSString * productContext;                         //@synthesize productContext=_productContext - In the implementation block
@property (nonatomic,copy) NSArray * settingIDs;                              //@synthesize settingIDs=_settingIDs - In the implementation block
@property (nonatomic,copy) GIDUDCRPCConfig * RPCConfig;                       //@synthesize RPCConfig=_RPCConfig - In the implementation block
@property (assign,nonatomic) char shouldExpandZippies;                        //@synthesize shouldExpandZippies=_shouldExpandZippies - In the implementation block
@property (assign,nonatomic) char shouldShowIcons;                            //@synthesize shouldShowIcons=_shouldShowIcons - In the implementation block
@property (assign,nonatomic) char smallHeader;                                //@synthesize smallHeader=_smallHeader - In the implementation block
@property (nonatomic,retain) id<GIDBrowserOpener> browserOpener;              //@synthesize browserOpener=_browserOpener - In the implementation block
-(void)setBrowserOpener:(id<GIDBrowserOpener>)arg1 ;
-(id<GIDBrowserOpener>)browserOpener;
-(NSString *)productContext;
-(void)setProductContext:(NSString *)arg1 ;
-(NSString *)targetUser;
-(void)setTargetUser:(NSString *)arg1 ;
-(void)setProductID:(int)arg1 ;
-(GIDUDCRPCConfig *)RPCConfig;
-(void)setRPCConfig:(GIDUDCRPCConfig *)arg1 ;
-(void)setAuthorizedUser:(SSOIdentity *)arg1 ;
-(void)setSettingIDs:(NSArray *)arg1 ;
-(void)setShouldExpandZippies:(char)arg1 ;
-(void)setShouldShowIcons:(char)arg1 ;
-(void)setSmallHeader:(char)arg1 ;
-(SSOIdentity *)authorizedUser;
-(NSArray *)settingIDs;
-(char)shouldExpandZippies;
-(char)shouldShowIcons;
-(char)smallHeader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)productID;
@end

