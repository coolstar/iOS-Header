//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSChangeNotifiable-Protocol.h>
#import <ClassKit/CLSClientRemoteObject-Protocol.h>

@class NSError;

@protocol CLSQuery <CLSClientRemoteObject, CLSChangeNotifiable>
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(NSError *)arg2;
@end
