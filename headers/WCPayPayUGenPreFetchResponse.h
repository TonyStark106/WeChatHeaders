//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayUGenPreFetchResponse : NSObject
{
    unsigned int m_errCode;
    NSString *m_errMsg;
    NSString *m_prepayid;
}

@property(retain, nonatomic) NSString *m_prepayid; // @synthesize m_prepayid;
@property(retain, nonatomic) NSString *m_errMsg; // @synthesize m_errMsg;
@property(nonatomic) unsigned int m_errCode; // @synthesize m_errCode;
- (void).cxx_destruct;
- (void)dealloc;

@end

