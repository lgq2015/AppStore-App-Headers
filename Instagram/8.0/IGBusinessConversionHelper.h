/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGBusinessConversionHelper : NSObject
+(void)showBusinessConversionCompletionAlert;
+(unsigned)contactPreferenceForString:(id)arg1 ;
+(id)stringForContactPreference:(unsigned)arg1 ;
+(void)switchBackToPersonalAccountFromViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)sendRequestWithQueryID:(id)arg1 pageInfo:(id)arg2 includeAllFields:(char)arg3 includePageID:(char)arg4 parser:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)conversionBaseInputParams;
+(id)invalidEmailErrorString;
+(char)phoneNumberIsValid:(id)arg1 ;
+(id)invalidPhoneErrorString;
+(id)needContactMethodErrorString;
+(id)basicPhoneNumberField;
+(id)phoneNumberFieldWithCountrySelector;
+(id)addressField;
+(id)addressPlaceholderText;
+(id)cityPlaceholderText;
+(void)updateProfileWithPageInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)finishConversionWithPageInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)textButtonWithTitle:(id)arg1 ;
+(char)validatePageInfo:(id)arg1 withError:(id*)arg2 ;
+(id)emailField;
@end

