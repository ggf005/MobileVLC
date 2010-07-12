//
//  MVLCMovieGridViewCell.h
//  MobileVLC
//
//  Created by Romain Goyet on 12/07/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AQGridViewCell.h"
#import "VLCMedia.h"

@interface MVLCMovieGridViewCell : AQGridViewCell {
	VLCMedia * _media;
}
@property (nonatomic, retain) VLCMedia * media;
@end