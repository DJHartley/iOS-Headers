/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIDocumentInteractionControllerDelegate-Protocol.h"

@class UIDocumentInteractionController;

@interface SUDocumentInteractionSession : NSObject <UIDocumentInteractionControllerDelegate>
{
    id _completionHandler;
    UIDocumentInteractionController *_documentInteractionController;
}

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithDocumentInteractionController:(id)arg1;

@end

