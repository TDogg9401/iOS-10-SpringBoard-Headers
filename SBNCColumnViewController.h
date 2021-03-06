//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SBModeViewControllerContentProviding-Protocol.h"
#import "SBNCTableViewControllerDelegate-Protocol.h"
#import "SBUISizeObservingViewDelegate-Protocol.h"

@class NSString, SBNCTableViewController, UIView, _UIContentUnavailableView;
@protocol SBBulletinActionHandler;

@interface SBNCColumnViewController : UIViewController <SBModeViewControllerContentProviding, SBNCTableViewControllerDelegate, SBUISizeObservingViewDelegate>
{
    SBNCTableViewController *_ncTableViewController;
    _UIContentUnavailableView *_contentUnavailableView;
    struct {
        unsigned int scrollsToTop:1;
        unsigned int isLayoutValid:1;
    } _columnViewControllerFlags;
    UIView *_contentProvidingView;
    _Bool _requestHandlingEnabled;
    id <SBBulletinActionHandler> _bulletinActionHandler;
}

+ (unsigned long long)_contentUnavailableVibrantOptionsForCurrentState;
@property(nonatomic, getter=isRequestHandlingEnabled) _Bool requestHandlingEnabled; // @synthesize requestHandlingEnabled=_requestHandlingEnabled;
@property(readonly, nonatomic) SBNCTableViewController *ncTableViewController; // @synthesize ncTableViewController=_ncTableViewController;
@property(nonatomic) __weak id <SBBulletinActionHandler> bulletinActionHandler; // @synthesize bulletinActionHandler=_bulletinActionHandler;
- (void).cxx_destruct;
- (_Bool)canRemoveViewOnDismissal:(id)arg1;
- (long long)layoutModeForNotificationCenterTableViewController:(id)arg1;
- (long long)notificationCenterTableViewController:(id)arg1 replacementAnimationForRow:(id)arg2 inSection:(id)arg3;
- (long long)notificationCenterTableViewController:(id)arg1 removalAnimationForRow:(id)arg2 inSection:(id)arg3;
- (long long)notificationCenterTableViewController:(id)arg1 insertionAnimationForRow:(id)arg2 inSection:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)reloadSortOrder;
- (void)invalidateContentLayout;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) long long layoutMode;
- (void)viewDidLoad;
- (void)insertAppropriateViewWithContent;
- (void)loadView;
- (void)transitionToContentUnavailableViewIfNecessary;
- (void)transitionToBulletinViewControllerViewIfNecessary;
- (void)_transitionToBulletinViewControllerView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_insertContentUnavailableView;
- (void)_removeBulletinViewControllerView;
- (void)insertTableView;
@property(readonly, nonatomic) __weak NSString *contentUnavailableText;
@property(nonatomic) _Bool scrollsToTop;
- (id)_lazyContentUnavailableView;
- (void)dealloc;
@property(readonly, nonatomic) __weak Class tableViewControllerClass;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

