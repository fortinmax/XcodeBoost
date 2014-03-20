//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsButtonGroupCell : NSActionCell
{
    NSMutableArray *cells;
}

@property(readonly) NSMutableArray *cells; // @synthesize cells;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)buttonIndexAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForButtonAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;

@end
