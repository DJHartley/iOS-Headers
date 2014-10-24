//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DProtectResourceDelegate.h"

@class NSCountedSet, NSMutableDictionary, TSCH3DDictionaryOfSet;

__attribute__((visibility("hidden")))
@interface TSCH3DResourceCache : NSObject <TSCH3DProtectResourceDelegate>
{
    TSCH3DDictionaryOfSet *mResourceKeyedEntries;
    NSMutableDictionary *mHandles;
    NSCountedSet *mProtectedResources;
    NSMutableDictionary *mMemoryUsage;
    unsigned int mMemoryUsedInBytes;
    unsigned int mMemoryLimitInBytes;
    NSCountedSet *mUsageCounts;
}

@property(nonatomic) unsigned int memoryLimitInBytes; // @synthesize memoryLimitInBytes=mMemoryLimitInBytes;
@property(readonly, nonatomic) unsigned int memoryUsedInBytes; // @synthesize memoryUsedInBytes=mMemoryUsedInBytes;
- (id)debug_string;
- (id)debug_details;
- (id)debug_usageCounts;
- (id)debug_countedClasses;
- (id)debug_countedMemory;
- (id)debug_stats;
- (float)debug_totalMemoryUsageMB;
- (unsigned int)memoryUsedForResource:(id)arg1;
- (BOOL)isProtectedResource:(id)arg1;
- (void)unprotectResource:(id)arg1;
- (void)protectResource:(id)arg1;
- (void)garbageCollectAllResourcesForContext:(id)arg1;
- (void)garbageCollectResources:(id)arg1 context:(id)arg2;
- (id)p_unretainedResourcesFromResources:(id)arg1;
- (void)flushMemoryForResources:(id)arg1;
- (id)flushResources:(id)arg1 context:(id)arg2;
- (id)flushAllResourcesForContext:(id)arg1;
- (id)p_allResourceKeys;
- (id)p_flushResourceKeys:(id)arg1 context:(id)arg2;
- (void)p_flushHandleForKey:(id)arg1 context:(id)arg2;
- (id)p_keysForResources:(id)arg1;
- (id)p_keysForResource:(id)arg1;
- (void)p_removeHandleForKey:(id)arg1;
- (void)updateUsageCountForResourceSet:(id)arg1 fromPreviousResourceSet:(id)arg2;
- (void)setHandle:(id)arg1 forKey:(id)arg2;
- (void)setBytesUploaded:(unsigned int)arg1 forKey:(id)arg2;
- (id)handleForKey:(id)arg1;
- (id)keyForKey:(id)arg1;
- (id)keyForLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3;
- (BOOL)hasEnoughFreeMemoryOfBytes:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
