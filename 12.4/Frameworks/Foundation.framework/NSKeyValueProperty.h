//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@class NSKeyValueContainerClass, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : NSObject <NSCopying>
{
    NSKeyValueContainerClass *_containerClass;
    NSString *_keyPath;
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1;
- (id)dependentValueKeyOrKeysIsASet:(_Bool *)arg1;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;
- (Class)isaForAutonotifying;
- (id)keyPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;

@end
