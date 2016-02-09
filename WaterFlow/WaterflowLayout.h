//
//  WaterflowLayout.h
//  WaterFlow
//
//  Created by 谢飞 on 16/2/5.
//  Copyright © 2016年 谢飞. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WaterflowLayout;

@protocol WaterflowLayoutDelegate <NSObject>

@required
- (CGFloat)waterflowLayout:(WaterflowLayout *)waterflowLayout heightForItemAtIndex:(NSUInteger)index itemWidth:(CGFloat)itemWidth;

@optional
/** 总列数*/
- (CGFloat)columnCountInWaterflowLayout:(WaterflowLayout *)waterflowLayout;
/** 列间距*/
- (CGFloat)columnMarginInWaterflowLayout:(WaterflowLayout *)waterflowLayout;
/** 行间距*/
- (CGFloat)rowMarginInWaterflowLayout:(WaterflowLayout *)waterflowLayout;
/** 边缘间距*/
- (UIEdgeInsets)edgeInsetsInWaterflowLayout:(WaterflowLayout *)waterflowLayout;
@end

@interface WaterflowLayout : UICollectionViewLayout

@property (nonatomic, weak) id <WaterflowLayoutDelegate> delegate;

@end
