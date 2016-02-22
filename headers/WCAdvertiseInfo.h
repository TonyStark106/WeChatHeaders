//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSString, WCADBodyWrap, WCADCommentWrap, WCADPageWrap, WCADVideoWrap, WCMultiLanguageItem;

@interface WCAdvertiseInfo : NSObject <NSCoding>
{
    int adType;
    NSString *adDescription;
    NSString *adActionTitle;
    NSString *adActionLink;
    NSString *adViewId;
    int adPosition;
    int noExposureExpireTime;
    int exposureNoActionExpireTime;
    _Bool webviewRightBarShow;
    NSString *adUserNickName;
    _Bool bExposured;
    int myAdCommentCount;
    _Bool adActionLinkHidden;
    _Bool bWithoutAdExp;
    _Bool bIgnoreNewMsgTip;
    _Bool headClickRightBarShow;
    unsigned int headClickType;
    NSString *adActionLinkName;
    WCMultiLanguageItem *expandOutsideTitle;
    WCMultiLanguageItem *expandInsideTitle;
    NSString *uxInfo;
    unsigned long long commentStartTime;
    unsigned long long commentEndTime;
    unsigned long long unInterestStartTime;
    unsigned long long unInterestEndTime;
    NSMutableDictionary *adArgsDic;
    NSString *headClickParam;
    WCADBodyWrap *_bodyWrap;
    WCADCommentWrap *_commentWrap;
    WCADPageWrap *_detailPageWrap;
    WCADPageWrap *_h5PageWrap;
    WCADPageWrap *_albumPageWrap;
    WCADVideoWrap *_videoWrap;
}

@property(retain, nonatomic) WCADVideoWrap *videoWrap; // @synthesize videoWrap=_videoWrap;
@property(retain, nonatomic) WCADPageWrap *albumPageWrap; // @synthesize albumPageWrap=_albumPageWrap;
@property(retain, nonatomic) WCADPageWrap *h5PageWrap; // @synthesize h5PageWrap=_h5PageWrap;
@property(retain, nonatomic) WCADPageWrap *detailPageWrap; // @synthesize detailPageWrap=_detailPageWrap;
@property(retain, nonatomic) WCADCommentWrap *commentWrap; // @synthesize commentWrap=_commentWrap;
@property(retain, nonatomic) WCADBodyWrap *bodyWrap; // @synthesize bodyWrap=_bodyWrap;
@property(retain, nonatomic) NSString *headClickParam; // @synthesize headClickParam;
@property(nonatomic) unsigned int headClickType; // @synthesize headClickType;
@property(nonatomic) _Bool headClickRightBarShow; // @synthesize headClickRightBarShow;
@property(nonatomic) _Bool bIgnoreNewMsgTip; // @synthesize bIgnoreNewMsgTip;
@property(retain, nonatomic) NSMutableDictionary *adArgsDic; // @synthesize adArgsDic;
@property(nonatomic) _Bool bWithoutAdExp; // @synthesize bWithoutAdExp;
@property(nonatomic) unsigned long long unInterestEndTime; // @synthesize unInterestEndTime;
@property(nonatomic) unsigned long long unInterestStartTime; // @synthesize unInterestStartTime;
@property(nonatomic) unsigned long long commentEndTime; // @synthesize commentEndTime;
@property(nonatomic) unsigned long long commentStartTime; // @synthesize commentStartTime;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo;
@property(retain, nonatomic) WCMultiLanguageItem *expandInsideTitle; // @synthesize expandInsideTitle;
@property(retain, nonatomic) WCMultiLanguageItem *expandOutsideTitle; // @synthesize expandOutsideTitle;
@property(retain, nonatomic) NSString *adActionLinkName; // @synthesize adActionLinkName;
@property(nonatomic) _Bool adActionLinkHidden; // @synthesize adActionLinkHidden;
@property(nonatomic) int myAdCommentCount; // @synthesize myAdCommentCount;
@property(retain, nonatomic) NSString *adUserNickName; // @synthesize adUserNickName;
@property(nonatomic) _Bool webviewRightBarShow; // @synthesize webviewRightBarShow;
@property(nonatomic) int exposureNoActionExpireTime; // @synthesize exposureNoActionExpireTime;
@property(nonatomic) int noExposureExpireTime; // @synthesize noExposureExpireTime;
@property(nonatomic) _Bool bExposured; // @synthesize bExposured;
@property(nonatomic) int adPosition; // @synthesize adPosition;
@property(retain, nonatomic) NSString *adViewId; // @synthesize adViewId;
@property(retain, nonatomic) NSString *adActionLink; // @synthesize adActionLink;
@property(retain, nonatomic) NSString *adActionTitle; // @synthesize adActionTitle;
@property(retain, nonatomic) NSString *adDescription; // @synthesize adDescription;
@property(nonatomic) int adType; // @synthesize adType;
- (void).cxx_destruct;
- (_Bool)hasMyAdComments;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
