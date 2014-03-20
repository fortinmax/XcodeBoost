//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DVTCancellable.h"

@class DVTStackBacktrace;

@interface DVTObservingToken : NSObject <DVTCancellable>
{
    BOOL _isCancelled;
    void *_keepSelfAliveUntilPrimitiveCancellationRef;
    DVTStackBacktrace *_creationBacktrace;
}

+ (void)initialize;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;
- (void)_primitiveCancelObservation;
- (id)init;

@end
