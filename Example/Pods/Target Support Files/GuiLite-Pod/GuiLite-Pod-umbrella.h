#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "api.h"
#import "audio.h"
#import "bitmap.h"
#import "cmd_target.h"
#import "display.h"
#import "msg.h"
#import "rect.h"
#import "resource.h"
#import "surface.h"
#import "theme.h"
#import "wnd.h"
#import "word.h"
#import "GuiLite.h"
#import "button.h"
#import "dialog.h"
#import "edit.h"
#import "gesture.h"
#import "keyboard.h"
#import "label.h"
#import "list_box.h"
#import "slide_group.h"
#import "spinbox.h"
#import "table.h"
#import "wave_buffer.h"
#import "wave_ctrl.h"

FOUNDATION_EXPORT double GuiLite_PodVersionNumber;
FOUNDATION_EXPORT const unsigned char GuiLite_PodVersionString[];

