/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGUserSession, NSMutableSet;

@interface IGAuthHelper : NSObject {

	char _isForcingOut;
	IGUserSession* _currentUserSession;
	unsigned _lastAccountSwitchEntryPoint;
	NSMutableSet* _authUserData;

}

@property (nonatomic,retain) IGUserSession * currentUserSession;                //@synthesize currentUserSession=_currentUserSession - In the implementation block
@property (assign,nonatomic) unsigned lastAccountSwitchEntryPoint;              //@synthesize lastAccountSwitchEntryPoint=_lastAccountSwitchEntryPoint - In the implementation block
@property (nonatomic,retain) NSMutableSet * authUserData;                       //@synthesize authUserData=_authUserData - In the implementation block
@property (assign,nonatomic) char isForcingOut;                                 //@synthesize isForcingOut=_isForcingOut - In the implementation block
+(id)sharedAuthHelper;
+(id)authenticatedUserFromUser:(id)arg1 ;
+(void)migrateOldCurrentUser;
+(void)doLocalLogoutStepsSpecificToUser:(id)arg1 ;
+(void)doLocalLogoutStepsAffectingAllUsers;
+(id)userSessionCookiesPredicate;
+(id)currentUser;
-(IGUserSession *)currentUserSession;
-(char)currentUserIsLoggedIn;
-(char)hasMultipleAccounts;
-(id)currentAuthenticatedUsersSortedByAccessTime;
-(id)authenticatedUserMatchingUserPK:(id)arg1 ;
-(void)logInWithDictionary:(id)arg1 facebookAccessToken:(id)arg2 authLogInType:(int)arg3 ;
-(void)switchToAuthenticatedUser:(id)arg1 defaultSelectedTab:(int)arg2 entryPoint:(unsigned)arg3 ;
-(void)logInWithUserDictionary:(id)arg1 facebookAccessToken:(id)arg2 authLogInType:(int)arg3 ;
-(void)unarchiveUsers;
-(void)restoreCurrentUser;
-(void)storeLastUserPK:(id)arg1 ;
-(NSMutableSet *)authUserData;
-(id)oldCurrentUser;
-(id)oldStoredUsers;
-(id)storedAuthUserData;
-(void)storeAuthUserData:(id)arg1 ;
-(void)removeOldUserData;
-(void)removeOldStoredUsersData;
-(void)setAuthUserData:(NSMutableSet *)arg1 ;
-(id)lastUserPK;
-(void)updateCurrentUser:(id)arg1 ;
-(void)synchronizeUserWithKeychain:(id)arg1 ;
-(id)currentAuthenticatedUsers;
-(void)switchToAuthenticatedUserWithForce:(id)arg1 authLogInType:(int)arg2 defaultSelectedTab:(int)arg3 entryPoint:(unsigned)arg4 ;
-(void)swapFromCookiesOfUserWithPk:(id)arg1 toCookiesOfUserWithPk:(id)arg2 ;
-(void)clearCurrentUser;
-(char)cookiesAreValidForUserID:(id)arg1 ;
-(void)syncWithIGCookieStorageForUserWithPK:(id)arg1 ;
-(void)handleLoginError;
-(unsigned)lastAccountSwitchEntryPoint;
-(void)saveCookiesForInternalUsers;
-(char)isForcingOut;
-(void)setIsForcingOut:(char)arg1 ;
-(void)sendServerLogoutRequestForUserWithPK:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onProfilePictureChanged:(id)arg1 ;
-(void)onProfilePictureFailed:(id)arg1 ;
-(void)handleLoginRequiredByServer;
-(void)setCurrentUserSession:(IGUserSession *)arg1 ;
-(void)switchToLastAccessedUserWithForceDueToAddUserCancel;
-(char)hasMaximumNumberOfAccounts;
-(void)setLastAccountSwitchEntryPoint:(unsigned)arg1 ;
-(void)switchToNilUserWithEntryPoint:(unsigned)arg1 ;
-(void)accountSecurityInfoWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)sendTwoFactorSMSToPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)disableTwoFactorWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)switchToLastAccessedUserWithForceDueToCurrentUserLogoutWithEntryPoint:(unsigned)arg1 ;
-(void)logOutAllUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)renewBackupCodesWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)updateCurrentUserWithDictForCurrentUser:(id)arg1 ;
-(void)getProfanityFilterSetting:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)changeProfanityFilterSetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)removeProfilePicture;
-(void)uploadProfilePicture:(id)arg1 fromOption:(int)arg2 ;
-(void)verifyAccountRecoveryEmailConfirmationCodeWithEmail:(id)arg1 confirmationCode:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)resendAccountRecoveryEmailConfirmationCodeWithEmail:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)logOutUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)logInWithAuthenticatedUser:(id)arg1 facebookAccessToken:(id)arg2 authLogInType:(int)arg3 ;
-(void)requestSignUpSMSCodeWithPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)verifySignUpSMSCodeWithPhoneNumber:(id)arg1 validationCode:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)changePrivacySetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)requestSupportForSupportType:(unsigned)arg1 user:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)resendTwoFactorLoginSMSForUser:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)robocallTwoFactorLoginForUser:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)assistedAccountRecoveryAction:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(id)phoneRegistrationWithSignUpInfoDict:(id)arg1 profileInfo:(id)arg2 successfulHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)submitSignUpRequestWithInfo:(id)arg1 profileInfo:(id)arg2 successfulHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)profilePictureDataFromImage:(id)arg1 ;
-(void)uploadProfilePicture:(id)arg1 successfulHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)fetchSuggestedUsernamesWithEmail:(id)arg1 fullName:(id)arg2 successfulHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)clearAllUsers;
-(void)setCurrentUser:(id)arg1 ;
-(void)archive;
-(id)init;
@end

