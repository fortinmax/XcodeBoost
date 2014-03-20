//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@interface NSCoreUIImageRep : NSImageRep
{
    struct __CFDictionary *_coreUIImageOptions;
}

+ (id)imageRepWithCGLayer:(struct CGLayer *)arg1;
+ (id)imageRepWithCGImage:(struct CGImage *)arg1;
+ (id)imageRepWithCocoaName:(id)arg1;
- (BOOL)draw;
- (struct __CFDictionary *)coreUIDrawOptions;
- (id)description;
- (BOOL)_isValid;
- (struct CGRect)boundingRectWithExtraEffects:(id)arg1;
- (struct CGRect)boundingRectWithExtraEffectsForState:(unsigned long long)arg1 backgroundStyle:(int)arg2 context:(id)arg3;
- (void)addEffects:(id)arg1;
- (BOOL)hasEffects;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (void)setSuppressesCache:(BOOL)arg1;
- (BOOL)suppressesCache;
- (BOOL)_wantsToBeCached;
- (void)setTemplate:(BOOL)arg1;
- (BOOL)isTemplate;
- (void)setBackgroundStyle:(int)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCGLayer:(struct CGLayer *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCocoaName:(id)arg1;
- (id)initWithCoreUIDrawOptions:(struct __CFDictionary *)arg1 size:(struct CGSize)arg2;

@end
