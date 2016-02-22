//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMBadgeView, MMCPLabel, MMGroupView, MMHeadImageView, MainFrameCellData, UIImageView, UILabel;

@interface MainFrameItemView : UIView
{
    MainFrameCellData *m_cellData;
    MMHeadImageView *m_frameHeadView;
    MMBadgeView *m_unreadCountView;
    MMCPLabel *m_nameLabel;
    UILabel *m_timeLabel;
    UILabel *m_greenLabel;
    UIImageView *m_statusView;
    MMCPLabel *m_messageLabel;
    UIImageView *m_chatNotPushView;
    UIImageView *m_wxtalkTipsView;
    UIImageView *m_trackRoomTipsView;
    MMGroupView *m_groupView;
}

@property(retain, nonatomic) MainFrameCellData *m_cellData; // @synthesize m_cellData;
- (void).cxx_destruct;
- (void)setLabelHighlighted:(_Bool)arg1;
- (void)updateWithCellData:(id)arg1;
- (void)updateBackgroundColor;
- (void)updateStatusView;
- (_Bool)isShowPluginStatus;
- (void)updateUnreadCountView;
- (void)updateHeadView;
- (void)updateMessageForSingle;
- (void)updateMessageForChatRoom;
- (void)updateMessageLabel;
- (void)removeQuoteMessageLabel;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2 subfixText:(id)arg3;
- (void)updateGroupView;
- (void)updateNameLabel;
- (id)getLabelNameColor;
- (void)updateTimeLabel;
- (void)updateTimeForTimer;
- (void)layoutSubviews;
- (void)initSubview;
- (void)initGroupView;
- (void)initNameLabel;
- (id)initWithCellData:(id)arg1 frame:(struct CGRect)arg2;

@end

