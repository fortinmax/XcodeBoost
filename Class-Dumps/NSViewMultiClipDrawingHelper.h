//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSView;

@interface NSViewMultiClipDrawingHelper : NSObject
{
    NSView *_drawingView;
    NSArray *_rects;
    long long _currentDrawingIndex;
}

- (BOOL)isDrawingContentAtIndex:(long long)arg1;
- (void)drawViewInRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithDrawingView:(id)arg1 rects:(id)arg2;

@end
