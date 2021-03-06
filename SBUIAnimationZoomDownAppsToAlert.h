//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper, SBWorkspaceApplication;

@interface SBUIAnimationZoomDownAppsToAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBWorkspaceApplication *_primaryApp;
    SBWindowSelfHostWrapper *_appContextHostWrapper;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (void).cxx_destruct;
- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

