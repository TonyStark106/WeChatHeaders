//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMHeadImageView, MMUIImageView, UIImageView, UILabel;

@interface GameCenterUserRankListCell : MMTableViewCell
{
    UILabel *_rankLabel;
    MMHeadImageView *_headImgView;
    UILabel *_nameLabel;
    MMUIImageView *_vipLevelImgView;
    UILabel *_scoreLabel;
    UIImageView *_goldView;
}

- (void).cxx_destruct;
- (void)updateWithUser:(id)arg1 rank:(unsigned long long)arg2 vipLevel:(unsigned long long)arg3 score:(unsigned long long)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

