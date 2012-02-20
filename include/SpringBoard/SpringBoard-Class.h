/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard.h"
#import "UIApplicationDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class NSDate, NSURL, SBUIController, NSMutableSet, UIWindow, SBApplication, SBDimmingWindow, SBAppContextHostManager, NSTimer, NSSet, NSDictionary, NSString, NSMutableArray, NSNumberFormatter;

@interface SpringBoard : SBUnknownSuperclass <UIApplicationDelegate> {
	SBUIController *_uiController;	// 80 = 0x50
	NSTimer *_menuButtonTimer;	// 84 = 0x54
	NSTimer *_lockButtonTimer;	// 88 = 0x58
	NSTimer *_idleTimer;	// 92 = 0x5c
	NSTimer *_autoLockTimer;	// 96 = 0x60
	double _lastUndimEventTime;	// 100 = 0x64
	double _lastTimeIdleCausedDim;	// 108 = 0x6c
	double _headsetButtonDownTime;	// 116 = 0x74
	GSEventRef _headsetDownEvent;	// 124 = 0x7c
	int _headsetClickCount;	// 128 = 0x80
	SBDimmingWindow *_simulatedBlankingWindow;	// 132 = 0x84
	unsigned _headsetButtonClickCount : 8;	// 136 = 0x88
	unsigned _menuButtonClickCount : 8;	// 137 = 0x89
	unsigned _screenWasDimOnMenuDown : 1;	// 138 = 0x8a
	unsigned _waitingForMenuDoubleTapAfterActingOnSingleTap : 1;	// 138 = 0x8a
	unsigned _screenshotWasTaken : 1;	// 138 = 0x8a
	unsigned _disableAutoDimming : 1;	// 138 = 0x8a
	unsigned _dontLockOnNextLockUp : 1;	// 138 = 0x8a
	unsigned _poweringDown : 1;	// 138 = 0x8a
	unsigned _headsetDownDelayedActionPerformed : 1;	// 138 = 0x8a
	unsigned _isSeekingInMedia : 1;	// 138 = 0x8a
	unsigned _forcePortraitStatusBarOrientation : 1;	// 139 = 0x8b
	unsigned _lockScreenCameraWantsIdleTimerDisabled : 1;	// 139 = 0x8b
	int _mediaSeekDirection;	// 140 = 0x8c
	float _currentBacklightLevel;	// 144 = 0x90
	unsigned _springBoardRequestsAccelerometerEvents;	// 148 = 0x94
	int _activeInterfaceOrientation;	// 152 = 0x98
	NSURL *_menuDoubleTapURL;	// 156 = 0x9c
	int _notifyDontAnimateREOToken;	// 160 = 0xa0
	int _notifyDontAllowMediaHUDToken;	// 164 = 0xa4
	BOOL _expectsFaceContact;	// 168 = 0xa8
	BOOL _expectsFaceContactInLandscape;	// 169 = 0xa9
	BOOL _proximityEventsEnabled;	// 170 = 0xaa
	NSSet *_restrictionDisabledApplications;	// 172 = 0xac
	double _sampleSystemStartTime;	// 176 = 0xb0
	NSDictionary *_startAppsCPUTimes;	// 184 = 0xb8
	CFDictionaryRef _registeredSimpleRemoteAppToPriority;	// 188 = 0xbc
	SBApplication *_registeredSimpleRemoteApp;	// 192 = 0xc0
	SBApplication *_nowPlayingApp;	// 196 = 0xc4
	SBApplication *_menuButtonInterceptApp;	// 200 = 0xc8
	BOOL _menuButtonInterceptAppEnabledForever;	// 204 = 0xcc
	NSString *_originatingOpenURLDisplayId;	// 208 = 0xd0
	NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;	// 212 = 0xd4
	NSMutableArray *_appsRegisteredForVolumeEvents;	// 216 = 0xd8
	NSNumberFormatter *_decimalFormatter;	// 220 = 0xdc
	NSNumberFormatter *_percentFormatter;	// 224 = 0xe0
	NSTimer *_midnightTimer;	// 228 = 0xe4
	NSDate *_midnightFireDate;	// 232 = 0xe8
	opaque_pthread_t *_backgroundMIGServerThread;	// 236 = 0xec
	opaque_pthread_t *_iconGenerationMIGServerThread;	// 240 = 0xf0
	SBAppContextHostManager *_springBoardContextHostManager;	// 244 = 0xf4
	UIWindow *_springBoardContextHostWindow;	// 248 = 0xf8
	NSMutableSet *_displaysRequestingAggressiveJetsamMode;	// 252 = 0xfc
}
@property(retain, nonatomic) UIWindow *window;
@property(assign, getter=isMetaHostingEnabled) BOOL metaHostingEnabled;	// G=0x9c55; S=0x9c79; converted property
@property(assign) BOOL proximityEventsEnabled;	// G=0x4ec9; S=0x5e31; converted property
@property(assign) BOOL expectsFaceContact;	// G=0x4ed9; S=0x5da1; converted property
@property(readonly, assign) float currentBacklightLevel;	// G=0x4e81; converted property
@property(readonly, assign) int activeInterfaceOrientation;	// G=0x62c1; converted property
@property(readonly, assign) BOOL expectsFaceContactInLandscape;	// G=0x4ee9; converted property
@property(readonly, retain) SBApplication *nowPlayingApp;	// G=0x4f1d; converted property
@property(readonly, retain) SBApplication *menuButtonInterceptApp;	// G=0x4e4d; converted property
@property(readonly, assign) BOOL menuButtonInterceptAppEnabledForever;	// G=0x4e5d; converted property
@property(readonly, retain) NSMutableArray *appsRegisteredForVolumeEvents;	// G=0x4e71; converted property
+ (BOOL)registerForSystemEvents;	// 0x4dc1
+ (BOOL)rendersLocally;	// 0x4dc5
- (id)init;	// 0x125b5
- (void)_createLogFile;	// 0x12495
- (void)writeLogFile;	// 0x1230d
- (void)handleKeyEvent:(GSEventRef)event;	// 0x122b1
- (void)setHardwareKeyboardLayoutName:(id)name;	// 0x122a9
- (void)updateStackshotSettings;	// 0x121fd
- (void)updatePowerlog;	// 0x12145
- (void)_performDeferredLaunchWork;	// 0x12075
- (void)applicationDidFinishLaunching:(id)application;	// 0x10b99
- (void)appleIconViewRemoved;	// 0x108d9
- (BOOL)launchedAfterLanguageRestart;	// 0x108b1
- (void)clearLaunchedAfterLanguageRestart;	// 0x10875
- (id)_settingLanguageStringForNewLanguage;	// 0x10775
- (void)languageChanged;	// 0x1023d
- (void)_rotateView:(id)view toOrientation:(int)orientation;	// 0x100e9
- (void)wipeDeviceNow;	// 0x1009d
- (void)checkPasscodeCompliance;	// 0x10069
- (void)showEDGEActivationFailureAlert:(id)alert reason:(id)reason forMMS:(BOOL)mms;	// 0xfdfd
- (void)_effectiveSettingsDidChange;	// 0xfd5d
- (void)_assistantPreferenceDidChange:(id)_assistantPreference;	// 0xfcd9
- (void)userDefaultsDidChange:(id)userDefaults;	// 0xf52d
- (void)_lockdownActivationChanged:(id)changed;	// 0xf481
- (void)_testPhoneAlerts;	// 0xf425
- (void)runFieldTestScript;	// 0xf3b9
- (void)_significantTimeChange;	// 0xf369
- (void)significantTimeChange;	// 0xf2a9
- (void)batteryStatusDidChange:(id)batteryStatus;	// 0xf271
- (BOOL)shouldRunFieldTestScript;	// 0xf10d
- (BOOL)iapIsInExtendedMode;	// 0x4dc9
- (BOOL)canShowLockScreenHUDControls;	// 0xf0b1
- (BOOL)canShowLockScreenCameraButton;	// 0xf005
- (BOOL)canShowNowPlayingControls;	// 0xefe1
- (void)setAppDisabledNowPlayingHUD:(BOOL)hud bundleIdentifier:(id)identifier;	// 0xef09
- (BOOL)respondImmediatelyToMenuSingleTapAllowingDoubleTap:(BOOL *)menuSingleTapAllowingDoubleTap;	// 0xede5
- (void)goToSpotlight:(BOOL)spotlight;	// 0xed01
- (BOOL)handleDoubleTapAction;	// 0xea99
- (void)handleMenuDoubleTap;	// 0xe949
- (void)_primeMenuButtonAssistant;	// 0xe915
- (void)_setMenuButtonTimer:(id)timer;	// 0xe7bd
- (void)_setLockButtonTimer:(id)timer;	// 0xe761
- (void)cancelMenuButtonRequests;	// 0xe701
- (void)clearMenuButtonTimer;	// 0xe6c5
- (void)_menuButtonWasHeld;	// 0xe495
- (double)_menuHoldTime;	// 0xe365
- (void)menuButtonDown:(GSEventRef)down;	// 0xe079
- (void)menuButtonUp:(GSEventRef)up;	// 0xd9c5
- (void)_giveUpOnMenuDoubleTap;	// 0x4dd9
- (void)_keyboardAvailabilityChanged;	// 0xd885
- (void)_runActivateAssistantTest;	// 0xd80d
- (void)_activateAssistantWithEvent:(int)event withCompletion:(id)completion;	// 0xd7a5
- (void)activateAssistantWithOptions:(id)options withCompletion:(id)completion;	// 0xd53d
- (void)_startSeekWithDirection:(id)direction;	// 0xd4cd
- (void)mediaKeyDown:(GSEventRef)down;	// 0xd271
- (void)mediaKeyUp:(GSEventRef)up;	// 0xd0dd
- (void)_handleMenuButtonEvent;	// 0xcef9
- (void)lockButtonDown:(GSEventRef)down;	// 0xcc8d
- (void)lockButtonWasHeld;	// 0xcbed
- (void)extendButtonTimersForWake;	// 0xcb6d
- (void)_powerDownNow;	// 0xcb65
- (void)_rebootNow;	// 0xcb5d
- (void)reboot;	// 0xcad9
- (void)powerDown;	// 0xc9f9
- (BOOL)isPoweringDown;	// 0x4e01
- (void)powerDownRequested:(id)requested;	// 0xc9e9
- (void)powerDownCanceled:(id)canceled;	// 0xc9a1
- (BOOL)relaunchingForSetupLanguageChange;	// 0x4e15
- (void)relaunchSpringBoard;	// 0xc931
- (void)_relaunchSpringBoardNow;	// 0xc91d
- (void)lockButtonUp:(GSEventRef)up;	// 0xc49d
- (void)_performDelayedHeadsetActionForAssistant;	// 0xc391
- (void)_performDelayedHeadsetActionForVoiceControl;	// 0xc291
- (void)_performDelayedHeadsetClickTimeout;	// 0x4e25
- (id)simpleRemoteDestinationApp;	// 0xc1bd
- (void)sendSimpleRemoteActionToRegisteredApp:(int)registeredApp;	// 0xc145
- (void)_iapServerConnectionDiedNotification:(id)notification;	// 0xc119
- (void)_iapExtendedModeReset;	// 0xc115
- (void)_imagesMounted;	// 0xc07d
- (void)_setDeferredHeadsetButtonDownEvent:(GSEventRef)event;	// 0xc051
- (void)headsetButtonDown:(GSEventRef)down;	// 0xbd85
- (void)headsetButtonUp:(GSEventRef)up;	// 0xb785
- (void)headsetAvailabilityChanged:(GSEventRef)changed;	// 0xb735
- (void)smsPrefsChanged;	// 0xb719
- (void)ALSPrefsChanged:(id)changed;	// 0xb651
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0xb641
- (void)updateCapabilitiesAndIconVisibility;	// 0xac5d
- (BOOL)isDisplayIdentifierRestrictionDisabled:(id)disabled;	// 0xac35
- (void)loadDebuggingAndDemoPrefs;	// 0xaa0d
- (void)debuggingAndDemoPrefsWereChanged;	// 0xa911
- (void)_localeChanged;	// 0xa84d
- (void)localeChanged;	// 0xa7a9
- (void)autoLockPrefsChanged;	// 0xa469
- (void)pinPolicyChanged;	// 0xa439
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;	// 0xa405
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)profileConnection userInfo:(id)info;	// 0xa3e5
- (void)ringerChanged:(int)changed;	// 0xa331
- (void)_updateRingerStateWithVisuals:(BOOL)visuals updatePreferenceRegister:(BOOL)aRegister;	// 0xa1e5
- (void)accessoryKeyStateChanged:(GSEventRef)changed;	// 0xa159
- (unsigned)_frontmostApplicationPort;	// 0xa155
- (void)quitTopApplication:(GSEventRef)application;	// 0xa141
- (void)applicationExited:(GSEventRef)exited;	// 0xa139
- (void)anotherApplicationFinishedLaunching:(GSEventRef)launching;	// 0xa119
- (void)applicationSuspend:(GSEventRef)suspend;	// 0x4e39
- (void)applicationSuspended:(GSEventRef)suspended;	// 0xa111
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;	// 0xa109
- (void)statusBarReturnActionTap:(GSEventRef)tap;	// 0x9f71
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;	// 0x9dd1
- (void)hideSpringBoardStatusBar;	// 0x9da5
- (void)showSpringBoardStatusBar;	// 0x9d79
// converted property setter: - (void)setMetaHostingEnabled:(BOOL)enabled;	// 0x9c79
// converted property getter: - (BOOL)isMetaHostingEnabled;	// 0x9c55
- (id)metaHostView;	// 0x9c2d
- (id)metaHostWindow;	// 0x4e3d
- (void)showAlertForUnhandledURL:(id)unhandledURL error:(int)error;	// 0x9a15
- (void)_applicationOpenURL:(id)url event:(GSEventRef)event;	// 0x9651
- (BOOL)applicationCanOpenURL:(id)url publicURLsOnly:(BOOL)only;	// 0x95fd
- (void)applicationOpenURL:(id)url;	// 0x95e9
- (void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only;	// 0x95c5
- (void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only animating:(BOOL)animating;	// 0x95a1
- (void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only animating:(BOOL)animating sender:(id)sender;	// 0x9575
- (void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only animating:(BOOL)animating additionalActivationFlag:(unsigned)flag;	// 0x9545
- (void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only animating:(BOOL)animating sender:(id)sender additionalActivationFlag:(unsigned)flag;	// 0x8f39
- (void)_openURLCore:(id)core display:(id)display publicURLsOnly:(BOOL)only animating:(BOOL)animating additionalActivationFlag:(unsigned)flag;	// 0x8dad
- (BOOL)canOpenURL:(id)url;	// 0x8d95
- (BOOL)openURL:(id)url;	// 0x8d35
- (void)setMenuButtonInterceptApp:(id)app forever:(BOOL)forever;	// 0x8cd5
// converted property getter: - (id)menuButtonInterceptApp;	// 0x4e4d
// converted property getter: - (BOOL)menuButtonInterceptAppEnabledForever;	// 0x4e5d
- (void)setWantsVolumeButtonEvents:(BOOL)events;	// 0x4e6d
- (void)setAppRegisteredForVolumeEvents:(id)volumeEvents isActive:(BOOL)active;	// 0x8c81
// converted property getter: - (id)appsRegisteredForVolumeEvents;	// 0x4e71
- (void)volumeChanged:(GSEventRef)changed;	// 0x8921
- (void)setBacklightFactorPending:(float)pending;	// 0x8919
- (void)setBacklightFactor:(float)factor keepTouchOn:(BOOL)on;	// 0x8851
- (void)setBacklightFactor:(float)factor;	// 0x883d
- (void)animateBacklightToFactor:(float)factor duration:(double)duration keepTouchOn:(BOOL)on didFinishTarget:(id)target selector:(SEL)selector;	// 0x87bd
- (void)animateBacklightToFactor:(float)factor duration:(double)duration didFinishTarget:(id)target selector:(SEL)selector;	// 0x8789
- (void)setBacklightLevel:(float)level;	// 0x8775
- (void)setBacklightLevel:(float)level permanently:(BOOL)permanently;	// 0x8611
// converted property getter: - (float)currentBacklightLevel;	// 0x4e81
- (float)systemBacklightLevel;	// 0x85b5
- (void)systemWillSleep;	// 0x857d
- (void)setupMidnightTimer;	// 0x827d
- (void)_midnightPassed;	// 0x821d
- (void)_adjustMidnightTimerAfterSleep;	// 0x8165
- (void)setBacklightFactorToZero;	// 0x8151
- (void)cancelSetBacklightFactorToZeroAfterDelay;	// 0x8111
- (void)setBacklightFactorToZeroAfterDelay;	// 0x8095
- (void)showSimulatedScreenBlank;	// 0x7f6d
- (void)hideSimulatedScreenBlank;	// 0x7f21
- (void)dimToBlackKeepingTouchOn;	// 0x7ec9
- (void)undim;	// 0x7e85
- (void)lockAfterCall;	// 0x7d95
- (BOOL)shouldDimToBlackInsteadOfLock;	// 0x7d2d
- (void)autoLock;	// 0x7c95
- (void)didIdle;	// 0x7c21
- (double)nextIdleTimeDuration;	// 0x7b59
- (double)nextLockTimeDuration;	// 0x7a51
- (void)clearIdleTimer;	// 0x79dd
- (void)resetIdleTimerAndUndim;	// 0x79c9
- (void)resetIdleTimerAndUndim:(BOOL)undim;	// 0x7601
- (void)_proximityChanged:(id)changed;	// 0x74f1
- (BOOL)caseIsEnabledAndLatched;	// 0x74bd
- (BOOL)allowCaseLatchLockAndUnlock;	// 0x7481
- (void)keyboardOrCaseLatchWantsToAttemptUnlock:(id)attemptUnlock;	// 0x73fd
- (void)noteCaseHardwarePresent;	// 0x738d
- (void)caseLatchWantsToAttemptLock;	// 0x727d
- (void)userEventOccurred;	// 0x7239
- (void)_updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing triggeredbyRouteWillChangeToReceiverNotification:(BOOL)triggeredbyRoute;	// 0x7229
- (void)updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing;	// 0x7205
- (void)updateRejectedInputSettings;	// 0x71f1
- (void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(BOOL)receiverNotification;	// 0x7161
- (void)lockDevice:(GSEventRef)device;	// 0x7125
- (void)showThermalAlertIfNecessary;	// 0x6f89
- (void)respondToCurrentThermalCondition;	// 0x6d59
- (void)_beginThermalJetsamCPUSampling;	// 0x6c79
- (void)_killThermallyActiveApplication;	// 0x6881
- (id)_newAppsCPUTimesDictionary;	// 0x66e5
- (void)didReceiveMemoryWarning;	// 0x66a1
- (void)noteSubstantialTransitionOccured;	// 0x6681
- (void)updateMirroredDisplayOrientation;	// 0x6575
- (void)noteInterfaceOrientationChanged:(int)changed;	// 0x6561
- (void)noteInterfaceOrientationChanged:(int)changed updateMirroredDisplays:(BOOL)displays;	// 0x6345
// converted property getter: - (int)activeInterfaceOrientation;	// 0x62c1
- (int)activeInterfaceOrientationWithoutConsideringAlerts;	// 0x4e91
- (int)_frontMostAppOrientation;	// 0x6255
- (int)interfaceOrientationForCurrentDeviceOrientation;	// 0x6209
- (void)reportStatusBarOrientationAsPortrait:(BOOL)portrait;	// 0x4ea1
- (int)statusBarOrientation;	// 0x5029
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(int)orientation;	// 0x4ebd
- (void)_removeDefaultInterfaceOrientatationOverride;	// 0x4ec1
- (id)displayIDForURLScheme:(id)urlscheme isPublic:(BOOL)aPublic;	// 0x6201
- (BOOL)_alertWindowShouldRotate;	// 0x61cd
- (double)windowRotationDuration;	// 0x6181
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;	// 0x4ec5
- (void)_migrateMenuDoubleTapSetting;	// 0x6101
- (void)updateMenuDoubleTapSettings;	// 0x5fb1
- (void)setZoomTouchEnabled:(BOOL)enabled;	// 0x5e61
// converted property getter: - (BOOL)proximityEventsEnabled;	// 0x4ec9
// converted property setter: - (void)setProximityEventsEnabled:(BOOL)enabled;	// 0x5e31
// converted property getter: - (BOOL)expectsFaceContact;	// 0x4ed9
// converted property getter: - (BOOL)expectsFaceContactInLandscape;	// 0x4ee9
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;	// 0x5db5
// converted property setter: - (void)setExpectsFaceContact:(BOOL)contact;	// 0x5da1
- (void)updateProximitySettings;	// 0x5d61
- (void)frontDisplayDidChange;	// 0x5c31
- (void)applicationWillOrderInContext:(id)application windowLevel:(float)level windowOutput:(int)output;	// 0x5bdd
- (void)applicationDidOrderOutContext:(id)application;	// 0x5b99
- (void)didDismissMiniAlert;	// 0x4f15
- (void)willDisplayMiniAlert:(int *)alert;	// 0x5b5d
- (void)willDismissMiniAlert:(int *)alert andShowAnother:(BOOL)another;	// 0x5b19
- (void)setHasMiniAlerts:(BOOL)alerts;	// 0x4f19
- (BOOL)canShowAlerts;	// 0x5ae5
- (BOOL)isLocked;	// 0x5ab1
- (int)alertInterfaceOrientation;	// 0x5a85
- (void)launchMusicPlayerSuspended;	// 0x5a7d
- (void)_launchMusicPlayerSuspendedAndStartMusic;	// 0x5a61
- (void)_tearDownNow;	// 0x5a5d
- (void)tearDown;	// 0x59f5
- (void)_nowPlayingAppDidChangeNotification:(id)_nowPlayingApp;	// 0x59d1
- (BOOL)isMusicPlayerInNowPlayingView;	// 0x5949
// converted property getter: - (id)nowPlayingApp;	// 0x4f1d
- (BOOL)isNowPlayingAppPlaying;	// 0x58f5
- (BOOL)isMusicPlayerPlaying;	// 0x586d
- (void)setNowPlayingInfo:(id)info forApplication:(id)application;	// 0x56b9
- (void)_updateRegisteredSimpleRemoteApp;	// 0x55c1
- (void)setSimpleRemoteRoutingPriority:(unsigned)priority forApplication:(id)application;	// 0x556d
- (unsigned)simpleRemoteRoutingPriorityForApplication:(id)application;	// 0x5551
- (unsigned)simpleRemoteRoutingPriority;	// 0x4f2d
- (void)setIdleTimerDisabled:(BOOL)disabled;	// 0x54e1
- (void)setSuspensionAnimationDelay:(double)delay;	// 0x4f31
- (BOOL)isCameraApp;	// 0x54ad
- (id)formattedDecimalStringForNumber:(id)number;	// 0x53ed
- (id)formattedPercentStringForNumber:(id)number;	// 0x532d
- (id)_accessibilityFrontMostApplication;	// 0x5329
- (id)_accessibilityTopDisplay;	// 0x5325
- (id)_accessibilityRunningApplications;	// 0x5321
- (BOOL)_accessibilityIsSystemGestureActive;	// 0x5311
- (BOOL)_accessibilityObjectWithinProximity;	// 0x5305
- (void)_accessibilitySetEventTapCallback:(void *)callback;	// 0x52fd
- (void *)_accessibilityEventTapCallback;	// 0x52f9
- (void)_accessibilityProcessHIDEvent:(IOHIDEventRef)event;	// 0x52f1
- (BOOL)_accessibilityIsSBStealingEvents;	// 0x52e5
- (double)_accessibilityActivationAnimationStartDelay;	// 0x4f35
- (void)_accessibilityActivationAnimationWillBegin;	// 0x4f49
- (double)_accessibilityDeactivationAnimationStartDelay;	// 0x4f4d
- (void)_accessibilityDeactivationAnimationWillBegin;	// 0x4f61
- (BOOL)_isSwitcherShowing;	// 0x52b1
- (void)_setStatusBarShowsProgress:(BOOL)progress;	// 0x5279
- (void)_spokenLanguageChanged;	// 0x522d
- (void)beginListeningForAssistantActivationGesture;	// 0x5181
- (void)stopListeningForAssistantActivationGesture;	// 0x5139
- (void)setSystemAggressiveJetsamEnabled:(BOOL)enabled forDisplay:(id)display;	// 0x5071
@end

@interface SpringBoard (ScriptingAdditions)
- (id)setNextVoiceRecognitionAudioInputPaths:(id)paths;	// 0x12a1d
@end

@interface SpringBoard (SBApplicationTesting)
- (BOOL)runTest:(id)test options:(id)options;	// 0x31dbd
- (void)_retryLaunchTestWithOptions:(id)options;	// 0x31d45
- (void)startLaunchTestNamed:(id)named options:(id)options;	// 0x3218d
- (void)startResumeTestNamed:(id)named options:(id)options;	// 0x324bd
- (void)endLaunchTest;	// 0x31d95
- (void)finishedTest:(id)test extraResults:(id)results;	// 0x3210d
@end

@interface SpringBoard (AlertSheetAdditions)
- (void)_alertSheetStackChanged;	// 0x9496d
@end