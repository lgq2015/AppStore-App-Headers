/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFlickrAuthViewControllerDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, IGNonCurrentUserDefaults;

@interface IGFlickrHelper : NSObject <IGFlickrAuthViewControllerDelegate, IGServiceHelperProtocol> {

	NSString* _tokenKey;
	NSString* _tokenSecret;
	NSString* _username;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)shortServiceName;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)sharingInfo;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)logoutAndUnlink;
-(void)flickrAuthController:(id)arg1 didLoginWithTokenKey:(id)arg2 tokenSecret:(id)arg3 username:(id)arg4 ;
-(void)flickrAuthControllerLoginFailed:(id)arg1 ;
-(void)loadTokens;
-(char)hasTokens;
-(id)oldFlickrToken;
-(void)setTokenKey:(id)arg1 tokenSecret:(id)arg2 username:(id)arg3 save:(char)arg4 ;
-(char)needsToReauthorize;
-(char)hasAdvancedOptions;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)currentUsername;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)isAvailableInCurrentLocale;
-(char)hasEverBeenConfigured;
-(id)viewControllerForAdvancedOptions;
-(void)logout;
-(char)isConfigured;
@end

