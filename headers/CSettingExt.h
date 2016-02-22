//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSMutableDictionary, NSString;

@interface CSettingExt : NSObject <NSCoding>
{
    unsigned int m_iPlayTipsCounter;
    NSString *m_nsMobile;
    _Bool m_bAllowSearchAddressBook;
    _Bool m_bHasConfirmSearchAddressBook;
    _Bool m_bHasClickBindPhoneView;
    _Bool m_bPitchShift;
    int m_iPitchShift;
    unsigned int m_iVideoCameraPos;
    unsigned int m_iMatteCameraPos;
    unsigned int m_iMatteFlashStatus;
    _Bool m_isLBSPromptNotShowAgain;
    _Bool m_isShakePromptNotShowAgain;
    _Bool m_isWXTalkPromptNotShowAgain;
    _Bool m_isEmoticonPanelNewNotCausedByUpdate;
    _Bool m_isExistNewBrandServiceTip;
    _Bool m_isExistNewBrandSubscriptionTip;
    _Bool m_bIsSyncPhoneContactsLogined;
    unsigned long long m_uiCloudContactsAmount;
    _Bool m_bIsSyncReminderOn;
    NSDate *m_LBSDataValidateTime;
    _Bool m_isForceEarpieceMode;
    _Bool m_hasShowQRCodeTip;
    unsigned int m_uiLastDownloadEmojiArtTime;
    unsigned int m_uiSyncAddressBookLocalMode;
    _Bool m_bSavePhotoWhenTake;
    _Bool m_bUploadHDImage;
    unsigned int m_uiImageSourceType;
    _Bool m_bReadMailShowDetail;
    unsigned int m_uiMatteHistoryOrder;
    _Bool m_bShowReaderSettingTip;
    _Bool m_bAlbumSyncMicroblog;
    unsigned int m_uiFontSize;
    _Bool m_bIsUsingSystemFont;
    unsigned int m_uiLbsOpCode;
    _Bool m_hideWCTimelineEventNotification;
    long long m_showIntroViewTimes;
    _Bool m_bOpenRemoteControl;
    _Bool m_bHasUseVideoVoip;
    _Bool m_bHasUseWXTalk;
    _Bool m_autoPlay;
    unsigned int m_uiLastAlertVoipTime;
    unsigned int m_uiLastAlertRemindTime;
    _Bool m_bNoShowPushTip;
    _Bool m_bMusicCyclePlay;
    _Bool m_bMusicListPlay;
    _Bool m_bMusicOrderPlay;
    _Bool m_bMonitorMemory;
    _Bool m_bFeatureLogViewInRealTime;
    long long m_cameraFlashMode;
    NSMutableDictionary *m_dicSetting;
    _Bool m_bHaveCheckedSetPassword;
    _Bool m_bHaveUploadWholeAddress;
    _Bool m_bShakeMusicOpen;
    _Bool m_bMultiFavAddOpen;
    NSString *m_nsTransFromLang;
    NSString *m_nsTransToLang;
    NSString *m_nsImagePickerAlbum;
    _Bool m_bImagePickerForcedOldVersion;
    _Bool m_bOpenJSDebug;
    unsigned int m_playVoiceTimes;
    unsigned int m_lastBrandMsgSvrID;
    long long m_n64LastBrandMsgSvrID;
    _Bool m_bOverseasCardIsNoOpenProtocal;
    _Bool m_bTitOfflinePayShow;
    _Bool m_bShowShareLocationTip;
    _Bool m_bShowKeepSharingLocationTip;
    _Bool m_bFirstDeleteChatRoomThatNotSaveToContact;
    _Bool m_bShowTranslateIntroTip;
    _Bool m_bOpenVoicePrintPwd;
    _Bool m_bHasAlreadyEnterVoicePrintPwd;
    _Bool m_bMyPackageShow;
    unsigned int m_uiLastGetCardCountTime;
    _Bool m_hasEnterCardList;
    _Bool m_hasEnterCardDetail;
    _Bool m_bShowAttatchmentTransferNew;
    _Bool m_bShowAttachmentRedEnvelopesNew;
    _Bool m_bShowAttatchmentServiceNew;
    _Bool m_bHasShowMuteTips;
    unsigned int m_uScrollTopTipShowCount;
    unsigned int m_curLockVersion;
    unsigned int m_patternLockLastBlockTime;
    unsigned int m_patternLockLastEnterTime;
    unsigned int m_patternLockVCLastEnterTime;
    unsigned int m_patternLockLeftInputTime;
    _Bool m_shakeToSight;
    int m_sendPhotoOpFlow;
    _Bool m_bHasNotifyTouchIDAuth;
    _Bool m_bTouchIDAuthSwitch;
    int m_mailUnreadCountCache;
    unsigned int m_uLastResourceUpdateTime;
    int m_tencentMapRecommendCount;
    NSDate *m_dontDisturbTillDate;
    _Bool m_hasShowCardNew;
    _Bool _m_bIsNewFavUI;
    unsigned int m_nextADLogReportTime;
    long long m_nMonitorResource;
}

@property(nonatomic) _Bool m_bIsNewFavUI; // @synthesize m_bIsNewFavUI=_m_bIsNewFavUI;
@property(nonatomic) unsigned int m_uLastResourceUpdateTime; // @synthesize m_uLastResourceUpdateTime;
@property(retain, nonatomic) NSDate *m_dontDisturbTillDate; // @synthesize m_dontDisturbTillDate;
@property(nonatomic) int m_tencentMapRecommendCount; // @synthesize m_tencentMapRecommendCount;
@property(nonatomic) unsigned int m_nextADLogReportTime; // @synthesize m_nextADLogReportTime;
@property(nonatomic) int m_mailUnreadCountCache; // @synthesize m_mailUnreadCountCache;
@property(nonatomic) _Bool m_bTouchIDAuthSwitch; // @synthesize m_bTouchIDAuthSwitch;
@property(nonatomic) _Bool m_bHasNotifyTouchIDAuth; // @synthesize m_bHasNotifyTouchIDAuth;
@property(nonatomic) int m_sendPhotoOpFlow; // @synthesize m_sendPhotoOpFlow;
@property(nonatomic) _Bool m_shakeToSight; // @synthesize m_shakeToSight;
@property(nonatomic) unsigned int m_patternLockLeftInputTime; // @synthesize m_patternLockLeftInputTime;
@property(nonatomic) unsigned int m_patternLockVCLastEnterTime; // @synthesize m_patternLockVCLastEnterTime;
@property(nonatomic) unsigned int m_patternLockLastEnterTime; // @synthesize m_patternLockLastEnterTime;
@property(nonatomic) unsigned int m_patternLockLastBlockTime; // @synthesize m_patternLockLastBlockTime;
@property(nonatomic) unsigned int m_curLockVersion; // @synthesize m_curLockVersion;
@property(nonatomic) unsigned int m_uScrollTopTipShowCount; // @synthesize m_uScrollTopTipShowCount;
@property(nonatomic) _Bool m_bHasShowMuteTips; // @synthesize m_bHasShowMuteTips;
@property(nonatomic) _Bool m_bShowAttatchmentTransferNew; // @synthesize m_bShowAttatchmentTransferNew;
@property(nonatomic) _Bool m_bShowAttachmentRedEnvelopesNew; // @synthesize m_bShowAttachmentRedEnvelopesNew;
@property(nonatomic) _Bool m_bShowAttatchmentServiceNew; // @synthesize m_bShowAttatchmentServiceNew;
@property(nonatomic) _Bool m_hasShowCardNew; // @synthesize m_hasShowCardNew;
@property(nonatomic) _Bool m_hasEnterCardDetail; // @synthesize m_hasEnterCardDetail;
@property(nonatomic) _Bool m_hasEnterCardList; // @synthesize m_hasEnterCardList;
@property(nonatomic) unsigned int m_uiLastGetCardCountTime; // @synthesize m_uiLastGetCardCountTime;
@property(nonatomic) _Bool m_bMyPackageShow; // @synthesize m_bMyPackageShow;
@property(nonatomic) _Bool m_bHasAlreadyEnterVoicePrintPwd; // @synthesize m_bHasAlreadyEnterVoicePrintPwd;
@property(nonatomic) _Bool m_bOpenVoicePrintPwd; // @synthesize m_bOpenVoicePrintPwd;
@property(nonatomic) _Bool m_bShowTranslateIntroTip; // @synthesize m_bShowTranslateIntroTip;
@property(nonatomic) _Bool m_bFirstDeleteChatRoomThatNotSaveToContact; // @synthesize m_bFirstDeleteChatRoomThatNotSaveToContact;
@property(nonatomic) _Bool m_bShowKeepSharingLocationTip; // @synthesize m_bShowKeepSharingLocationTip;
@property(nonatomic) _Bool m_bShowShareLocationTip; // @synthesize m_bShowShareLocationTip;
@property(nonatomic) _Bool m_bTitOfflinePayShow; // @synthesize m_bTitOfflinePayShow;
@property(nonatomic) _Bool m_bOverseasCardIsNoOpenProtocal; // @synthesize m_bOverseasCardIsNoOpenProtocal;
@property(nonatomic) _Bool m_bFeatureLogViewInRealTime; // @synthesize m_bFeatureLogViewInRealTime;
@property(nonatomic) long long m_n64LastBrandMsgSvrID; // @synthesize m_n64LastBrandMsgSvrID;
@property(nonatomic) unsigned int m_playVoiceTimes; // @synthesize m_playVoiceTimes;
@property(nonatomic) long long m_nMonitorResource; // @synthesize m_nMonitorResource;
@property(nonatomic) _Bool m_bOpenJSDebug; // @synthesize m_bOpenJSDebug;
@property(nonatomic) _Bool m_bImagePickerForcedOldVersion; // @synthesize m_bImagePickerForcedOldVersion;
@property(retain, nonatomic) NSString *m_nsImagePickerAlbum; // @synthesize m_nsImagePickerAlbum;
@property(retain, nonatomic) NSString *m_nsTransToLang; // @synthesize m_nsTransToLang;
@property(retain, nonatomic) NSString *m_nsTransFromLang; // @synthesize m_nsTransFromLang;
@property(nonatomic) _Bool m_bMultiFavAddOpen; // @synthesize m_bMultiFavAddOpen;
@property(nonatomic) _Bool m_bShakeMusicOpen; // @synthesize m_bShakeMusicOpen;
@property(nonatomic) _Bool m_bHaveUploadWholeAddress; // @synthesize m_bHaveUploadWholeAddress;
@property(nonatomic) _Bool m_bHaveCheckedSetPassword; // @synthesize m_bHaveCheckedSetPassword;
@property(nonatomic) long long m_cameraFlashMode; // @synthesize m_cameraFlashMode;
@property(nonatomic) _Bool m_bMonitorMemory; // @synthesize m_bMonitorMemory;
@property(nonatomic) _Bool m_bMusicOrderPlay; // @synthesize m_bMusicOrderPlay;
@property(nonatomic) _Bool m_bMusicListPlay; // @synthesize m_bMusicListPlay;
@property(nonatomic) _Bool m_bMusicCyclePlay; // @synthesize m_bMusicCyclePlay;
@property(nonatomic) _Bool m_bNoShowPushTip; // @synthesize m_bNoShowPushTip;
@property(nonatomic) unsigned int m_uiLastAlertRemindTime; // @synthesize m_uiLastAlertRemindTime;
@property(nonatomic) unsigned int m_uiLastAlertVoipTime; // @synthesize m_uiLastAlertVoipTime;
@property(nonatomic) _Bool m_autoPlay; // @synthesize m_autoPlay;
@property(nonatomic) _Bool m_bHasUseWXTalk; // @synthesize m_bHasUseWXTalk;
@property(nonatomic) _Bool m_bHasUseVideoVoip; // @synthesize m_bHasUseVideoVoip;
@property(nonatomic) _Bool m_bOpenRemoteControl; // @synthesize m_bOpenRemoteControl;
@property(nonatomic) long long m_showIntroViewTimes; // @synthesize m_showIntroViewTimes;
@property(nonatomic) _Bool m_hideWCTimelineEventNotification; // @synthesize m_hideWCTimelineEventNotification;
@property(nonatomic) unsigned int m_uiLbsOpCode; // @synthesize m_uiLbsOpCode;
@property(nonatomic) _Bool m_bIsUsingSystemFont; // @synthesize m_bIsUsingSystemFont;
@property(nonatomic) unsigned int m_uiFontSize; // @synthesize m_uiFontSize;
@property(nonatomic) _Bool m_bAlbumSyncMicroblog; // @synthesize m_bAlbumSyncMicroblog;
@property(nonatomic) _Bool m_bShowReaderSettingTip; // @synthesize m_bShowReaderSettingTip;
@property(nonatomic) unsigned int m_uiMatteHistoryOrder; // @synthesize m_uiMatteHistoryOrder;
@property(nonatomic) _Bool m_bReadMailShowDetail; // @synthesize m_bReadMailShowDetail;
@property(nonatomic) unsigned int m_uiImageSourceType; // @synthesize m_uiImageSourceType;
@property(nonatomic) _Bool m_bUploadHDImage; // @synthesize m_bUploadHDImage;
@property(nonatomic) _Bool m_bSavePhotoWhenTake; // @synthesize m_bSavePhotoWhenTake;
@property(nonatomic) unsigned int m_uiSyncAddressBookLocalMode; // @synthesize m_uiSyncAddressBookLocalMode;
@property(nonatomic) unsigned int m_uiLastDownloadEmojiArtTime; // @synthesize m_uiLastDownloadEmojiArtTime;
@property(nonatomic) _Bool m_hasShowQRCodeTip; // @synthesize m_hasShowQRCodeTip;
@property(nonatomic) _Bool m_isForceEarpieceMode; // @synthesize m_isForceEarpieceMode;
@property(retain, nonatomic) NSDate *m_LBSDataValidateTime; // @synthesize m_LBSDataValidateTime;
@property(nonatomic) _Bool m_bIsSyncReminderOn; // @synthesize m_bIsSyncReminderOn;
@property(nonatomic) unsigned long long m_uiCloudContactsAmount; // @synthesize m_uiCloudContactsAmount;
@property(nonatomic) _Bool m_bIsSyncPhoneContactsLogined; // @synthesize m_bIsSyncPhoneContactsLogined;
@property(nonatomic) _Bool m_isExistNewBrandSubscriptionTip; // @synthesize m_isExistNewBrandSubscriptionTip;
@property(nonatomic) _Bool m_isExistNewBrandServiceTip; // @synthesize m_isExistNewBrandServiceTip;
@property(nonatomic) _Bool m_isEmoticonPanelNewNotCausedByUpdate; // @synthesize m_isEmoticonPanelNewNotCausedByUpdate;
@property(nonatomic) _Bool m_isWXTalkPromptNotShowAgain; // @synthesize m_isWXTalkPromptNotShowAgain;
@property(nonatomic) _Bool m_isShakePromptNotShowAgain; // @synthesize m_isShakePromptNotShowAgain;
@property(nonatomic) _Bool m_isLBSPromptNotShowAgain; // @synthesize m_isLBSPromptNotShowAgain;
@property(nonatomic) unsigned int m_iMatteFlashStatus; // @synthesize m_iMatteFlashStatus;
@property(nonatomic) unsigned int m_iMatteCameraPos; // @synthesize m_iMatteCameraPos;
@property(nonatomic) unsigned int m_iVideoCameraPos; // @synthesize m_iVideoCameraPos;
@property(nonatomic) int m_iPitchShift; // @synthesize m_iPitchShift;
@property(nonatomic) _Bool m_bPitchShift; // @synthesize m_bPitchShift;
@property(nonatomic) _Bool m_bHasClickBindPhoneView; // @synthesize m_bHasClickBindPhoneView;
@property(nonatomic) _Bool m_bHasConfirmSearchAddressBook; // @synthesize m_bHasConfirmSearchAddressBook;
@property(nonatomic) _Bool m_bAllowSearchAddressBook; // @synthesize m_bAllowSearchAddressBook;
@property(copy, nonatomic) NSString *m_nsMobile; // @synthesize m_nsMobile;
@property(nonatomic) unsigned int m_iPlayTipsCounter; // @synthesize m_iPlayTipsCounter;
- (void).cxx_destruct;
- (void)setMyPackageHasShowNew:(_Bool)arg1;
- (void)setMyPackageShow:(_Bool)arg1;
- (id)getDicSetting;
- (void)theadSafeRemoveObjectForKey:(id)arg1;
- (void)theadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (id)theadSafeGetObject:(id)arg1;
- (int)getInt32ForKey:(id)arg1;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (void)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (_Bool)getBoolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)updateLastAlertRemindTime:(unsigned int)arg1;
- (void)setLBSFootstepShow:(_Bool)arg1;
- (_Bool)isLBSFootstepShow;
- (void)copyFromSettingExt:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

