/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLItem.h>

@class PLManagedAsset, PLVideoView, UIImage;

@interface PLAssetBackedItem : PLItem
{
    UIImage *_previewImage;
    PLManagedAsset *_asset;
    BOOL _isTemporaryAsset;
    PLVideoView *_videoView;
}

+ (id)itemsWithURLsAndData:(id)arg1;
@property(nonatomic) BOOL isTemporaryAsset; // @synthesize isTemporaryAsset=_isTemporaryAsset;
@property(retain, nonatomic) PLManagedAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void)dealloc;
- (id)videoView;
- (id)_videoView;
- (id)imageWithFormat:(int)arg1;
- (int)itemType;
- (id)imageData;
- (id)URL;
- (id)_initWithURL:(id)arg1 type:(id)arg2;
- (id)initWithURL:(id)arg1 type:(id)arg2;

@end
