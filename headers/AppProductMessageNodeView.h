//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class UILabel;

@interface AppProductMessageNodeView : BaseMessageNodeView
{
    UILabel *titleLabel;
    UILabel *descLabel;
    double m_width;
    double m_height;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onMoreOperate:(id)arg1;
- (void)showOpearation;
- (void)onClick;
- (void)updateThumbImage;
- (id)genCenterImage:(id)arg1;
- (void)updateBkgImage:(_Bool)arg1;
- (void)onClearResource;
- (void)onDisappear;
- (void)updateStatus:(id)arg1;
- (void)layoutSubviewsInternal;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (id)getBackgroundImageHL;
- (id)getBackgroundImage;

@end

