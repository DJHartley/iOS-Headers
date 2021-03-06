/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PLTelephonyConnectedLogger.h"

@class NSNumber, NSString;

@interface PLTelephonyLogger : PLTelephonyConnectedLogger
{
    long long lastReportedSignal;
    NSNumber *inDCH;
    NSNumber *inUTBF;
    NSString *simStatus;
    _Bool changed;
}

@property(retain, nonatomic) NSString *simStatus; // @synthesize simStatus;
@property(retain, nonatomic) NSNumber *inUTBF; // @synthesize inUTBF;
@property(retain, nonatomic) NSNumber *inDCH; // @synthesize inDCH;
@property(nonatomic) long long lastReportedSignal; // @synthesize lastReportedSignal;
@property(nonatomic, getter=isChanged) _Bool changed; // @synthesize changed;
- (id)humanReadableSimStatusString;
- (id)humanReadableDataActiveString;
- (void)logMessage:(id)arg1 andState:(id)arg2;
- (void)log;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end

