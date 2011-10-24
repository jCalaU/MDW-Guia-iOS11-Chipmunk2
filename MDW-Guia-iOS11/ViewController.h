//
//  ViewController.h
//  MDW-Guia-iOS11
//
//  Created by Javier Cala Uribe on 24/10/11.
//  Copyright (c) 2011 *. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "chipmunk.h"

@interface ViewController : UIViewController 
{
    UIImageView *barra;
    UIImageView *esfera;
    cpSpace *space;
}

- (void)configurarChipmunk;
- (void)delta:(NSTimer *)timer;

void updateShape(void *ptr, void* unused);

@end