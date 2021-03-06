/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EPStyleFlattener.h>

@interface EPStyleFlattener (EPInternal)
- (id)collectionFromWorksheet:(id)arg1;
- (id)styleFromObject:(id)arg1;
- (id)wrapDifferentialStyleInATableStyleElement:(id)arg1 type:(int)arg2;
- (id)extractKeys:(id)arg1 from:(id)arg2 parent:(id)arg3;
- (id)extractGlobalStyleElements:(id)arg1;
- (id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)keysInTheOrderTheyShouldBeApplied;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (void)cacheRange:(id)arg1;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (void)clearCache;
@end

