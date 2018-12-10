unit HaikuInterfaceDefs;

interface

uses
  HaikuObj, ctypes;

const
  // Default UI Colors
	B_NO_COLOR = 0;
	B_PANEL_BACKGROUND_COLOR = 1;
	B_PANEL_TEXT_COLOR = 10;
	B_DOCUMENT_BACKGROUND_COLOR = 11;
	B_DOCUMENT_TEXT_COLOR = 12;
	B_CONTROL_BACKGROUND_COLOR = 13;
	B_CONTROL_TEXT_COLOR = 14;
	B_CONTROL_BORDER_COLOR = 15;
	B_CONTROL_HIGHLIGHT_COLOR = 16;
	B_CONTROL_MARK_COLOR = 27;
	B_NAVIGATION_BASE_COLOR = 4;
	B_NAVIGATION_PULSE_COLOR = 17;
	B_SHINE_COLOR = 18;
	B_SHADOW_COLOR = 19;

	B_LINK_TEXT_COLOR = 33;
	B_LINK_HOVER_COLOR = 34;
	B_LINK_VISITED_COLOR = 35;
	B_LINK_ACTIVE_COLOR = 36;

	B_MENU_BACKGROUND_COLOR = 2;
	B_MENU_SELECTED_BACKGROUND_COLOR = 6;
	B_MENU_ITEM_TEXT_COLOR = 7;
	B_MENU_SELECTED_ITEM_TEXT_COLOR = 8;
	B_MENU_SELECTED_BORDER_COLOR = 9;

	B_LIST_BACKGROUND_COLOR = 28;
	B_LIST_SELECTED_BACKGROUND_COLOR = 29;
	B_LIST_ITEM_TEXT_COLOR = 30;
	B_LIST_SELECTED_ITEM_TEXT_COLOR = 31;

	B_SCROLL_BAR_THUMB_COLOR = 32;

	B_TOOL_TIP_BACKGROUND_COLOR = 20;
	B_TOOL_TIP_TEXT_COLOR = 21;

	B_STATUS_BAR_COLOR = 37;

	B_SUCCESS_COLOR = 100;
	B_FAILURE_COLOR = 101;

	B_WINDOW_TAB_COLOR = 3;
	B_WINDOW_TEXT_COLOR = 22;
	B_WINDOW_INACTIVE_TAB_COLOR = 23;
	B_WINDOW_INACTIVE_TEXT_COLOR = 24;

	B_WINDOW_BORDER_COLOR = 25;
	B_WINDOW_INACTIVE_BORDER_COLOR = 26;




function ui_color(pas_which: cuint32):rgb_color; cdecl; external CppLibName name 'pas_ui_color';

implementation



initialization


 
end.