/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding>
{
    char *_g;
    unsigned char _select;
    void *_rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int _seeds[2];
    id *_keys;
    NSSharedKeySet *_subSharedKeySet;
}

+ (id)keySetWithKeys:(id)arg1;
- (unsigned int)keySetCount;
- (void)finalize;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)keyAtIndex:(unsigned int)arg1;
- (unsigned int)indexForKey:(id)arg1;
- (id)allKeys;
- (unsigned int)maximumIndex;
- (BOOL)isEmpty;
- (unsigned int)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithKeys:(id *)arg1 count:(unsigned int)arg2;
- (void)createSubclassCode:(id)arg1 interface:(const struct __CFString **)arg2 implementation:(const struct __CFString **)arg3;

@end

