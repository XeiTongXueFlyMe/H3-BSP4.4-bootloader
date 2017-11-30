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
// File    : plugin_common.c                                                                                //
// By      : scottyu                                                                                        //
// Version : V1.00                                                                                          //
// Time    : 2008-04-14 13:32:00                                                                            //
//                                                                                                          //
//----------------------------------------------------------------------------------------------------------//
//                                                                                                          //
// HISTORY                                                                                                  //
//                                                                                                          //
// 1 2008-04-14 13:32:00                                                                                    //
//                                                                                                          //
//                                                                                                          //
//                                                                                                          //
//----------------------------------------------------------------------------------------------------------//


#ifndef ___PLUGIN__COMMON___C______
#define ___PLUGIN__COMMON___C______		1


//------------------------------------------------------------------------------------------------------------
//插件的通用接口
//------------------------------------------------------------------------------------------------------------




//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     获取该插件的类型信息 ，字符串
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
PLUGINAPI  s8 * GetPlugInType()
{
	return (s8 *)PLUGIN_TYPE;
}




//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     获取插件名称字符串
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
PLUGINAPI s8 * GetPlugInName()
{
	return (s8 *)PLUGIN_NAME;
}


//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     版本号0x0100 表示1.00版本
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
PLUGINAPI u32 GetPlugInVersion()
{
	return PLUGIN_VERSION;
}


//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     返回作者信息
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
PLUGINAPI s8 * GetAuthor()
{	
	return (s8 *)PLUGIN_AUTHOR;
}


//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     返回版权信息
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
PLUGINAPI s8 * GetCopyRight()
{
	return (s8 *)PLUGIN_COPYRIGHT;
}


//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
#ifdef SCRIPT_LUA
static int proxy_GetPlugInType(lua_State *L)
{
	char * str = NULL;		
	
	str = (char *)GetPlugInType();
	lua_pushstring(L, str);	
	
	return 1;//1表示有1个返回值
}
#endif //SCRIPT_LUA


//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
#ifdef SCRIPT_LUA
static int proxy_GetPlugInName(lua_State *L)
{
	char * str = NULL;		
	
	str = (char *)GetPlugInName();
	lua_pushstring(L, str);	
	
	return 1;//1表示有1个返回值
}
#endif //SCRIPT_LUA


//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
#ifdef SCRIPT_LUA
static int proxy_GetPlugInVersion(lua_State *L)
{
	u32 ver = GetPlugInVersion();
	lua_pushnumber(L, ver);	
	
	return 1;//1表示有1个返回值
}
#endif //SCRIPT_LUA


//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
#ifdef SCRIPT_LUA
static int proxy_GetAuthor(lua_State *L)
{	
	char * str = NULL;		
	
	str = (char *)GetAuthor();
	lua_pushstring(L, str);	
	
	return 1;//1表示有1个返回值
}
#endif SCRIPT_LUA


//------------------------------------------------------------------------------------------------------------
//
// 函数说明
//     
//
// 参数说明
//     
//
// 返回值
//     
//
// 其他
//    无
//
//------------------------------------------------------------------------------------------------------------
#ifdef SCRIPT_LUA
static int proxy_GetCopyRight(lua_State *L)
{	
	char * str = NULL;		
	
	str = (char *)GetCopyRight();
	lua_pushstring(L, str);	
	
	return 1;//1表示有1个返回值
}
#endif //SCRIPT_LUA


//------------------------------------------------------------------------------------------------------------
// THE END !
//------------------------------------------------------------------------------------------------------------

#endif //___PLUGIN__COMMON___C______

