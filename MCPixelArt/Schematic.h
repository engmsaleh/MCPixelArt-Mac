//
//  Schematic.h
//  MCPixelArt
//
//  Created by Dalton Claybrook on 2/13/13.
//  Copyright (c) 2013 Claybrook Software, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSData+GZIP.h"

enum {
    TAG_End,
    TAG_Byte,
    TAG_Short,
    TAG_Int,
    TAG_Long,
    TAG_Float,
    TAG_Double,
    TAG_Byte_Array,
    TAG_String,
    TAG_List,
    TAG_Compound,
    TAG_Int_Array
};

@interface Schematic : NSObject

@property (nonatomic, strong) NSData *schemData;

- (NSData *)createSchematicWithIndeces:(NSArray *)wool andSize:(CGSize)size replacingWhiteWool:(BOOL)replace;

@end
