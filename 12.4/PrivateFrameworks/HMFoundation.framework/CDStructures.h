//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _HMFRate {
    unsigned long long value;
    double period;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct os_activity_scope_state_s {
    unsigned long long _field1[2];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;
