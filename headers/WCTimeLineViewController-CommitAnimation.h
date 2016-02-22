//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCTimeLineViewController.h"

#import "WCCommitViewAnimationDelegate.h"

@class NSString;

@interface WCTimeLineViewController (CommitAnimation) <WCCommitViewAnimationDelegate>
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)onTranslateSnsChangedFromPhotoContent:(id)arg1;
- (void)onWCContentItemViewExposeMenu:(id)arg1 scene:(int)arg2;
- (void)onWCContentItemViewMoreMenu:(id)arg1 sender:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)commitAnimationWillStart:(id)arg1;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)scrollTableViewToShowDataItem:(id)arg1;
- (void)showAnimationToImageView;
- (void)setAnimatedImageHidden:(_Bool)arg1 withTimeLineCellView:(id)arg2;
- (void)setAnimatedImageHidden:(_Bool)arg1;
- (void)clearAnimationPropertiesProtection;
- (void)clearAnimationProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

