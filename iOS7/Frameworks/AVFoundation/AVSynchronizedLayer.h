/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class AVPlayerItem, AVSynchronizedLayerInternal;

@interface AVSynchronizedLayer : CALayer
{
    AVSynchronizedLayerInternal *_syncLayer;
}

+ (id)synchronizedLayerWithPlayerItem:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)arg1;
@property(retain, nonatomic) AVPlayerItem *playerItem;
- (id)init;

@end
