//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayConfirmTransferResponse : NSObject
{
    long long m_llFee;
    NSString *m_nsFeeType;
    NSString *m_nsPayer;
    NSString *m_nsReceiver;
}

@property(retain, nonatomic) NSString *m_nsReceiver; // @synthesize m_nsReceiver;
@property(retain, nonatomic) NSString *m_nsPayer; // @synthesize m_nsPayer;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType;
@property(nonatomic) long long m_llFee; // @synthesize m_llFee;
- (void).cxx_destruct;
- (void)dealloc;

@end
