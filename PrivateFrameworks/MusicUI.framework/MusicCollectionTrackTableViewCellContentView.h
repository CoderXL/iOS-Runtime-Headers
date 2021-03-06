/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSString, UILabel;

@interface MusicCollectionTrackTableViewCellContentView : MusicStandardMediaTableViewCellContentView {
    float _maximumDurationWidth;
    UILabel *_trackNumberLabel;
    NSString *_trackNumberText;
}

@property float maximumDurationWidth;
@property(copy) NSString * trackNumberText;

+ (struct CGSize { float x1; float x2; })artworkSize;
+ (void)contentSizeCategoryDidChange;
+ (id)durationTextAttributes;
+ (struct CGSize { float x1; float x2; })sizeForDuration:(double)arg1;
+ (id)subtitleTextAttributes;
+ (id)titleTextAttributes;
+ (id)trackNumberTextAttributes;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)maximumDurationWidth;
- (void)reloadContent;
- (void)setDisplayAsDisabled:(BOOL)arg1;
- (void)setMaximumDurationWidth:(float)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setTrackNumberText:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)trackNumberText;
- (BOOL)updateLabelFonts;

@end
