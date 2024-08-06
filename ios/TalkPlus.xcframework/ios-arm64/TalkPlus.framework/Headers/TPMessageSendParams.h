//
//  TPMessageSendParams.h
//  TalkPlus
//
//  Created by JAECHUN LEE on 1/9/24.
//

#import <Foundation/Foundation.h>
#import <TalkPlus/TPChannel.h>

typedef NS_ENUM(NSInteger, TPMessageType) {
    TPMessageText,      // WebSocket Event + Push Notification Supported
    TPMessageHidden,    // WebSocket Event, Push Notification NOT Supported
    TPMessageCustom,
};

typedef NS_ENUM(NSInteger, TPMessageContentType) {
    TPMessageContentText,
    TPMessageContentFile,
};

@interface TPMessageSendParams : NSObject
@property (assign) TPMessageType messageType;
@property (assign) TPMessageContentType contentType;
@property (strong) TPChannel * channel;
@property (strong) NSString * textMessage;  // Required if 'contentType' is 'TPMessageContentText'
@property (strong) NSString * fileUrl;
@property (strong) NSString * filePath;
@property (strong) NSArray<NSString *> * mentionUserIDs;
@property (strong) NSString * parentMessageId;
@property (strong) NSDictionary * metaData;
@property (strong) NSArray<NSString *> * translationLanguages;

- (instancetype)initWithContentType:(TPMessageContentType)contentType
                      messageType:(TPMessageType)messageType
                          channel:(TPChannel *)channel;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@end
