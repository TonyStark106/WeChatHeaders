//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterFeedsCellScrollView, NSArray;

@interface GameCenterFeedsCell : MMTableViewCell
{
    GameCenterFeedsCellScrollView *_scrollView;
    NSArray *_feedItems;
    id <GameCenterFeedsCellDelegate> _delegate;
}

@property(nonatomic) __weak id <GameCenterFeedsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
- (void).cxx_destruct;
- (void)onFeedButtonClicked:(id)arg1;
- (void)addButtons;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

