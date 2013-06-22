/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOTileServerProxy-Protocol.h"

@class GEOTileDBReader, GEOTileDBWriter, NSLock, NSMapTable, NSMutableArray, NSString;

@interface GEOTileServerLocalProxy : NSObject <GEOTileServerProxy>
{
    NSMutableArray *_inProgress;
    NSLock *_inProgressLock;
    NSMapTable *_providers;
    GEOTileDBWriter *_dbWriter;
    GEOTileDBReader *_dbReader;
    NSString *_cacheLocation;
    id <GEOTileServerProxyDelegate> _delegate;
}

- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)dataForKey:(struct _GEOTileKey *)arg1 asyncHandler:(id)arg2;
- (id)dataForKey:(struct _GEOTileKey *)arg1;
- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 forKey:(struct _GEOTileKey)arg5 userInfo:(id)arg6;
- (void)cancelLoad:(id)arg1;
- (void)loadTiles:(id)arg1 checkDisk:(BOOL)arg2 allowNetworking:(BOOL)arg3 requireWiFi:(BOOL)arg4 bundleIdentifier:(id)arg5 bundleVersion:(id)arg6;
- (id)_contextForNetworkList:(id)arg1;
- (id)_contextForFullList:(id)arg1;
- (void)flushPendingWrites;
- (void)openCacheConnection;
- (void)closeCacheConnection;
- (void)setDelegate:(id)arg1;
- (void)registerProvider:(Class)arg1;
- (void)_updateExpiringTilesets;
- (void)_registerBuiltInProviders;
- (void)dealloc;
- (id)initWithCacheLocation:(id)arg1;

@end
