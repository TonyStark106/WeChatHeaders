//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseContact, CContact, CEmoticonWrap, CMessageNodeData, CMessageWrap, ImageInfo, MMInputToolView, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURL, ReaderWrap, ServiceAppData, UIBarButtonItem, UIImage, UIView, UIWindow;

@protocol BaseMsgContentDelgate <NSObject>
- (_Bool)ShouldShowMultiSelectMode;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (void)DeleteAtUserList;
- (void)AddAtUser:(NSString *)arg1;
- (NSString *)nameForHeadImageLongPressed:(CBaseContact *)arg1;
- (_Bool)canReloadViewIfMemoryWarning;
- (void)didSelectSearchResultForMessageWrap:(CMessageWrap *)arg1;
- (NSArray *)previewActionItems;
- (_Bool)ShouldShowSearchedAnyMsg;
- (_Bool)ShouldShowSearchResultMessageArray;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (_Bool)ShouldShowSearchBar;
- (NSString *)GetRightBarButtonTitle;
- (NSString *)GetRightBarButtonImageName;
- (void)StopPlaying:(CMessageWrap *)arg1;
- (void)StartPlaying:(CMessageWrap *)arg1 FromTouch:(_Bool)arg2;
- (_Bool)IsRecording;
- (void)CancelRecording;
- (void)StopRecording;
- (void)StartRecording;
- (CBaseContact *)GetContact;
- (void)onTextChange:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (UIImage *)GetTitleImage;
- (void)onSaveDraft;
- (void)onWillPushFromNavigationController;
- (void)onWillPopFromNavigationController;
- (void)onBackFromNavigationController;
- (void)onPopFromNavigationController;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (UIImage *)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (NSString *)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (unsigned int)NumberOfHeaderButtons;
- (void)ResendMessage:(CMessageWrap *)arg1;
- (void)StateChanged;
- (void)VoiceModeClicked;
- (void)ViewWillDisappear;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (NSString *)GetUsrTitleCPKey;
- (_Bool)isUsrTitleUnsafe;
- (NSString *)GetUsrTitleTail;
- (NSString *)GetUsrTitleFront;
- (NSString *)GetUsrTitle;
- (_Bool)HasCustomToolBar;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)OpenEmoticonToolView:(MMInputToolView *)arg1;
- (void)CustomToolViewEX:(MMInputToolView *)arg1;
- (_Bool)onLoadDownMoreMessage;
- (_Bool)onLoadMoreMessage;
- (void)onSendCaptrueImage:(NSURL *)arg1;
- (void)onOpenCameraController;
- (void)onOpenMediaBrowser;
- (void)DelMsgWithMsgList:(NSArray *)arg1 DelAll:(_Bool)arg2;
- (void)clearDownLeftCount;
- (void)clearLastCreateTime;
- (NSMutableArray *)GetMessageArray;
- (void)ShowReader:(ReaderWrap *)arg1;
- (void)PreviewImage:(CMessageWrap *)arg1;
- (void)onOpenServiceApp:(ServiceAppData *)arg1;
- (void)onRedEnvelopesControlLogic;
- (void)onTransferMoneyControlLogic;
- (void)onOpenServiceAppListController;
- (void)onOpenMyCardPkgViewController;
- (void)onOpenMyFavoritesListController;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)WXTalk;
- (void)ViewLocation:(CMessageWrap *)arg1;
- (void)SelectLocation:(_Bool)arg1;
- (void)ShareCard;
- (void)SendEmoticonMessage:(CEmoticonWrap *)arg1;
- (void)SendEmojiArtMessage:(NSString *)arg1;
- (void)SendTextMessage:(NSString *)arg1;
- (void)SendMessageWrap:(CMessageWrap *)arg1;
- (CMessageWrap *)GetMessageFromImage:(UIImage *)arg1;
- (void)SendImageMessage:(UIImage *)arg1 ImageInfo:(ImageInfo *)arg2;
- (_Bool)CanShowSight;
- (_Bool)CanShowBanner;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanRotateOrientation;
- (_Bool)CanWXTalk;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanAddApp;
- (_Bool)CanOpenCamera;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(UIImage *)arg1;
- (_Bool)CanSendTextMsg:(NSString *)arg1;
- (void)didShowFirstUnReadMessage;
- (void)setLastCreateTime:(unsigned long long)arg1;
- (NSMutableArray *)GetMessageArrayFrom:(unsigned int)arg1 createTime:(unsigned long long)arg2;
- (CMessageWrap *)GetFirstUnReadMessage;
- (NSMutableArray *)GetSearchedResultContentMessageArray;
- (NSMutableArray *)GetDownMessageArray;
- (void)OpenChatView:(CContact *)arg1;
- (void)OpenContactInfo:(CBaseContact *)arg1;
- (void)OpenDetailInfo;

@optional
- (void)onClickReceiveBrandMsg;
- (void)onClickShieldBrandMsg;
- (void)delChatroomMember:(CMessageWrap *)arg1 fromScene:(_Bool)arg2;
- (void)setExtraInfo;
- (NSMutableDictionary *)getExtraInfo;
- (NSString *)genMsgSource;
- (UIWindow *)getMsgImgFullScreenWindow;
- (void)hasTapReaderNodeView;
- (_Bool)shouldHideToolViewWhenKeyboardHide;
- (void)viewDidRotateToOrientation:(long long)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;
- (void)RevokeMsg:(CMessageWrap *)arg1;
- (void)SetMsgPlayed:(CMessageWrap *)arg1;
- (void)exitTracking;
- (void)openTrackRoom:(NSNumber *)arg1;
- (void)clearAtMeCount;
- (void)onInputTextDeleteAll;
- (void)onMultiMsgSelected:(NSMutableArray *)arg1 Username:(NSString *)arg2;
- (void)customCellContentForMsg:(CMessageNodeData *)arg1;
- (void)resetWithMessageWrap:(CMessageWrap *)arg1;
- (void)sendMultiMsgBySystemMail:(NSMutableArray *)arg1;
- (void)onMultiMsgDelete:(NSMutableArray *)arg1;
- (void)sendMultiMsgToBrandContact:(NSMutableArray *)arg1 To:(CContact *)arg2;
- (void)sendMultiMsgByMail:(NSMutableArray *)arg1;
- (void)sendMultiMsgToFriend:(NSMutableArray *)arg1;
- (void)addMultiMsgToMyFav:(NSMutableArray *)arg1;
- (void)toBeEditing:(_Bool)arg1;
- (UIBarButtonItem *)getLeftBarButton;
- (void)onMassSendSendAgain:(NSArray *)arg1;
- (_Bool)isShowHeadImage:(CMessageWrap *)arg1;
- (void)OnTagLink:(NSString *)arg1;
- (UIBarButtonItem *)GetRightBarBtn;
- (_Bool)hasDownMoreMsg;
- (_Bool)hasMoreMsg;
- (_Bool)canShowChatRoomInfo;
- (void)addGameNode:(CMessageNodeData *)arg1;
- (UIView *)getBackgroundView;
- (void)OnVideoPlayEnd:(CMessageWrap *)arg1 isForceStop:(_Bool)arg2;
- (void)StartPlayVideo:(CMessageWrap *)arg1;
- (void)StartDownloadShortVideo:(CMessageWrap *)arg1;
- (void)StartDownloadVideo:(CMessageWrap *)arg1;
- (void)StartUploadVideo:(CMessageWrap *)arg1;
- (void)StopDownloadVideo:(CMessageWrap *)arg1;
- (void)StopUploadVideo:(CMessageWrap *)arg1;
- (_Bool)NeedRightButtonRedDot;
- (UIImage *)GetTitleTailImage;
- (UIImage *)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
@end

