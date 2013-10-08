/*
** Lua binding: CCSwipeGestureRecognizer
** Generated automatically by tolua++-1.0.92 on Tue Oct  8 11:30:35 2013.
*/

/****************************************************************************
 Copyright (c) 2011 cocos2d-x.org

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

extern "C" {
#include "tolua_fix.h"
}

#include <map>
#include <string>
#include "cocos2d.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos-ext.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace CocosDenshion;

/* Exported function */
TOLUA_API int  tolua_CCSwipeGestureRecognizer_open (lua_State* tolua_S);

#include "cocos2d.h"
#include "platform/CCPlatformMacros.h"
#include "cocos2d-x-extensions/CCGestureRecognizer/CCSwipeGestureRecognizer.h"
#include "cocos2d-x-extensions/CCGestureRecognizer/CCSwipeGestureRecognizerLua.h"
#include "CCLuaValue.h"
USING_NS_CC;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCSwipe");
 tolua_usertype(tolua_S,"CCSwipeGestureRecognizer");
 tolua_usertype(tolua_S,"CCGestureRecognizer");
 tolua_usertype(tolua_S,"CCPoint");
 
 tolua_usertype(tolua_S,"CCLayer");
 tolua_usertype(tolua_S,"CCSwipeGestureRecognizerLua");
 tolua_usertype(tolua_S,"cocos2d::CCObject");
}

/* method: create of class  CCSwipeGestureRecognizerLua */
#ifndef TOLUA_DISABLE_tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_create00
static int tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSwipeGestureRecognizerLua",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSwipeGestureRecognizerLua* tolua_ret = (CCSwipeGestureRecognizerLua*)  CCSwipeGestureRecognizerLua::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSwipeGestureRecognizerLua");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptSwipeHandler of class  CCSwipeGestureRecognizerLua */
#ifndef TOLUA_DISABLE_tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_registerScriptSwipeHandler00
static int tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_registerScriptSwipeHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizerLua",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizerLua* self = (CCSwipeGestureRecognizerLua*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION funcID = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptSwipeHandler'", NULL);
#endif
  {
   self->registerScriptSwipeHandler(funcID);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptSwipeHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptSwipeHandler of class  CCSwipeGestureRecognizerLua */
#ifndef TOLUA_DISABLE_tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_unregisterScriptSwipeHandler00
static int tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_unregisterScriptSwipeHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizerLua",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizerLua* self = (CCSwipeGestureRecognizerLua*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptSwipeHandler'", NULL);
#endif
  {
   self->unregisterScriptSwipeHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptSwipeHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  CCSwipeGestureRecognizerLua */
#ifndef TOLUA_DISABLE_tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_setDirection00
static int tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizerLua",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizerLua* self = (CCSwipeGestureRecognizerLua*)  tolua_tousertype(tolua_S,1,0);
  int direction = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(direction);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCancelsTouchesInView of class  CCSwipeGestureRecognizerLua */
#ifndef TOLUA_DISABLE_tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_setCancelsTouchesInView00
static int tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_setCancelsTouchesInView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizerLua",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizerLua* self = (CCSwipeGestureRecognizerLua*)  tolua_tousertype(tolua_S,1,0);
  bool cancelsTouchesInView = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCancelsTouchesInView'", NULL);
#endif
  {
   self->setCancelsTouchesInView(cancelsTouchesInView);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCancelsTouchesInView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: direction of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_get_CCSwipe_direction
static int tolua_get_CCSwipe_direction(lua_State* tolua_S)
{
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'direction'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->direction);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: direction of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_set_CCSwipe_direction
static int tolua_set_CCSwipe_direction(lua_State* tolua_S)
{
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'direction'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->direction = ((CCSwipeGestureRecognizerDirection) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: location of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_get_CCSwipe_location
static int tolua_get_CCSwipe_location(lua_State* tolua_S)
{
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->location,"CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: location of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_set_CCSwipe_location
static int tolua_set_CCSwipe_location(lua_State* tolua_S)
{
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->location = *((CCPoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_CCSwipeGestureRecognizer_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"kSwipeGestureRecognizerDirectionRight",kSwipeGestureRecognizerDirectionRight);
  tolua_constant(tolua_S,"kSwipeGestureRecognizerDirectionLeft",kSwipeGestureRecognizerDirectionLeft);
  tolua_constant(tolua_S,"kSwipeGestureRecognizerDirectionUp",kSwipeGestureRecognizerDirectionUp);
  tolua_constant(tolua_S,"kSwipeGestureRecognizerDirectionDown",kSwipeGestureRecognizerDirectionDown);
  tolua_cclass(tolua_S,"CCGestureRecognizer","CCGestureRecognizer","CCLayer",NULL);
  tolua_beginmodule(tolua_S,"CCGestureRecognizer");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCSwipeGestureRecognizer","CCSwipeGestureRecognizer","CCGestureRecognizer",NULL);
  tolua_beginmodule(tolua_S,"CCSwipeGestureRecognizer");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCSwipeGestureRecognizerLua","CCSwipeGestureRecognizerLua","CCSwipeGestureRecognizer",NULL);
  tolua_beginmodule(tolua_S,"CCSwipeGestureRecognizerLua");
   tolua_function(tolua_S,"create",tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_create00);
   tolua_function(tolua_S,"registerScriptSwipeHandler",tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_registerScriptSwipeHandler00);
   tolua_function(tolua_S,"unregisterScriptSwipeHandler",tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_unregisterScriptSwipeHandler00);
   tolua_function(tolua_S,"setDirection",tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_setDirection00);
   tolua_function(tolua_S,"setCancelsTouchesInView",tolua_CCSwipeGestureRecognizer_CCSwipeGestureRecognizerLua_setCancelsTouchesInView00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCSwipe","CCSwipe","cocos2d::CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCSwipe");
   tolua_variable(tolua_S,"direction",tolua_get_CCSwipe_direction,tolua_set_CCSwipe_direction);
   tolua_variable(tolua_S,"location",tolua_get_CCSwipe_location,tolua_set_CCSwipe_location);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_CCSwipeGestureRecognizer (lua_State* tolua_S) {
 return tolua_CCSwipeGestureRecognizer_open(tolua_S);
};
#endif

