//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavRecordImgNodeView;

@protocol FavRecordNodeViewDelegate <NSObject>

@optional
- (void)onExitFullScreen;
- (void)onLongPressImgNode:(id <RecordNodeDataSource>)arg1;
- (void)onClickOnImgNode:(FavRecordImgNodeView *)arg1 DataIndex:(unsigned int)arg2;
- (void)onClickOnNode:(id <RecordNodeDataSource>)arg1;
@end

