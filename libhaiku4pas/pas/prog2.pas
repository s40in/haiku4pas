program prog2;

{$mode objfpc}{$H+}

uses
  Haiku4pas,
  ctypes,
  HaikuObj,
  HaikuMsgDefs, 
  HaikuInterfaceDefs,
  BApplication,
  BButton,
  BMessage,
  BRect,
  BStringView,
  BTextControl,
  BView,
  BWindow,
  SysUtils;
  
const
 	MSG_BUTTON_1=80000;
	MSG_TXT_1=80100;

var
	app: TCppObject;
	win, win_rect: TCppObject;
	view, view_rect: TCppObject;
	sv, sv_rect: TCppObject;
	btn1, btn1_rect, btn1_msg: TCppObject;
	txt1, txt1_rect, txt1_msg: TCppObject;
	
	wintitle: string;

procedure winQuitRequested();
begin
	writeln('Pascal: testQuitRequested');
	be_app_PostMessage_1(B_QUIT_REQUESTED);
end;

procedure winMessageReceived(msg: TCppObject);
var
	what:cuint32;
begin
	what:=BMessage_GetWhat(msg);
	case what of
	MSG_BUTTON_1:
		begin
			BStringView_SetText(sv, 'Button press');
		end;
	MSG_TXT_1:
		begin
			BStringView_SetText(sv, BTextControl_Text(txt1));
		end;
	else
		writeln('DEBUG: MSG.what='+ IntToStr(what));
	end;
end;

begin
	app := BApplication_Create();
	
	win_rect:=BRect_Create(100,100,600,600);
	wintitle:='Pascal: Title Window';
	win:=BWindow_Create(win_rect, PChar(wintitle), B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS);
	BWindow_SetFunc_QuitRequested(win,@winQuitRequested);
	BWindow_SetFunc_MessageReceived(win,@winMessageReceived);
	
	// view
	view_rect:=BRect_Create(0,0,600,600);
	view:=BView_Create_1(view_rect, 'View1', B_FOLLOW_ALL, B_WILL_DRAW);
	//BView_SetViewColor(view, 100,100,100,255);
	BView_SetViewColor(view, ui_color(B_PANEL_BACKGROUND_COLOR));
	BWindow_AddChild(win, view);
	
	// stringview
	sv_rect:=BRect_Create(10,110,200,200);
	sv:=BStringView_Create_1(sv_rect, 'String 1','String 1 text');
	//BWindow_AddChild(win, sv);
	BView_AddChild(view, sv, nil);
	
	//button
	btn1_rect:=BRect_Create(10,200,100,220);
	btn1_msg:=BMessage_Create(MSG_BUTTON_1);
	btn1:=BButton_Create_4(btn1_rect, 'btn1','Button 1', btn1_msg);
	//BWindow_AddChild(win, btn1);
	BView_AddChild(view, btn1, nil);
	
	//txt_control
	txt1_rect:=BRect_Create(10,10,200,200);
	txt1_msg:=BMessage_Create(MSG_TXT_1);
	txt1:=BTextControl_Create_4(txt1_rect, 'txt1','Text 1', 'sample text', txt1_msg);
	BView_AddChild(view, txt1, nil);
	
	BWindow_Show(win);
	
	BApplication_Run(app);
	BApplication_Free(app);
end.
