//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface OITSUSharedLocale : NSObject
{
    struct __CFLocale *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLocale;
+ (id)_singletonAlloc;
- (void)datePreferencesChanged:(id)arg1;
- (struct __CFLocale *)currentLocale;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;

@end

