#import <Foundation/Foundation.h>

#pragma mark Class forward

@class PNChannel;


@interface PNMessage : NSObject


#pragma mark - Properties

// Stores reference on channel to which this message
// should be sent
@property (nonatomic, readonly, strong) PNChannel *channel;

// Stores reference on message body
@property (nonatomic, readonly, strong) id message;

// Stores reference on date when this message was received
// (doesn't work for history, only for presence events)
@property (nonatomic, readonly, strong) PNDate *receiveDate;

// Stores reference on date when this message has been sent to the target channel.
@property (nonatomic, readonly, strong) PNDate *date;

#pragma mark - Class methods

/**
 Load saved \b PNMessage instance from file specified by parameter.

 @param messageFilePath
 Full path to the file, which should represent serialized \b PNMessage instance.

 @return Reference on \b PNMessage instance initialized from file or \a 'nil' if wrong file has been provided.
 */
+ (PNMessage *)messageFromFileAtPath:(NSString *)messageFilePath;


#pragma mark - Instance methods

/**
 Serialized \b PNMessage and save it into file at specified path.

 @param messageStoreFilePath
 Full path to the location where serialized instance should be saved.

 @note By default this method will override file stored at specified path (if there is some).

 @return Whether serialized instance written to the file at specified path or not.
 */
- (BOOL)writeToFileAtPath:(NSString *)messageStoreFilePath;


#pragma mark -


@end