//
//  PoperListView.h
//  Do_Test
//
//  Created by wl on 15/7/6.
//  Copyright (c) 2015年 DoExt. All rights reserved.
//

#import <UIKit/UIKit.h>

@class doMulPopListView;

@protocol completeBtnDelegate <NSObject>
@optional
- (void) completeBtnDidClick:(doMulPopListView *)popListView;

@end

@protocol PopListViewDataSource <NSObject>
@required



- (UITableViewCell *)popListView:(doMulPopListView *)popListView cellForIndexPath:(NSIndexPath *)indexPath;

- (NSInteger)popListView:(doMulPopListView *)popListView numberOfRowsInSection:(NSInteger)section;


@end

@protocol PopListViewDelegate <NSObject>
@optional

- (void)popListView:(doMulPopListView *)popListView didSelectIndexPath:(NSIndexPath *)indexPath;

- (void)popListViewCancel:(doMulPopListView *)popListView;

- (CGFloat)popListView:(doMulPopListView *)popListView heightForRowAtIndexPath:(NSIndexPath *)indexPath;

- (UIView *)popListView:(doMulPopListView *)popListView viewForHeaderInSection:(NSInteger)section;

- (CGFloat)popListView:(doMulPopListView *)popListView heightForHeaderInSection:(NSInteger)section;
@end


@interface doMulPopListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_listView;
    UILabel     *_titleView;
    UIControl   *_overlayView;
}

@property (nonatomic, weak) id<PopListViewDataSource> datasource;
@property (nonatomic, weak) id<PopListViewDelegate>   delegate;
@property (nonatomic, weak) id<completeBtnDelegate> btnDelegate;
@property (nonatomic, strong) UITableView *listView;
@property (nonatomic, assign) BOOL isDisplay;
@property (nonatomic, assign) CGFloat cellHeight;

@property (nonatomic, strong) NSArray *items;

@property (nonatomic, assign) NSInteger index;


- (void)setTitle:(NSString *)title;
- (void)reload;
- (void)show;
- (void)dismiss;

@end