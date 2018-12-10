#include <haiku4pas.h> // main include haiku4pas lib

#include <stdio.h>

#define MSG_BUTTON_1	80000
#define MSG_TXT_1		80100

TCppObject button_rect;
TCppObject button_msg;
TCppObject button;
	
TCppObject txt_rect;
TCppObject txt_msg;
TCppObject txt;

TCppObject string_rect;
TCppObject string_view;
	

void testQuitRequested(void)
{
	printf("testQuitRequested(void)\n");
	be_app->PostMessage(B_QUIT_REQUESTED);
}

void testMessageReceived(TCppObject msg)
{
	uint32 what;
	what=BMessage_GetWhat(msg);
	
	
	
	switch (what)
	{
		case MSG_BUTTON_1:
			printf("MSG_BUTTON_1 \n");
			BStringView_SetText(string_view, "Button press");
			
			break;
			
		case MSG_TXT_1:
			printf("MSG_TXT_1 \n ");
			BStringView_SetText(string_view, BTextControl_Text(txt));
			break;
			
		default:
			printf("debug: msg what= %lu \n", what);
			break;
		
	}
	
}

int main(void)
{
	/*BPasApplication *app = new BPasApplication();
	app->Run();
	delete app;
	*/
	
	printf("B_TITLED_WINDOW= %d\n", B_TITLED_WINDOW);
	printf("B_ASYNCHRONOUS_CONTROLS= %d\n", B_ASYNCHRONOUS_CONTROLS);
	printf("B_QUIT_REQUESTED= %d\n", B_QUIT_REQUESTED);

	
	TCppObject app;
	app= BApplication_Create_0();
	
	printf("debug: Create win_rect\n");
	TCppObject win_rect;
	win_rect=BRect_Create_1(100,100,400,500);
	
	printf("debug: Create win\n");
	TCppObject win;
	const char *wintitle="C: Test Window";
	
	TCppObject view_rect;
	view_rect=BRect_Create_1(10,10,100,100);
	
	const char *viewname="View Rect Name";
	TCppObject view;
	view=BView_Create_1(view_rect, viewname, B_FOLLOW_ALL, B_WILL_DRAW);
	BView_SetViewColor_2(view, (uchar)100,(uchar)100,(uchar)100,(uchar)255);
	
	//win=BWindow_Create_00(&testQuitRequested);
	win=BWindow_Create_1(win_rect, wintitle, B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS);
	printf("debug: SetFunc_QuitRequested\n");
	BWindow_SetFunc_QuitRequested(win,&testQuitRequested);
	BWindow_SetFunc_MessageReceived(win, &testMessageReceived);
	
	
	BWindow_AddChild_1(win, view);
	
//	TCppObject string_rect;
	string_rect=BRect_Create_1(10,110,100,200);
//	TCppObject string_view;
	string_view=BStringView_Create_1(string_rect, "String 1","String 1 text");
	BView_SetViewColor_2(string_view, (uchar)150,(uchar)150,(uchar)150,(uchar)255);
	
	BWindow_AddChild_1(win, string_view);
	

	
	button_rect=BRect_Create_1(110,110,200,200);
	button_msg=BMessage_Create_2(MSG_BUTTON_1);
	button=BButton_Create_4(button_rect, "button1", "button1 label", button_msg);
	BWindow_AddChild_1(win, button);
	

	txt_rect=BRect_Create_1(10,300,200,200);
	txt_msg=BMessage_Create_2(MSG_TXT_1);
	txt=BTextControl_Create_4(txt_rect, "txt1", "txt_label","init text", txt_msg);
	BWindow_AddChild_1(win, txt);
	
	printf("debug: BWindow_Show\n");
	BWindow_Show(win);
	
	printf("debug: BApplication_Run\n");
	BApplication_Run(app);
	BApplication_Free(app);
	
	return 0;
}
