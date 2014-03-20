//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABCardViewMultiValueTransformer.h"

@class ABCardViewPersonMapper, CNContact, NSString;

__attribute__((visibility("hidden")))
@interface ABCardViewMultiValuePrivateFieldTransformer : NSObject <ABCardViewMultiValueTransformer>
{
    ABCardViewPersonMapper *_personMapper;
    CNContact *_person;
    NSString *_field;
}

+ (id)transformerWithPerson:(id)arg1 personMapper:(id)arg2 field:(id)arg3;
- (CDUnknownBlockType)setIdentifierIsPrivate:(BOOL)arg1;
- (void)setPrivacyStateOfAggregateIdentifier:(id)arg1 isPrivate:(BOOL)arg2;
- (id)reverseTransformMultiValue:(id)arg1;
- (id)componentIdentifiersForAggregateIdentifier:(id)arg1;
- (CDUnknownBlockType)identifierIsPrivate;
- (BOOL)privacyStateOfAggregateIdentifier:(id)arg1;
- (id)transformMultiValue:(id)arg1;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 personMapper:(id)arg2 field:(id)arg3;

@end
