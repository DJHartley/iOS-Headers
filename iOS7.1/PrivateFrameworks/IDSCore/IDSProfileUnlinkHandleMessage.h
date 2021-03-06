//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSCore/IDSProfileMessage.h>

#import "NSCopying.h"

@class NSString;

@interface IDSProfileUnlinkHandleMessage : IDSProfileMessage <NSCopying>
{
    NSString *_uri;
}

@property(copy, setter=setURI:) NSString *URI; // @synthesize URI=_uri;
- (id)additionalMessageHeaders;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

