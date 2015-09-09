//
//  WMFRelatedTitleListDataSource.h
//  Wikipedia
//
//  Created by Brian Gerstle on 9/4/15.
//  Copyright (c) 2015 Wikimedia Foundation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SSDataSources/SSArrayDataSource.h>
#import "WMFArticleListDataSource.h"

NS_ASSUME_NONNULL_BEGIN

@class WMFRelatedSearchFetcher;
@class MWKSavedPageList;
@class MWKDataStore;
@class MWKTitle;

@interface WMFRelatedTitleListDataSource : SSArrayDataSource
    <WMFArticleListDataSource>


- (instancetype)initWithTitle:(MWKTitle*)title
                    dataStore:(MWKDataStore*)dataStore
                savedPageList:(MWKSavedPageList*)savedPageList
    numberOfExtractCharacters:(NSUInteger)numberOfExtractCharacters;

- (instancetype)initWithTitle:(MWKTitle*)title
                    dataStore:(MWKDataStore*)dataStore
                savedPageList:(MWKSavedPageList*)savedPageList
    numberOfExtractCharacters:(NSUInteger)numberOfExtractCharacters
                      fetcher:(WMFRelatedSearchFetcher*)fetcher NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
