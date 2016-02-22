//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EmoticonDownloadProxy.h"

#import "NSURLConnectionDataDelegate.h"

@class NSObject, NSString, NSURLConnection;

@interface EmoticonCdnDownloadConnection : EmoticonDownloadProxy <NSURLConnectionDataDelegate>
{
    _Bool m_isActive;
    _Bool m_hasStartRequest;
    NSObject *m_userInfo;
    NSString *m_md5;
    NSString *m_cdnUrlString;
    NSURLConnection *m_urlConnection;
    NSString *m_productId;
    id <EmoticonDownloadProxyDelegate> _m_delegate;
}

+ (void)keyReportVerifyFailed;
+ (void)keyReportVerifyOk;
+ (void)keyReportDownloadFailed;
+ (void)keyReportDownloadOK;
@property(nonatomic) __weak id <EmoticonDownloadProxyDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_hasStartRequest; // @synthesize m_hasStartRequest;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId;
@property(retain, nonatomic) NSURLConnection *m_urlConnection; // @synthesize m_urlConnection;
@property(retain, nonatomic) NSString *m_cdnUrlString; // @synthesize m_cdnUrlString;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5;
@property(retain, nonatomic) NSObject *m_userInfo; // @synthesize m_userInfo;
- (void).cxx_destruct;
- (void)kvReportDownloadFailed;
- (void)kvReportDownloadOKAndVerifyFailed;
- (void)kvReportDownloadAndVerifyOK;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)callOkDelegateWithFilePath:(id)arg1;
- (void)callFailedDelegate;
- (void)startRequest;
- (_Bool)isActive;
- (void)clearDelegate;
- (id)initWithMd5:(id)arg1 withCdnUrl:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
