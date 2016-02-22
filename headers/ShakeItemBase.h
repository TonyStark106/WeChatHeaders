//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSString, ShakePayItem, ShakeProductItem, ShakeTempSessionItem, ShakeTvHistoryItem, ShakeTvItem, ShakeUrlItem, ShakeUserItem;

@interface ShakeItemBase : NSObject <PBCoding, NSCoding, NSCopying>
{
    int itemType;
    unsigned int createTime;
    ShakeTvItem *shakeTvItem;
    ShakeUrlItem *shakeUrlItem;
    ShakeUserItem *shakeUsrItem;
    ShakePayItem *shakePayItem;
    ShakeProductItem *shakeProductItem;
    ShakeTempSessionItem *shakeTempSessionItem;
    ShakeTvHistoryItem *shakeTvHistoryItem;
}

+ (id)getShakeItemFromXml:(id)arg1 andType:(int)arg2;
+ (id)parseXmlToShakeUser:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeUrl:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeProduct:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToTempSession:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeTvHistory:(struct XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakePay:(struct XmlReaderNode_t *)arg1;
+ (void)parseXml:(struct XmlReaderNode_t *)arg1 toShakeAction:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) ShakeTvHistoryItem *shakeTvHistoryItem; // @synthesize shakeTvHistoryItem;
@property(retain, nonatomic) ShakeTempSessionItem *shakeTempSessionItem; // @synthesize shakeTempSessionItem;
@property(retain, nonatomic) ShakeProductItem *shakeProductItem; // @synthesize shakeProductItem;
@property(retain, nonatomic) ShakePayItem *shakePayItem; // @synthesize shakePayItem;
@property(retain, nonatomic) ShakeUserItem *shakeUsrItem; // @synthesize shakeUsrItem;
@property(retain, nonatomic) ShakeUrlItem *shakeUrlItem; // @synthesize shakeUrlItem;
@property(retain, nonatomic) ShakeTvItem *shakeTvItem; // @synthesize shakeTvItem;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) int itemType; // @synthesize itemType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

