//
//  do_MultiSelectComboBox_View.h
//  DoExt_UI
//
//  Created by @userName on @time.
//  Copyright (c) 2015年 DoExt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "do_MultiSelectComboBox_IView.h"
#import "do_MultiSelectComboBox_UIModel.h"
#import "doIUIModuleView.h"

@interface do_MultiSelectComboBox_UIView : UIButton<do_MultiSelectComboBox_IView, doIUIModuleView>
//可根据具体实现替换UIView
{
	@private
		__weak do_MultiSelectComboBox_UIModel *_model;
}

@end
