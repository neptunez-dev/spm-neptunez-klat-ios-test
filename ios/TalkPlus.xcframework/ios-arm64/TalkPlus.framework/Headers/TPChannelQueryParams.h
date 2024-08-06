//
//  TPChannelQueryParams.h
//  TalkPlus

#import <Foundation/Foundation.h>
#import <TalkPlus/TPChannel.h>
#import <TalkPlus/TPMessage.h>

typedef NS_ENUM(NSInteger, TPChannelFrozenType) {
    TPIncludeFrozenChannel,     // Includes frozen Channels
    TPNotIncludeFrozenChannel,  // Does not includes frozen channels
    TPUnspecifiedFrozenChannel  // All (Fronzen + Not Fronen channels)
};

@interface TPChannelQueryParams : NSObject
@property (strong) TPChannel * lastChannel;
@property (strong) NSString * channelName;
@property (strong) NSString * category;
@property (strong) NSString * subcategory;
@property (strong) NSString * privateTag;
@property (strong) NSArray <NSString *>* memberIds;
@property (assign) TPChannelFrozenType frozenType;
@end
