//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPReader.h>

#import "TSPComponentParserDelegate.h"

@class NSString, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPComponentReader : TSPReader <TSPComponentParserDelegate>
{
    id <TSUStreamReadChannel> _readChannel;
    TSPObjectContext *_context;
    struct {
        unsigned int isReadingFromDocument:1;
        unsigned int ignoreUnknownContent:1;
        unsigned int ignoreVersionChecking:1;
        unsigned int acceptUnknownDocumentObject:1;
    } _flags;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)unknownObjectUnarchiverArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2;
- (id)unknownMessageFromMessageInfo:(const struct MessageInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2;
- (const struct MessageInfo *)unknownObjectMessageInfo;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo *)arg2 message:(auto_ptr_4370f086 *)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(auto_ptr_c01b630f)arg5 unknownMessages:(id)arg6 error:(id *)arg7;
- (id)newUnarchiverWithArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2 isUnknownObject:(char *)arg3;
- (BOOL)componentParser:(id)arg1 didReadArchiveInfo:(const struct ArchiveInfo *)arg2 stream:(struct DispatchDataInputStream *)arg3 error:(id *)arg4;
- (BOOL)shouldProceedParsingOnFailure;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4;
- (id)initWithComponent:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

