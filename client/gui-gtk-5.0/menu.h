/***********************************************************************
 Freeciv - Copyright (C) 1996 - A Kjeldberg, L Gregersen, P Unold
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/
#ifndef FC__MENU_H
#define FC__MENU_H

#include <gtk/gtk.h>

/* client */
#include "menu_g.h"

void enable_menus(bool enable);

void menus_set_initial_toggle_values(void);
void menus_disable_unit_commands(void);

#endif /* FC__MENU_H */
