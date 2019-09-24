//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerProvider-Protocol.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerRecentsProvider : NSObject <CNPhotoPickerProvider>
{
    _Bool _containsContactImage;
    _Bool _containsMonogram;
    NSString *identifier;
    CNContact *_contact;
}

@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool containsMonogram; // @synthesize containsMonogram=_containsMonogram;
@property(nonatomic) _Bool containsContactImage; // @synthesize containsContactImage=_containsContactImage;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
- (id)providerItemForContactImage:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 RTL:(_Bool)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
