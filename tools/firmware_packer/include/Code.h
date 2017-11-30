//----------------------------------------------------------------------------------------------------------//
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//    I BBMMBB      BBMMBBI     BBI EEMMFFI BBMMI     BBI EEMMFFI BBMMI       BBMMBBI   EEMMI EEMMLL        //
//    EEI   EEFF  EEI   LLBB  EEMMBBI I BBEE  I EE  EEMMBBI I BBEE  I EE    EEI   LLBB    EEBBI I BB        //
//  I FF        I EE      BBI   EEI     EEI   I EE    EEI     EEI   I EE  I EE      BBI   EEI   I EE        //
//  LLFF        LLEE      EELL  EEI     EEI   I EE    EEI     EEI   I EE  LLEE      EELL  EEI   I EE        //
//  I EE      I I BB      EEI   EEI     EEI   I EE    EEI     EEI   I EE  I BB      EEI   EEI   I EE        //
//    BBLL  I I   BBFF  I EE    EEI     EEI   I BB    EEI     EEI   I BB    BBFF  I EE    BBI   I EE        //
//    I BBMMEE    I BBMMBB    EEMMMMLLBBMMBBLLMMMMEEEEMMMMLLBBMMBBLLMMMMEE  I BBMMBB    EEMMMMLLBBMMBB      //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//----------------------------------------------------------------------------------------------------------//
//                                                                                                          //
//                                                Scott System                                              //
//                                                                                                          //
//                               (c) Copyright 2006-2007, Scottyu China                                     //
//                                                                                                          //
//                                           All Rights Reserved                                            //
//                                                                                                          //
// File    : code.h                                                                                         //
// By      : scottyu                                                                                        //
// Version : V1.00                                                                                          //
// Time    : 2008-08-06 10:34:05                                                                            //
//           定义程序代码模块的模版                                                                         //
//----------------------------------------------------------------------------------------------------------//
//                                                                                                          //
// HISTORY                                                                                                  //
//                                                                                                          //
// 1 2008-08-06 10:34:07                                                                                    //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//----------------------------------------------------------------------------------------------------------//


#ifndef __CODE_TEMPLATE__H____
#define __CODE_TEMPLATE__H____ 1

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
#ifndef ___XXXX___H____
#define ___XXXX___H____
#else
#endif //

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
#include <FILE.h>
#include "..\file.h"


//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
if (XXX)
{
	
}
else
{
	
} 

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
if (XXX)
{
	
}
else if (YYY)
{
	
} 
else
{
	
}
		
//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
switch(XXX)
{
case _0_:
	break;

case _1_:
	break;
	
case _2_:
	break;
	
default:
	break;
}

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
for (i = 0; i < XXXX; i++)
{
	
}

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
for (iy = 0; iy < HHH; iy++)	
{
	for (ix = 0; ix < WWW; ix++)
	{
		
	}
}

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
typedef u32 (*CALLBACK)(u32 param);

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
typedef struct tag_XXXX{
	u32 	magic;
	u32		version;
	u32		data;
}XXXX_t;

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
while(expr(XXX))
{
	
}

//------------------------------------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------------------------------------
do 
{
	
	
}while(expr(XXX));




//------------------------------------------------------------------------------------------------------------
// THE END !
//------------------------------------------------------------------------------------------------------------

#endif //!__CODE_TEMPLATE__H____

