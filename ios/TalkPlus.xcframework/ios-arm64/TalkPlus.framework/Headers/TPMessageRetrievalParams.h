//
//  TPMessageRetrievalParams.h
//  TalkPlus
//
//  Created by JCLEE on 1/5/24.
//

#import <Foundation/Foundation.h>
#import <TalkPlus/TPChannel.h>
#import <TalkPlus/TPMessage.h>

typedef NS_ENUM(NSInteger, TPMessageOrderBy) {
    TPOrderByOldest,
    TPOrderByLatest,
};

@interface TPMessageRetrievalParams : NSObject
@property (strong) TPChannel * channel;
@property (strong) TPMessage * lastMessage;
@property (strong) NSString * messageId;
@property (strong) NSString * translationLanguage;
@property (assign) TPMessageOrderBy orderby;


- (instancetype)initWithChannel:(TPChannel *)channel;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@end
