unit BView;


interface

uses HaikuObj, ctypes;

const
	// mouse button
	B_PRIMARY_MOUSE_BUTTON				= $01;
	B_SECONDARY_MOUSE_BUTTON			= $02;
	B_TERTIARY_MOUSE_BUTTON				= $04;
	
	// mouse transit
	B_ENTERED_VIEW						= 0;
	B_INSIDE_VIEW						= 1;
	B_EXITED_VIEW						= 2;
	B_OUTSIDE_VIEW						= 3;

	// event mask
	B_POINTER_EVENTS					= $00000001;
	B_KEYBOARD_EVENTS					= $00000002;

	// event mask options
	B_LOCK_WINDOW_FOCUS					= $00000001;
	B_SUSPEND_VIEW_FOCUS				= $00000002;
	B_NO_POINTER_HISTORY				= $00000004;
	B_FULL_POINTER_HISTORY				= $00000008;
	
	// set font mask
	B_FONT_FAMILY_AND_STYLE				= $00000001;
	B_FONT_SIZE							= $00000002;
	B_FONT_SHEAR						= $00000004;
	B_FONT_ROTATION						= $00000008;
	B_FONT_SPACING						= $00000010;
	B_FONT_ENCODING						= $00000020;
	B_FONT_FACE							= $00000040;
	B_FONT_FLAGS						= $00000080;
	B_FONT_FALSE_BOLD_WIDTH				= $00000100;
	B_FONT_ALL							= $000001FF;
	
	// view flags
	B_FULL_UPDATE_ON_RESIZE		= $80000000;	
	_B_RESERVED1_				= $40000000;	
	B_WILL_DRAW					= $20000000;	
	B_PULSE_NEEDED				= $10000000;	
	B_NAVIGABLE_JUMP			= $08000000;	
	B_FRAME_EVENTS				= $04000000;	
	B_NAVIGABLE					= $02000000;	
	B_SUBPIXEL_PRECISE			= $01000000;	
	B_DRAW_ON_CHILDREN			= $00800000;	
	B_INPUT_METHOD_AWARE		= $00400000;	
	_B_RESERVED7_				= $00200000;	
	B_SUPPORTS_LAYOUT			= $00100000;	
	B_INVALIDATE_AFTER_LAYOUT	= $00080000;	

	_RESIZE_MASK_ 				= $ffff;
	
	B_FOLLOW_ALL : cuint32 		= $1234;


function BView_Create_1(RectFrame: TCppObject; name: PChar; resizingMode,flags: cuint32): TCppObject; cdecl; external CppLibName name 'BView_Create_1';
procedure BView_Free(view:TCppObject); cdecl; external CppLibName name 'BView_Free';
procedure BView_Show(view:TCppObject); cdecl; external CppLibName name 'BView_Show';

procedure BView_AddChild(View, ViewChild, ViewBefore:TCppObject); cdecl; external CppLibName name 'BView_AddChild';
procedure BView_SetViewColor(View:TCppObject; color: rgb_color); cdecl; external CppLibName name 'BView_SetViewColor_1';
procedure BView_SetViewColor(View:TCppObject; red, green, blue, alpha: cuchar); cdecl; external CppLibName name 'BView_SetViewColor_2';


implementation



end.
