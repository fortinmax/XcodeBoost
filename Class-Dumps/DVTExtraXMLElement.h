//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DVTExtraXMLElement : NSObject
{
    NSString *_name;
    NSMutableArray *_mutableAttributeNames;
    NSMutableArray *_mutableAttributeValues;
    NSMutableArray *_mutableElements;
}

@property(copy) NSMutableArray *mutableElements; // @synthesize mutableElements=_mutableElements;
@property(copy) NSMutableArray *mutableAttributeValues; // @synthesize mutableAttributeValues=_mutableAttributeValues;
@property(copy) NSMutableArray *mutableAttributeNames; // @synthesize mutableAttributeNames=_mutableAttributeNames;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;

@end
