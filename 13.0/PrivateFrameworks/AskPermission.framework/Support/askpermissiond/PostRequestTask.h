//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, NSURL;

@interface PostRequestTask : Task
{
    ACAccount *_account;
    NSURL *_requestURL;
}

@property(readonly, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_requestIdentifierFromResult:(id)arg1 withError:(id *)arg2;
- (_Bool)_storeRequestWithResult:(id)arg1 error:(id *)arg2;
- (id)_serverRequestWithError:(id *)arg1;
- (id)perform;
- (id)initWithRequestURL:(id)arg1 account:(id)arg2;

@end
