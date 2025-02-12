// DO NOT MODIFY
// THIS FILE IS AUTOGENERATED

#import "RCTMGLStyle.h"
#import "RCTMGLStyleValue.h"
#import <React/RCTBridge.h>

@import Mapbox;

@interface RCTMGLStyle : NSObject

@property (nonatomic, weak) RCTBridge *bridge;
@property (nonatomic, strong) MGLStyle *style;

- (id)initWithMGLStyle:(MGLStyle*)mglStyle;

- (void)fillLayer:(MGLFillStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)lineLayer:(MGLLineStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)symbolLayer:(MGLSymbolStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)circleLayer:(MGLCircleStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)heatmapLayer:(MGLHeatmapStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)fillExtrusionLayer:(MGLFillExtrusionStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)rasterLayer:(MGLRasterStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)hillshadeLayer:(MGLHillshadeStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)backgroundLayer:(MGLBackgroundStyleLayer *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;
- (void)lightLayer:(MGLLight *)layer withReactStyle:(NSDictionary *)reactStyle isValid:(BOOL (^)(void)) isValid;

- (void)setFillSortKey:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillStyleLayerVisibility:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillAntialias:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillOpacity:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillOpacityTransition:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillColor:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillColorTransition:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillOutlineColor:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillOutlineColorTransition:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillTranslate:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillTranslateTransition:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillTranslateAnchor:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillPattern:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillPatternTransition:(MGLFillStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineCap:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineJoin:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineMiterLimit:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineRoundLimit:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineSortKey:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineStyleLayerVisibility:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineOpacity:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineOpacityTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineColor:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineColorTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineTranslate:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineTranslateTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineTranslateAnchor:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineWidth:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineWidthTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineGapWidth:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineGapWidthTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineOffset:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineOffsetTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineBlur:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineBlurTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineDasharray:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineDasharrayTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLinePattern:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLinePatternTransition:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setLineGradient:(MGLLineStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setSymbolPlacement:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setSymbolSpacing:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setSymbolAvoidEdges:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setSymbolSortKey:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setSymbolZOrder:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconAllowOverlap:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconIgnorePlacement:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconOptional:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconRotationAlignment:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconSize:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconTextFit:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconTextFitPadding:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconImage:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconRotate:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconPadding:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconKeepUpright:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconOffset:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconAnchor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconPitchAlignment:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextPitchAlignment:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextRotationAlignment:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextField:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextFont:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextSize:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextMaxWidth:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextLineHeight:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextLetterSpacing:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextJustify:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextRadialOffset:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextVariableAnchor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextAnchor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextMaxAngle:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextWritingMode:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextRotate:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextPadding:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextKeepUpright:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextTransform:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextOffset:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextAllowOverlap:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextIgnorePlacement:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextOptional:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setSymbolStyleLayerVisibility:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconOpacity:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconOpacityTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconColor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconColorTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconHaloColor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconHaloColorTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconHaloWidth:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconHaloWidthTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconHaloBlur:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconHaloBlurTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconTranslate:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconTranslateTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIconTranslateAnchor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextOpacity:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextOpacityTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextColor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextColorTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextHaloColor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextHaloColorTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextHaloWidth:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextHaloWidthTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextHaloBlur:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextHaloBlurTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextTranslate:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextTranslateTransition:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setTextTranslateAnchor:(MGLSymbolStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleStyleLayerVisibility:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleRadius:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleRadiusTransition:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleColor:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleColorTransition:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleBlur:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleBlurTransition:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleOpacity:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleOpacityTransition:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleTranslate:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleTranslateTransition:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleTranslateAnchor:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCirclePitchScale:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCirclePitchAlignment:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleStrokeWidth:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleStrokeWidthTransition:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleStrokeColor:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleStrokeColorTransition:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleStrokeOpacity:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setCircleStrokeOpacityTransition:(MGLCircleStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapStyleLayerVisibility:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapRadius:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapRadiusTransition:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapWeight:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapIntensity:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapIntensityTransition:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapColor:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapOpacity:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHeatmapOpacityTransition:(MGLHeatmapStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionStyleLayerVisibility:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionOpacity:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionOpacityTransition:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionColor:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionColorTransition:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionTranslate:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionTranslateTransition:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionTranslateAnchor:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionPattern:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionPatternTransition:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionHeight:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionHeightTransition:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionBase:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionBaseTransition:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setFillExtrusionVerticalGradient:(MGLFillExtrusionStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterStyleLayerVisibility:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterOpacity:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterOpacityTransition:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterHueRotate:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterHueRotateTransition:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterBrightnessMin:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterBrightnessMinTransition:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterBrightnessMax:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterBrightnessMaxTransition:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterSaturation:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterSaturationTransition:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterContrast:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterContrastTransition:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterResampling:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setRasterFadeDuration:(MGLRasterStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeStyleLayerVisibility:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeIlluminationDirection:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeIlluminationAnchor:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeExaggeration:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeExaggerationTransition:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeShadowColor:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeShadowColorTransition:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeHighlightColor:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeHighlightColorTransition:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeAccentColor:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setHillshadeAccentColorTransition:(MGLHillshadeStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setBackgroundStyleLayerVisibility:(MGLBackgroundStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setBackgroundColor:(MGLBackgroundStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setBackgroundColorTransition:(MGLBackgroundStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setBackgroundPattern:(MGLBackgroundStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setBackgroundPatternTransition:(MGLBackgroundStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setBackgroundOpacity:(MGLBackgroundStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setBackgroundOpacityTransition:(MGLBackgroundStyleLayer *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setAnchor:(MGLLight *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setPosition:(MGLLight *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setPositionTransition:(MGLLight *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setColor:(MGLLight *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setColorTransition:(MGLLight *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIntensity:(MGLLight *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;
- (void)setIntensityTransition:(MGLLight *)layer withReactStyleValue:(RCTMGLStyleValue *)styleValue;


@end
