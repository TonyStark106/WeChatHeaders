//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMComponentData;

@interface MMComponent : UIView
{
    MMComponentData *_componentData;
}

+ (double)calHeightWithComData:(id)arg1;
@property(retain, nonatomic) MMComponentData *m_componentData; // @synthesize m_componentData=_componentData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)configContentLayout;
- (void)updateWithComData:(id)arg1;
- (id)initWithComData:(id)arg1;

@end

