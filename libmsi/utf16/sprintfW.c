/* Formatted output to strings.
   Copyright (C) 1999, 2002, 2005-2007, 2009-2012 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <wine/unicode.h>
#include <stdarg.h>
#include <limits.h>

int
sprintfW (WCHAR *buf, const WCHAR *format, ...)
{
  va_list args;
  int result;

  va_start (args, format);
  result = vsprintfW (buf, format, args);
  va_end (args);
  return result;
}

int
vsprintfW (WCHAR *buf, const WCHAR *format, va_list args)
{
  return _vsnwprintf (buf, INT_MAX, format, args);
}
