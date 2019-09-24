//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastDataParser-Protocol.h>

@class NSCalendar, NSString;

@interface WFWeatherChannelParserV3 : NSObject <WFForecastDataParser>
{
    NSCalendar *_calendar;
}

@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id *)arg4;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;
- (void)_parseWebLinks:(id)arg1 intoWeatherConditions:(id)arg2;
- (id)_parsePollutants:(id)arg1;
- (id)_parseLastTwentyFourHoursOfObservations:(id)arg1;
- (id)_parseHourlyForecastedConditions:(id)arg1;
- (id)_parseDailyPollenForecastedConditions:(id)arg1;
- (id)_parseDailyForecastedConditions:(id)arg1;
- (id)_parseForecastedConditions:(id)arg1 individualForecastProcessingBlock:(CDUnknownBlockType)arg2 uniqueParsingBlock:(CDUnknownBlockType)arg3;
- (id)_parseCurrentConditions:(id)arg1;
- (void)_parseCommonComponents:(id)arg1 intoConditions:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
