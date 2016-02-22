//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavSightViewDelegate.h"
#import "FavVideoDetailDelegate.h"
#import "WCActionSheetDelegate.h"

@class FavForwardLogicController, FavSightView, NSString;

@interface FavSightDetailViewController : FavBaseDetailViewController <WCActionSheetDelegate, FavForwardLogicDelegate, FavSightViewDelegate, FavVideoDetailDelegate>
{
    FavForwardLogicController *m_favForwardController;
    FavSightView *m_sightView;
}

- (void).cxx_destruct;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnDownloadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onExitFullScreen;
- (void)OpenVideoFavItem:(id)arg1;
- (void)openVideoDetail;
- (void)restartDownload;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (id)getFavForawrdViewController;
- (void)initSightView;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

