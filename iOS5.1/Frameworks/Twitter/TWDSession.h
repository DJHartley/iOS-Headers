/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "TWDSessionProxy.h"

@class ACAccount, ACAccountStore, CLLocation, CLLocationManager, NSDictionary, NSLock, NSManagedObjectContext, NSMutableArray, NSString, TWDPermissionsController, TWDUserRecordStore;

@interface TWDSession : TWDSessionProxy
{
    TWDPermissionsController *_permissionsController;
    ACAccount *_activeAccount;
    ACAccountStore *_accountStore;
    struct _xpc_connection_s *_connection;
    NSLock *_locationStatusLock;
    int _geotagStatus;
    CLLocationManager *_locationManager;
    struct {
        double latitude;
        double longitude;
    } _currentLocation;
    NSString *_currentPlaceID;
    NSString *_currentPlaceName;
    TWDUserRecordStore *_userRecordStore;
    NSManagedObjectContext *_managedObjectContext;
    NSDictionary *_clientInfo;
    NSLock *_sendCompletionsLock;
    NSMutableArray *_sendCompletions;
    NSDictionary *_overrideGeotagInfo;
    unsigned int _warningAboutLocationAuth:1;
    CLLocation *_location;
}

- (BOOL)clientHasEntitlement:(id)arg1;
- (id)localizedAppNameClient;
- (id)localizedAppNameForPID:(int)arg1;
- (void)setOverrideGeotagInfo:(id)arg1;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchRecordForScreenName:(id)arg1 completion:(id)arg2;
- (void)setGeotagStatus:(id)arg1;
- (void)fetchGeotagStatus:(id)arg1;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (void)handleRetryTweet:(id)arg1 response:(id)arg2 responseObject:(id)arg3 copiedCompletion:(id)arg4 error:(void)arg5;
- (BOOL)tweetWasADuplicate:(id)arg1 responseObject:(id)arg2;
- (void)playTweetSound;
- (void)completeSendBlock:(id)arg1;
- (BOOL)statusRequiresMultiPart:(id)arg1;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)recordFetchedImageLimits:(id)arg1;
- (id)lastFetchedImageLimits:(char *)arg1;
- (id)defaultImageLimits;
- (void)fetchCurrentTCoLength:(id)arg1;
- (void)recordFetchedTCoLength:(int)arg1;
- (int)lastFetchedTCoLength:(char *)arg1;
- (void)showTwitterSettingsIfNeeded:(id)arg1;
- (void)setPermission:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id)arg3;
- (void)fetchKnownBundleIdentifiers:(id)arg1;
- (void)fetchPermissionForBundleIdentifier:(id)arg1 completion:(id)arg2;
- (void)fetchPermission:(id)arg1;
- (void)fetchPermissionForBundleIdentifier:(id)arg1 checkEntitlement:(BOOL)arg2 completion:(id)arg3;
- (void)checkIn:(id)arg1;
- (void)warnAboutNetworksIfNeeded;
- (void)fetchSessionInfo:(id)arg1;
- (id)sessionInfo;
- (void)setActiveAccountIdentifier:(id)arg1;
- (BOOL)isClientAllowedToUseTweetSheet;
- (id)accountStore;
- (void)buildUserStore;
- (int)callingPID;
- (void)accountStoreChanged:(id)arg1;
- (id)clientBundleID;
- (void)dealloc;
- (id)initWithConnection:(struct _xpc_connection_s *)arg1 managedObjectContext:(id)arg2 permissionsController:(id)arg3;

@end
