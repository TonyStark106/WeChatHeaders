//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IOnlineClientMgrExt <NSObject>

@optional
- (void)onMarkTimelineListReadWithTid:(NSString *)arg1 andCreateTime:(unsigned long long)arg2;
- (void)onSecondaryDeviceActiveChanged:(_Bool)arg1;
- (void)onOnlineInfoUpdated;
- (void)onLogoutWeb;
- (void)onLoginWeb;
@end

