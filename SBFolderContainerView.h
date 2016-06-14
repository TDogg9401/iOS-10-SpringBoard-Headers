//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBFolderView;

@interface SBFolderContainerView : UIView
{
    double _statusBarHeight;
    SBFolderView *_folderView;
    SBFolderContainerView *_childFolderContainerView;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SBFolderView *folderView; // @synthesize folderView=_folderView;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_frameForFolderView:(id)arg1;
@property(retain, nonatomic) SBFolderContainerView *childFolderContainerView;
- (id)initWithFolderView:(id)arg1 statusBarHeight:(double)arg2;

@end
