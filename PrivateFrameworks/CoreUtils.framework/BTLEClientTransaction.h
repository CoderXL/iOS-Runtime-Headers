/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BTLEClient, NSData, NSString;

@interface BTLEClientTransaction : NSObject {
    BTLEClient *_client;
    NSString *_readCharacteristic;
    NSData *_readData;
    id _readHandler;
    id _replyHandler;
    NSString *_writeCharacteristic;
    NSData *_writeData;
    id _writeHandler;
}

@property(retain) BTLEClient * client;
@property(copy) NSString * readCharacteristic;
@property(copy) NSData * readData;
@property(copy) id readHandler;
@property(copy) id replyHandler;
@property(copy) NSString * writeCharacteristic;
@property(copy) NSData * writeData;
@property(copy) id writeHandler;

- (id)client;
- (id)readCharacteristic;
- (id)readData;
- (id)readHandler;
- (id)replyHandler;
- (void)setClient:(id)arg1;
- (void)setReadCharacteristic:(id)arg1;
- (void)setReadData:(id)arg1;
- (void)setReadHandler:(id)arg1;
- (void)setReplyHandler:(id)arg1;
- (void)setWriteCharacteristic:(id)arg1;
- (void)setWriteData:(id)arg1;
- (void)setWriteHandler:(id)arg1;
- (id)writeCharacteristic;
- (id)writeData;
- (id)writeHandler;

@end
