//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface FTSHomePageSearch : MMObject
{
    NSString *_searchText;
    NSMutableArray *_arrBussinessType;
    NSMutableArray *_arrBussinessResult;
    _Bool _markOnlineFail;
}

@property(nonatomic) _Bool markOnlineFail; // @synthesize markOnlineFail=_markOnlineFail;
@property(retain, nonatomic) NSMutableArray *arrBussinessResult; // @synthesize arrBussinessResult=_arrBussinessResult;
@property(retain, nonatomic) NSMutableArray *arrBussinessType; // @synthesize arrBussinessType=_arrBussinessType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (_Bool)isSearchDone;
- (id)init;

@end

