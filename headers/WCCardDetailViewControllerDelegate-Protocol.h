//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, WCCardData, WCCardDetailViewController;

@protocol WCCardDetailViewControllerDelegate <NSObject>

@optional
- (void)onWCCardDetailViewControllerCancel:(WCCardDetailViewController *)arg1;
- (void)onAcceptCardCancel;
- (void)onAcceptCardFail:(NSString *)arg1;
- (void)onAcceptCardSuccess:(NSString *)arg1;
- (void)onUseCard:(WCCardData *)arg1;
- (void)onUseCard:(WCCardData *)arg1 lastIndex:(NSIndexPath *)arg2 delayTime:(double)arg3;
- (void)onGiftCard:(WCCardData *)arg1 lastIndex:(NSIndexPath *)arg2;
- (void)onDeleteCard:(WCCardData *)arg1;
@end

