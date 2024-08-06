//
//  TPMessage.h
//  talkplus-ios
//
//  Created by 최치웅 on 2020/09/21.
//

#import <Foundation/Foundation.h>
#import "TPEntity.h"

#define TP_MESSAGE_TYPE_TEXT            @"text"
#define TP_MESSAGE_TYPE_CUSTOM          @"custom"
#define TP_MESSAGE_TYPE_HIDDEN          @"hidden"
#define TP_MESSAGE_TYPE_ADMIN           @"admin"
#define TP_MESSAGE_TYPE_ADMIN_HIDDEN    @"admin_hidden"

@interface TPMessage : TPEntity

-(NSString *)getMessageId;
-(NSString *)getChannelId;
-(NSString *)getUserId;
-(NSString *)getUsername;
-(NSString *)getUserProfileImage;
-(NSString *)getText;
-(NSString *)getFileUrl;
-(NSString *)getType;
-(NSString *)getTitle;
-(NSString *)getParentMessageId;
-(TPMessage *)getParentMessage;
-(NSArray *)getMentions;
-(NSDictionary *)getReactions;
-(NSDictionary *)getData;
-(NSDictionary *)getTranslatedText;
-(long)getCreatedAt;

@end
