//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SightMovieWriter : NSObject
{
    NSString *m_moviePath;
    id <SightMovieWriterDelegate> _delegate;
    long long _videoOrientation;
}

@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) __weak id <SightMovieWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)getOutput;
- (void)setOutput:(id)arg1;
- (_Bool)isWriting;
- (void)cancelWriting;
- (void)finishWriting;
- (void)startWriting;
@property(readonly, nonatomic) int outputType;
- (id)initWithFilePath:(id)arg1 videoOrientation:(long long)arg2 videoSize:(struct CGSize)arg3 bitRate:(double)arg4;
- (id)initWithFilePath:(id)arg1 videoOrientation:(long long)arg2 videoSize:(struct CGSize)arg3;

@end

