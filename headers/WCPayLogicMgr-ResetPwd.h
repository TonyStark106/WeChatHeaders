//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayLogicMgr.h"

@interface WCPayLogicMgr (ResetPwd)
- (void)SetWCPayPasswordInReset:(id)arg1 RepeatPassword:(id)arg2 PayKey:(id)arg3 VerifySMS:(id)arg4 isOverseasBankCard:(_Bool)arg5;
- (void)ResetWCPayPasswordVerifySMS:(id)arg1 RetKey:(id)arg2;
- (void)ResetWCPayPasswordVerifyCard:(id)arg1;
- (void)ModifyWCPayPassword:(id)arg1 NewWCPayPassword:(id)arg2 RepeatWCPayPassword:(id)arg3;
- (void)insideCallBackResetWCPayPasswordVerifySMS:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackResetWCPayPasswordVerifyCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackModifyWCPayPassword:(id)arg1 OnRequest:(id)arg2;
@end

