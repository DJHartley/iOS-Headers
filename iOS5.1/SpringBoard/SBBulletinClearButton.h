/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class UIImageView;

@interface SBBulletinClearButton : UIControl
{
    BOOL _showingClear;
    UIImageView *_backgroundView;
    UIImageView *_xImageView;
    UIImageView *_clearImageView;
    float _widthWhenShowingX;
    float _widthWhenShowingClear;
    id _clearShownAction;
    id _clearPressedAction;
}

- (id)init;
- (void)dealloc;
- (void)resetAnimated:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)_pressAction;
- (void)_setShowsClear:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_clearImage;
- (id)_xImage;
- (id)_background;
@property(copy, nonatomic) id clearPressedAction; // @synthesize clearPressedAction=_clearPressedAction;
@property(copy, nonatomic) id clearShownAction; // @synthesize clearShownAction=_clearShownAction;

@end

