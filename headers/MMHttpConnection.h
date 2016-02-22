//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableData, NSString, NSTimer, NSURLConnection;

@interface MMHttpConnection : MMObject
{
    unsigned int mStatusCode;
    NSString *m_nsFileName;
    NSTimer *m_tmCheckTimeOut;
    unsigned int m_uiHttpType;
    NSString *m_nsNotifyKey;
    unsigned int m_uiContentLen;
    id <MMHttpConnectionDelegate><NSObject> mDelegate;
    _Bool m_bGZip;
    _Bool isWebp;
    unsigned int mConnProto;
    NSURLConnection *mUrlConn;
    NSMutableData *mRecvData;
    NSString *mCacheKey;
    double timeInterval;
}

@property(nonatomic) double timeInterval; // @synthesize timeInterval;
@property(nonatomic) _Bool isWebp; // @synthesize isWebp;
@property(retain, nonatomic) NSString *m_nsNotifyKey; // @synthesize m_nsNotifyKey;
@property(nonatomic) unsigned int m_uiHttpType; // @synthesize m_uiHttpType;
@property(retain, nonatomic) NSTimer *m_tmCheckTimeOut; // @synthesize m_tmCheckTimeOut;
@property(retain, nonatomic) NSString *m_nsFileName; // @synthesize m_nsFileName;
@property(nonatomic) unsigned int mConnProto; // @synthesize mConnProto;
@property(retain, nonatomic) NSString *mCacheKey; // @synthesize mCacheKey;
@property(retain, nonatomic) NSMutableData *mRecvData; // @synthesize mRecvData;
@property(retain, nonatomic) NSURLConnection *mUrlConn; // @synthesize mUrlConn;
- (void).cxx_destruct;
- (void)TimeOut;
- (void)cancelRequest;
- (_Bool)spostWithURL:(id)arg1 body:(id)arg2 boundary:(id)arg3;
- (_Bool)sgetWithURL:(id)arg1;
- (_Bool)getWithURL:(id)arg1 andRefererHeader:(id)arg2;
- (_Bool)getWithURL:(id)arg1;
- (void)dealloc;
- (void)CancelTimer;
- (id)initWithProtocol:(unsigned int)arg1 andDelegate:(id)arg2;

@end

