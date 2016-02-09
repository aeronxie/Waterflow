//
//  ShopCollectionViewCell.m
//  WaterFlow
//
//  Created by 谢飞 on 16/2/6.
//  Copyright © 2016年 谢飞. All rights reserved.
//

#import "ShopCollectionViewCell.h"
#import "ShopModel.h"
#import "UIImageView+WebCache.h"

@interface ShopCollectionViewCell ()
@property (weak, nonatomic) IBOutlet UIImageView *image;
@property (weak, nonatomic) IBOutlet UILabel *price;

@end
@implementation ShopCollectionViewCell

-(void)setShop:(ShopModel *)shop {
    
    _shop = shop;
    
  
    [self.image sd_setImageWithURL:[NSURL URLWithString:shop.img] placeholderImage:[UIImage imageNamed:@"IMG_1659"]];
    
    
    self.price.text = shop.price;
    
}

@end
