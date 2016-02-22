//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageWrapExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfVideo : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiVideoLen;
    unsigned int m_uiVideoTime;
    unsigned int m_uiUploadStatus;
    unsigned int m_uiVideoOffset;
    unsigned int m_uiCameraType;
    unsigned int m_uiVideoSource;
    NSString *m_nsAesKey;
    NSString *m_nsMsgDataUrl;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbAesKey;
    unsigned int m_uiMsgThumbSize;
    unsigned int m_uiMsgThumbWidth;
    unsigned int m_uiMsgThumbHeight;
    NSString *m_nsCommentUrl;
    NSString *m_nsFileParam;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4 retMessageWrap:(id *)arg5;
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(retain, nonatomic) NSString *m_nsFileParam; // @synthesize m_nsFileParam;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsCommentUrl; // @synthesize m_nsCommentUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(nonatomic) unsigned int m_uiVideoTime; // @synthesize m_uiVideoTime;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned int m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned int m_uiVideoLen; // @synthesize m_uiVideoLen;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiCameraType; // @synthesize m_uiCameraType;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
- (void).cxx_destruct;
- (void)SetPlayed;
- (_Bool)IsUnPlayed;
- (_Bool)IsDownloadEnded;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (void)UpdateVideoStatus:(id)arg1;
- (void)ChangeForBackup;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
