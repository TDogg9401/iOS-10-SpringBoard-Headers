//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

@class FBSceneHostManager, SBDisplayItem, SBFakeStatusBarView, SBOrientationTransformWrapperView, SBRemoteAlertAdapter, UIView;

@interface SBAppSwitcherRemoteAlertCellView : SBSwitcherWallpaperPageContentView
{
    SBDisplayItem *_displayItem;
    SBOrientationTransformWrapperView *_portraitContentWrapper;
    SBOrientationTransformWrapperView *_rotatingContentWrapper;
    FBSceneHostManager *_contextHostManager;
    UIView *_alertContentViewWrapper;
    SBFakeStatusBarView *_fakeStatusBar;
    UIView *_contentView;
    SBRemoteAlertAdapter *_remoteAlert;
    _Bool _remoteAlertHasCustomWallpaperStyle;
    _Bool _remoteAlertRemoteTunnelingWasActive;
    long long _remoteAlertWallpaperStyle;
}

@property(nonatomic) _Bool remoteAlertRemoteTunnelingWasActive; // @synthesize remoteAlertRemoteTunnelingWasActive=_remoteAlertRemoteTunnelingWasActive;
@property(nonatomic) long long remoteAlertWallpaperStyle; // @synthesize remoteAlertWallpaperStyle=_remoteAlertWallpaperStyle;
@property(nonatomic) _Bool remoteAlertHasCustomWallpaperStyle; // @synthesize remoteAlertHasCustomWallpaperStyle=_remoteAlertHasCustomWallpaperStyle;
@property(readonly, copy, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
- (void).cxx_destruct;
- (void)_addStatusBar;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)_updateHosting;
- (void)_updateBackgroundStyle;
- (void)hostAlertWithManager:(id)arg1;
- (void)installAlertInViewController:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setAlert:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 remoteAlert:(id)arg2 displayItem:(id)arg3;

@end

