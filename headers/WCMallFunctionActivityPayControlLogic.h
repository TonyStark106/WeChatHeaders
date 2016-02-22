//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCMallControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "WCMallMallProductsViewControllerDelegate.h"

@class NSString, WCPayControlData;

@interface WCMallFunctionActivityPayControlLogic : WCMallControlLogic <WCMallMallProductsViewControllerDelegate, IWCPayControlLogicExt>
{
    WCPayControlData *m_oPayData;
    _Bool m_bNeedFirstGotoWCMallProductView;
}

@property(nonatomic) _Bool m_bNeedFirstGotoWCMallProductView; // @synthesize m_bNeedFirstGotoWCMallProductView;
- (void).cxx_destruct;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)checkSuccessStopCurrentLogic;
- (void)OnGetWCMallLatestFunctionProductInfo:(id)arg1 latestFlowProducts:(id)arg2 Remarks:(id)arg3 ResponseRemarks:(id)arg4 Error:(id)arg5;
- (void)OnGetWCMallFunctionProductList:(id)arg1 FunctionId:(unsigned int)arg2 BalanceUrl:(id)arg3 RechargeUrl:(id)arg4 BalanceWord:(id)arg5 RechargeWord:(id)arg6 Error:(id)arg7;
- (void)OnGetWCMallFunctionList:(id)arg1 GlobalList:(id)arg2 BroadCastInfo:(id)arg3 BannerList:(id)arg4 FromCached:(_Bool)arg5 NotShowTutorial:(_Bool)arg6 Error:(id)arg7;
- (void)OnWCMallTelephoneInputComplete:(id)arg1;
- (void)OnWCmallMallProductsClearOldList;
- (unsigned int)GetWCMallMallProductsAllListCount;
- (id)GetWCMallMallProductsFiltedOldList;
- (_Bool)IsUsedWCMallMallProduct;
- (void)OnWCMallMallProductsViewControllerPay:(id)arg1;
- (void)OnWCMallMallProductsViewControllerProductSelected:(id)arg1;
- (void)OnWCMallMallProductsViewControllerRightActionBack;
- (void)OnWCMallMallProductsViewControllerBack;
- (void)dealloc;
- (void)stopLogic;
- (void)startLogic;
- (void)SetPayData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

