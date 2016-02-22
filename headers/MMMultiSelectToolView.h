//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIImageView;

@interface MMMultiSelectToolView : MMUIView
{
    UIImageView *m_bkgView;
    UIButton *m_btnForward;
    UIButton *m_btnFavAdd;
    UIButton *m_btnDelete;
    UIButton *m_btnMore;
    id <MMMultiSelectToolViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <MMMultiSelectToolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onBtnClicked:(id)arg1;
- (void)updateButtons;
- (_Bool)hasAnySupportContactsByMsgWrap;
- (void)updateBtnsWithSelectCount:(unsigned int)arg1;
- (id)createBtnWithImg:(id)arg1 HLImg:(id)arg2 Tag:(long long)arg3;
- (void)initButtonForRelease;
- (void)layoutSubviews;
- (void)initSubView;
- (id)init;

@end

