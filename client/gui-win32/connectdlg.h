/**********************************************************************
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
#ifndef FC__CONNECTDLG_H
#define FC__CONNECTDLG_H

#define ID_SERVERBUTTON 2432
#include "connectdlg_g.h"

void quit_client_only(void);
void show_server_window(void);
void handle_pipe_and_process(void);
void handle_server_buttons(HWND button);

#endif  /* FC__CONNECTDLG_H */
