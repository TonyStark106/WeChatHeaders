//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, PushMailWrap;

@protocol MMReadMailViewDelegate <NSObject>

@optional
- (CMessageWrap *)getNextMessageWrap;
- (CMessageWrap *)getLastMessageWrap;
- (PushMailWrap *)getNextPushMailWrap;
- (PushMailWrap *)getLastPushMailWrap;
- (void)deleteMail:(CMessageWrap *)arg1;
@end

