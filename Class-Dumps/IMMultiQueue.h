//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMMultiQueue : NSObject
{
    NSMutableDictionary *_queueMap;
}

- (void)_addBlock:(CDUnknownBlockType)arg1 withGUID:(id)arg2 forKey:(id)arg3;
- (void)addBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 forKey:(id)arg3;
- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;
- (void)dealloc;

@end
