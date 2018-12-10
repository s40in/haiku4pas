
#ifndef BPASWINDOW_H
#define BPASWINDOW_H

#include <Window.h>
#include <Rect.h>
#include <View.h>


class BPasWindow : public BWindow
{
public:
			//		BPasWindow(void);
			BPasWindow(BRect frame, const char *title, window_type type, uint32 flag):BWindow(frame, title, type, flag)
			{
				func_QuitRequested=false;
				func_MessageReceived=false;	
			}
				
			void		MessageReceived(BMessage *msg);
			bool		QuitRequested(void);
			
			bool func_QuitRequested;
			void (*QuitRequested_Call)();
			
			bool func_MessageReceived;
			void (*MessageReceived_Call)(TCppObject msg);
			
			
private:

			
};


#if defined(__cplusplus)
extern "C" {
#endif

/*
TCppObject BWindow_Create_0(); // debug constructor
TCppObject BWindow_Create_00(void (*func)());
*/

TCppObject BWindow_Create_1(TCppObject rect_frame, const char *title, window_type type, uint32 flags);
void BWindow_Free(TCppObject Window);
void BWindow_Show(TCppObject Window);
void BWindow_Hide(TCppObject Window);
void BWindow_AddChild_1(TCppObject Window, TCppObject ViewChild);
void BWindow_AddChild_2(TCppObject Window, TCppObject ViewChild, TCppObject ViewBefore);


bool BWindow_SetFunc_QuitRequested(TCppObject Window, void (*func)());
bool BWindow_SetFunc_MessageReceived(TCppObject Window, void (*func)(TCppObject msg));

#if defined(__cplusplus)
}
#endif


#endif
