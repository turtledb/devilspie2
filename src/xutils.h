/**
 *	This file is part of devilspie2
 *	Copyright (C) 2001 Havoc Pennington, 2011-2013 Andreas Rönnquist
 *
 *	devilspie2 is free software: you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License as published
 *	by the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	devilspie2 is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with devilspie2.
 *	If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __HEADER_XUTILS_
#define __HEADER_XUTILS_

/**
 *
 */
Atom my_wnck_atom_get(const char *atom_name);

void devilspie2_change_state(Screen *screen,
									Window xwindow,
									gboolean add,
									Atom state1,
									Atom state2);

Screen* devilspie2_window_get_xscreen(Window xid);

void devilspie2_error_trap_push();
int devilspie2_error_trap_pop();

gboolean decorate_window(Window xid);
gboolean undecorate_window(Window xid);

char* my_wnck_get_string_property_latin1 (Window xwindow, Atom atom);

gboolean my_wnck_get_cardinal_list(Window xwindow,
												Atom atom,
												gulong **cardinals,
												int *len);

int devilspie2_get_viewport_start(Window xwindow);

void my_window_set_window_type(Window xid, gchar *window_type);
void my_window_set_opacity(Window xid, double value);

#endif /*__HEADER_XUTILS_*/
