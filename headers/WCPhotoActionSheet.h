//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "IUiUtilExt.h"
#import "ImageScrollViewDelegate.h"
#import "MMPhotoLibraryDataProviderExt.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCPhotoActionSheetPhotoCellViewDelegate.h"

@class ImageScrollView, MMLoadingView, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL, UICollectionView, UIImageView, UIView;

@interface WCPhotoActionSheet : MMUIWindow <IUiUtilExt, UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMPhotoLibraryDataProviderExt, UIAlertViewDelegate, WCPhotoActionSheetPhotoCellViewDelegate, ImageScrollViewDelegate>
{
    _Bool _shouldHide;
    _Bool _shouldRelease;
    _Bool _needVideo;
    _Bool _hasSendPhoto;
    long long _destructiveButtonIndex;
    long long _cancelButtonIndex;
    unsigned long long _numberOfButtons;
    NSString *_title;
    long long _firstOtherButtonIndex;
    UIView *_customView;
    NSMutableArray *_buttonTitleList;
    NSString *_cancelButtonTitle;
    UIView *_pannelView;
    UIView *_titleView;
    UIView *_backgroundView;
    UIView *_containerView;
    long long _m_lastOrientation;
    id <WCPhotoActionSheetDelegate> _delegateEx;
    unsigned long long _photoMaxCount;
    NSArray *_assetsList;
    NSMutableArray *_selectedAssetsList;
    NSMutableArray *_buttonList;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imgSizeArr;
    NSURL *_videoInputUrl;
    NSURL *_videoOutputUrl;
    unsigned long long _lastSelectedAssetIndex;
    UICollectionView *_photoCollectionView;
    MMLoadingView *_loadingView;
    ImageScrollView *_imageScrollView;
    UIView *_imageMaskView;
    UIImageView *_floatCheckBox;
    struct CGRect _currentShowImgFrame;
}

+ (long long)getActionSheetWidth;
@property(retain, nonatomic) UIImageView *floatCheckBox; // @synthesize floatCheckBox=_floatCheckBox;
@property(retain, nonatomic) UIView *imageMaskView; // @synthesize imageMaskView=_imageMaskView;
@property(retain, nonatomic) ImageScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UICollectionView *photoCollectionView; // @synthesize photoCollectionView=_photoCollectionView;
@property(nonatomic) unsigned long long lastSelectedAssetIndex; // @synthesize lastSelectedAssetIndex=_lastSelectedAssetIndex;
@property(retain, nonatomic) NSURL *videoOutputUrl; // @synthesize videoOutputUrl=_videoOutputUrl;
@property(retain, nonatomic) NSURL *videoInputUrl; // @synthesize videoInputUrl=_videoInputUrl;
@property(nonatomic) struct CGRect currentShowImgFrame; // @synthesize currentShowImgFrame=_currentShowImgFrame;
@property(retain, nonatomic) NSMutableArray *imgSizeArr; // @synthesize imgSizeArr=_imgSizeArr;
@property(nonatomic) _Bool hasSendPhoto; // @synthesize hasSendPhoto=_hasSendPhoto;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *buttonList; // @synthesize buttonList=_buttonList;
@property(retain, nonatomic) NSMutableArray *selectedAssetsList; // @synthesize selectedAssetsList=_selectedAssetsList;
@property(retain, nonatomic) NSArray *assetsList; // @synthesize assetsList=_assetsList;
@property(nonatomic) _Bool needVideo; // @synthesize needVideo=_needVideo;
@property(nonatomic) unsigned long long photoMaxCount; // @synthesize photoMaxCount=_photoMaxCount;
@property(nonatomic) _Bool shouldRelease; // @synthesize shouldRelease=_shouldRelease;
@property(nonatomic) _Bool shouldHide; // @synthesize shouldHide=_shouldHide;
@property(nonatomic) __weak id <WCPhotoActionSheetDelegate> delegateEx; // @synthesize delegateEx=_delegateEx;
@property(nonatomic) long long m_lastOrientation; // @synthesize m_lastOrientation=_m_lastOrientation;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *pannelView; // @synthesize pannelView=_pannelView;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(retain, nonatomic) NSMutableArray *buttonTitleList; // @synthesize buttonTitleList=_buttonTitleList;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) long long firstOtherButtonIndex; // @synthesize firstOtherButtonIndex=_firstOtherButtonIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long numberOfButtons; // @synthesize numberOfButtons=_numberOfButtons;
- (void).cxx_destruct;
- (void)onSingleTap:(id)arg1;
- (void)onGetPhotoLibraryAssets:(id)arg1;
- (void)calCulateCollectionViewCellContentSize;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCompressedSuccess:(id)arg1;
- (void)onCompressEnd;
- (void)compressVideo:(id)arg1 andFileUrl:(id)arg2;
- (void)handleSendVideo:(id)arg1;
- (void)sendImages;
- (void)onWCPhotoActionSheetCellViewHighlight:(unsigned long long)arg1;
- (void)removeSelectedAsset:(id)arg1;
- (_Bool)isAssetSelected:(id)arg1;
- (void)updateButtonTitle;
- (void)handleV2CollectionViewSelectWithIndexPath:(id)arg1;
- (void)handleV1CollectionViewSelectWithIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateFloatCheckBoxWithCellSelectStatus:(_Bool)arg1;
- (void)updateFloatCheckBox;
- (void)makeFloatCheckBox;
- (void)makeImageScrollView;
- (void)makePhotoCollectionView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)OnCancel:(id)arg1;
- (void)OnDefaultButtonTapped:(id)arg1;
- (void)addTapRecognizer;
- (void)tapOut:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissWhenProcessPhotoDone;
- (void)stopLoading;
- (void)startLoading;
- (void)reloadInnerView:(id)arg1;
- (id)makePannelViewWithButtonList:(id)arg1 withCancelButtonTitle:(id)arg2;
- (id)makeTitleViewWithTitle:(id)arg1;
- (double)heightOfWholeSheet;
- (void)showInView:(id)arg1;
@property(nonatomic) long long destructiveButtonIndex; // @synthesize destructiveButtonIndex=_destructiveButtonIndex;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (void)setNeedDisplayVideo:(_Bool)arg1;
@property(nonatomic) __weak id <WCPhotoActionSheetDelegate> delegate;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)deviceDidRotate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)shouldHideOnRotate;
- (void)onStatusBarFrameChanged;
- (_Bool)accessibilityViewIsModal;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 photoMaxCount:(unsigned long long)arg3 isNeedVideo:(_Bool)arg4 cancelButtonTitle:(id)arg5 destructiveButtonTitle:(id)arg6 otherButtonTitles:(id)arg7;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

