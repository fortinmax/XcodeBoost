//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNContactUpdate.h"

@class CNMultiValueDiff, CNPropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactMultiValueDiffUpdate : NSObject <CNContactUpdate>
{
    CNPropertyDescription *_property;
    CNMultiValueDiff *_diff;
}

- (id)property;
- (id)description;
- (void)applyToABCDContact:(id)arg1;
- (id)mutableMultiValueOnContact:(id)arg1;
- (void)applyToABPerson:(id)arg1;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 diff:(id)arg2;

@end
