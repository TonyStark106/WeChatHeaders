//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GameCenterGameAdInfo, GameCenterPopAdView;

@protocol GameCenterPopAdViewDelegate <NSObject>
- (void)popAdWindowCloseButtonClicked:(GameCenterPopAdView *)arg1;
- (void)popAdWindow:(GameCenterPopAdView *)arg1 detailButtonClickedWithGameAdInfo:(GameCenterGameAdInfo *)arg2;
- (void)popAdWindow:(GameCenterPopAdView *)arg1 downloadButtonClickedWithGameAdInfo:(GameCenterGameAdInfo *)arg2;
@end

