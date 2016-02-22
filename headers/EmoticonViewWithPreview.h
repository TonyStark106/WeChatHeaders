//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CEmoticonWrap, MMEmoticonView, ThreeWayExpandImageView, UIImageView, UILabel;

@interface EmoticonViewWithPreview : MMUIView
{
    id <EmoticonViewWithPreviewDelegate> m_delegate;
    _Bool m_isPreviewing;
    MMEmoticonView *m_emoticonPreview;
    UIImageView *m_emoticonView;
    CEmoticonWrap *m_wrap;
    UIImageView *m_imageFocusView;
    ThreeWayExpandImageView *m_emoticonPreviewBack;
    UILabel *m_desLabel;
    struct CGSize m_previewSize;
}

@property(retain, nonatomic) UILabel *m_desLabel; // @synthesize m_desLabel;
@property(nonatomic) _Bool m_isPreviewing; // @synthesize m_isPreviewing;
@property(nonatomic) struct CGSize m_previewSize; // @synthesize m_previewSize;
@property(retain, nonatomic) ThreeWayExpandImageView *m_emoticonPreviewBack; // @synthesize m_emoticonPreviewBack;
@property(retain, nonatomic) UIImageView *m_imageFocusView; // @synthesize m_imageFocusView;
@property(retain, nonatomic) CEmoticonWrap *m_wrap; // @synthesize m_wrap;
@property(retain, nonatomic) UIImageView *m_emoticonView; // @synthesize m_emoticonView;
@property(retain, nonatomic) MMEmoticonView *m_emoticonPreview; // @synthesize m_emoticonPreview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hideFocusView;
- (void)showFocusView;
- (void)hidePreview;
- (void)showPreview;
- (void)changeWrap:(id)arg1;
- (void)updateDesc;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 EmoticonWrap:(id)arg2;
- (void)setPreviewSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

