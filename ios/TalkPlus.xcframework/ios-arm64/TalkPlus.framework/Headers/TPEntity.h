//
//  Entitiy.h
//  talkplus-ios
//
//  Created by 최치웅 on 2020/09/21.
//

#import <Foundation/Foundation.h>

@interface TPEntity : NSObject

-(id)initWithDictionary:(NSDictionary *)dict;

-(NSDictionary *)getDictionary;
-(NSString *)getProperty:(NSString *)key;

-(id)get:(NSString *)key;
-(void)setObject:(id)object forKey:(NSString *)key;
-(bool)has:(NSString *)key;

@end
