/*
libdmtx - Data Matrix Encoding/Decoding Library
Copyright (C) 2006 Mike Laughton

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

Contact: mike@dragonflylogic.com
*/

/* $Id: dmtxwrite.h,v 1.3 2006-10-12 18:22:39 mblaughton Exp $ */

#ifndef __DMTXWRITE_H__
#define __DMTXWRITE_H__

#if ENABLE_NLS
# include <libintl.h>
# define _(String) gettext(String)
#else
# define _(String) String
#endif
#define N_(String) String

typedef struct {
   unsigned char *inputString;
   int format;          // FormatPng | FormatAscii
   int encoding;        // EncAuto | EncAscii | EncC40 | EncText | EncBase256
   int rowCount;        // X
   int colCount;        // X
   int processTilde;    // X
   int rotate;          // degrees
   DmtxPixel bgColor;   // RGB
   DmtxPixel fgColor;   // RGB
   int verbose;         // X
   char *outputPath;
} ScanOptions;          // X

#endif
