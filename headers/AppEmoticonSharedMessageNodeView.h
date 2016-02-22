//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class MMWebImageView, UILabel;

@interface AppEmoticonSharedMessageNodeView : BaseMessageNodeView
{
    UILabel *m_descLabel;
    UILabel *m_titleLabel;
    MMWebImageView *m_iconView;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
@property(retain, nonatomic) MMWebImageView *m_iconView; // @synthesize m_iconView;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel;
- (void).cxx_destruct;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onForward:(id)arg1;
- (void)onMoreOperate:(id)arg1;
- (void)showOpearation;
- (void)onClick;
- (id)genCenterImage:(id)arg1;
- (void)updateBkgImage:(_Bool)arg1;
- (void)onClearResource;
- (void)onDisappear;
- (void)updateStatus:(id)arg1;
- (id)genDescLabel;
- (id)genTitleLabel;
- (void)layoutSubviewsInternal;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (id)getBackgroundImageHL;
- (id)getBackgroundImage;
- (void)dealloc;

@end

