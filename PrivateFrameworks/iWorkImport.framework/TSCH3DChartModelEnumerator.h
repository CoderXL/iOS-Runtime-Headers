/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSCH3DChartType, TSCHChartAxis, TSCHChartInfo, TSCHChartModel, TSCHChartSeries, TSCHChartSeriesType;

@interface TSCH3DChartModelEnumerator : NSObject {
    struct ValueEnumerator { 
        BOOL mForward; 
        unsigned int mIndex; 
        unsigned int mMax; 
        double mValue; 
    struct ValueEnumerator { 
        BOOL mForward; 
        unsigned int mIndex; 
        unsigned int mMax; 
        double mValue; 
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__first_; 
        } __end_cap_; 
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__first_; 
        } __end_cap_; 
    TSCH3DChartType *mChartType;
    } mCoordinate;
    TSCHChartAxis *mCoordinateAxis;
    } mCoordinateValues;
    double mIntercept;
    TSCHChartModel *mModel;
    unsigned int mNumberOfValues;
    } mSeries;
    NSArray *mSeriesList;
    TSCHChartSeriesType *mSeriesType;
    } mSeriesValues;
    double mUnitSpaceIntercept;
    TSCHChartAxis *mValueAxis;
}

@property(readonly) TSCH3DChartType * chartType;
@property(readonly) TSCHChartInfo * info;
@property(readonly) TSCHChartModel * model;
@property(readonly) TSCHChartSeries * series;
@property(readonly) TSCHChartSeriesType * seriesType;
@property(readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } size;

+ (id)enumeratorWithModel:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)axisSpaceValue;
- (id)chartType;
- (unsigned int)countSeries;
- (void)dealloc;
- (id)elementEnumerator;
- (unsigned int)elementIndex;
- (double)groupValue;
- (unsigned int)index;
- (id)info;
- (id)initWithModel:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3;
- (double)intercept;
- (BOOL)isValid;
- (BOOL)isValidNonZero;
- (id)model;
- (id)nextElement:(unsigned int)arg1;
- (id)nextElement;
- (id)nextSeries:(unsigned int)arg1;
- (id)nextSeries;
- (unsigned int)numberOfSeries;
- (id)p_resetCoordinateEnumeration;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })position;
- (void)resetForReverseSeriesEnumeration:(BOOL)arg1;
- (id)reverseSeriesEnumerator;
- (id)series;
- (id)seriesEnumerator;
- (id)seriesFill;
- (id)seriesFillOrStrokeColor;
- (id)seriesName;
- (id)seriesType;
- (BOOL)showSeriesName;
- (BOOL)showValueLabels;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (BOOL)skipZeroValues;
- (double)unitSpaceIntercept;
- (double)unitSpaceValue;
- (double)unitSpaceValueForAxisValue:(double)arg1;
- (void)updateAxes;
- (void)updateValue;
- (unsigned int)valueLabelPositionForAxisValue:(double)arg1;
- (id)valueString;
- (id)valueStringForLabelResources:(id)arg1;

@end
