//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MMLoadingView, NSArray, NSString, UIAlertView, UIView;

@interface CContactVerifyLogic : MMObject <PBMessageObserverDelegate, UITextFieldDelegate, UIAlertViewDelegate>
{
    NSArray *m_arrVerifyContactWrap;
    UIView *m_parentView;
    NSString *m_nsVerifyValue;
    MMLoadingView *m_loadingView;
    unsigned int m_uiOpCode;
    _Bool m_bFromChatRoom;
    _Bool m_bNotShowAlert;
    _Bool m_bNeedSaveToLocalDB;
    UIAlertView *m_alert;
    unsigned int m_uiFriendScene;
    id <contactVerifyLogicDelegate> m_delegate;
}

@property(nonatomic) _Bool m_bNotShowAlert; // @synthesize m_bNotShowAlert;
@property(nonatomic) __weak id <contactVerifyLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isBrandAccount;
- (_Bool)isEnterpriseBrand;
- (void)ProcessStrangerContactTagByName:(id)arg1;
- (void)handleVerifyOk:(id)arg1;
- (id)getErrorTitle;
- (void)startForSendVerifyMsg:(id)arg1 parentView:(id)arg2 verifyMsg:(id)arg3;
- (void)startWithVerifyContactWrap:(id)arg1 opCode:(unsigned int)arg2 parentView:(id)arg3 fromChatRoom:(_Bool)arg4;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateWordCount:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showVerifyAlert;
- (void)addTextField:(id)arg1;
- (double)getTextFieldTopMargin;
- (id)getAlertMessage;
- (id)getAlertTitle;
- (void)onSendContactVerify:(id)arg1;
- (void)doVerifyByAlertView:(id)arg1;
- (void)dealloc;
- (_Bool)doVerify:(id)arg1;
- (void)SaveToLocalDB;
- (_Bool)needSetSayHelloStatus;
- (_Bool)needSaveToLocalDB;
- (id)filterString:(id)arg1;
- (void)stopLoadingAndShowOK;
- (void)stopLoading;
- (void)startLoading;
- (id)getLoadingOkText;
- (id)getLoadingText;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

