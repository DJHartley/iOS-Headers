/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBStarkAutoHideControlBarDelegate-Protocol.h"
#import "UIStatusBarStyleDelegate-Protocol.h"

@class NSMutableSet, SBStarkFakeIconOperationController, SBStarkScreenFocusController, UIStatusBar, UIViewController<SBStarkLauncher>;

@interface SBStarkControlBarViewController : UIViewController <UIStatusBarStyleDelegate, SBStarkAutoHideControlBarDelegate>
{
    id <SBStarkControlBarDelegate> _delegate;
    double _autoHideDelay;
    NSMutableSet *_launcherHideReasons;
    UIViewController<SBStarkLauncher> *_launcherViewController;
    UIStatusBar *_statusBarView;
    id <UIStatusBarStyleDelegate> _statusBarStyleDelegate;
    NSMutableSet *_statusBarHideReasons;
    long long _requestedStyle;
    SBStarkScreenFocusController *_focusController;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
}

@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController; // @synthesize fakeIconOperationController=_fakeIconOperationController;
@property(retain, nonatomic) SBStarkScreenFocusController *focusController; // @synthesize focusController=_focusController;
@property(nonatomic) id <SBStarkControlBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetStarkControlBarAutoHideTimer;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (_Bool)_isStatusBarHidden;
- (void)_autoHideTriggered;
- (void)_resetAutoHideTimer;
- (struct CGRect)_launcherViewFrameForVisibility:(_Bool)arg1;
- (void)_setLauncherHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3 fallbackToDefaultAnimationFactory:(_Bool)arg4;
- (_Bool)_isLauncherHidden;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)updateStatusBarWithRequestedStyle:(long long)arg1 animationFactory:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
@property(nonatomic) id <UIStatusBarStyleDelegate> statusBarStyleDelegate;
- (void)setLauncherHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
- (void)setLauncherHidden:(_Bool)arg1 forReason:(id)arg2 animated:(_Bool)arg3;
@property(nonatomic) double autoHideDelay;
@property(readonly, nonatomic) struct CGPoint highestVisiblePoint;
- (void)dealloc;
- (id)initWithInterfaceType:(long long)arg1;

@end
