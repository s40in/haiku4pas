unit BWindow;

interface

uses HaikuObj, ctypes;

const
  // window_type
  B_UNTYPED_WINDOW 		=  0;
  B_TITLED_WINDOW 		=  1;
  B_MODAL_WINDOW		=  3;
  B_DOCUMENT_WINDOW		= 11;
  B_BORDERED_WINDOW		= 20;
  B_FLOATING_WINDOW		= 21;
  
  // window_look
  B_BORDERED_WINDOW_LOOK	= 20;
  B_NO_BORDER_WINDOW_LOOK 	= 19;
  B_TITLED_WINDOW_LOOK		=  1;
  B_DOCUMENT_WINDOW_LOOK	= 11;
  B_MODAL_WINDOW_LOOK		=  3;
  B_FLOATING_WINDOW_LOOK	=  7;
  
  // window_feel
  B_NORMAL_WINDOW_FEEL			= 0;
  B_MODAL_SUBSET_WINDOW_FEEL	= 2;
  B_MODAL_APP_WINDOW_FEEL		= 1;
  B_MODAL_ALL_WINDOW_FEEL		= 3;
  B_FLOATING_SUBSET_WINDOW_FEEL	= 5;
  B_FLOATING_APP_WINDOW_FEEL	= 4;
  B_FLOATING_ALL_WINDOW_FEEL	= 6;
  
  // flags
  B_NOT_MOVABLE					= $00000001;
  B_NOT_CLOSABLE				= $00000020;
  B_NOT_ZOOMABLE				= $00000040;
  B_NOT_MINIMIZABLE				= $00004000;
  B_NOT_RESIZABLE				= $00000002;
  B_NOT_H_RESIZABLE				= $00000004;
  B_NOT_V_RESIZABLE				= $00000008;
  B_AVOID_FRONT					= $00000080;
  B_AVOID_FOCUS					= $00002000;
  B_WILL_ACCEPT_FIRST_CLICK		= $00000010;
  B_OUTLINE_RESIZE				= $00001000;
  B_NO_WORKSPACE_ACTIVATION		= $00000100;
  B_NOT_ANCHORED_ON_ACTIVATE	= $00020000;
  B_ASYNCHRONOUS_CONTROLS		= $00080000;
  B_QUIT_ON_WINDOW_CLOSE		= $00100000;
  
  B_CURRENT_WORKSPACE		= 0;    
  B_ALL_WORKSPACES			= $ffffffff;

type
	TProcQuitRequested = procedure();
	TProcMessageReceived = procedure (msg:TCppObject);



//function BWindow_Create_0() : TCppObject; cdecl; external CppLibName name 'BWindow_Create_0';
//function BWindow_Create_00(procQuitRequested:TProc0) : TCppObject; cdecl; external CppLibName name 'BWindow_Create_00';

function BWindow_Create(frame : TCppObject; title : PChar; atype, flags: cardinal) : TCppObject; cdecl; external CppLibName name 'BWindow_Create_1';

procedure BWindow_Free(Window : TCppObject); cdecl; external CppLibName name 'BWindow_Free';
procedure BWindow_Show(Window : TCppObject); cdecl; external CppLibName name 'BWindow_Show';
procedure BWindow_Hide(Window : TCppObject); cdecl; external CppLibName name 'BWindow_Hide';

procedure BWindow_AddChild(Window, ViewChild: TCppObject); cdecl; external CppLibName name 'BWindow_AddChild_1';
procedure BWindow_AddChild(Window, ViewChild, ViewBefore: TCppObject); cdecl; external CppLibName name 'BWindow_AddChild_2';

function BWindow_SetFunc_QuitRequested(CppObject : TCppObject; procQuitRequested:TProcQuitRequested) : Boolean; cdecl; external CppLibName name 'BWindow_SetFunc_QuitRequested';
function BWindow_SetFunc_MessageReceived(CppObject : TCppObject; procMessageReceived:TProcMessageReceived) : Boolean; cdecl; external CppLibName name 'BWindow_SetFunc_MessageReceived';




implementation

//

end.
