//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntlPreferences/ISMigrator.h>

@interface ISRootMigrator : ISMigrator
{
}

- (id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1;
- (id)importPreferredLanguagesForPreferences:(id)arg1;
- (id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2;
- (id)performMigrationForPreferences:(id)arg1;
- (id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2;
- (_Bool)performMigration;

@end

