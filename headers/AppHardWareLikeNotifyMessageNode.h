//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class UIImageView;

@interface AppHardWareLikeNotifyMessageNode : BaseMessageNodeView
{
    UIImageView *m_oArrowImageView;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onMoreOperate:(id)arg1;
- (void)showOpearation;
- (void)onClick;
- (void)updateBkgImage:(_Bool)arg1;
- (void)layoutSubviewsInternal;
- (void)reLayoutSubviews;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (id)getBackgroundImageHL;
- (id)getBackgroundImage;

@end

