//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitVehiclePosition, GEOPDAddress, GEOPDAddressObject, GEOPDAmenities, GEOPDAnnotatedItemList, GEOPDAssociatedApp, GEOPDBounds, GEOPDBrowseCategories, GEOPDBusinessClaim, GEOPDBusinessHours, GEOPDCaptionedPhoto, GEOPDContainedPlace, GEOPDETA, GEOPDEntity, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDGroundViewLabel, GEOPDHours, GEOPDIcon, GEOPDLinkedService, GEOPDLocationEvent, GEOPDMessageLink, GEOPDOfflineArea, GEOPDOfflineIdentifier, GEOPDOfflineQuadNodes, GEOPDOfflineSize, GEOPDOfflineUpdateManifest, GEOPDPhoto, GEOPDPlaceCollection, GEOPDPlaceInfo, GEOPDPlacecardLayoutConfiguration, GEOPDPlacecardURL, GEOPDPoiEvent, GEOPDPriceDescription, GEOPDPrototypeContainer, GEOPDQuickLink, GEOPDRap, GEOPDRating, GEOPDRawAttribute, GEOPDRelatedPlace, GEOPDRestaurantReservationLink, GEOPDResultSnippet, GEOPDReview, GEOPDRoadAccessInfo, GEOPDSimpleRestaurantMenuText, GEOPDSpatialLookupResult, GEOPDStorefront, GEOPDStorefrontPresentation, GEOPDSupportsOfflineMaps, GEOPDTextBlock, GEOPDTip, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfo, GEOPDTransitInfoSnippet, GEOPDTransitSchedule, GEOPDTransitTripGeometry, GEOPDTransitTripStop, GEOPDTransitTripStopTime, GEOPDVenueInfo, GEOPDWifiFingerprint, GEOStyleAttributes, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDRoadAccessInfo *_accessInfo;
    GEOPDAddressObject *_addressObject;
    GEOPDAddress *_address;
    GEOPDAmenities *_amenities;
    GEOPDAnnotatedItemList *_annotatedItemList;
    GEOPDAssociatedApp *_associatedApp;
    GEOPDBounds *_bounds;
    GEOPDBrowseCategories *_browseCategories;
    GEOPDBusinessClaim *_businessClaim;
    GEOPDBusinessHours *_businessHours;
    GEOPDCaptionedPhoto *_captionedPhoto;
    GEOPDContainedPlace *_containedPlace;
    GEOPDEntity *_entity;
    GEOPDETA *_eta;
    GEOPDExternalAction *_externalAction;
    GEOPDFactoid *_factoid;
    GEOPDFlyover *_flyover;
    GEOPDGroundViewLabel *_groundViewLabel;
    GEOPDHours *_hours;
    GEOPDIcon *_icon;
    GEOPDLinkedService *_linkedService;
    GEOPDLocationEvent *_locationEvent;
    GEOPDMessageLink *_messageLink;
    GEOPDOfflineArea *_offlineArea;
    GEOPDOfflineIdentifier *_offlineIdentifier;
    GEOPDOfflineQuadNodes *_offlineQuadNodes;
    GEOPDOfflineSize *_offlineSize;
    GEOPDPhoto *_photo;
    GEOPDPlaceCollection *_placeCollection;
    GEOPDPlaceInfo *_placeInfo;
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
    GEOPDPlacecardURL *_placecardUrl;
    GEOPDPoiEvent *_poiEvent;
    GEOPDPriceDescription *_priceDescription;
    GEOPDPrototypeContainer *_prototypeContainer;
    GEOPDQuickLink *_quickLink;
    GEOPDRap *_rap;
    GEOPDRating *_rating;
    GEOPDRawAttribute *_rawAttribute;
    GEOPDRelatedPlace *_relatedPlace;
    GEOPDRestaurantReservationLink *_restaurantReservationLink;
    GEOPDResultSnippet *_resultSnippet;
    GEOPDReview *_review;
    GEOPDSimpleRestaurantMenuText *_simpleRestaurantMenuText;
    GEOPDSpatialLookupResult *_spatialLookupResult;
    GEOPDStorefrontPresentation *_storefrontPresentation;
    GEOPDStorefront *_storefront;
    GEOStyleAttributes *_styleAttributes;
    GEOPDSupportsOfflineMaps *_supportsOfflineMaps;
    GEOPDTextBlock *_textBlock;
    GEOPDTip *_tip;
    GEOPDTransitAttribution *_transitAttribution;
    GEOPDTransitIncident *_transitIncident;
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitSchedule *_transitSchedule;
    GEOPDTransitTripGeometry *_transitTripGeometry;
    GEOPDTransitTripStopTime *_transitTripStopTime;
    GEOPDTransitTripStop *_transitTripStop;
    GEOPBTransitVehiclePosition *_transitVehiclePosition;
    GEOPDOfflineUpdateManifest *_updateManifest;
    GEOPDVenueInfo *_venueInfo;
    GEOPDWifiFingerprint *_wifiFingerprint;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDTransitTripGeometry *transitTripGeometry;
@property(readonly, nonatomic) _Bool hasTransitTripGeometry;
@property(retain, nonatomic) GEOPDTransitTripStopTime *transitTripStopTime;
@property(readonly, nonatomic) _Bool hasTransitTripStopTime;
@property(retain, nonatomic) GEOPDTransitTripStop *transitTripStop;
@property(readonly, nonatomic) _Bool hasTransitTripStop;
@property(retain, nonatomic) GEOPDRelatedPlace *relatedPlace;
@property(readonly, nonatomic) _Bool hasRelatedPlace;
@property(retain, nonatomic) GEOPDPlaceCollection *placeCollection;
@property(readonly, nonatomic) _Bool hasPlaceCollection;
@property(retain, nonatomic) GEOPDBusinessHours *businessHours;
@property(readonly, nonatomic) _Bool hasBusinessHours;
@property(retain, nonatomic) GEOPDLinkedService *linkedService;
@property(readonly, nonatomic) _Bool hasLinkedService;
@property(retain, nonatomic) GEOPBTransitVehiclePosition *transitVehiclePosition;
@property(readonly, nonatomic) _Bool hasTransitVehiclePosition;
@property(retain, nonatomic) GEOPDPrototypeContainer *prototypeContainer;
@property(readonly, nonatomic) _Bool hasPrototypeContainer;
@property(retain, nonatomic) GEOPDPlacecardLayoutConfiguration *placecardLayoutConfiguration;
@property(readonly, nonatomic) _Bool hasPlacecardLayoutConfiguration;
@property(retain, nonatomic) GEOPDStorefrontPresentation *storefrontPresentation;
@property(readonly, nonatomic) _Bool hasStorefrontPresentation;
@property(retain, nonatomic) GEOPDPoiEvent *poiEvent;
@property(readonly, nonatomic) _Bool hasPoiEvent;
@property(retain, nonatomic) GEOPDAnnotatedItemList *annotatedItemList;
@property(readonly, nonatomic) _Bool hasAnnotatedItemList;
@property(retain, nonatomic) GEOPDGroundViewLabel *groundViewLabel;
@property(readonly, nonatomic) _Bool hasGroundViewLabel;
@property(retain, nonatomic) GEOPDStorefront *storefront;
@property(readonly, nonatomic) _Bool hasStorefront;
@property(retain, nonatomic) GEOPDBrowseCategories *browseCategories;
@property(readonly, nonatomic) _Bool hasBrowseCategories;
@property(retain, nonatomic) GEOPDPriceDescription *priceDescription;
@property(readonly, nonatomic) _Bool hasPriceDescription;
@property(retain, nonatomic) GEOPDIcon *icon;
@property(readonly, nonatomic) _Bool hasIcon;
@property(retain, nonatomic) GEOPDWifiFingerprint *wifiFingerprint;
@property(readonly, nonatomic) _Bool hasWifiFingerprint;
@property(retain, nonatomic) GEOPDContainedPlace *containedPlace;
@property(readonly, nonatomic) _Bool hasContainedPlace;
@property(retain, nonatomic) GEOPDOfflineUpdateManifest *updateManifest;
@property(readonly, nonatomic) _Bool hasUpdateManifest;
@property(retain, nonatomic) GEOPDVenueInfo *venueInfo;
@property(readonly, nonatomic) _Bool hasVenueInfo;
@property(retain, nonatomic) GEOPDOfflineSize *offlineSize;
@property(readonly, nonatomic) _Bool hasOfflineSize;
@property(retain, nonatomic) GEOPDOfflineQuadNodes *offlineQuadNodes;
@property(readonly, nonatomic) _Bool hasOfflineQuadNodes;
@property(retain, nonatomic) GEOPDOfflineIdentifier *offlineIdentifier;
@property(readonly, nonatomic) _Bool hasOfflineIdentifier;
@property(retain, nonatomic) GEOPDSupportsOfflineMaps *supportsOfflineMaps;
@property(readonly, nonatomic) _Bool hasSupportsOfflineMaps;
@property(retain, nonatomic) GEOPDLocationEvent *locationEvent;
@property(readonly, nonatomic) _Bool hasLocationEvent;
@property(retain, nonatomic) GEOPDOfflineArea *offlineArea;
@property(readonly, nonatomic) _Bool hasOfflineArea;
@property(retain, nonatomic) GEOPDRap *rap;
@property(readonly, nonatomic) _Bool hasRap;
@property(retain, nonatomic) GEOPDQuickLink *quickLink;
@property(readonly, nonatomic) _Bool hasQuickLink;
@property(retain, nonatomic) GEOPDMessageLink *messageLink;
@property(readonly, nonatomic) _Bool hasMessageLink;
@property(retain, nonatomic) GEOPDAssociatedApp *associatedApp;
@property(readonly, nonatomic) _Bool hasAssociatedApp;
@property(retain, nonatomic) GEOPDPlacecardURL *placecardUrl;
@property(readonly, nonatomic) _Bool hasPlacecardUrl;
@property(retain, nonatomic) GEOPDTip *tip;
@property(readonly, nonatomic) _Bool hasTip;
@property(retain, nonatomic) GEOPDSpatialLookupResult *spatialLookupResult;
@property(readonly, nonatomic) _Bool hasSpatialLookupResult;
@property(retain, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink;
@property(readonly, nonatomic) _Bool hasRestaurantReservationLink;
@property(retain, nonatomic) GEOPDSimpleRestaurantMenuText *simpleRestaurantMenuText;
@property(readonly, nonatomic) _Bool hasSimpleRestaurantMenuText;
@property(retain, nonatomic) GEOPDAddressObject *addressObject;
@property(readonly, nonatomic) _Bool hasAddressObject;
@property(retain, nonatomic) GEOPDResultSnippet *resultSnippet;
@property(readonly, nonatomic) _Bool hasResultSnippet;
@property(retain, nonatomic) GEOPDExternalAction *externalAction;
@property(readonly, nonatomic) _Bool hasExternalAction;
@property(retain, nonatomic) GEOPDTransitInfoSnippet *transitInfoSnippet;
@property(readonly, nonatomic) _Bool hasTransitInfoSnippet;
@property(retain, nonatomic) GEOPDCaptionedPhoto *captionedPhoto;
@property(readonly, nonatomic) _Bool hasCaptionedPhoto;
@property(retain, nonatomic) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic) _Bool hasBusinessClaim;
@property(retain, nonatomic) GEOPDTransitAttribution *transitAttribution;
@property(readonly, nonatomic) _Bool hasTransitAttribution;
@property(retain, nonatomic) GEOPDFactoid *factoid;
@property(readonly, nonatomic) _Bool hasFactoid;
@property(retain, nonatomic) GEOPDTextBlock *textBlock;
@property(readonly, nonatomic) _Bool hasTextBlock;
@property(retain, nonatomic) GEOPDTransitIncident *transitIncident;
@property(readonly, nonatomic) _Bool hasTransitIncident;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(retain, nonatomic) GEOPDAmenities *amenities;
@property(readonly, nonatomic) _Bool hasAmenities;
@property(retain, nonatomic) GEOPDRawAttribute *rawAttribute;
@property(readonly, nonatomic) _Bool hasRawAttribute;
@property(retain, nonatomic) GEOPDFlyover *flyover;
@property(readonly, nonatomic) _Bool hasFlyover;
@property(retain, nonatomic) GEOPDETA *eta;
@property(readonly, nonatomic) _Bool hasEta;
@property(retain, nonatomic) GEOPDTransitSchedule *transitSchedule;
@property(readonly, nonatomic) _Bool hasTransitSchedule;
@property(retain, nonatomic) GEOPDTransitInfo *transitInfo;
@property(readonly, nonatomic) _Bool hasTransitInfo;
@property(retain, nonatomic) GEOPDHours *hours;
@property(readonly, nonatomic) _Bool hasHours;
@property(retain, nonatomic) GEOPDPhoto *photo;
@property(readonly, nonatomic) _Bool hasPhoto;
@property(retain, nonatomic) GEOPDReview *review;
@property(readonly, nonatomic) _Bool hasReview;
@property(retain, nonatomic) GEOPDRating *rating;
@property(readonly, nonatomic) _Bool hasRating;
@property(retain, nonatomic) GEOPDAddress *address;
@property(readonly, nonatomic) _Bool hasAddress;
@property(retain, nonatomic) GEOPDBounds *bounds;
@property(readonly, nonatomic) _Bool hasBounds;
@property(retain, nonatomic) GEOPDRoadAccessInfo *accessInfo;
@property(readonly, nonatomic) _Bool hasAccessInfo;
@property(retain, nonatomic) GEOPDPlaceInfo *placeInfo;
@property(readonly, nonatomic) _Bool hasPlaceInfo;
@property(retain, nonatomic) GEOPDEntity *entity;
@property(readonly, nonatomic) _Bool hasEntity;

@end
