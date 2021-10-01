// [!] important set UnityFramework in Target Membership for this file
// [!]           and set Public header visibility

#import <Foundation/Foundation.h>

typedef void (*UnityCallbackHandlerStr)(const char* message);
typedef void (*UnityCallbackHandlerInt)(int retCode);

// NativeCallsProtocol defines protocol with methods you want to be called from managed
@protocol NativeCallsProtocol
@required
- (void) showHostMainWindow:(NSString*)param;
- (void) showSubWindow:(NSString*)param;
- (void) showSubWindow:(NSString*)param;
- (void) getUserInfo:(UnityCallbackHandlerStr)handler;
- (void) setCarColor:(int)id handler:(UnityCallbackHandlerInt)handler;
- (void) getUGCList:(int)count lastItem:(NSString*)lastItem handler:(UnityCallbackHandlerStr)handler;
- (int)  showUGCDetail:(NSString*)ugcId resourceType:(int)resourceType;
- (int)  showHomePage:(NSString*)uid;
- (int)  showCrystalDetail;
- (void) getTasks:(NSString*)taskType handler:(UnityCallbackHandlerStr)handler;
- (void) getCampList:(int)count lastItem:(NSString*)lastItem handler:(UnityCallbackHandlerStr)handler;
- (int)  showCampPage:(NSString*)circleId;
- (int)  showCarDetail;
- (void) exitGame;

- (void) getBoxProgress:(UnityCallbackHandlerStr)handler;
- (void) getBoxResult:(UnityCallbackHandlerStr)handler;

// Âñµã½Ó¿Ú
-(void)setTrackEvent:(NSString*)eventString;

// other methods
@end

__attribute__ ((visibility("default")))
@interface FrameworkLibAPI : NSObject
// call it any time after UnityFrameworkLoad to set object implementing NativeCallsProtocol methods
+(void) registerAPIforNativeCalls:(id<NativeCallsProtocol>) aApi;

@end

/*#pragma once
char* cStringCopy(const char* string){
    if(string == nil)
    {
        return nil;
    }
    
    char* res = (char*)malloc(strlen(string)+1);
    strcpy(res, string);
    return res;
}*/
