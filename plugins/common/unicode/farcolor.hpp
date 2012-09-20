#pragma once
#ifndef __COLORS_HPP__
#define __COLORS_HPP__
/*
  farcolor.hpp

  Colors Index for FAR Manager 3.0 build 2811
*/

/*
Copyright � 1996 Eugene Roshal
Copyright � 2000 Far Group
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the authors may not be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR `AS IS' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

EXCEPTION:
Far Manager plugins that use this header file can be distributed under any
other possible license with no implications from the above license on them.
*/


enum PaletteColors
{
	COL_MENUTEXT,
	COL_MENUSELECTEDTEXT,
	COL_MENUHIGHLIGHT,
	COL_MENUSELECTEDHIGHLIGHT,
	COL_MENUBOX,
	COL_MENUTITLE,

	COL_HMENUTEXT,
	COL_HMENUSELECTEDTEXT,
	COL_HMENUHIGHLIGHT,
	COL_HMENUSELECTEDHIGHLIGHT,

	COL_PANELTEXT,
	COL_PANELSELECTEDTEXT,
	COL_PANELHIGHLIGHTTEXT,
	COL_PANELINFOTEXT,
	COL_PANELCURSOR,
	COL_PANELSELECTEDCURSOR,
	COL_PANELTITLE,
	COL_PANELSELECTEDTITLE,
	COL_PANELCOLUMNTITLE,
	COL_PANELTOTALINFO,
	COL_PANELSELECTEDINFO,

	COL_DIALOGTEXT,
	COL_DIALOGHIGHLIGHTTEXT,
	COL_DIALOGBOX,
	COL_DIALOGBOXTITLE,
	COL_DIALOGHIGHLIGHTBOXTITLE,
	COL_DIALOGEDIT,
	COL_DIALOGBUTTON,
	COL_DIALOGSELECTEDBUTTON,
	COL_DIALOGHIGHLIGHTBUTTON,
	COL_DIALOGHIGHLIGHTSELECTEDBUTTON,

	COL_DIALOGLISTTEXT,
	COL_DIALOGLISTSELECTEDTEXT,
	COL_DIALOGLISTHIGHLIGHT,
	COL_DIALOGLISTSELECTEDHIGHLIGHT,

	COL_WARNDIALOGTEXT,
	COL_WARNDIALOGHIGHLIGHTTEXT,
	COL_WARNDIALOGBOX,
	COL_WARNDIALOGBOXTITLE,
	COL_WARNDIALOGHIGHLIGHTBOXTITLE,
	COL_WARNDIALOGEDIT,
	COL_WARNDIALOGBUTTON,
	COL_WARNDIALOGSELECTEDBUTTON,
	COL_WARNDIALOGHIGHLIGHTBUTTON,
	COL_WARNDIALOGHIGHLIGHTSELECTEDBUTTON,

	COL_KEYBARNUM,
	COL_KEYBARTEXT,
	COL_KEYBARBACKGROUND,

	COL_COMMANDLINE,

	COL_CLOCK,

	COL_VIEWERTEXT,
	COL_VIEWERSELECTEDTEXT,
	COL_VIEWERSTATUS,

	COL_EDITORTEXT,
	COL_EDITORSELECTEDTEXT,
	COL_EDITORSTATUS,

	COL_HELPTEXT,
	COL_HELPHIGHLIGHTTEXT,
	COL_HELPTOPIC,
	COL_HELPSELECTEDTOPIC,
	COL_HELPBOX,
	COL_HELPBOXTITLE,

	COL_PANELDRAGTEXT,
	COL_DIALOGEDITUNCHANGED,
	COL_PANELSCROLLBAR,
	COL_HELPSCROLLBAR,
	COL_PANELBOX,
	COL_PANELSCREENSNUMBER,
	COL_DIALOGEDITSELECTED,
	COL_COMMANDLINESELECTED,
	COL_VIEWERARROWS,

	COL_DIALOGLISTSCROLLBAR,
	COL_MENUSCROLLBAR,
	COL_VIEWERSCROLLBAR,
	COL_COMMANDLINEPREFIX,
	COL_DIALOGDISABLED,
	COL_DIALOGEDITDISABLED,
	COL_DIALOGLISTDISABLED,
	COL_WARNDIALOGDISABLED,
	COL_WARNDIALOGEDITDISABLED,
	COL_WARNDIALOGLISTDISABLED,

	COL_MENUDISABLEDTEXT,

	COL_EDITORCLOCK,
	COL_VIEWERCLOCK,

	COL_DIALOGLISTTITLE,
	COL_DIALOGLISTBOX,

	COL_WARNDIALOGEDITSELECTED,
	COL_WARNDIALOGEDITUNCHANGED,

	COL_DIALOGCOMBOTEXT,
	COL_DIALOGCOMBOSELECTEDTEXT,
	COL_DIALOGCOMBOHIGHLIGHT,
	COL_DIALOGCOMBOSELECTEDHIGHLIGHT,
	COL_DIALOGCOMBOBOX,
	COL_DIALOGCOMBOTITLE,
	COL_DIALOGCOMBODISABLED,
	COL_DIALOGCOMBOSCROLLBAR,

	COL_WARNDIALOGLISTTEXT,
	COL_WARNDIALOGLISTSELECTEDTEXT,
	COL_WARNDIALOGLISTHIGHLIGHT,
	COL_WARNDIALOGLISTSELECTEDHIGHLIGHT,
	COL_WARNDIALOGLISTBOX,
	COL_WARNDIALOGLISTTITLE,
	COL_WARNDIALOGLISTSCROLLBAR,

	COL_WARNDIALOGCOMBOTEXT,
	COL_WARNDIALOGCOMBOSELECTEDTEXT,
	COL_WARNDIALOGCOMBOHIGHLIGHT,
	COL_WARNDIALOGCOMBOSELECTEDHIGHLIGHT,
	COL_WARNDIALOGCOMBOBOX,
	COL_WARNDIALOGCOMBOTITLE,
	COL_WARNDIALOGCOMBODISABLED,
	COL_WARNDIALOGCOMBOSCROLLBAR,

	COL_DIALOGLISTARROWS,
	COL_DIALOGLISTARROWSDISABLED,
	COL_DIALOGLISTARROWSSELECTED,
	COL_DIALOGCOMBOARROWS,
	COL_DIALOGCOMBOARROWSDISABLED,
	COL_DIALOGCOMBOARROWSSELECTED,
	COL_WARNDIALOGLISTARROWS,
	COL_WARNDIALOGLISTARROWSDISABLED,
	COL_WARNDIALOGLISTARROWSSELECTED,
	COL_WARNDIALOGCOMBOARROWS,
	COL_WARNDIALOGCOMBOARROWSDISABLED,
	COL_WARNDIALOGCOMBOARROWSSELECTED,
	COL_MENUARROWS,
	COL_MENUARROWSDISABLED,
	COL_MENUARROWSSELECTED,
	COL_COMMANDLINEUSERSCREEN,
	COL_EDITORSCROLLBAR,

	COL_MENUGRAYTEXT,
	COL_MENUSELECTEDGRAYTEXT,
	COL_DIALOGCOMBOGRAY,
	COL_DIALOGCOMBOSELECTEDGRAYTEXT,
	COL_DIALOGLISTGRAY,
	COL_DIALOGLISTSELECTEDGRAYTEXT,
	COL_WARNDIALOGCOMBOGRAY,
	COL_WARNDIALOGCOMBOSELECTEDGRAYTEXT,
	COL_WARNDIALOGLISTGRAY,
	COL_WARNDIALOGLISTSELECTEDGRAYTEXT,

	COL_DIALOGDEFAULTBUTTON,
	COL_DIALOGSELECTEDDEFAULTBUTTON,
	COL_DIALOGHIGHLIGHTDEFAULTBUTTON,
	COL_DIALOGHIGHLIGHTSELECTEDDEFAULTBUTTON,
	COL_WARNDIALOGDEFAULTBUTTON,
	COL_WARNDIALOGSELECTEDDEFAULTBUTTON,
	COL_WARNDIALOGHIGHLIGHTDEFAULTBUTTON,
	COL_WARNDIALOGHIGHLIGHTSELECTEDDEFAULTBUTTON,

	COL_LASTPALETTECOLOR
};

#endif  // __COLORS_HPP__
