//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue, NSColor;

@interface DOMRGBColor : DOMObject
{
}

@property(readonly) NSColor *color;
@property(readonly) DOMCSSPrimitiveValue *alpha;
@property(readonly) DOMCSSPrimitiveValue *blue;
@property(readonly) DOMCSSPrimitiveValue *green;
@property(readonly) DOMCSSPrimitiveValue *red;
- (void)finalize;
- (void)dealloc;
- (id)_color;

@end
