//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/_NSXPCDistantObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObjectWithError : _NSXPCDistantObject
{
    CDUnknownBlockType _errorBlock;
}

@property(copy) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 interface:(id)arg3 error:(CDUnknownBlockType)arg4;

@end

