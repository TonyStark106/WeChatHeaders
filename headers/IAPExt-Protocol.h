//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, iAPTransation;

@protocol IAPExt <NSObject>

@optional
- (void)onRestoreFail;
- (void)onRestoreSuccessForProduct:(NSArray *)arg1;
- (void)onPurchaseFailForProduct:(NSString *)arg1;
- (void)onPurchaseCancelForProduct:(NSString *)arg1;
- (void)onPurchaseSuccessForProduct:(iAPTransation *)arg1;
- (void)onGetProduct:(NSArray *)arg1 invalidProductID:(NSArray *)arg2;
@end

