/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface OADHyperlink : NSObject
{
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
    BOOL mDoEndSound;
    BOOL mIsVisited;
    BOOL mDoAddToHistory;
}

- (id)init;
- (void)dealloc;
- (id)targetLocation;
- (void)setTargetLocation:(id)arg1;
- (int)targetMode;
- (void)setTargetMode:(int)arg1;
- (id)targetFrame;
- (void)setTargetFrame:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)tooltip;
- (void)setTooltip:(id)arg1;
- (id)invalidUrl;
- (void)setInvalidUrl:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) BOOL doAddToHistory; // @synthesize doAddToHistory=mDoAddToHistory;
@property(nonatomic) BOOL isVisited; // @synthesize isVisited=mIsVisited;
@property(nonatomic) BOOL doEndSound; // @synthesize doEndSound=mDoEndSound;

@end
