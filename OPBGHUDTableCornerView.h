//
//  OPBGHUDTableCornerView.h
//  OPBGHUDAppKit
//
//  Created by BinaryGod on 6/29/08.
//  Copyright 2008 none. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "OPBGThemeManager.h"

@interface OPBGHUDTableCornerView : NSView {

	NSString *themeKey;
}

@property (retain) NSString *themeKey;

- (id)initWithThemeKey:(NSString *)key;

@end
