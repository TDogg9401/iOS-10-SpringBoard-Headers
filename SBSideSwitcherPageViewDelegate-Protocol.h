//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAppSwitcherPageViewDelegate-Protocol.h"

@class SBAppSwitcherPageView, SBIconViewMap;

@protocol SBSideSwitcherPageViewDelegate <SBAppSwitcherPageViewDelegate>
- (void)selectedPageView:(SBAppSwitcherPageView *)arg1;
- (_Bool)canSelectPageView:(SBAppSwitcherPageView *)arg1 numberOfTaps:(long long)arg2;
- (struct CGAffineTransform)overlayViewTransformForPageView:(SBAppSwitcherPageView *)arg1;
- (SBIconViewMap *)iconViewMapForSwitcherPageView:(SBAppSwitcherPageView *)arg1;
@end

