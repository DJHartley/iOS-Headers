/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface STStgInfo : NSObject
{
    NSString *m_pstrName;
    int m_type;
    unsigned int m_userFlags;
    unsigned int m_size;
    long long m_creationTime;
    long long m_modificationTime;
    int m_accessMode;
    CDStruct_214f2dba m_clsid;
}

- (void)setCLSID:(CDStruct_214f2dba)arg1;
- (CDStruct_214f2dba)getCLSID;
- (void)setAccessMode:(int)arg1;
- (int)getAccessMode;
- (void)setModificationTime:(long long)arg1;
- (long long)getModificationTime;
- (void)setCreationTime:(long long)arg1;
- (long long)getCreationTime;
- (void)setSize:(unsigned int)arg1;
- (unsigned int)getSize;
- (void)setUserFlags:(unsigned int)arg1;
- (unsigned int)getUserFlags;
- (void)setType:(int)arg1;
- (int)getType;
- (void)setName:(id)arg1;
- (id)getName;
- (void)dealloc;
- (id)initWithStgInfo:(struct _StgInfo *)arg1;
- (id)init;

@end

