//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SightMainframeIconView : UIView
{
    UIView *m_content;
    UIImageView *m_cameraMask;
    _Bool m_trigCamera;
    _Bool m_cameraTargetState;
    _Bool m_delayStopCamera;
    unsigned int m_stopID;
}

- (void).cxx_destruct;
- (void)stopCameraImplement:(unsigned int)arg1;
- (void)unTrigIcon;
- (void)releaseCameraState;
- (void)stopCamera;
- (void)trigCamera;
- (void)updateBlurImage;
- (void)onCameraReady;
- (id)makeNewCameraMask;
- (struct CGPoint)getIcontCenter;
- (void)setProgress:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

