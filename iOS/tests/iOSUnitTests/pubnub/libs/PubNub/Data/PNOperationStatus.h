#import <Foundation/Foundation.h>


@interface PNOperationStatus : NSObject

#pragma mark Properties

@property (nonatomic, readonly, getter = isSuccessful) BOOL successful;

// Stores error description in case of error
@property (nonatomic, readonly, strong) PNError *error;

// Stores message which arrived from PubNub service as operation
// processing status description
@property (nonatomic, readonly, copy) NSString *statusDescription;

// Stores reference on time token at which this operation status
// message was generated by PubNub service
@property (nonatomic, readonly, strong) NSNumber *timeToken;

#pragma mark -


@end