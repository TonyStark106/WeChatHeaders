//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class WCCardUsedStoreInfo;

@interface WCCardUsedStoreView : MMUIView
{
    WCCardUsedStoreInfo *_usedStoreInfo;
    id <WCCardUsedStoreViewDelegate> _delegate;
}

+ (double)calHeight:(id)arg1;
@property(nonatomic) __weak id <WCCardUsedStoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onNavgation;
- (void)onMakeACall;
- (void)layoutSubviews;
- (id)initWithUsedStoreInfo:(id)arg1;

@end

