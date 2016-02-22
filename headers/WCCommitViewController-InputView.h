//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCommitViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "InputControllerDelegate.h"

@class NSString;

@interface WCCommitViewController (InputView) <InputControllerDelegate, BaseEmoticonViewDelegate>
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)resignInput;
- (void)becomeInput;
- (void)updateContentOffset;
- (void)initInputController;
- (void)initEmoticonView;
- (void)initInputToolView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

