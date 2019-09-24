//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, GEOClientRankingModel, GEOMapServiceTraits, GEORetainedSearchMetadata, GEOSearchCategory, GEOSortPriorityMapping, MKLocalSearchCompletion, MKPointOfInterestFilter, NSArray, NSMutableArray, NSString, NSTimer;
@protocol MKAutocompleteAnalyticsProvider, MKLocalSearchCompleterDelegate, MKLocationManagerOperation;

@interface MKLocalSearchCompleter : NSObject
{
    NSString *_queryFragment;
    CDStruct_b7cb895d _region;
    GEOSearchCategory *_categoryFilter;
    NSArray *_filters;
    GEORetainedSearchMetadata *_retainedSearchMetadata;
    id <MKLocalSearchCompleterDelegate> _delegate;
    id _context;
    NSString *_identifier;
    long long _listType;
    double _timeSinceLastInBoundingRegion;
    CLLocation *_deviceLocation;
    unsigned long long _mapType;
    double _lastRequestTime;
    _Bool _dirty;
    _Bool _resultsAreCurrent;
    NSArray *_results;
    NSArray *_sections;
    GEOClientRankingModel *_clientRankingModel;
    GEOSortPriorityMapping *_sortPriorityMapping;
    NSTimer *_timer;
    int _source;
    id <MKLocationManagerOperation> _singleLocationUpdate;
    GEOMapServiceTraits *_traits;
    unsigned long long _maxNumberOfConcurrentRequests;
    NSMutableArray *_inFlightTickets;
    NSMutableArray *_pendingTickets;
    _Bool _shouldDisplayNoResults;
    _Bool _autocompleteTopSectionIsQuerySuggestions;
    _Bool _showAutocompleteClientSource;
    _Bool _shouldPreloadTransitInfo;
    long long _filterType;
    unsigned long long _resultTypes;
    MKPointOfInterestFilter *_pointOfInterestFilter;
    id <MKAutocompleteAnalyticsProvider> _analyticsProvider;
    MKLocalSearchCompletion *_tappedQuerySuggestionCompletion;
    long long _privateFilterType;
}

@property(nonatomic, getter=_privateFilterType, setter=_setPrivateFilterType:) long long privateFilterType; // @synthesize privateFilterType=_privateFilterType;
@property(readonly, nonatomic, getter=_sections) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic, getter=_shouldPreloadTransitInfo, setter=_setShouldPreloadTransitInfo:) _Bool shouldPreloadTransitInfo; // @synthesize shouldPreloadTransitInfo=_shouldPreloadTransitInfo;
@property(readonly, nonatomic, getter=_showAutocompleteClientSource) _Bool showAutocompleteClientSource; // @synthesize showAutocompleteClientSource=_showAutocompleteClientSource;
@property(retain, nonatomic, getter=_tappedQuerySuggestionCompletion, setter=_setTappedQuerySuggestionCompletion:) MKLocalSearchCompletion *tappedQuerySuggestionCompletion; // @synthesize tappedQuerySuggestionCompletion=_tappedQuerySuggestionCompletion;
@property(readonly, nonatomic, getter=_autocompleteTopSectionIsQuerySuggestions) _Bool autocompleteTopSectionIsQuerySuggestions; // @synthesize autocompleteTopSectionIsQuerySuggestions=_autocompleteTopSectionIsQuerySuggestions;
@property(readonly, nonatomic, getter=_sortPriorityMapping) GEOSortPriorityMapping *sortPriorityMapping; // @synthesize sortPriorityMapping=_sortPriorityMapping;
@property(readonly, nonatomic, getter=_clientRankingModel) GEOClientRankingModel *clientRankingModel; // @synthesize clientRankingModel=_clientRankingModel;
@property(readonly, nonatomic, getter=_shouldDisplayNoResults) _Bool shouldDisplayNoResults; // @synthesize shouldDisplayNoResults=_shouldDisplayNoResults;
@property(retain, nonatomic) id <MKAutocompleteAnalyticsProvider> analyticsProvider; // @synthesize analyticsProvider=_analyticsProvider;
@property(copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // @synthesize pointOfInterestFilter=_pointOfInterestFilter;
@property(nonatomic) unsigned long long resultTypes; // @synthesize resultTypes=_resultTypes;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(retain, nonatomic) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(nonatomic) double timeSinceLastInBoundingRegion; // @synthesize timeSinceLastInBoundingRegion=_timeSinceLastInBoundingRegion;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <MKLocalSearchCompleterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata; // @synthesize retainedSearchMetadata=_retainedSearchMetadata;
@property(retain, nonatomic) GEOSearchCategory *categoryFilter; // @synthesize categoryFilter=_categoryFilter;
@property(nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *queryFragment; // @synthesize queryFragment=_queryFragment;
- (void).cxx_destruct;
@property(nonatomic) long long entriesType;
@property(copy, nonatomic) NSString *fragment;
@property(nonatomic) CDStruct_b7cb895d boundingRegion;
@property(readonly, nonatomic) NSArray *results;
- (void)retry;
- (void)cancel;
- (void)_cancelTimer;
- (_Bool)resultsAreCurrent;
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (int)source;
- (void)setSource:(int)arg1;
- (void)_updateFilters;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
- (double)timeToNextRequest;
- (void)_scheduleRequestWithTimeToNextRequest:(double)arg1;
- (void)_markDirtyAndScheduleRequestWithTimeToNextRequest:(double)arg1;
- (void)_markDirty;
- (void)_schedulePendingRequest;
- (id)_completionTicketForPrivateFilterType:(long long)arg1 traits:(id)arg2;
- (id)_completionTicketForFilterTypeWithTraits:(id)arg1;
- (void)_fireRequest;
- (void)_handleError:(id)arg1 forTicket:(id)arg2;
- (void)_notifyDelegatesWithResults:(id)arg1 sections:(id)arg2 shouldDisplayNoResults:(_Bool)arg3 ticket:(id)arg4;
- (void)_handleCompletion:(id)arg1 shouldDisplayNoResults:(_Bool)arg2 forTicket:(id)arg3;
- (void)dealloc;
- (id)init;

@end
