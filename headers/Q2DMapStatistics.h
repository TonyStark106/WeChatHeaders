//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Q2DMapStatistics : NSObject
{
}

+ (id)sharedStatistics;
- (id)init;
- (void)sendingStatisticsToServer;
- (void)sendingRequest:(id)arg1;
- (id)constructRequest;
- (id)constructURLStringWithArguments:(id)arg1;
- (id)constructArguments;
- (id)DPI;
- (id)netType;
- (id)appVersion;
- (id)appName;
- (id)deviceIdentifier;
- (void)throwKeyInvalidException;

@end

