//
//  TPChannel.h
//  talkplus-ios
//
//  Created by 최치웅 on 2020/09/21.
//

#import <Foundation/Foundation.h>
#import "TPEntity.h"
#import "TPMessage.h"

#define TP_CHANNEL_TYPE_PRIVATE                 @"private"
#define TP_CHANNEL_TYPE_PUBLIC                  @"public"
#define TP_CHANNEL_TYPE_INVITATION_ONLY         @"invitationOnly"

@interface TPChannel : TPEntity

-(id)initWithDictionary:(NSDictionary *)dict;

-(NSString *)getChannelId;
-(NSString *)getChannelName;

-(NSString *)getChannelOwnerId;
-(NSString *)getType;

-(TPMessage *)getLastMessage;

-(int)getUnreadCount;
-(int)getMemberMaxCount;
-(int)getMemberCount;
-(long)getLastReadAt;

-(NSDictionary *)getMemberDictionary;
-(NSArray *)getMembers;
-(NSArray *)getBannedUsers;
-(NSArray *)getMutedUsers;

-(NSString *)getInvitationCode;

-(NSString *)getCategory;
-(NSString *)getSubCategory;

-(BOOL)isFrozen;
-(NSString *)getImageUrl;
-(NSDictionary *)getData;
-(NSDictionary *)getPrivateData;

-(NSString *)getPrivateTag;

-(BOOL)isPushNotificationDisabled;
-(NSString *)getPushNotificationSound;

-(int)getMessageUnreadCount:(TPMessage *)tpMessage;

@end
