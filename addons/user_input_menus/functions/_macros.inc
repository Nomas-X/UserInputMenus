//#define pixelW  (1 / (getResolution select 2))
//#define pixelH  (1 / (getResolution select 3))
#define pixelScale	0.50

#define GRID_W (pixelW * pixelGrid * pixelScale)
#define GRID_H (pixelH * pixelGrid * pixelScale)

#define CENTER_X	((getResolution select 2) * 0.5 * pixelW)
#define CENTER_Y	((getResolution select 3) * 0.5 * pixelH)

// 720px
#define WINDOW_W	120
#define WINDOW_H	180
#define WINDOW_HAbs (safeZoneH min (WINDOW_H * GRID_H))

#define WINDOW_PREVIEW_W	WINDOW_W
#define WINDOW_PREVIEW_H	65
#define WINDOW_PREVIEW_HAbs	(safeZoneH min (WINDOW_PREVIEW_H * GRID_H))

#define ATTRIBUTE_TITLE_W	48
#define ATTRIBUTE_CONTENT_W	82
#define ATTRIBUTE_CONTENT_H	5


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Fonts
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define FONT_NORMAL			"RobotoCondensedLight"
#define FONT_SEMIBOLD			"RobotoCondensed"
#define FONT_BOLD			"RobotoCondensedBold"
#define FONT_THIN			"RobotoCondensedLight"
#define FONT2_NORMAL			"PuristaMedium"
#define FONT2_BOLD			"PuristaSemiBold"
#define FONT2_THIN			"PuristaLight"
#define FONT_MONO			"EtelkaMonospacePro"
#define FONT_NARROW			"EtelkaNarrowMediumPro"
#define FONT_CODE			"LucidaConsoleB"
#define FONT_SYSTEM			"TahomaB"

#define SIZEEX_PURISTA(SIZEPX)		__EVAL([SIZEPX,1.8,[6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,34,35,37,46]] call _fnc_sizeEx)
#define SIZEEX_ETELKA(SIZEPX)		__EVAL([SIZEPX,1.55,[6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,34,35,37,46]] call _fnc_sizeEx)
#define SIZEEX_TAHOMA(SIZEPX)		__EVAL([SIZEPX,1.6,[16]] call _fnc_sizeEx)
#define SIZEEX_LUCIDA(SIZEPX)		__EVAL([SIZEPX,1.6,[8,11]] call _fnc_sizeEx)

#define SIZEEX_XS	3.0
#define SIZEEX_S	4.0
#define SIZEEX_M	4.5
#define SIZEEX_L	5.0
#define SIZEEX_XL	6.0

#define SIZE_XS	3.5
#define SIZE_S	4
#define SIZE_M	5
#define SIZE_L	5
#define SIZE_XL	6

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Color
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define COLOR_TEXT_RGB	1,	1,	1
#define COLOR_TEXT_RGBA	COLOR_TEXT_RGB, 1

#define COLOR_BACKGROUND_RGB	0.2,	0.2,	0.2
#define COLOR_BACKGROUND_RGBA	COLOR_BACKGROUND_RGB, 1

#define COLOR_TAB_RGB	0.1,	0.1,	0.1
#define COLOR_TAB_RGBA	COLOR_TAB_RGB, 1

#define COLOR_OVERLAY_RGB	0,	0,	0
#define COLOR_OVERLAY_RGBA	COLOR_OVERLAY_RGB, 0.5

//#define COLOR_ACTIVE_RGB	1,	0.5,	0
//#define COLOR_ACTIVE_RGBA	COLOR_ACTIVE_RGB, 1

#define COLOR_ACTIVE_RGB_R	"(profileNamespace getVariable ['GUI_BCG_RGB_R',0.77])"
#define COLOR_ACTIVE_RGB_G	"(profileNamespace getVariable ['GUI_BCG_RGB_G',0.51])"
#define COLOR_ACTIVE_RGB_B	"(profileNamespace getVariable ['GUI_BCG_RGB_B',0.08])"
#define COLOR_ACTIVE_RGB_A	1
#define COLOR_ACTIVE_RGB	COLOR_ACTIVE_RGB_R,	COLOR_ACTIVE_RGB_G,	COLOR_ACTIVE_RGB_B
#define COLOR_ACTIVE_RGBA	COLOR_ACTIVE_RGB,COLOR_ACTIVE_RGB_A

#define COLOR_HIGHLIGHT_RGB	0,	1,	1
#define COLOR_HIGHLIGHT_RGBA	COLOR_HIGHLIGHT_RGB, 1

#define COLOR_POSX_RGB	0.77,	0.18,	0.1
#define COLOR_POSX_RGBA	COLOR_POSX_RGB, 1

#define COLOR_POSY_RGB	0.58,	0.82,	0.22
#define COLOR_POSY_RGBA	COLOR_POSY_RGB, 1

#define COLOR_POSZ_RGB	0.26,	0.52,	0.92
#define COLOR_POSZ_RGBA	COLOR_POSZ_RGB, 1

#define COLOR_NOTE_DEFAULT_RGB	0.12549,	0.505882,	0.313726
#define COLOR_NOTE_DEFAULT_RGBA	COLOR_NOTE_DEFAULT_RGB,	0.9

#define COLOR_NOTE_WARNING_RGB	0.8,		0.35,		0
#define COLOR_NOTE_WARNING_RGBA	COLOR_NOTE_WARNING_RGB,	0.9

#define COLOR_NOTE_ERROR_RGB	0.815686,	0.266667,	0.215686
#define COLOR_NOTE_ERROR_RGBA	COLOR_NOTE_ERROR_RGB,	0.9

//--- BLUFOR
#define COLOR_WEST_R		"(profileNamespace getVariable ['Map_BLUFOR_R',0])"
#define COLOR_WEST_G		"(profileNamespace getVariable ['Map_BLUFOR_G',1])"
#define COLOR_WEST_B		"(profileNamespace getVariable ['Map_BLUFOR_B',1])"
#define COLOR_WEST_A		"(profileNamespace getVariable ['Map_BLUFOR_A',0.8])"
#define COLOR_WEST_RGB		COLOR_WEST_R,	COLOR_WEST_G,	COLOR_WEST_B
#define COLOR_WEST_RGBA		COLOR_WEST_RGB,COLOR_WEST_A

//--- OPFOR
#define COLOR_EAST_R		"(profileNamespace getVariable ['Map_OPFOR_R',0])"
#define COLOR_EAST_G		"(profileNamespace getVariable ['Map_OPFOR_G',1])"
#define COLOR_EAST_B		"(profileNamespace getVariable ['Map_OPFOR_B',1])"
#define COLOR_EAST_A		"(profileNamespace getVariable ['Map_OPFOR_A',0.8])"
#define COLOR_EAST_RGB		COLOR_EAST_R,	COLOR_EAST_G,	COLOR_EAST_B
#define COLOR_EAST_RGBA		COLOR_EAST_RGB,COLOR_EAST_A

//--- Independent
#define COLOR_GUER_R		"(profileNamespace getVariable ['Map_Independent_R',0])"
#define COLOR_GUER_G		"(profileNamespace getVariable ['Map_Independent_G',1])"
#define COLOR_GUER_B		"(profileNamespace getVariable ['Map_Independent_B',1])"
#define COLOR_GUER_A		"(profileNamespace getVariable ['Map_Independent_A',0.8])"
#define COLOR_GUER_RGB		COLOR_GUER_R,	COLOR_GUER_G,	COLOR_GUER_B
#define COLOR_GUER_RGBA		COLOR_GUER_RGB,COLOR_GUER_A

//--- Civilian
#define COLOR_CIV_R		"(profileNamespace getVariable ['Map_Civilian_R',0])"
#define COLOR_CIV_G		"(profileNamespace getVariable ['Map_Civilian_G',1])"
#define COLOR_CIV_B		"(profileNamespace getVariable ['Map_Civilian_B',1])"
#define COLOR_CIV_A		"(profileNamespace getVariable ['Map_Civilian_A',0.8])"
#define COLOR_CIV_RGB		COLOR_CIV_R,	COLOR_CIV_G,	COLOR_CIV_B
#define COLOR_CIV_RGBA		COLOR_CIV_RGB,COLOR_CIV_A

//--- Unknown
#define COLOR_EMPTY_R		"(profileNamespace getVariable ['Map_Unknown_R',0])"
#define COLOR_EMPTY_G		"(profileNamespace getVariable ['Map_Unknown_G',1])"
#define COLOR_EMPTY_B		"(profileNamespace getVariable ['Map_Unknown_B',1])"
#define COLOR_EMPTY_A		"(profileNamespace getVariable ['Map_Unknown_A',0.8])"
#define COLOR_EMPTY_RGB		COLOR_EMPTY_R,	COLOR_EMPTY_G,	COLOR_EMPTY_B
#define COLOR_EMPTY_RGBA	COLOR_EMPTY_RGB,COLOR_EMPTY_A

//--- Ambient
#define COLOR_AMBIENT_RGB	0,	1,	0.5
#define COLOR_AMBIENT_RGBA	COLOR_AMBIENT_RGB,1


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Macros
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define CHECKBOX_TEXTURE(UNCHECKED,CHECKED)\
	textureChecked = CHECKED;\
	textureUnchecked = UNCHECKED;\
	textureFocusedChecked = CHECKED;\
	textureFocusedUnchecked = UNCHECKED;\
	textureHoverChecked = CHECKED;\
	textureHoverUnchecked = UNCHECKED;\
	texturePressedChecked = CHECKED;\
	texturePressedUnchecked = UNCHECKED;\
	textureDisabledChecked = CHECKED;\
	textureDisabledUnchecked = UNCHECKED;

///////////////////////////////////////////////////////////////
// Convert RGB or RGBA color to hexadecimal
// Examples:
// 	RGBATOHEX(1,0,1,1)
// 	returns "#ffff00ff"
//
// 	RGBTOHEX(1,0,1)
// 	returns "#ff00ff"
///////////////////////////////////////////////////////////////
#define RGBATOHEX(COLOR_R,COLOR_G,COLOR_B,COLOR_A)	__EVAL([COLOR_R,COLOR_G,COLOR_B,COLOR_A] call _fnc_colorRGBAtoHEX)
#define RGBTOHEX(COLOR_R,COLOR_G,COLOR_B)		__EVAL([COLOR_R,COLOR_G,COLOR_B] call _fnc_colorRGBAtoHEX)
#define VARTOHEX					__EVAL(_color call _fnc_colorRGBAtoHEX)


///////////////////////////////////////////////////////////////
// Convert hexadecimal color to RGB or RGBA
// Example:
// 	HEXTORGBA("#ffff00ff")
// 	returns 1,0,1,1
//
// 	HEXTORGB("#ff00ff")
// 	returns 1,0,1
///////////////////////////////////////////////////////////////
#define HEXTORGBA(COLOR_RGBA)\
	__EVAL(COLOR_RGBA call _fnc_colorHEXtoRGBA_2),\
	__EVAL(COLOR_RGBA call _fnc_colorHEXtoRGBA_4),\
	__EVAL(COLOR_RGBA call _fnc_colorHEXtoRGBA_6),\
	__EVAL(COLOR_RGBA call _fnc_colorHEXtoRGBA_0)

#define HEXTORGB(COLOR_RGB)\
	__EVAL(COLOR_RGB call _fnc_colorHEXtoRGBA_0),\
	__EVAL(COLOR_RGB call _fnc_colorHEXtoRGBA_2),\
	__EVAL(COLOR_RGB call _fnc_colorHEXtoRGBA_4)


///////////////////////////////////////////////////////////////
// Convert RGBA in range [0-255] to [0-1] used by the game config
// Example:
// 	RGBA255to1(255,0,255,255)
// 	returns 1,0,1,1
///////////////////////////////////////////////////////////////
#define RGBA255to1(COLOR_R,COLOR_G,COLOR_B,COLOR_A)\
	__EVAL(COLOR_R * 0.00392157),\
	__EVAL(COLOR_G * 0.00392157),\
	__EVAL(COLOR_B * 0.00392157),\
	__EVAL(COLOR_A * 0.00392157)


///////////////////////////////////////////////////////////////
/// Scripts
///////////////////////////////////////////////////////////////

#define INIT_DISPLAY_FUNCTION	(uiNamespace getVariable 'BIS_fnc_initDisplay')
#define INIT_DISPLAY_INTERNAL	scriptIsInternal = 1;

//--- Code executed on each display where the macro is used. Scripts are pre-compiled at the game start by BIS_fnc_initDisplays
#define INIT_DISPLAY(NAME,PATH) \
	scriptName = ##NAME##;\
	scriptPath = ##PATH##;\
	onLoad = ["onLoad",_this,#NAME,'##PATH##'] call INIT_DISPLAY_FUNCTION; \
	onUnload = ["onUnload",_this,#NAME,'##PATH##'] call INIT_DISPLAY_FUNCTION;

//--- Special version of the macro for initial loading screen which initializes Functions
#define INIT_DISPLAY_START(NAME,PATH) \
	scriptName = ##NAME##;\
	scriptPath = ##PATH##;\
	onLoad = "[2] call compile preprocessfilelinenumbers gettext (configfile >> 'CfgFunctions' >> 'init'); ['onLoad',_this,'RscDisplayLoading','Loading'] call (uiNamespace getVariable 'BIS_fnc_initDisplay')";\
	onUnload = ["onUnload",_this,#NAME,'##PATH##'] call INIT_DISPLAY_FUNCTION;

#define INIT_CONTROL(NAME,PATH) \
	scriptName = ##NAME##;\
	scriptPath = ##PATH##;\
	onLoad = ["onLoad",_this,#NAME,'##PATH##',false] call INIT_DISPLAY_FUNCTION; \
	onUnload = ["onUnload",_this,#NAME,'##PATH##',false] call INIT_DISPLAY_FUNCTION;

#define ADDON DOUBLES(PREFIX,COMPONENT)
#define MAIN_ADDON DOUBLES(PREFIX,user_input_menus)

#ifdef SUBCOMPONENT
    #define SUBADDON DOUBLES(ADDON,SUBCOMPONENT)
#endif

#ifndef PATHTO_SYS
    #define PATHTO_SYS(var1,var2,var3) \MAINPREFIX\var1\SUBPREFIX\var2\var3.sqf
#endif
#ifndef PATHTOF_SYS
    #define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\var1\SUBPREFIX\var2\functions\var3
#endif

#ifndef PATHTOF2_SYS
    #define PATHTOF2_SYS(var1,var2,var3) MAINPREFIX\var1\SUBPREFIX\var2\functions\var3
#endif

#define PATHTO_R(var1) PATHTOF2_SYS(PREFIX,COMPONENT_C,var1)
#define PATHTO_T(var1) PATHTOF_SYS(PREFIX,COMPONENT_T,var1)
#define PATHTO_M(var1) PATHTOF_SYS(PREFIX,COMPONENT_M,var1)
#define PATHTO_S(var1) PATHTOF_SYS(PREFIX,COMPONENT_S,var1)
#define PATHTO_C(var1) PATHTOF_SYS(PREFIX,COMPONENT_C,var1)
#define PATHTO_F(var1) PATHTO_SYS(PREFIX,COMPONENT_F,var1)

// Already quoted ""
#define QPATHTO_R(var1) QUOTE(PATHTO_R(var1))
#define QPATHTO_T(var1) QUOTE(PATHTO_T(var1))
#define QPATHTO_M(var1) QUOTE(PATHTO_M(var1))
#define QPATHTO_S(var1) QUOTE(PATHTO_S(var1))
#define QPATHTO_C(var1) QUOTE(PATHTO_C(var1))
#define QPATHTO_F(var1) QUOTE(PATHTO_F(var1))

// *************************************
// User Functions
#define CFGSETTINGS CFGSETTINGSS(PREFIX,COMPONENT)
#define PATHTO(var1) PATHTO_SYS(PREFIX,COMPONENT_F,var1)
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))

/* -------------------------------------------
Macro: PATHTO_FNC()

Description:
    Defines a function inside CfgFunctions.

    Full file path in addons:
        '\MAINPREFIX\PREFIX\SUBPREFIX\COMPONENT\fnc_<FNC>.sqf'
    Define 'RECOMPILE' to enable recompiling.
    Define 'SKIP_FUNCTION_HEADER' to skip adding function header.

Parameters:
    FUNCTION NAME - Name of the function, unquoted <STRING>

Examples:
    (begin example)
        // file name: fnc_addPerFrameHandler.sqf
        class CfgFunctions {
            class CBA {
                class Misc {
                    PATHTO_FNC(addPerFrameHandler);
                };
            };
        };
        // -> CBA_fnc_addPerFrameHandler
    (end)

Author:
    dixon13, commy2
 ------------------------------------------- */
#ifdef RECOMPILE
    #undef RECOMPILE
    #define RECOMPILE recompile = 1
#else
    #define RECOMPILE recompile = 0
#endif
// Set function header type: -1 - no header; 0 - default header; 1 - system header.
#ifdef SKIP_FUNCTION_HEADER
    #define CFGFUNCTION_HEADER headerType = -1
#else
    #define CFGFUNCTION_HEADER headerType = 0
#endif

#define PATHTO_FNC(func) class func {\
    file = QPATHTOF(DOUBLES(fnc,JOIN(display,func)).sqf);\
    CFGFUNCTION_HEADER;\
    RECOMPILE;\
}