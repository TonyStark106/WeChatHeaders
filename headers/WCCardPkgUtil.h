//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCCardPkgUtil : NSObject
{
}

+ (_Bool)ShouldShowWaterMark:(id)arg1;
+ (_Bool)IsWCCardTransferAppServiceInPlane:(id)arg1;
+ (void)openMyPackageEntrance;
+ (void)uploadKVPageName:(id)arg1 cardType:(unsigned int)arg2 cardTpID:(id)arg3 cardID:(id)arg4;
+ (void)uploadKVPageName:(id)arg1 cardType:(unsigned int)arg2 cardTpID:(id)arg3 cardID:(id)arg4 hasTip:(_Bool)arg5 fromScene:(unsigned int)arg6 ChattingName:(id)arg7 HasAnnounce:(_Bool)arg8;
+ (id)CardData2WCUploadTask:(id)arg1 CardExt:(id)arg2;
+ (void)mergeCardData:(id)arg1 cardItem:(id)arg2 toMessageWrap:(id)arg3;
+ (id)getCardDisplayAuxTitle:(id)arg1;
+ (id)getCardDisplaySubTitle:(id)arg1;
+ (id)getCardDisplayTitle:(id)arg1;
+ (id)getDistance:(unsigned int)arg1;
+ (id)getViewBackgroundColor;
+ (id)getListViewBackgroundColor;
+ (_Bool)isFromOutAppSence:(unsigned int)arg1;
+ (_Bool)isFromFriendFeedScene:(unsigned int)arg1;
+ (_Bool)isFromFriendSence:(unsigned int)arg1;
+ (_Bool)isFromMyselfSence:(unsigned int)arg1;
+ (_Bool)isFromAppSence:(unsigned int)arg1;
+ (_Bool)isEnoughCardInfoToShow:(id)arg1;
+ (id)getDefaultCardTypeName:(unsigned int)arg1;
+ (_Bool)isShownInListCardStatus:(unsigned int)arg1;
+ (_Bool)isKnownCardType:(unsigned int)arg1;
+ (id)getWCCardPkgConfigPath;
+ (id)getWCCardPkgMsgTipsPath;
+ (id)getWCCardPkgDBPath;
+ (id)getWCCardPkgSyncBufferPath;
+ (id)getUserWCCardPkgRootDir;

@end

