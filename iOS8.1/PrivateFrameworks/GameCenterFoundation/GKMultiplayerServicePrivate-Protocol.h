//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKMultiplayerService.h"

@class GKGameInternal, NSArray;

@protocol GKMultiplayerServicePrivate <GKMultiplayerService>
- (oneway void)invitePlayersV2:(NSArray *)arg1 toGame:(GKGameInternal *)arg2 handler:(void (^)(void))arg3;
@end
