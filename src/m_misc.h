/*
====================================================================

DOOM RETRO
The classic, refined DOOM source port. For Windows PC.

Copyright (C) 1993-1996 id Software LLC, a ZeniMax Media company.
Copyright (C) 2005-2014 Simon Howard.
Copyright (C) 2013-2014 Brad Harding.

This file is part of DOOM RETRO.

DOOM RETRO is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

DOOM RETRO is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with DOOM RETRO. If not, see http://www.gnu.org/licenses/.

====================================================================
*/

#ifndef __M_MISC__
#define __M_MISC__

#include "doomtype.h"

boolean M_WriteFile(char *name, void *source, int length);
int M_ReadFile(char *name, byte **buffer);
void M_MakeDirectory(char *dir);
char *M_TempFile(char *s);
boolean M_FileExists(char *file);
long M_FileLength(FILE *handle);
char *M_ExtractFolder(char *str);
boolean M_StrToInt(const char *str, int *result);
void M_ForceUppercase(char *text);
char *M_StrCaseStr(char *haystack, char *needle);
boolean M_StringCopy(char *dest, char *src, size_t dest_size);
char *M_StringReplace(char *haystack, char *needle, char *replacement);
char *M_StringJoin(char *s, ...);
boolean M_StringStartsWith(char *s, char *prefix);
boolean M_StringEndsWith(char *s, char *suffix);

#endif
