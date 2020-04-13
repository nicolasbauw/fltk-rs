#pragma once

#include "global.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Fl_Menu_Item Fl_Menu_Item;

WIDGET_DECLARE(Fl_Menu_Bar)

MENU_DECLARE(Fl_Menu_Bar)

WIDGET_DECLARE(Fl_Menu_Button)

MENU_DECLARE(Fl_Menu_Button)

WIDGET_DECLARE(Fl_Choice)

MENU_DECLARE(Fl_Choice)

Fl_Menu_Item *Fl_Menu_Item_new(void);

void Fl_Menu_Item_delete(Fl_Menu_Item *self);

void Fl_Menu_Item_add_choice(Fl_Menu_Item *self, const char *choice);

const Fl_Menu_Item *Fl_Menu_Item_popup(Fl_Menu_Item *self, int x, int y);

const char *Fl_Menu_Item_label(Fl_Menu_Item *);

void Fl_Menu_Item_set_label(Fl_Menu_Item *, const char *a);

int Fl_Menu_Item_label_type(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_type(Fl_Menu_Item *, int a);

unsigned int Fl_Menu_Item_label_color(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_color(Fl_Menu_Item *, unsigned int a);

int Fl_Menu_Item_label_font(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_font(Fl_Menu_Item *, int a);

int Fl_Menu_Item_label_size(Fl_Menu_Item *);

void Fl_Menu_Item_set_label_size(Fl_Menu_Item *, int a);

int Fl_Menu_Item_value(Fl_Menu_Item *);

void Fl_Menu_Item_set(Fl_Menu_Item *);

void Fl_Menu_Item_clear(Fl_Menu_Item *);

int Fl_Menu_Item_visible(Fl_Menu_Item *);

void Fl_Menu_Item_show(Fl_Menu_Item *);

void Fl_Menu_Item_hide(Fl_Menu_Item *);

int Fl_Menu_Item_active(Fl_Menu_Item *);

void Fl_Menu_Item_activate(Fl_Menu_Item *);

void Fl_Menu_Item_deactivate(Fl_Menu_Item *);

#ifdef __cplusplus
}
#endif