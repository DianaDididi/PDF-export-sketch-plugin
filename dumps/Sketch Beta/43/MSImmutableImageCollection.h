//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableImageCollection.h"

#import "MSImageCollection.h"

@class NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableImageCollection : _MSImmutableImageCollection <MSImageCollection>
{
}

- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (id)imageWithSHA1:(id)arg1;
- (id)treeAsDictionary;
- (void)migratePropertiesFromV75OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV74OrEarlierWithUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *images;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;

@end
