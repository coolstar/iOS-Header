//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
{
}

- (id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1;
- (unsigned long long)wifiOnlyPeriodInDays;
- (_Bool)isDownloadAllowableForCellular;
- (id)initWithDescriptor:(id)arg1;
- (_Bool)isPowerRequired;

@end
