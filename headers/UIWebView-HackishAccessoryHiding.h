//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@interface UIWebView (HackishAccessoryHiding)
+ (void)setAccessoryView:(id)arg1;
- (void)setHackishlyHidesInputAccessoryView:(_Bool)arg1;
- (_Bool)hackishlyHidesInputAccessoryView;
- (void)ensureHackishSubclassExistsOfBrowserViewClass:(Class)arg1;
- (_Bool)mightPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)methodReturningNil;
- (id)hackishlyFoundBrowserView;
- (id)hackishlyFoundBrowserView:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)browserViewResignFirstResponder;
- (_Bool)browserViewBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@end

