//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface PSAdvancedLocaleController : PSListController
{
    BOOL _automaticLocaleDisabled;
}

+ (BOOL)automaticLanguageUpdateEnabled;
@property(nonatomic) BOOL automaticLocaleDisabled; // @synthesize automaticLocaleDisabled=_automaticLocaleDisabled;
- (id)automatic:(id)arg1;
- (void)setAutomatic:(id)arg1 specifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)reloadLocale;
- (id)init;
- (void)localeChangedAction;

@end
