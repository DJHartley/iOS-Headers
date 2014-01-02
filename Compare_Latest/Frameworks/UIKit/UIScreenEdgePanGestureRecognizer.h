/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIPanGestureRecognizer.h>

#import "_UIScreenEdgePanRecognizerDelegate-Protocol.h"

@class _UIScreenEdgePanRecognizer;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate>
{
    _UIScreenEdgePanRecognizer *_recognizer;
    unsigned long long _edges;
}

@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
- (double)_edgeRegionSize;
- (_Bool)isRequiringLongPress;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
