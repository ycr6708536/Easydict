//
//  EDQueryView.h
//  Bob
//
//  Created by tisfeng on 2022/11/8.
//  Copyright © 2022 ripperhe. All rights reserved.
//

#import "EZCommonView.h"
#import "EZTextView.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZQueryView : EZCommonView

@property (nonatomic, strong) EZTextView *textView;
@property (nonatomic, strong) NSScrollView *scrollView;

@property (nonatomic, copy) NSString *detectLanguage;

@property (nonatomic, copy) void (^enterActionBlock)(NSString *text);
@property (nonatomic, copy) void (^detectActionBlock)(NSButton *button);

@property (nonatomic, copy) void (^updateQueryTextBlock)(NSString *text, CGFloat textViewHeight);

- (void)setQueryText:(NSString * _Nonnull)queryText;

@end

NS_ASSUME_NONNULL_END