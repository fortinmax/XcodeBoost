//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@class NSArray, NSString, PAVideoCardSet;

@interface PASystem : NSObject <NSCoding>
{
    NSString *build;
    NSArray *processes;
    PAVideoCardSet *cards;
    struct vm_statistics *vm_stats;
    unsigned long long page_size;
    unsigned long long ram;
}

@property(retain) PAVideoCardSet *cards; // @synthesize cards;
@property(retain, nonatomic) NSArray *processes; // @synthesize processes;
@property(retain, nonatomic) NSString *build; // @synthesize build;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)getBuild;
- (unsigned int)processCount;
- (id)init;
- (void)initMemory;
- (void)initBuild;
- (id)description;
- (id)systemMemoryInfoDescription;

@end
