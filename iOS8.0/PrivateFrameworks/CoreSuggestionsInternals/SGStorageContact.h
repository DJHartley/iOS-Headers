//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, NSString, SGRecordId;

@interface SGStorageContact : NSObject
{
    NSMutableSet *_profiles;
    long detectedPhonesOnce;
    NSArray *internalDetectedPhones;
    long detectedAddressesOnce;
    NSArray *internalDetectedAddresses;
    long detectedEmailAddressesOnce;
    NSArray *internalDetectedEmailAddresses;
    SGRecordId *_recordId;
    long long _masterEntityId;
}

+ (id)mergeAll:(id)arg1;
+ (id)contactWithMasterEntityId:(long long)arg1;
+ (id)contactFromContactEntity:(id)arg1;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) long long masterEntityId; // @synthesize masterEntityId=_masterEntityId;
- (void).cxx_destruct;
- (id)convertToContact:(id)arg1;
- (id)loadEmailAddressDetailsFrom:(id)arg1;
- (id)loadAddressDetailsFrom:(id)arg1;
- (id)loadPhoneDetailsFrom:(id)arg1;
- (void)reload;
- (void)merge:(id)arg1;
- (BOOL)canMerge:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)allNames;
- (id)profiles;
- (void)addProfile:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqualToStorageContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end
