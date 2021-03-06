/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Conference/CNFRegAccountWebViewController.h>

@class NSString;

@interface CNFRegChangeAccountPasswordController : CNFRegAccountWebViewController
{
    id <CNFRegChangeAccountPasswordDelegate> _delegate;
    NSString *_appleID;
}

- (id)initWithRegController:(id)arg1 appleID:(id)arg2;
- (void)dealloc;
- (id)bagKey;
- (id)logName;
- (id)overrideURLForURL:(id)arg1;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) id <CNFRegChangeAccountPasswordDelegate> delegate; // @synthesize delegate=_delegate;

@end

