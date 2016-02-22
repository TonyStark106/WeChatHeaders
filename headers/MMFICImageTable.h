//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FICImageTableMetadata, MMFICImageFormat, NSRecursiveLock, NSString;

@interface MMFICImageTable : NSObject
{
    NSRecursiveLock *_lock;
    NSString *_tableFilePath;
    NSString *_metadataFilePath;
    MMFICImageFormat *_imageFormat;
    FICImageTableMetadata *_metaData;
    double _screenScale;
    unsigned long long _imageRowLength;
    NSString *_filePath;
    int _fileDescriptor;
    long long _fileLength;
    unsigned int _entryCount;
    long long _entryLength;
    unsigned int _entriesPerChunk;
    long long _imageLength;
    unsigned long long _chunkLength;
    unsigned int _chunkCount;
    int tableUsedCount;
}

@property(nonatomic) int tableUsedCount; // @synthesize tableUsedCount;
- (void).cxx_destruct;
- (_Bool)canImageTableRemoveLocalCache;
- (void)cleanupFICImgInMemory;
- (void)saveMetadata;
- (void)reset;
- (void)_entryWasAccessedWithEntityUUID:(id)arg1;
- (id)_entryDataForEntityUUID:(id)arg1;
- (unsigned long long)_nextEntryIndex;
- (id)_entryDataAtIndex:(unsigned long long)arg1;
- (void)_setEntryCount:(unsigned int)arg1;
- (_Bool)entryExistsForEntityUUID:(id)arg1 sourceImageUUID:(id)arg2;
- (_Bool)imageExistsForEntity:(id)arg1;
- (_Bool)deleteEntryForEntityUUID:(id)arg1;
- (id)getImageForEntityUUID:(id)arg1 isNeedMemoryCache:(_Bool)arg2;
- (void)setEntryForEntityUUID:(id)arg1 imageDrawingBlock:(CDUnknownBlockType)arg2;
- (id)_chunkAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFormat:(id)arg1;
@property(readonly, copy, nonatomic) NSString *metadataFilePath;
@property(readonly, copy, nonatomic) NSString *tableFilePath;

@end

