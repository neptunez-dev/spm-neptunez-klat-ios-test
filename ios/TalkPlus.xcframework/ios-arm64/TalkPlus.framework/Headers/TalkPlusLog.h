#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, TalkPlusLogLevel) {
    TalkPlusLogLevelNone    = 0,
    TalkPlusLogLevelError   = 1,
    TalkPlusLogLevelWarning = 2,
    TalkPlusLogLevelInfo    = 3,
    TalkPlusLogLevelDebug   = 4,
    TalkPlusLogLevelVerbose = 5
};

#define TalkPlusLogTag(level)                      [[TalkPlusLog sharedInstance] tagWithLogLevel:level className:NSStringFromClass([self class]) function:__PRETTY_FUNCTION__ line:__LINE__]

#define TalkPlusLogWithLevel(level, fmt, ...)      [[TalkPlusLog sharedInstance] logWithLevel:level tag:TalkPlusLogTag(level) format:fmt, ## __VA_ARGS__]
#define TalkPlusLogError(fmt, ...)                 TalkPlusLogWithLevel(TalkPlusLogLevelError, fmt, ##__VA_ARGS__)
#define TalkPlusLogWarning(fmt, ...)               TalkPlusLogWithLevel(TalkPlusLogLevelWarning, fmt, ##__VA_ARGS__)
#define TalkPlusLogInfo(fmt, ...)                  TalkPlusLogWithLevel(TalkPlusLogLevelInfo, fmt, ##__VA_ARGS__)
#define TalkPlusLogDebug(fmt, ...)                 TalkPlusLogWithLevel(TalkPlusLogLevelDebug, fmt, ##__VA_ARGS__)

// debuggable = true
#define TalkPlusDebugLogWithLevel(level, fmt, ...) if ([TalkPlusLog sharedInstance].isDebuggable) { TalkPlusLogWithLevel(level, fmt, ##__VA_ARGS__); }
#define TalkPlusDebugLogError(fmt, ...)            TalkPlusDebugLogWithLevel(TalkPlusLogLevelError, fmt, ##__VA_ARGS__)
#define TalkPlusDebugLog(fmt, ...)                 TalkPlusDebugLogWithLevel(TalkPlusLogLevelDebug, fmt, ##__VA_ARGS__)


@interface TalkPlusLog : NSObject

@property (assign) TalkPlusLogLevel logLevel;
@property (nonatomic, assign, getter=isDebuggable) BOOL debuggable;

+ (instancetype)sharedInstance;

- (NSString *)tagWithLogLevel:(TalkPlusLogLevel)logLevel
                    className:(NSString *)className
                     function:(const char *)function
                         line:(int)line;

- (void)log:(NSString *)format, ...;
- (void)logWithLevel:(TalkPlusLogLevel)logLevel
                 tag:(NSString *)tag
              format:(NSString *)format, ...;

@end

