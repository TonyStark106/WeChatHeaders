//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayRetrySendMsgRequest : NSObject
{
    NSString *m_nsTranscationID;
    NSString *m_nsReceiverUserName;
    unsigned long long m_uiInvalidTime;
}

@property(nonatomic) unsigned long long m_uiInvalidTime; // @synthesize m_uiInvalidTime;
@property(retain, nonatomic) NSString *m_nsReceiverUserName; // @synthesize m_nsReceiverUserName;
@property(retain, nonatomic) NSString *m_nsTranscationID; // @synthesize m_nsTranscationID;
- (void).cxx_destruct;
- (void)dealloc;

@end

