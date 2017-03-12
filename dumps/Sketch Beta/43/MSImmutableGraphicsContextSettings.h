//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableGraphicsContextSettings.h"

#import "MSGraphicsContextSettings.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableGraphicsContextSettings : _MSImmutableGraphicsContextSettings <MSGraphicsContextSettings>
{
}

- (int)CGBlendMode;
- (BOOL)shouldChangeGraphicsContext;

// Remaining properties
@property(readonly, nonatomic) long long blendMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) double opacity;
@property(readonly) Class superclass;

@end
