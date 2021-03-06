/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectModel, PFUbiquityLocation, PFUbiquityStoreMetadata;

@interface PFUbiquityMigrationManager : NSObject
{
    NSManagedObjectModel *_destinationModel;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityLocation *_rootLocation;
    PFUbiquityStoreMetadata *_storeMetadata;
}

- (id)initWithDestinationModel:(id)arg1 storeMetadata:(id)arg2 ubiquityRootLocation:(id)arg3;
- (void)dealloc;
- (BOOL)migrateUbiquitousContentForStoreName:(id)arg1 peerID:(id)arg2 error:(id *)arg3;
@property(readonly) PFUbiquityStoreMetadata *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property(readonly) NSManagedObjectModel *destinationModel; // @synthesize destinationModel=_destinationModel;
@property(readonly) NSManagedObjectModel *sourceModel; // @synthesize sourceModel=_sourceModel;
@property(readonly) PFUbiquityLocation *rootLocation; // @synthesize rootLocation=_rootLocation;

@end

