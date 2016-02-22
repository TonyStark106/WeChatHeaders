//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, WCYoAvatarView;

@interface WCYoHudViewController : MMUIViewController
{
    int _yoType;
    UIView *_containerView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    WCYoAvatarView *_avatarView;
    UIImageView *_checkedMaskView;
    UIButton *_replyButton;
    NSString *_username;
    unsigned long long _count;
}

@property(nonatomic) int yoType; // @synthesize yoType=_yoType;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) UIImageView *checkedMaskView; // @synthesize checkedMaskView=_checkedMaskView;
@property(retain, nonatomic) WCYoAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)addYoCount:(unsigned long long)arg1 forUsername:(id)arg2 type:(int)arg3;
- (void)didTapAvatarView:(id)arg1;
- (void)didTapReplyButton:(id)arg1;
- (void)doAvatarBounceAnimation;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3;
- (void)changeUIWithYoType:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

@end
