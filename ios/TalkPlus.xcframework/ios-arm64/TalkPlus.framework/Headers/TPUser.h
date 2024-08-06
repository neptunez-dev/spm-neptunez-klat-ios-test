//
//  TPUser.h
//  talkplus-ios
//
//  Created by 최치웅 on 2020/09/21.
//

#import <Foundation/Foundation.h>
#import "TPEntity.h"

@class TPEntity;

@interface TPUser : TPEntity

-(NSString *)getUserId;
-(NSString *)getUsername;
-(NSString *)getProfileImageUrl;

-(BOOL)isDisablePushNotification;

-(long)getCreatedAt;
-(long)getUpdatedAt;
-(long)getLastReadAt;
-(long)getMuteExpiresAt;
-(NSDictionary *)getData;

@end
