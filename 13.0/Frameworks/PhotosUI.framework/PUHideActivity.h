//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActivity.h>

@class PUAssetHidingHelper;

__attribute__((visibility("hidden")))
@interface PUHideActivity : PXActivity
{
    PUAssetHidingHelper *_assetHidingHelper;
}

+ (long long)activityCategory;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (void)setItemSourceController:(id)arg1;
- (id)_assetHidingHelper;

@end
