//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayLogicMgr.h"

@interface WCPayLogicMgr (MsgCenter)
- (_Bool)checkShouldHandleId:(long long)arg1;
- (void)AddNewTransferMsgRecord:(id)arg1;
- (_Bool)IsExistTransferMsgRecord:(id)arg1;
- (void)AddNewHBMsgRecord:(id)arg1;
- (_Bool)IsExistHBMsgRecord:(id)arg1;
- (void)handleWCPayBalanceDetail:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleWCPayMakeTransferMoneySuccessMsg:(id)arg1;
- (void)handleWCPayMakeHBSuccessMsg:(id)arg1;
- (void)handleWCPayFacingReceiveMoneyMsg:(id)arg1;
- (void)handleWCPayOrderNotifyMsg:(id)arg1;
- (void)handleWCPayFreezeOfflinePayMsg:(id)arg1;
- (void)handleWCPayOfflinePayRefreshTokenMsg:(id)arg1;
- (void)handleWCPayFreshPayCardListMsg:(id)arg1;
- (void)handleWCPayOfflinePayConfirmMsg:(id)arg1;
- (void)handleWCPayOfflinePaySuccessMsg:(id)arg1;
- (id)getDateTimeStringFromTimeStamp:(double)arg1;
- (id)readChildText:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (void)handlePaySuccessMsg:(id)arg1;
- (void)handleWCPayOfflinePayNotifyMsg:(id)arg1;
- (void)HandleWCPayOrderListStatusUpdate:(id)arg1;
@end

