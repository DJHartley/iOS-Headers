/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataAccess/DAAccount.h>

@interface DAAccount (NotesSupport)
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(_Bool)arg7 isResyncAfterConnectionFailed:(_Bool)arg8 consumer:(id)arg9;
- (id)notesFolders;
- (id)defaultNotesFolder;
@end
