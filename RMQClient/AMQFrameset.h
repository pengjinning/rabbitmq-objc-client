#import "AMQProtocolValues.h"

@interface AMQFrameset : MTLModel<AMQEncoding>
@property (nonnull, nonatomic, copy, readonly) id<AMQMethod>method;
@property (nonnull, nonatomic, readonly) AMQContentHeader *contentHeader;
@property (nonnull, nonatomic, readonly) NSArray<AMQContentBody *> *contentBodies;
@property (nonnull, nonatomic, copy, readonly) NSNumber *channelID;
@property (nonnull, nonatomic, readonly) NSArray *frames;
- (nonnull instancetype)initWithChannelID:(nonnull NSNumber *)channelID
                                   method:(nonnull id<AMQMethod>)method
                            contentHeader:(nonnull AMQContentHeader *)contentHeader
                            contentBodies:(nonnull NSArray *)contentBodies;
- (nonnull NSData *)contentData;
@end