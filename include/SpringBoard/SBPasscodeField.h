/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"


@interface SBPasscodeField : SBUnknownSuperclass {
	int _style;	// 84 = 0x54
	float _okFontSize;	// 88 = 0x58
	float _cancelFontSize;	// 92 = 0x5c
	float _buttonWidth;	// 96 = 0x60
	BOOL _showsCancelButton;	// 100 = 0x64
	BOOL _isAlphanumericField;	// 101 = 0x65
}
@property(assign, nonatomic) BOOL isAlphanumericField;	// G=0xf3cbd; S=0xf3ccd; @synthesize=_isAlphanumericField
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0xf3cad; S=0xf46c5; @synthesize=_showsCancelButton
@property(assign, nonatomic) int clearButtonMode;	// G=0xf469d; S=0xf457d; 
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0xf47c1; S=0xf4735; 
+ (Class)textFieldClass;	// 0xf3d39
- (id)initWithStyle:(int)style;	// 0xf3cdd
- (id)_entryField;	// 0xf48b5
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0xf47e9
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0xf47c1
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0xf4735
- (void)setShowsOKButton:(BOOL)button;	// 0xf46f5
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0xf46c5
// declared property getter: - (int)clearButtonMode;	// 0xf469d
// declared property setter: - (void)setClearButtonMode:(int)mode;	// 0xf457d
- (id)textInputTraits;	// 0xf4555
- (id)_localizedOKString;	// 0xf44fd
- (id)_localizedCancelString;	// 0xf44a5
- (void)_updateButtonMetrics;	// 0xf41e9
- (void)_updateButtonTitle;	// 0xf3fcd
- (void)_updateButtonFrame;	// 0xf3e59
- (void)_updateFields;	// 0xf3da5
- (BOOL)textFieldShouldClear:(id)textField;	// 0xf3ca9
- (void)_textDidChange;	// 0xf3d55
// declared property getter: - (BOOL)showsCancelButton;	// 0xf3cad
// declared property getter: - (BOOL)isAlphanumericField;	// 0xf3cbd
// declared property setter: - (void)setIsAlphanumericField:(BOOL)field;	// 0xf3ccd
@end
