//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/_HDMedicalRecordEntityEncoder.h>

@interface _HDAllergyRecordEntityEncoder : _HDMedicalRecordEntityEncoder
{
}

- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)createBareObject;
- (id)orderedProperties;

@end
