/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSSet;

@interface SSMetricsConfiguration : NSObject
{
    NSSet *_blacklistedEvents;
    SSMetricsConfiguration *_childConfiguration;
    NSDictionary *_config;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    _Bool _disabled;
    _Bool _sendDisabled;
}

@property(retain, nonatomic) SSMetricsConfiguration *childConfiguration; // @synthesize childConfiguration=_childConfiguration;
- (_Bool)_configBooleanForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)valueForConfigurationKey:(id)arg1;
- (id)tokenStringWithElements:(id)arg1;
- (id)reportingURLString;
- (double)reportingFrequency;
- (id)pingURLs;
- (_Bool)isSendDisabled;
- (_Bool)isEventTypeBlacklisted:(id)arg1;
- (_Bool)isDisabled;
@property(readonly, nonatomic) NSDictionary *fieldsMap;
- (id)compoundStringWithElements:(id)arg1;
- (id)eventFields;
- (id)blacklistedEventFields;
- (void)dealloc;
- (id)initWithStorePlatformData:(id)arg1;
- (id)initWithGlobalConfiguration:(id)arg1;

@end
