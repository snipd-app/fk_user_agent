#import <sys/utsname.h>
#import <UIKit/UIKit.h>
#import <Flutter/Flutter.h>

@interface FkUserAgentPlugin : NSObject<FlutterPlugin>
@property (nonatomic) bool isEmulator;
@end
