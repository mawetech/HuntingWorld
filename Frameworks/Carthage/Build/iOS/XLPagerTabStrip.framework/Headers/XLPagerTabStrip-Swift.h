// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIScrollView;
@protocol UIViewControllerTransitionCoordinator;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC15XLPagerTabStrip27PagerTabStripViewController")
@interface PagerTabStripViewController : UIViewController <UIScrollViewDelegate>
@property (nonatomic, weak) IBOutlet UIScrollView * _Null_unspecified containerView;
@property (nonatomic, readonly, copy) NSArray<UIViewController *> * _Nonnull viewControllers;
@property (nonatomic, readonly) NSInteger currentIndex;
@property (nonatomic, readonly) CGFloat pageWidth;
@property (nonatomic, readonly) CGFloat scrollPercentage;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;
- (void)moveToViewControllerAt:(NSInteger)index animated:(BOOL)animated;
- (void)moveToViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
- (NSArray<UIViewController *> * _Nonnull)viewControllersFor:(PagerTabStripViewController * _Nonnull)pagerTabStripController SWIFT_WARN_UNUSED_RESULT;
- (void)updateIfNeeded;
- (BOOL)canMoveToIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)pageOffsetForChildAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)offsetForChildAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pageForContentOffset:(CGFloat)contentOffset SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)virtualPageForContentOffset:(CGFloat)contentOffset SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pageForVirtualPage:(NSInteger)virtualPage SWIFT_WARN_UNUSED_RESULT;
- (void)updateContent;
- (void)reloadPagerTabStripView;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class BarView;

SWIFT_CLASS("_TtC15XLPagerTabStrip30BarPagerTabStripViewController")
@interface BarPagerTabStripViewController : PagerTabStripViewController
@property (nonatomic, weak) IBOutlet BarView * _Null_unspecified barView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)reloadPagerTabStripView;
- (void)updateIndicatorFor:(PagerTabStripViewController * _Nonnull)viewController fromIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex withProgressPercentage:(CGFloat)progressPercentage indexWasChanged:(BOOL)indexWasChanged;
- (void)updateIndicatorFor:(PagerTabStripViewController * _Nonnull)viewController fromIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex;
@end


SWIFT_CLASS("_TtC15XLPagerTabStrip7BarView")
@interface BarView : UIView
@property (nonatomic, strong) UIView * _Nonnull selectedBar;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (void)moveToIndex:(NSInteger)index animated:(BOOL)animated;
- (void)moveFromIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex progressPercentage:(CGFloat)progressPercentage;
- (void)layoutSubviews;
@end

@class ButtonBarViewCell;
@class ButtonBarView;
@class UICollectionView;
@class UICollectionViewLayout;
@class UICollectionViewCell;

SWIFT_CLASS("_TtC15XLPagerTabStrip36ButtonBarPagerTabStripViewController")
@interface ButtonBarPagerTabStripViewController : PagerTabStripViewController <UICollectionViewDelegate, UICollectionViewDataSource>
@property (nonatomic, copy) void (^ _Nullable changeCurrentIndex)(ButtonBarViewCell * _Nullable, ButtonBarViewCell * _Nullable, BOOL);
@property (nonatomic, copy) void (^ _Nullable changeCurrentIndexProgressive)(ButtonBarViewCell * _Nullable, ButtonBarViewCell * _Nullable, CGFloat, BOOL, BOOL);
@property (nonatomic, weak) IBOutlet ButtonBarView * _Null_unspecified buttonBarView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)reloadPagerTabStripView;
- (CGFloat)calculateStretchedCellWidths:(NSArray<NSNumber *> * _Nonnull)minimumCellWidths suggestedStretchedCellWidth:(CGFloat)suggestedStretchedCellWidth previousNumberOfLargeCells:(NSInteger)previousNumberOfLargeCells SWIFT_WARN_UNUSED_RESULT;
- (void)updateIndicatorFor:(PagerTabStripViewController * _Nonnull)viewController fromIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex;
- (void)updateIndicatorFor:(PagerTabStripViewController * _Nonnull)viewController fromIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex withProgressPercentage:(CGFloat)progressPercentage indexWasChanged:(BOOL)indexWasChanged;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC15XLPagerTabStrip13ButtonBarView")
@interface ButtonBarView : UICollectionView
@property (nonatomic, strong) UIView * _Nonnull selectedBar;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout * _Nonnull)layout OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC15XLPagerTabStrip17ButtonBarViewCell")
@interface ButtonBarViewCell : UICollectionViewCell
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified imageView;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified label;
- (void)willMoveToSuperview:(UIView * _Nullable)newSuperview;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@class UISegmentedControl;

SWIFT_CLASS("_TtC15XLPagerTabStrip36SegmentedPagerTabStripViewController")
@interface SegmentedPagerTabStripViewController : PagerTabStripViewController
@property (nonatomic, weak) IBOutlet UISegmentedControl * _Null_unspecified segmentedControl;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)reloadPagerTabStripView;
- (void)updateIndicatorFor:(PagerTabStripViewController * _Nonnull)viewController fromIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC15XLPagerTabStrip34TwitterPagerTabStripViewController")
@interface TwitterPagerTabStripViewController : PagerTabStripViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)reloadPagerTabStripView;
- (void)updateIndicatorFor:(PagerTabStripViewController * _Nonnull)viewController fromIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex withProgressPercentage:(CGFloat)progressPercentage indexWasChanged:(BOOL)indexWasChanged;
- (void)updateIndicatorFor:(PagerTabStripViewController * _Nonnull)viewController fromIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)viewDidLayoutSubviews;
@end

#pragma clang diagnostic pop
