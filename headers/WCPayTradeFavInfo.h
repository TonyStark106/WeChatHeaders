//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, WCPayFavorComposeInfo;

@interface WCPayTradeFavInfo : NSObject
{
    unsigned long long m_uiTrandeAmount;
    unsigned long long m_uiTotalFavAmount;
    unsigned long long m_uiAfterFavorTradeAmount;
    NSString *m_nsFavorCompseid;
    NSArray *m_arrTradeFavItemList;
    NSArray *m_arrWCPayFavorComposeInfo;
    WCPayFavorComposeInfo *m_oSelectedFavorComposeInfo;
    NSDictionary *m_dicItemSelectStatus;
    _Bool m_bNeedShowedMoreFavInfo;
}

@property(nonatomic) _Bool m_bNeedShowedMoreFavInfo; // @synthesize m_bNeedShowedMoreFavInfo;
@property(retain, nonatomic) WCPayFavorComposeInfo *m_oSelectedFavorComposeInfo; // @synthesize m_oSelectedFavorComposeInfo;
@property(retain, nonatomic) NSArray *m_arrWCPayFavorComposeInfo; // @synthesize m_arrWCPayFavorComposeInfo;
@property(retain, nonatomic) NSString *m_nsFavorCompseid; // @synthesize m_nsFavorCompseid;
@property(retain, nonatomic) NSArray *m_arrTradeFavItemList; // @synthesize m_arrTradeFavItemList;
@property(nonatomic) unsigned long long m_uiTrandeAmount; // @synthesize m_uiTrandeAmount;
@property(nonatomic) unsigned long long m_uiTotalFavAmount; // @synthesize m_uiTotalFavAmount;
@property(nonatomic) unsigned long long m_uiAfterFavorTradeAmount; // @synthesize m_uiAfterFavorTradeAmount;
- (void).cxx_destruct;
- (void)dealloc;

@end

