/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying>
{
    NSData *_internal;
    NSString *_path;
    NSData *_parent;
    BOOL _subdata;
}

+ (void)setDefaultMappingThresholdInBytes:(unsigned int)arg1;
- (BOOL)mf_immutable;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)data;
- (id)_initWithRange:(struct _NSRange)arg1 from:(id)arg2 retainingParent:(BOOL)arg3;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (const void *)bytes;
- (unsigned int)length;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImmutableData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)_initWithData:(id)arg1 maybeMutable:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)_initWithFile:(id)arg1;
- (id)init;

@end
