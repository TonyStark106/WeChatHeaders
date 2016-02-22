//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavRecordBaseNodeView.h"

#import "FavSightViewDelegate.h"
#import "ICdnComMgrExt.h"

@class FavSightView, NSString;

@interface FavRecordSightNodeView : FavRecordBaseNodeView <FavSightViewDelegate, ICdnComMgrExt>
{
    FavSightView *m_sightView;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)restartDownload;
- (void)onExitFullScreen;
- (void)openVideoDetail;
- (void)onClick;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)addContentSubView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

