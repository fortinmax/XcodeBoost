//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _IDSDevice;

@interface IDSDevice : NSObject
{
    _IDSDevice *_internal;
}

- (id)_internal;
- (void)_addIdentity:(id)arg1;
- (id)_identities;
- (id)_pushToken;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *modelIdentifier;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)_initWithDictionary:(id)arg1;

@end
