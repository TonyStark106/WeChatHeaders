//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ILocationMgrExt.h"

@class CLHeading, LBSSystemCacheUpdater, NSMutableArray, NSTimer;

@interface LocationRetriever : NSObject <ILocationMgrExt>
{
    unsigned long long m_locationTag;
    unsigned long long m_headingTag;
    CLHeading *m_heading;
    _Bool m_bCanRepeatReportLocation;
    float m_requiredAccuracy;
    NSTimer *m_checkResultTimer;
    id <LocationRetrieveDelegate> m_delegate;
    NSMutableArray *m_recentLocationList;
    LBSSystemCacheUpdater *m_sysCacheUpdater;
    struct timeval m_tvStart;
    struct timeval m_tvFirst;
    _Bool m_bFirstRetriever;
    unsigned int m_firstRetrieverRange;
    _Bool m_bReport;
    _Bool m_bShieldAccuracy;
    int m_timeoutCount;
    unsigned long long m_eBusType;
    long long m_geoMode;
}

+ (double)getLocationAccuracy:(id)arg1;
@property(nonatomic) _Bool m_bShieldAccuracy; // @synthesize m_bShieldAccuracy;
@property(nonatomic) long long m_geoMode; // @synthesize m_geoMode;
@property(nonatomic) unsigned long long m_eBusType; // @synthesize m_eBusType;
@property(nonatomic) __weak id <LocationRetrieveDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_timeoutCount; // @synthesize m_timeoutCount;
@property(nonatomic) float m_requiredAccuracy; // @synthesize m_requiredAccuracy;
@property(nonatomic) _Bool m_bCanRepeatReportLocation; // @synthesize m_bCanRepeatReportLocation;
@property(retain, nonatomic) LBSSystemCacheUpdater *m_sysCacheUpdater; // @synthesize m_sysCacheUpdater;
@property(retain, nonatomic) NSMutableArray *m_recentLocationList; // @synthesize m_recentLocationList;
- (void).cxx_destruct;
- (void)reportRetriever:(id)arg1 retrieverSuccess:(_Bool)arg2 inCache:(_Bool)arg3;
- (void)onHeadingTimeCheck;
- (void)addToRecentLocationList:(id)arg1;
- (id)objectInRecentLocationListAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfRecentLocationList;
- (id)getBestResultFromLocationList;
- (void)onGpsTimerTimeCheck;
- (_Bool)isHeadingOK:(id)arg1;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (_Bool)isLocationOK:(id)arg1;
- (void)onMapLocationError:(id)arg1 withTag:(long long)arg2;
- (void)onMapLocationChanged:(id)arg1 withTag:(long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)CleanDelegate;
- (void)CancelRetrieveHeading;
- (void)RetrieveHeading;
- (void)CancelRetrieveLocation;
- (void)RetrieveLocation;
- (void)dealloc;
- (void)Reset;
- (void)stopCheckTimer;
- (id)initWithDelegate:(id)arg1;

@end

