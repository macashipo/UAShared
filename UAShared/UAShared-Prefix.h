//
//  UAPrefix.h
//  
//
//  Created by Owain Hunt on 08/01/2011.
//  Copyright 2011 Owain R Hunt. All rights reserved.
//

#import <objc/runtime.h>
#import "NSObject+Utilities.h"
#import "NSString+Utilities.h"
#import "NSManagedObjectContext+Utilities.h"
#import "NSArray+Utilities.h"
#import "NSDate+Utilities.h"
#import "NSData+Base64.h"
#import "NSManagedObject+URI.h"

#ifdef DEBUG
#    define UALog(fmt, ...) NSLog(@"%s:%d (%s): " fmt, __FILE__, __LINE__, __func__, ## __VA_ARGS__)
#else
#    define UALog(...) /* */
#endif

// https://github.com/Machx/Zangetsu/blob/master/Source/CWMacros.h

#define UAIBOutletAssert(_x_) \
    do { \
        if(_x_ == nil) { \
            UALog(@"IBOutlet Assertion: %s is nil and appears to not be hooked up!",#_x_); \
        } \
    } while(0);

#define unless(x) if(!x)
#define until(x) while(!x)
