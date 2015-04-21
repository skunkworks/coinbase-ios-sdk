//
//  CoinbasePrice.h
//  Pods
//
//  Created by Dai Hovey on 20/04/2015.
//
//

#import <Foundation/Foundation.h>

@interface CoinbasePrice : NSObject

@property (nonatomic, strong) NSString *cents;
@property (nonatomic, strong) NSString *currencyISO;

-(id) initWithDictionary:(NSDictionary*)dictionary;

@end
