#include "graphics/font.h"
#include "luax.h"

extern const luaL_Reg lovrFont[];
int l_lovrFontGetHeight(lua_State* L);
int l_lovrFontGetAscent(lua_State* L);
int l_lovrFontGetDescent(lua_State* L);
