/*////////////////////////////////////////////////////////////////////////
Copyright (c) 1992 Electrotechnical Laboratry (ETL)

Permission to use, copy, modify, and distribute this material 
for any purpose and without fee is hereby granted, provided 
that the above copyright notice and this permission notice 
appear in all copies, and that the name of ETL not be 
used in advertising or publicity pertaining to this 
material without the specific, prior written permission 
of an authorized representative of ETL.
ETL MAKES NO REPRESENTATIONS ABOUT THE ACCURACY OR SUITABILITY 
OF THIS MATERIAL FOR ANY PURPOSE.  IT IS PROVIDED "AS IS", 
WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES.
/////////////////////////////////////////////////////////////////////////
Content-Type: program/C; charset=US-ASCII
Program:      mmhencode.c (MIME header encoder/decoder interface)
Author:       Yutaka Sato <ysato@etl.go.jp>
///////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

#ifdef LOCAL2MIME
main(ac,av)
	char *av[];
{
	MMS_E_head_ENCODER(ac,av,stdin,stdout);
}
#endif

#ifdef MIME2LOCAL
main(ac,av)
	char *av[];
{
	MMS_E_head_DECODER(ac,av,stdin,stdout);
}
#endif
