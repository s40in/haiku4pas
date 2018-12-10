#include "haikuobj.h"

#include "bpasWindow.h"

#include <Application.h>

//MainWindow::MainWindow(void)
//{
//}


void
BPasWindow::MessageReceived(BMessage *msg)
{
	// run hook function
	if (func_MessageReceived==true){		
		(*MessageReceived_Call)(msg);
	}
	
	switch (msg->what)
	{
		default:
		{
			BWindow::MessageReceived(msg);
			break;
		}
	}
}


bool
BPasWindow::QuitRequested(void)
{
	
	if (func_QuitRequested==true){		// Run if
		(*QuitRequested_Call)();
	}
	
//	(*QuitRequested_Call)();
	
	//be_app->PostMessage(B_QUIT_REQUESTED);
	return true;
}




#if defined(__cplusplus)
extern "C" {
#endif

/*
TCppObject BWindow_Create_0() // debug constructor
{
	
	const char *wintitle="Test Window";
	BRect *frame = new BRect(100,100,400,500);
	BPasWindow *win = new BPasWindow(*frame, (const char*)wintitle, B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS );
	win->func_QuitRequested=false;
	return win;
}

TCppObject BWindow_Create_00(void (*func)()) // debug constructor
{
	
	const char *wintitle="Test Window";
	BRect *frame = new BRect(100,100,400,500);
	BPasWindow *win = new BPasWindow(*frame, (const char*)wintitle, B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS );
	win->func_QuitRequested=true;
	win->QuitRequested_Call=func;
	return win;
}
*/


TCppObject BWindow_Create_1(TCppObject rect_frame, const char *title, window_type type, uint32 flags)
{
	BPasWindow *win = new BPasWindow(*(reinterpret_cast<BRect*>(rect_frame)), title, type, flags);
	//win->func_QuitRequested=false;
	return win;
}



void BWindow_Free(TCppObject Window)
{
	delete reinterpret_cast<BWindow*>(Window);
}

void BWindow_Show(TCppObject Window)
{
	reinterpret_cast<BWindow*>(Window)->Show();
}

void BWindow_Hide(TCppObject Window)
{
	reinterpret_cast<BWindow*>(Window)->Hide();
}

void BWindow_AddChild_1(TCppObject Window, TCppObject ViewChild)
{
	reinterpret_cast<BWindow*>(Window)->AddChild(reinterpret_cast<BView*>(ViewChild), NULL);
	
}

void BWindow_AddChild_2(TCppObject Window, TCppObject ViewChild, TCppObject ViewBefore)
{
	reinterpret_cast<BWindow*>(Window)->AddChild( reinterpret_cast<BView*>(ViewChild), reinterpret_cast<BView*>(ViewBefore) );
}

// Virtual functions
bool BWindow_SetFunc_QuitRequested(TCppObject Window, void (*func)())
{
	reinterpret_cast<BPasWindow*>(Window)->func_QuitRequested=true;
	reinterpret_cast<BPasWindow*>(Window)->QuitRequested_Call=func;
	return true;
}

bool BWindow_SetFunc_MessageReceived(TCppObject Window, void (*func)(TCppObject msg))
{
	reinterpret_cast<BPasWindow*>(Window)->func_MessageReceived=true;
	reinterpret_cast<BPasWindow*>(Window)->MessageReceived_Call=func;
	return true;
}




#if defined(__cplusplus)
}
#endif


