//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMMDB.h"

@interface CMMDB (Emoji)
- (_Bool)isExistInEmojiWithCatalogId:(unsigned int)arg1 emoji:(id)arg2;
- (_Bool)DeleteAllInEmoji;
- (_Bool)DelEmoji:(unsigned int)arg1 Emoji:(id)arg2;
- (id)GetAllEmojiByCatalogID:(unsigned int)arg1 onProperty:(const vector_24c76cbd *)arg2;
- (_Bool)InsertEmojiIfNotExist:(id)arg1 onProperty:(const vector_24c76cbd *)arg2;
@end

