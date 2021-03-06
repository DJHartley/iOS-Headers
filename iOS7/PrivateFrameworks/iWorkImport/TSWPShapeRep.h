/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDShapeRep.h>

#import <iWorkImport/TSDContainerRep-Protocol.h>
#import "TSWPShapeLayoutDelegate-Protocol.h"

@class CALayer, NSObject<TSDContainerInfo>, TSWPRep;

// Not exported
@interface TSWPShapeRep : TSDShapeRep <TSDContainerRep, TSWPShapeLayoutDelegate>
{
    _Bool _editingContainedRep;
    CALayer *_overflowGlyphLayer;
    struct CGPoint _originalAutosizePositionOffset;
    TSWPRep *_containedRep;
}

@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=_containedRep;
- (id).cxx_construct;
- (void)shapeLayoutDidChangeContainedStorage:(id)arg1;
- (_Bool)shapeLayoutShouldUpdateInstructionalText:(id)arg1;
- (_Bool)isEditingChildRep;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (double)pParagraphAlignmentOffset;
- (id)dynamicResizeDidBegin;
- (unsigned long long)enabledKnobMask;
- (id)p_overflowKnobImage;
- (void)processChangedProperty:(int)arg1;
- (_Bool)isInvisible;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (void)p_resetOverflowGlyphLayerIfNecessary;
- (_Bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (_Bool)canSelectChildRep:(id)arg1;
- (_Bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (_Bool)isSelectable;
- (_Bool)p_shouldShowTextOverflowGlyph;
- (_Bool)shouldShowKnobs;
- (_Bool)selectionIsAppropriateToShowInvisiblePathHighlight;
- (_Bool)shouldShowSelectionHighlight;
- (id)hyperlinkRegions;
- (void)willBeRemoved;
- (_Bool)wantsToHandleTapsWhenLocked;
- (_Bool)wantsToHandleTapsOnContainingGroup;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (void)willEndEditingContainedRep;
- (void)willBeginEditingContainedRep;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)updateChildrenFromLayout;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

