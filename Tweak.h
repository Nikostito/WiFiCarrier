@interface SBWiFiManager : NSObject
+(id)sharedInstance;
-(id)currentNetworkName;
@end

@interface SBTelephonyManager : NSObject
+(id)sharedTelephonyManager;
@end

@interfase STTelephonyStateProvider : NSObject
-(void)operatorNameChanged:(id)arg1 name:(id)arg2;
@end

static void forceUpdate();
