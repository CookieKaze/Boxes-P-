//
//  Box.h
//  Boxes
//
//  Created by Erin Luu on 2016-11-01.
//  Copyright © 2016 Erin Luu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Box : NSObject

//height, width, and length

@property float height;
@property float width;
@property float length;

- (instancetype) initWithWidth: (float)width andHeight: (float)height andLength: (float)length;
- (float) calculateVolume;
- (int) howManyTimeWillItFit: (Box*)otherBox;


@end
