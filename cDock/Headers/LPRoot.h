//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LPPage.h"

@class NSArray;

@interface LPRoot : LPPage
{
}

- (id)storageChildren;
- (id)children;
- (void)removeObjectFromRootChildrenAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inRootChildrenAtIndex:(unsigned long long)arg2;
- (id)objectInRootChildrenAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfRootChildren;
- (void)setShouldCacheIcons:(_Bool)arg1;
- (void)purgePurgatory;
- (void)addItemToPurgatory:(id)arg1;
@property(readonly, nonatomic) NSArray *allPurgatoryItems;
@property(readonly, nonatomic) LPPage *purgatory;
- (_Bool)isPage;
- (_Bool)isRoot;
- (_Bool)isGroup;
- (_Bool)isEmpty;
- (_Bool)pagesOnly;
- (id)initWithItems:(id)arg1;
- (id)init;
- (void)setRawChildren:(id)arg1;
- (int)storageType;

@end

