//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, MsgImgPreviewData;

@protocol MsgImgFullScreenWindowDelegate <NSObject>

@optional
- (_Bool)needShowFastBrowseBtn;
- (void)onMsgImgPreviewDataRequired:(MsgImgPreviewData *)arg1;
- (void)onMsgImgWindowDidHideToMsg:(CMessageWrap *)arg1;
- (void)onMsgImgWindowWillHideToMsg:(CMessageWrap *)arg1;
- (void)onMsgImgWindowDidShowFromMsg:(CMessageWrap *)arg1;
- (void)onMsgImgWindowWillShowFromMsg:(CMessageWrap *)arg1;
@end

