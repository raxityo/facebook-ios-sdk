/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <FBSDKCoreKit/__FBSDKLoggerCreating.h>
#import <FBSDKCoreKit/_FBSDKNotificationPosting.h>
#import <FBSDKCoreKit/_FBSDKWindowFinding.h>
#import <FBSDKCoreKit/FBSDKAccessToken.h>
#import <FBSDKCoreKit/FBSDKAccessTokenProviding.h>
#import <FBSDKCoreKit/FBSDKAdvertiserIDProviding.h>
#import <FBSDKCoreKit/FBSDKAdvertisingTrackingStatus.h>
#import <FBSDKCoreKit/FBSDKAEMReporterProtocol.h>
#import <FBSDKCoreKit/FBSDKAppAvailabilityChecker.h>
#import <FBSDKCoreKit/FBSDKAppEventDropDetermining.h>
#import <FBSDKCoreKit/FBSDKAppEventName.h>
#import <FBSDKCoreKit/FBSDKAppEventParameterName.h>
#import <FBSDKCoreKit/FBSDKAppEventParameterProduct.h>
#import <FBSDKCoreKit/FBSDKAppEventParameterValue.h>
#import <FBSDKCoreKit/FBSDKAppEvents.h>
#import <FBSDKCoreKit/FBSDKAppEventsConfigurationProviding.h>
#import <FBSDKCoreKit/FBSDKAppEventsConfiguring.h>
#import <FBSDKCoreKit/FBSDKAppEventsFlushBehavior.h>
#import <FBSDKCoreKit/FBSDKAppEventsFlushReason.h>
#import <FBSDKCoreKit/FBSDKAppEventsNotificationName.h>
#import <FBSDKCoreKit/FBSDKAppEventsParameterProcessing.h>
#import <FBSDKCoreKit/FBSDKAppEventsReporter.h>
#import <FBSDKCoreKit/FBSDKAppEventsStatePersisting.h>
#import <FBSDKCoreKit/FBSDKAppEventsStateProviding.h>
#import <FBSDKCoreKit/FBSDKAppEventUserDataType.h>
#import <FBSDKCoreKit/FBSDKApplicationActivating.h>
#import <FBSDKCoreKit/FBSDKApplicationLifecycleNotifications.h>
#import <FBSDKCoreKit/FBSDKApplicationLifecycleObserving.h>
#import <FBSDKCoreKit/FBSDKApplicationObserving.h>
#import <FBSDKCoreKit/FBSDKApplicationStateSetting.h>
#import <FBSDKCoreKit/FBSDKAppLink.h>
#import <FBSDKCoreKit/FBSDKAppLinkEventPosting.h>
#import <FBSDKCoreKit/FBSDKAppLinkNavigation.h>
#import <FBSDKCoreKit/FBSDKAppLinkProtocol.h>
#import <FBSDKCoreKit/FBSDKAppLinkResolver.h>
#import <FBSDKCoreKit/FBSDKAppLinkResolving.h>
#import <FBSDKCoreKit/FBSDKAppLinksBlock.h>
#import <FBSDKCoreKit/FBSDKAppLinkTarget.h>
#import <FBSDKCoreKit/FBSDKAppLinkTargetCreating.h>
#import <FBSDKCoreKit/FBSDKAppLinkTargetProtocol.h>
#import <FBSDKCoreKit/FBSDKAppLinkURL.h>
#import <FBSDKCoreKit/FBSDKAppLinkURLCreating.h>
#import <FBSDKCoreKit/FBSDKAppLinkUtility.h>
#import <FBSDKCoreKit/FBSDKAppURLSchemeProviding.h>
#import <FBSDKCoreKit/FBSDKATEPublisherCreating.h>
#import <FBSDKCoreKit/FBSDKAuthenticationStatusUtility.h>
#import <FBSDKCoreKit/FBSDKAuthenticationToken.h>
#import <FBSDKCoreKit/FBSDKAuthenticationTokenClaims.h>
#import <FBSDKCoreKit/FBSDKAuthenticationTokenProviding.h>
#import <FBSDKCoreKit/FBSDKBackgroundEventLogging.h>
#import <FBSDKCoreKit/FBSDKBridgeAPI.h>
#import <FBSDKCoreKit/FBSDKBridgeAPIProtocol.h>
#import <FBSDKCoreKit/FBSDKBridgeAPIProtocolType.h>
#import <FBSDKCoreKit/FBSDKBridgeAPIRequest.h>
#import <FBSDKCoreKit/FBSDKBridgeAPIRequestCreating.h>
#import <FBSDKCoreKit/FBSDKBridgeAPIRequestOpening.h>
#import <FBSDKCoreKit/FBSDKBridgeAPIRequestProtocol.h>
#import <FBSDKCoreKit/FBSDKBridgeAPIResponse.h>
#import <FBSDKCoreKit/FBSDKButton.h>
#import <FBSDKCoreKit/FBSDKButtonImpressionLogging.h>
#import <FBSDKCoreKit/FBSDKCodelessIndexing.h>
#import <FBSDKCoreKit/FBSDKConstants.h>
#import <FBSDKCoreKit/FBSDKCoreKitComponents.h>
#import <FBSDKCoreKit/FBSDKCoreKitConfigurator.h>
#import <FBSDKCoreKit/FBSDKCoreKitVersions.h>
#import <FBSDKCoreKit/FBSDKDeviceDialogView.h>
#import <FBSDKCoreKit/FBSDKDeviceInformationProviding.h>
#import <FBSDKCoreKit/FBSDKDeviceViewControllerBase.h>
#import <FBSDKCoreKit/FBSDKDialogConfiguration.h>
#import <FBSDKCoreKit/FBSDKDialogConfigurationMapBuilding.h>
#import <FBSDKCoreKit/FBSDKDynamicFrameworkLoaderProxy.h>
#import <FBSDKCoreKit/FBSDKDynamicSocialFrameworkLoader.h>
#import <FBSDKCoreKit/FBSDKErrorConfiguration.h>
#import <FBSDKCoreKit/FBSDKErrorConfigurationProtocol.h>
#import <FBSDKCoreKit/FBSDKErrorConfigurationProviding.h>
#import <FBSDKCoreKit/FBSDKErrorCreating.h>
#import <FBSDKCoreKit/FBSDKErrorFactory.h>
#import <FBSDKCoreKit/FBSDKErrorRecoveryAttempting.h>
#import <FBSDKCoreKit/FBSDKErrorRecoveryConfiguration.h>
#import <FBSDKCoreKit/FBSDKErrorReporter.h>
#import <FBSDKCoreKit/FBSDKErrorReporting.h>
#import <FBSDKCoreKit/FBSDKEventLogging.h>
#import <FBSDKCoreKit/FBSDKEventProcessing.h>
#import <FBSDKCoreKit/FBSDKEventsProcessing.h>
#import <FBSDKCoreKit/FBSDKFeatureChecking.h>
#import <FBSDKCoreKit/FBSDKFeatureDisabling.h>
#import <FBSDKCoreKit/FBSDKFeatureExtracting.h>
#import <FBSDKCoreKit/FBSDKGateKeeperManager.h>
#import <FBSDKCoreKit/FBSDKGateKeeperManaging.h>
#import <FBSDKCoreKit/FBSDKGraphErrorRecoveryProcessor.h>
#import <FBSDKCoreKit/FBSDKGraphRequest.h>
#import <FBSDKCoreKit/FBSDKGraphRequestConnecting.h>
#import <FBSDKCoreKit/FBSDKGraphRequestConnection.h>
#import <FBSDKCoreKit/FBSDKGraphRequestConnectionDelegate.h>
#import <FBSDKCoreKit/FBSDKGraphRequestConnectionFactory.h>
#import <FBSDKCoreKit/FBSDKGraphRequestDataAttachment.h>
#import <FBSDKCoreKit/FBSDKGraphRequestFactory.h>
#import <FBSDKCoreKit/FBSDKGraphRequestFactoryProtocol.h>
#import <FBSDKCoreKit/FBSDKGraphRequestFlags.h>
#import <FBSDKCoreKit/FBSDKGraphRequestPiggybackManaging.h>
#import <FBSDKCoreKit/FBSDKGraphRequestProtocol.h>
#import <FBSDKCoreKit/FBSDKImpressionLoggerFactoryProtocol.h>
#import <FBSDKCoreKit/FBSDKImpressionLoggerFactoryProtocol.h>
#import <FBSDKCoreKit/FBSDKImpressionLogging.h>
#import <FBSDKCoreKit/FBSDKImpressionLoggingButton.h>
#import <FBSDKCoreKit/FBSDKIntegrityParametersProcessorProvider.h>
#import <FBSDKCoreKit/FBSDKInternalURLOpener.h>
#import <FBSDKCoreKit/FBSDKInternalUtility.h>
#import <FBSDKCoreKit/FBSDKInternalUtilityProtocol.h>
#import <FBSDKCoreKit/FBSDKInternalUtilityProtocol.h>
#import <FBSDKCoreKit/FBSDKInstrumentManager.h>
#import <FBSDKCoreKit/FBSDKKeychainStore.h>
#import <FBSDKCoreKit/FBSDKKeychainStoreFactory.h>
#import <FBSDKCoreKit/FBSDKKeychainStoreProtocol.h>
#import <FBSDKCoreKit/FBSDKKeychainStoreProviding.h>
#import <FBSDKCoreKit/FBSDKLocation.h>
#import <FBSDKCoreKit/FBSDKLogger.h>
#import <FBSDKCoreKit/FBSDKLogging.h>
#import <FBSDKCoreKit/FBSDKLoggingBehavior.h>
#import <FBSDKCoreKit/FBSDKLoginTooltip.h>
#import <FBSDKCoreKit/FBSDKMacCatalystDetermining.h>
#import <FBSDKCoreKit/FBSDKMath.h>
#import <FBSDKCoreKit/FBSDKMeasurementEvent.h>
#import <FBSDKCoreKit/FBSDKMeasurementEventListener.h>
#import <FBSDKCoreKit/FBSDKMetadataIndexing.h>
#import <FBSDKCoreKit/FBSDKMutableCopying.h>
#import <FBSDKCoreKit/FBSDKNetworkErrorChecker.h>
#import <FBSDKCoreKit/FBSDKNetworkErrorChecking.h>
#import <FBSDKCoreKit/FBSDKOperatingSystemVersionComparing.h>
#import <FBSDKCoreKit/FBSDKPaymentObserving.h>
#import <FBSDKCoreKit/FBSDKProductAvailability.h>
#import <FBSDKCoreKit/FBSDKProductCondition.h>
#import <FBSDKCoreKit/FBSDKProfile.h>
#import <FBSDKCoreKit/FBSDKProfilePictureMode.h>
#import <FBSDKCoreKit/FBSDKProfileProtocols.h>
#import <FBSDKCoreKit/FBSDKRandom.h>
#import <FBSDKCoreKit/FBSDKRulesFromKeyProvider.h>
#import <FBSDKCoreKit/FBSDKServerConfiguration.h>
#import <FBSDKCoreKit/FBSDKServerConfigurationProvider.h>
#import <FBSDKCoreKit/FBSDKServerConfigurationProviding.h>
#import <FBSDKCoreKit/FBSDKSettings.h>
#import <FBSDKCoreKit/FBSDKSettingsLogging.h>
#import <FBSDKCoreKit/FBSDKSettingsProtocol.h>
#import <FBSDKCoreKit/FBSDKShareDialogConfiguration.h>
#import <FBSDKCoreKit/FBSDKSourceApplicationTracking.h>
#import <FBSDKCoreKit/FBSDKSuggestedEventsIndexerProtocol.h>
#import <FBSDKCoreKit/FBSDKSwizzling.h>
#import <FBSDKCoreKit/FBSDKTimeSpentRecording.h>
#import <FBSDKCoreKit/FBSDKTokenStringProviding.h>
#import <FBSDKCoreKit/FBSDKTransformer.h>
#import <FBSDKCoreKit/FBSDKURL.h>
#import <FBSDKCoreKit/FBSDKURLHosting.h>
#import <FBSDKCoreKit/FBSDKURLOpener.h>
#import <FBSDKCoreKit/FBSDKURLOpening.h>
#import <FBSDKCoreKit/FBSDKURLScheme.h>
#import <FBSDKCoreKit/FBSDKURLSessionProxyProviding.h>
#import <FBSDKCoreKit/FBSDKUserAgeRange.h>
#import <FBSDKCoreKit/FBSDKUserDataPersisting.h>
#import <FBSDKCoreKit/FBSDKUserIDProviding.h>
#import <FBSDKCoreKit/FBSDKUtility.h>
#import <FBSDKCoreKit/FBSDKWebDialogDelegate.h>
#import <FBSDKCoreKit/FBSDKWebDialogView.h>
#import <FBSDKCoreKit/FBSDKWebView.h>
#import <FBSDKCoreKit/FBSDKWebViewAppLinkResolver.h>
#import <FBSDKCoreKit/FBSDKWebViewProviding.h>
#import <FBSDKCoreKit/WKWebView+WebViewProtocol.h>
