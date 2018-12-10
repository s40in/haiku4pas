
#ifndef BPASVIEW_H
#define BPASVIEW_H

#include "haikuobj.h"


#include <Point.h>
#include <View.h>


class BPasView : public BView
{
	public:
		BPasView(BRect frame, const char *name, uint32 resizingMode, uint32 flags):BView(frame, name, resizingMode, flags){}
		//BPasView(BMessage *archive);
	private:	
};


#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BView_Create_1(TCppObject RectFrame, const char *name, uint32 resizingMode, uint32 flags);
void BView_Free(TCppObject View);
void BView_Show(TCppObject View);
void BView_AddChild(TCppObject View, TCppObject ViewChild, TCppObject ViewBefore);
void BView_SetViewColor_1(TCppObject View, rgb_color color);
void BView_SetViewColor_2(TCppObject View, uchar red, uchar green, uchar blue, uchar alpha);



#if defined(__cplusplus)
}
#endif

#endif


