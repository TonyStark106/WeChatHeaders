//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayUBalanceInfo : NSObject
{
    NSString *m_balance_bank_type;
    NSString *m_balance_bind_serial;
    NSString *m_total_balance;
    NSString *m_avail_balance;
    NSString *m_frozen_balance;
    NSString *m_fetch_balance;
    NSString *m_balance_list_url;
    NSString *m_balance_forbid_word;
}

@property(retain, nonatomic) NSString *m_balance_forbid_word; // @synthesize m_balance_forbid_word;
@property(retain, nonatomic) NSString *m_balance_list_url; // @synthesize m_balance_list_url;
@property(retain, nonatomic) NSString *m_fetch_balance; // @synthesize m_fetch_balance;
@property(retain, nonatomic) NSString *m_frozen_balance; // @synthesize m_frozen_balance;
@property(retain, nonatomic) NSString *m_avail_balance; // @synthesize m_avail_balance;
@property(retain, nonatomic) NSString *m_total_balance; // @synthesize m_total_balance;
@property(retain, nonatomic) NSString *m_balance_bind_serial; // @synthesize m_balance_bind_serial;
@property(retain, nonatomic) NSString *m_balance_bank_type; // @synthesize m_balance_bank_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

