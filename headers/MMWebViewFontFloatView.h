//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIButton.h"

#import "MMStepSliderDelegate.h"

@class MMStepSlider, NSString, UIImageView;

@interface MMWebViewFontFloatView : MMUIButton <MMStepSliderDelegate>
{
    UIImageView *viewBg;
    unsigned int m_uiFontType;
    MMStepSlider *m_slider;
    id <MMWebViewFontFloatViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <MMWebViewFontFloatViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)slideOut;
- (void)showUp;
- (void)delayShow;
- (id)initWithFontType:(unsigned int)arg1 attachToView:(id)arg2;
- (void)onClose;
- (void)mmSliderViewChange:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

