//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol RecoverDataManagerDelegate <NSObject>

@optional
- (void)onAddUploadData:(NSString *)arg1 order:(unsigned long long)arg2;
- (void)onAddRecoverData:(NSString *)arg1 order:(unsigned long long)arg2;
@end

