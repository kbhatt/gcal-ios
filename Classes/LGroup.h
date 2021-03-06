//
//  LGroup.h
//  GCAL
//
//  Created by Peter Kollath on 8/11/10.
//  Copyright 2010 GPSL. All rights reserved.
//

#import <Foundation/Foundation.h>
@class LCity;

@interface LGroup : NSManagedObject {

	NSString * subGroupsName;
	NSString * title;
	NSSet * subGroups;
	NSSet * cities;
	NSString * code;
}

@property (nonatomic,strong) NSString * subGroupsName;
@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSSet * subGroups;
@property (nonatomic, strong) NSSet * cities;
@property (nonatomic, strong) NSString * code;

-(LGroup *)findSubGroupWithCode:(NSString *)inCode;

//@end


// coalesce these into one @interface LGroup (CoreDataGeneratedAccessors) section
//@interface LGroup (CoreDataGeneratedAccessors)
- (void)addSubGroupsObject:(LGroup *)value;
- (void)removeSubGroupsObject:(LGroup *)value;
- (void)addSubGroups:(NSSet *)value;
- (void)removeSubGroups:(NSSet *)value;
- (void)addCitiesObject:(LCity *)value;
- (void)removeCitiesObject:(LCity *)value;
- (void)addCities:(NSSet *)value;
- (void)removeCities:(NSSet *)value;

@end

@interface LGroup (CoreDataGeneratedPrimitiveAccessors)

- (NSMutableSet*)primitiveCities;
- (void)setPrimitiveCities:(NSMutableSet*)value;
- (NSMutableSet*)primitiveSubGroups;
- (void)setPrimitiveSubGroups:(NSMutableSet*)value;

@end

// coalesce these into one @interface LGroup (CoreDataGeneratedAccessors) section



