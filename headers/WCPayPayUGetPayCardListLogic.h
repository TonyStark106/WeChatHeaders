//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMUIViewControllerDelegate.h"
#import "WCBaseControlLogicDeleagte.h"

@class NSString;

@interface WCPayPayUGetPayCardListLogic : WCPayControlLogic <MMUIViewControllerDelegate, WCBaseControlLogicDeleagte>
{
    int scene;
}

@property(nonatomic) int scene; // @synthesize scene;
- (id)getViewController;
- (void)OnPayUBindQueryResponseStatus:(id)arg1 Error:(id)arg2;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

