//
//  TPLoginParams.h
//  TalkPlus
//
//  Created by JCLEE on 1/5/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, TPLoginType) {
    TPLoginAnonymous,
    TPLoginToken,
};

@interface TPLoginParams : NSObject
@property (assign) TPLoginType loginType;
@property (strong) NSString * loginToken;
@property (strong) NSString * userId;
@property (strong) NSString * userName;
@property (strong) UIImage * profileImage;
@property (strong) NSString * profileImageUrl;
@property (strong) NSDictionary * metaData;
@property (strong) NSString * translationLanguage;

- (instancetype)initWithLoginType:(TPLoginType)loginType userId:(NSString *)userId;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@end
