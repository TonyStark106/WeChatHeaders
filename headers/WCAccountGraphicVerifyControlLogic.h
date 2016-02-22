//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "PBMessageObserverDelegate.h"
#import "WCAccountGraphicVerifyViewControllerDelegate.h"

@class NSString;

@interface WCAccountGraphicVerifyControlLogic : WCAccountBaseControlLogic <WCAccountGraphicVerifyViewControllerDelegate, PBMessageObserverDelegate>
{
    _Bool m_bFromManualAuth;
    id <WCAccountGraphicVerifyControlLogicDelegate> m_delegate;
}

+ (_Bool)isGraphicVerifyError:(id)arg1;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGraphicVerifyChangeImage;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (_Bool)startAuth:(id)arg1;
- (void)startLogicFromManualAuth:(_Bool)arg1;
- (void)stopLogic;
- (void)parseImg;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

