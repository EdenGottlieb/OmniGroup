// Copyright 1997-2019 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.

#import <Foundation/NSObject.h>
#import <Foundation/NSString.h> // For unichar

@interface OFTrieBucket : NSObject
{
@public
    unichar *lowerCharacters;
    unichar *upperCharacters;
}

- (void)setRemainingLower:(unichar *)lower upper:(unichar *)upper length:(NSUInteger)aLength;

@end
