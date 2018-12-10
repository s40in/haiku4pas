#include "haikuobj.h"

#include "bpasApplication.h"
#include "bpasWindow.h"



const char *wintitle="Test Window";


BPasApplication::BPasApplication(void):BApplication("application/x-vnd.dw-TestApp")
{
	//MainWindow *mainwin = new MainWindow();
	//mainwin->Show();
	//BRect *frame = new BRect(100,100,400,500);
	//BPasWindow *win= new BPasWindow(*frame, (const char*)wintitle, B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS );
	//win->Show();
	
	//TCppObject win;
	//win=BWindow_Create_0();
	//BWindow_Show(win);
}





#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BApplication_Create_0() // debug constructor
{
	return new BPasApplication();
}

/*
TCppObject BApplication_Create_1(TPasObject PasObject)
{
	return new BPasApplication(PasObject, "application/x-vnd.haiku4pas-app");
}

TCppObject BApplication_Create_2(TPasObject PasObject, const char *Signature)
{
	return new BPasApplication(PasObject, Signature);
}

TCppObject BApplication_Create_3(TPasObject PasObject, const char *Signature,
	status_t *error)
{
	return new BPasApplication(PasObject, Signature, error);
}
*/


void BApplication_Free(TCppObject Application)
{
	delete reinterpret_cast<BPasApplication*>(Application);
}


thread_id BApplication_Run(TCppObject Application)
{
	return reinterpret_cast<BApplication*>(Application)->Run();
}

void BApplication_Quit(TCppObject Application)
{
	reinterpret_cast<BApplication*>(Application)->Quit();	
}

status_t be_app_PostMessage_1(uint32 command) //status_t - int32 (B_QUIT_REQUESTED)
{
	return be_app->PostMessage(command);
}

#if defined(__cplusplus)
}
#endif
