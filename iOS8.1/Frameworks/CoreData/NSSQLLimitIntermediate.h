//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLLimitIntermediate : NSSQLIntermediate
{
    unsigned int _limit;
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithLimit:(unsigned int)arg1 inScope:(id)arg2;

@end
