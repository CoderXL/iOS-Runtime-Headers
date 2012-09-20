/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class WLImage;

@interface WLCardPlaceHolderImages : WLCardImages  {
    WLImage *_placeHolderImage;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _logoRect;
}

@property(retain) WLImage * placeHolderImage;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } logoRect;

+ (int)imageSet;
+ (id)archiveName;
+ (int)currentVersion;

- (void)setPlaceHolderImage:(id)arg1;
- (void)setLogoRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logoRect;
- (id)placeHolderImage;
- (void)preheatImages;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end