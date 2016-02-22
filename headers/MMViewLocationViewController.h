//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILocationMgrExt.h"
#import "IScanStreetViewMgrExt.h"
#import "NavigateLogicControllerDelegate.h"
#import "QMapViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class AnnotationLogicController, MMUILabel, MMUIView, NSString, NSTimer, NSURL, NavigateLogicController, POIInfo, QMapView, UIButton, UnderLineLabel;

@interface MMViewLocationViewController : MMUIViewController <QMapViewDelegate, WCActionSheetDelegate, ILocationMgrExt, UIAlertViewDelegate, NavigateLogicControllerDelegate, IScanStreetViewMgrExt>
{
    _Bool _canAddToFav;
    _Bool _canSendToFriend;
    _Bool _directShowDirection;
    _Bool _isLoadFinish;
    _Bool _isMapRegionChanging;
    _Bool _showTrackButton;
    unsigned long long _headingTag;
    double _trueHeading;
    NSURL *_streetViewUrl;
    POIInfo *_poiInfo;
    NSString *_chatname;
    NSString *_messageLocalID;
    UIButton *_myLocationButton;
    UIButton *_streetButton;
    QMapView *_mapView;
    NSTimer *_updateUserLocationTimer;
    UnderLineLabel *_infoLabel;
    NavigateLogicController *_navigateLogicController;
    AnnotationLogicController *_annotationLogicController;
    id <ViewLocationDelegate> _delegate;
    NSString *fromUsername;
    NSString *_messageSvrID;
    MMUIView *_addressDetailContainerView;
    MMUILabel *_addressMainLabel;
    MMUILabel *_addressSubLabel;
    UIButton *_addressDetailBtn;
    UIButton *_addressNavigationBtn;
}

@property(retain, nonatomic) UIButton *addressNavigationBtn; // @synthesize addressNavigationBtn=_addressNavigationBtn;
@property(retain, nonatomic) UIButton *addressDetailBtn; // @synthesize addressDetailBtn=_addressDetailBtn;
@property(retain, nonatomic) MMUILabel *addressSubLabel; // @synthesize addressSubLabel=_addressSubLabel;
@property(retain, nonatomic) MMUILabel *addressMainLabel; // @synthesize addressMainLabel=_addressMainLabel;
@property(retain, nonatomic) MMUIView *addressDetailContainerView; // @synthesize addressDetailContainerView=_addressDetailContainerView;
@property(retain, nonatomic) NSString *messageSvrID; // @synthesize messageSvrID=_messageSvrID;
@property(nonatomic) __weak id <ViewLocationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) _Bool directShowDirection; // @synthesize directShowDirection=_directShowDirection;
@property(nonatomic) _Bool canSendToFriend; // @synthesize canSendToFriend=_canSendToFriend;
@property(nonatomic) _Bool canAddToFav; // @synthesize canAddToFav=_canAddToFav;
@property(retain, nonatomic) NSString *messageLocalID; // @synthesize messageLocalID=_messageLocalID;
@property(retain, nonatomic) NSString *fromUsername; // @synthesize fromUsername;
@property(readonly, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
- (void).cxx_destruct;
- (id)getStreetViewUrl;
- (void)onPushViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)onPresentViewControlelr:(id)arg1 Animated:(_Bool)arg2;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)showDirection;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)setAnnotation:(id)arg1 Coordinate:(CDStruct_c3b9c2ee)arg2 Animated:(_Bool)arg3 Duration:(float)arg4;
- (_Bool)isOnUserLocation:(CDStruct_c3b9c2ee)arg1;
- (void)stopUpdateUserLocation;
- (void)startUpdateUserLocation;
- (void)stopTimerCheckUserLocation;
- (void)startTimerCheckUserLocation;
- (void)onTimerUpdateLocation;
- (id)getUserLocation;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)stopUpdateTrueHeading;
- (void)startUpdateTrueHeading;
- (void)favAddLocItemWithRemark:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnSendStreetViewLocation:(id)arg1 Err:(int)arg2;
- (void)openStreetView;
- (void)startGetStreetViewUrl;
- (void)onNavigateToPOI:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (void)onReturn;
- (void)onDelayDismissMyself;
- (void)startTrack:(id)arg1;
- (void)onStartTrack;
- (void)onMyLocationButtonClick;
- (void)setPOICalloutShow:(_Bool)arg1;
- (void)onClickInfo:(id)arg1;
- (void)stopViewingLocation;
- (void)startViewingLocation;
- (id)getLocationText:(CDStruct_c3b9c2ee)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadStreetBtn;
- (void)initAddressDetailView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (id)initWithChatname:(id)arg1 POIInfo:(id)arg2 ShowTrackButton:(_Bool)arg3;
- (void)setPoiInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

