//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "MMUIHookViewDelegate.h"

@class NSString;

@interface MMTabBarBaseViewController : MMSearchBarDisplayController <MMUIHookViewDelegate>
{
}

- (double)getMainTableHeight;
- (void)willEnterForground;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)viewDidLoad;
- (void)fixNavigationControllerInteractivePopGesture;
- (void)fixTabbarState;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)updateViewWhenSelectTab:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

