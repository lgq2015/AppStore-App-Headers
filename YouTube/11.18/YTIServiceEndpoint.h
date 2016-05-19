/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class NSData, PBMutableArray, YTIPlaylistEditEndpoint, YTIDismissalEndpoint, YTIClearWatchHistoryEndpoint, YTIPauseWatchHistoryEndpoint, YTIResumeWatchHistoryEndpoint, YTILikeEndpoint, YTIDeletePlaylistEndpoint, YTIDeleteVideoEndpoint, YTIRemoveFromRemoteQueueEndpoint, YTINotificationOptOutEndpoint, YTIFeedbackEndpoint, YTIShuffleFeaturedChannelsEndpoint, YTIPerformCommentActionEndpoint, YTIDeletePendingUploadEndpoint, YTIRetryPendingUploadEndpoint, YTICreateCommentReplyEndpoint, YTIEditShelfEndpoint, YTIDeleteShelfEndpoint, YTIEditChannelDescriptionEndpoint, YTICollabDisableProfileEndpoint, YTICollabSearchEndpoint, YTICollabSaveProfileEndpoint, YTICreateCommentEndpoint, YTIMarkNotificationsAsReadEndpoint, YTISubscribeEndpoint, YTIUnsubscribeEndpoint, YTIMuteAdEndpoint, YTICommitVideoEndpoint, YTIResumeSearchHistoryEndpoint, YTIPauseSearchHistoryEndpoint, YTIClearSearchHistoryEndpoint, YTIOfflineVideoEndpoint, YTIOfflinePlaylistEndpoint, YTIRenameConversationEndpoint, YTIInviteToConversationEndpoint, YTIEditChannelBusinessEmailEndpoint, YTIDeleteChannelUpsellEndpoint, YTIChannelCreationServiceEndpoint, YTIDeleteSpotlightFeaturedContentEndpoint, YTIResumePausedNotificationsEndpoint, YTIUndoFeedbackEndpoint, YTIAddToRemoteQueueEndpoint, YTIEditChannelCustomLinksEndpoint, YTIFlagEndpoint, YTISelectActiveIdentityEndpoint, YTILiveInsertAdEndpoint, YTIReportPlaybackEndpoint, YTISetSettingEndpoint, YTIShareToConversationEndpoint, YTIRecordNotificationInteractionsEndpoint, YTISetClientSettingEndpoint, YTIEditFeaturedChannelsEndpoint, YTIDisableFeaturedChannelsEndpoint, YTIEditConversationEndpoint, YTIEditRelatedChannelsEndpoint, YTIEditChannelNavigationSettingsEndpoint, YTISelectActiveChildIdentityEndpoint, YTIEditChannelLegalInfoEndpoint, YTIClearRemoteQueueEndpoint, YTIPushNotificationDialogButtonEndpoint, YTIPurchaseDataPlanEndpoint, YTIClearSearchHistorySettingEndpoint, YTIEditChannelWelcomeEndpoint, YTIEditChannelUpsellEndpoint, YTIEditConversationPostEndpoint, YTIEditFeaturedChannelsPrivacyEndpoint, YTIYPCCancelRecurrenceTransactionEndpoint, YTIYPCGetOffersEndpoint, YTIDeleteChannelPostEndpoint, YTICreateChannelPostEndpoint, YTILiveStartBroadcastEndpoint, YTILiveResetConnectionIdEndpoint, YTILiveStopBroadcastEndpoint, YTIModifyChannelNotificationPreferenceEndpoint, YTIEditConnectionStateEndpoint, YTIPlaylistEnableCollaborationEndpoint, YTIEditChannelCountryEndpoint, YTISendShareExternallyEndpoint, YTISendShareToConversationEndpoint, YTILiveRecordingEndpoint, YTISendShareToContactsEndpoint, YTIWhitelistEditEndpoint, YTILiveIngestionEndpoint, YTIModifySubscriptionEndpoint, YTILiveCreatorSettingsEndpoint, YTIYPCGetCartEndpoint, YTIYPCNCCCompleteTransactionEndpoint, YTICreateShelfEndpoint, YTILiveMonetizationEndpoint, YTIPingingEndpoint, YTIUpdateCommentEndpoint, YTIUploadPhotoEndpoint, YTIClearNotificationCountEndpoint, YTIUpdateCommentReplyEndpoint, YTIEditChannelProfileEndpoint, YTIGetNotificationMealbarEndpoint, YTIReportCommentSpamOrAbuseEndpoint, YTIEnableLiveStreamingEndpoint, YTIExperimentsOptInEndpoint, YTIMdxViewVideoInfoEndpoint, YTISubtitlesEndpoint, YTIGamingOnboardingEndpoint, YTIAnalyticsEventEndpoint, YTIEditChannelNameEndpoint, YTILiveMakePersistentBroadcastPublicEndpoint, YTIExperimentsOptOutEndpoint, YTIEditChannelBannerEndpoint, YTIModifyPlaylistNotificationPreferenceEndpoint, YTIGetReportFormEndpoint, YTIShowPurchaseConfirmationEndpoint, YTIPrefetchSharePanelEndpoint, YTISharePrivateVideoEndpoint, YTISendKidsRedVerificationCodeEndpoint, YTIGetDataPlanPromoEndpoint, YTIMdxConnectEndpoint, YTIProcessKidsRedConsentEndpoint, YTIBrowseSectionListReloadEndpoint, YTISendMessageEndpoint;

@interface YTIServiceEndpoint : PBGeneratedMessage

@property (assign,nonatomic) char hasClickTrackingParams; 
@property (nonatomic,retain) NSData * clickTrackingParams; 
@property (assign,nonatomic) char hasLoggingUrlsArray; 
@property (nonatomic,retain) PBMutableArray * loggingUrlsArray; 
@property (assign,nonatomic) char hasPlaylistEditEndpoint; 
@property (nonatomic,retain) YTIPlaylistEditEndpoint * playlistEditEndpoint; 
@property (assign,nonatomic) char hasDismissalEndpoint; 
@property (nonatomic,retain) YTIDismissalEndpoint * dismissalEndpoint; 
@property (assign,nonatomic) char hasClearWatchHistoryEndpoint; 
@property (nonatomic,retain) YTIClearWatchHistoryEndpoint * clearWatchHistoryEndpoint; 
@property (assign,nonatomic) char hasPauseWatchHistoryEndpoint; 
@property (nonatomic,retain) YTIPauseWatchHistoryEndpoint * pauseWatchHistoryEndpoint; 
@property (assign,nonatomic) char hasResumeWatchHistoryEndpoint; 
@property (nonatomic,retain) YTIResumeWatchHistoryEndpoint * resumeWatchHistoryEndpoint; 
@property (assign,nonatomic) char hasLikeEndpoint; 
@property (nonatomic,retain) YTILikeEndpoint * likeEndpoint; 
@property (assign,nonatomic) char hasDeletePlaylistEndpoint; 
@property (nonatomic,retain) YTIDeletePlaylistEndpoint * deletePlaylistEndpoint; 
@property (assign,nonatomic) char hasDeleteVideoEndpoint; 
@property (nonatomic,retain) YTIDeleteVideoEndpoint * deleteVideoEndpoint; 
@property (assign,nonatomic) char hasRemoveFromRemoteQueueEndpoint; 
@property (nonatomic,retain) YTIRemoveFromRemoteQueueEndpoint * removeFromRemoteQueueEndpoint; 
@property (assign,nonatomic) char hasNotificationOptOutEndpoint; 
@property (nonatomic,retain) YTINotificationOptOutEndpoint * notificationOptOutEndpoint; 
@property (assign,nonatomic) char hasFeedbackEndpoint; 
@property (nonatomic,retain) YTIFeedbackEndpoint * feedbackEndpoint; 
@property (assign,nonatomic) char hasShuffleFeaturedChannelsEndpoint; 
@property (nonatomic,retain) YTIShuffleFeaturedChannelsEndpoint * shuffleFeaturedChannelsEndpoint; 
@property (assign,nonatomic) char hasPerformCommentActionEndpoint; 
@property (nonatomic,retain) YTIPerformCommentActionEndpoint * performCommentActionEndpoint; 
@property (assign,nonatomic) char hasDeletePendingUploadEndpoint; 
@property (nonatomic,retain) YTIDeletePendingUploadEndpoint * deletePendingUploadEndpoint; 
@property (assign,nonatomic) char hasRetryPendingUploadEndpoint; 
@property (nonatomic,retain) YTIRetryPendingUploadEndpoint * retryPendingUploadEndpoint; 
@property (assign,nonatomic) char hasCreateCommentReplyEndpoint; 
@property (nonatomic,retain) YTICreateCommentReplyEndpoint * createCommentReplyEndpoint; 
@property (assign,nonatomic) char hasEditShelfEndpoint; 
@property (nonatomic,retain) YTIEditShelfEndpoint * editShelfEndpoint; 
@property (assign,nonatomic) char hasDeleteShelfEndpoint; 
@property (nonatomic,retain) YTIDeleteShelfEndpoint * deleteShelfEndpoint; 
@property (assign,nonatomic) char hasEditChannelDescriptionEndpoint; 
@property (nonatomic,retain) YTIEditChannelDescriptionEndpoint * editChannelDescriptionEndpoint; 
@property (assign,nonatomic) char hasCollabDisableProfileEndpoint; 
@property (nonatomic,retain) YTICollabDisableProfileEndpoint * collabDisableProfileEndpoint; 
@property (assign,nonatomic) char hasCollabSearchEndpoint; 
@property (nonatomic,retain) YTICollabSearchEndpoint * collabSearchEndpoint; 
@property (assign,nonatomic) char hasCollabSaveProfileEndpoint; 
@property (nonatomic,retain) YTICollabSaveProfileEndpoint * collabSaveProfileEndpoint; 
@property (assign,nonatomic) char hasCreateCommentEndpoint; 
@property (nonatomic,retain) YTICreateCommentEndpoint * createCommentEndpoint; 
@property (assign,nonatomic) char hasMarkNotificationsAsReadEndpoint; 
@property (nonatomic,retain) YTIMarkNotificationsAsReadEndpoint * markNotificationsAsReadEndpoint; 
@property (assign,nonatomic) char hasSubscribeEndpoint; 
@property (nonatomic,retain) YTISubscribeEndpoint * subscribeEndpoint; 
@property (assign,nonatomic) char hasUnsubscribeEndpoint; 
@property (nonatomic,retain) YTIUnsubscribeEndpoint * unsubscribeEndpoint; 
@property (assign,nonatomic) char hasMuteAdEndpoint; 
@property (nonatomic,retain) YTIMuteAdEndpoint * muteAdEndpoint; 
@property (assign,nonatomic) char hasCommitVideoEndpoint; 
@property (nonatomic,retain) YTICommitVideoEndpoint * commitVideoEndpoint; 
@property (assign,nonatomic) char hasResumeSearchHistoryEndpoint; 
@property (nonatomic,retain) YTIResumeSearchHistoryEndpoint * resumeSearchHistoryEndpoint; 
@property (assign,nonatomic) char hasPauseSearchHistoryEndpoint; 
@property (nonatomic,retain) YTIPauseSearchHistoryEndpoint * pauseSearchHistoryEndpoint; 
@property (assign,nonatomic) char hasClearSearchHistoryEndpoint; 
@property (nonatomic,retain) YTIClearSearchHistoryEndpoint * clearSearchHistoryEndpoint; 
@property (assign,nonatomic) char hasOfflineVideoEndpoint; 
@property (nonatomic,retain) YTIOfflineVideoEndpoint * offlineVideoEndpoint; 
@property (assign,nonatomic) char hasOfflinePlaylistEndpoint; 
@property (nonatomic,retain) YTIOfflinePlaylistEndpoint * offlinePlaylistEndpoint; 
@property (assign,nonatomic) char hasRenameConversationEndpoint; 
@property (nonatomic,retain) YTIRenameConversationEndpoint * renameConversationEndpoint; 
@property (assign,nonatomic) char hasInviteToConversationEndpoint; 
@property (nonatomic,retain) YTIInviteToConversationEndpoint * inviteToConversationEndpoint; 
@property (assign,nonatomic) char hasEditChannelBusinessEmailEndpoint; 
@property (nonatomic,retain) YTIEditChannelBusinessEmailEndpoint * editChannelBusinessEmailEndpoint; 
@property (assign,nonatomic) char hasDeleteChannelUpsellEndpoint; 
@property (nonatomic,retain) YTIDeleteChannelUpsellEndpoint * deleteChannelUpsellEndpoint; 
@property (assign,nonatomic) char hasChannelCreationServiceEndpoint; 
@property (nonatomic,retain) YTIChannelCreationServiceEndpoint * channelCreationServiceEndpoint; 
@property (assign,nonatomic) char hasDeleteSpotlightFeaturedContentEndpoint; 
@property (nonatomic,retain) YTIDeleteSpotlightFeaturedContentEndpoint * deleteSpotlightFeaturedContentEndpoint; 
@property (assign,nonatomic) char hasResumePausedNotificationsEndpoint; 
@property (nonatomic,retain) YTIResumePausedNotificationsEndpoint * resumePausedNotificationsEndpoint; 
@property (assign,nonatomic) char hasUndoFeedbackEndpoint; 
@property (nonatomic,retain) YTIUndoFeedbackEndpoint * undoFeedbackEndpoint; 
@property (assign,nonatomic) char hasAddToRemoteQueueEndpoint; 
@property (nonatomic,retain) YTIAddToRemoteQueueEndpoint * addToRemoteQueueEndpoint; 
@property (assign,nonatomic) char hasEditChannelCustomLinksEndpoint; 
@property (nonatomic,retain) YTIEditChannelCustomLinksEndpoint * editChannelCustomLinksEndpoint; 
@property (assign,nonatomic) char hasFlagEndpoint; 
@property (nonatomic,retain) YTIFlagEndpoint * flagEndpoint; 
@property (assign,nonatomic) char hasSelectActiveIdentityEndpoint; 
@property (nonatomic,retain) YTISelectActiveIdentityEndpoint * selectActiveIdentityEndpoint; 
@property (assign,nonatomic) char hasLiveInsertAdEndpoint; 
@property (nonatomic,retain) YTILiveInsertAdEndpoint * liveInsertAdEndpoint; 
@property (assign,nonatomic) char hasReportPlaybackEndpoint; 
@property (nonatomic,retain) YTIReportPlaybackEndpoint * reportPlaybackEndpoint; 
@property (assign,nonatomic) char hasSetSettingEndpoint; 
@property (nonatomic,retain) YTISetSettingEndpoint * setSettingEndpoint; 
@property (assign,nonatomic) char hasShareToConversationEndpoint; 
@property (nonatomic,retain) YTIShareToConversationEndpoint * shareToConversationEndpoint; 
@property (assign,nonatomic) char hasRecordNotificationInteractionsEndpoint; 
@property (nonatomic,retain) YTIRecordNotificationInteractionsEndpoint * recordNotificationInteractionsEndpoint; 
@property (assign,nonatomic) char hasSetClientSettingEndpoint; 
@property (nonatomic,retain) YTISetClientSettingEndpoint * setClientSettingEndpoint; 
@property (assign,nonatomic) char hasEditFeaturedChannelsEndpoint; 
@property (nonatomic,retain) YTIEditFeaturedChannelsEndpoint * editFeaturedChannelsEndpoint; 
@property (assign,nonatomic) char hasDisableFeaturedChannelsEndpoint; 
@property (nonatomic,retain) YTIDisableFeaturedChannelsEndpoint * disableFeaturedChannelsEndpoint; 
@property (assign,nonatomic) char hasEditConversationEndpoint; 
@property (nonatomic,retain) YTIEditConversationEndpoint * editConversationEndpoint; 
@property (assign,nonatomic) char hasEditRelatedChannelsEndpoint; 
@property (nonatomic,retain) YTIEditRelatedChannelsEndpoint * editRelatedChannelsEndpoint; 
@property (assign,nonatomic) char hasEditChannelNavigationSettingsEndpoint; 
@property (nonatomic,retain) YTIEditChannelNavigationSettingsEndpoint * editChannelNavigationSettingsEndpoint; 
@property (assign,nonatomic) char hasSelectActiveChildIdentityEndpoint; 
@property (nonatomic,retain) YTISelectActiveChildIdentityEndpoint * selectActiveChildIdentityEndpoint; 
@property (assign,nonatomic) char hasEditChannelLegalInfoEndpoint; 
@property (nonatomic,retain) YTIEditChannelLegalInfoEndpoint * editChannelLegalInfoEndpoint; 
@property (assign,nonatomic) char hasClearRemoteQueueEndpoint; 
@property (nonatomic,retain) YTIClearRemoteQueueEndpoint * clearRemoteQueueEndpoint; 
@property (assign,nonatomic) char hasPushNotificationDialogButtonEndpoint; 
@property (nonatomic,retain) YTIPushNotificationDialogButtonEndpoint * pushNotificationDialogButtonEndpoint; 
@property (assign,nonatomic) char hasPurchaseDataPlanEndpoint; 
@property (nonatomic,retain) YTIPurchaseDataPlanEndpoint * purchaseDataPlanEndpoint; 
@property (assign,nonatomic) char hasClearSearchHistorySettingEndpoint; 
@property (nonatomic,retain) YTIClearSearchHistorySettingEndpoint * clearSearchHistorySettingEndpoint; 
@property (assign,nonatomic) char hasEditChannelWelcomeEndpoint; 
@property (nonatomic,retain) YTIEditChannelWelcomeEndpoint * editChannelWelcomeEndpoint; 
@property (assign,nonatomic) char hasEditChannelUpsellEndpoint; 
@property (nonatomic,retain) YTIEditChannelUpsellEndpoint * editChannelUpsellEndpoint; 
@property (assign,nonatomic) char hasEditConversationPostEndpoint; 
@property (nonatomic,retain) YTIEditConversationPostEndpoint * editConversationPostEndpoint; 
@property (assign,nonatomic) char hasEditFeaturedChannelsPrivacyEndpoint; 
@property (nonatomic,retain) YTIEditFeaturedChannelsPrivacyEndpoint * editFeaturedChannelsPrivacyEndpoint; 
@property (assign,nonatomic) char hasYpcCancelRecurrenceEndpoint; 
@property (nonatomic,retain) YTIYPCCancelRecurrenceTransactionEndpoint * ypcCancelRecurrenceEndpoint; 
@property (assign,nonatomic) char hasYpcGetOffersEndpoint; 
@property (nonatomic,retain) YTIYPCGetOffersEndpoint * ypcGetOffersEndpoint; 
@property (assign,nonatomic) char hasDeleteChannelPostEndpoint; 
@property (nonatomic,retain) YTIDeleteChannelPostEndpoint * deleteChannelPostEndpoint; 
@property (assign,nonatomic) char hasCreateChannelPostEndpoint; 
@property (nonatomic,retain) YTICreateChannelPostEndpoint * createChannelPostEndpoint; 
@property (assign,nonatomic) char hasLiveStartBroadcastEndpoint; 
@property (nonatomic,retain) YTILiveStartBroadcastEndpoint * liveStartBroadcastEndpoint; 
@property (assign,nonatomic) char hasLiveResetConnectionIdEndpoint; 
@property (nonatomic,retain) YTILiveResetConnectionIdEndpoint * liveResetConnectionIdEndpoint; 
@property (assign,nonatomic) char hasLiveStopBroadcastEndpoint; 
@property (nonatomic,retain) YTILiveStopBroadcastEndpoint * liveStopBroadcastEndpoint; 
@property (assign,nonatomic) char hasModifyChannelNotificationPreferenceEndpoint; 
@property (nonatomic,retain) YTIModifyChannelNotificationPreferenceEndpoint * modifyChannelNotificationPreferenceEndpoint; 
@property (assign,nonatomic) char hasEditConnectionStateEndpoint; 
@property (nonatomic,retain) YTIEditConnectionStateEndpoint * editConnectionStateEndpoint; 
@property (assign,nonatomic) char hasPlaylistEnableCollaborationEndpoint; 
@property (nonatomic,retain) YTIPlaylistEnableCollaborationEndpoint * playlistEnableCollaborationEndpoint; 
@property (assign,nonatomic) char hasEditChannelCountryEndpoint; 
@property (nonatomic,retain) YTIEditChannelCountryEndpoint * editChannelCountryEndpoint; 
@property (assign,nonatomic) char hasSendShareExternallyEndpoint; 
@property (nonatomic,retain) YTISendShareExternallyEndpoint * sendShareExternallyEndpoint; 
@property (assign,nonatomic) char hasSendShareToConversationEndpoint; 
@property (nonatomic,retain) YTISendShareToConversationEndpoint * sendShareToConversationEndpoint; 
@property (assign,nonatomic) char hasLiveRecordingEndpoint; 
@property (nonatomic,retain) YTILiveRecordingEndpoint * liveRecordingEndpoint; 
@property (assign,nonatomic) char hasSendShareToContactsEndpoint; 
@property (nonatomic,retain) YTISendShareToContactsEndpoint * sendShareToContactsEndpoint; 
@property (assign,nonatomic) char hasWhitelistEditEndpoint; 
@property (nonatomic,retain) YTIWhitelistEditEndpoint * whitelistEditEndpoint; 
@property (assign,nonatomic) char hasLiveIngestionEndpoint; 
@property (nonatomic,retain) YTILiveIngestionEndpoint * liveIngestionEndpoint; 
@property (assign,nonatomic) char hasModifySubscriptionEndpoint; 
@property (nonatomic,retain) YTIModifySubscriptionEndpoint * modifySubscriptionEndpoint; 
@property (assign,nonatomic) char hasLiveCreatorSettingsEndpoint; 
@property (nonatomic,retain) YTILiveCreatorSettingsEndpoint * liveCreatorSettingsEndpoint; 
@property (assign,nonatomic) char hasYpcGetCartEndpoint; 
@property (nonatomic,retain) YTIYPCGetCartEndpoint * ypcGetCartEndpoint; 
@property (assign,nonatomic) char hasYpcNccCompleteTransactionEndpoint; 
@property (nonatomic,retain) YTIYPCNCCCompleteTransactionEndpoint * ypcNccCompleteTransactionEndpoint; 
@property (assign,nonatomic) char hasCreateShelfEndpoint; 
@property (nonatomic,retain) YTICreateShelfEndpoint * createShelfEndpoint; 
@property (assign,nonatomic) char hasLiveMonetizationEndpoint; 
@property (nonatomic,retain) YTILiveMonetizationEndpoint * liveMonetizationEndpoint; 
@property (assign,nonatomic) char hasPingingEndpoint; 
@property (nonatomic,retain) YTIPingingEndpoint * pingingEndpoint; 
@property (assign,nonatomic) char hasUpdateCommentEndpoint; 
@property (nonatomic,retain) YTIUpdateCommentEndpoint * updateCommentEndpoint; 
@property (assign,nonatomic) char hasUploadPhotoEndpoint; 
@property (nonatomic,retain) YTIUploadPhotoEndpoint * uploadPhotoEndpoint; 
@property (assign,nonatomic) char hasClearNotificationCountEndpoint; 
@property (nonatomic,retain) YTIClearNotificationCountEndpoint * clearNotificationCountEndpoint; 
@property (assign,nonatomic) char hasUpdateCommentReplyEndpoint; 
@property (nonatomic,retain) YTIUpdateCommentReplyEndpoint * updateCommentReplyEndpoint; 
@property (assign,nonatomic) char hasEditChannelProfileEndpoint; 
@property (nonatomic,retain) YTIEditChannelProfileEndpoint * editChannelProfileEndpoint; 
@property (assign,nonatomic) char hasGetNotificationMealbarEndpoint; 
@property (nonatomic,retain) YTIGetNotificationMealbarEndpoint * getNotificationMealbarEndpoint; 
@property (assign,nonatomic) char hasReportCommentSpamOrAbuseEndpoint; 
@property (nonatomic,retain) YTIReportCommentSpamOrAbuseEndpoint * reportCommentSpamOrAbuseEndpoint; 
@property (assign,nonatomic) char hasEnableLiveStreamingEndpoint; 
@property (nonatomic,retain) YTIEnableLiveStreamingEndpoint * enableLiveStreamingEndpoint; 
@property (assign,nonatomic) char hasExperimentsOptInEndpoint; 
@property (nonatomic,retain) YTIExperimentsOptInEndpoint * experimentsOptInEndpoint; 
@property (assign,nonatomic) char hasMdxViewVideoInfoEndpoint; 
@property (nonatomic,retain) YTIMdxViewVideoInfoEndpoint * mdxViewVideoInfoEndpoint; 
@property (assign,nonatomic) char hasSubtitlesEndpoint; 
@property (nonatomic,retain) YTISubtitlesEndpoint * subtitlesEndpoint; 
@property (assign,nonatomic) char hasGamingOnboardingEndpoint; 
@property (nonatomic,retain) YTIGamingOnboardingEndpoint * gamingOnboardingEndpoint; 
@property (assign,nonatomic) char hasAnalyticsEvent; 
@property (nonatomic,retain) YTIAnalyticsEventEndpoint * analyticsEvent; 
@property (assign,nonatomic) char hasEditChannelNameEndpoint; 
@property (nonatomic,retain) YTIEditChannelNameEndpoint * editChannelNameEndpoint; 
@property (assign,nonatomic) char hasLiveMakePersistentBroadcastPublicEndpoint; 
@property (nonatomic,retain) YTILiveMakePersistentBroadcastPublicEndpoint * liveMakePersistentBroadcastPublicEndpoint; 
@property (assign,nonatomic) char hasExperimentsOptOutEndpoint; 
@property (nonatomic,retain) YTIExperimentsOptOutEndpoint * experimentsOptOutEndpoint; 
@property (assign,nonatomic) char hasEditChannelBannerEndpoint; 
@property (nonatomic,retain) YTIEditChannelBannerEndpoint * editChannelBannerEndpoint; 
@property (assign,nonatomic) char hasModifyPlaylistNotificationPreferenceEndpoint; 
@property (nonatomic,retain) YTIModifyPlaylistNotificationPreferenceEndpoint * modifyPlaylistNotificationPreferenceEndpoint; 
@property (assign,nonatomic) char hasGetReportFormEndpoint; 
@property (nonatomic,retain) YTIGetReportFormEndpoint * getReportFormEndpoint; 
@property (assign,nonatomic) char hasShowPurchaseConfirmationEndpoint; 
@property (nonatomic,retain) YTIShowPurchaseConfirmationEndpoint * showPurchaseConfirmationEndpoint; 
@property (assign,nonatomic) char hasPrefetchSharePanelEndpoint; 
@property (nonatomic,retain) YTIPrefetchSharePanelEndpoint * prefetchSharePanelEndpoint; 
@property (assign,nonatomic) char hasSharePrivateVideoEndpoint; 
@property (nonatomic,retain) YTISharePrivateVideoEndpoint * sharePrivateVideoEndpoint; 
@property (assign,nonatomic) char hasSendKidsRedVerificationCodeEndpoint; 
@property (nonatomic,retain) YTISendKidsRedVerificationCodeEndpoint * sendKidsRedVerificationCodeEndpoint; 
@property (assign,nonatomic) char hasGetDataPlanPromoEndpoint; 
@property (nonatomic,retain) YTIGetDataPlanPromoEndpoint * getDataPlanPromoEndpoint; 
@property (assign,nonatomic) char hasMdxConnectEndpoint; 
@property (nonatomic,retain) YTIMdxConnectEndpoint * mdxConnectEndpoint; 
@property (assign,nonatomic) char hasProcessKidsRedConsentEndpoint; 
@property (nonatomic,retain) YTIProcessKidsRedConsentEndpoint * processKidsRedConsentEndpoint; 
@property (assign,nonatomic) char hasBrowseSectionListReloadEndpoint; 
@property (nonatomic,retain) YTIBrowseSectionListReloadEndpoint * browseSectionListReloadEndpoint; 
@property (assign,nonatomic) char hasSendMessageEndpoint; 
@property (nonatomic,retain) YTISendMessageEndpoint * sendMessageEndpoint; 
+(id)clickEndpointFromPayload:(id)arg1 ;
+(id)descriptor;
@end

