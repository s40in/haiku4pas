
#ifndef BPASSTRINGVIEW_H
#define BPASSTRINGVIEW_H

#include "haikuobj.h"


//#include <Point.h>
#include <StringView.h>


class BPasStringView : public BStringView
{
	public:
		BPasStringView(BRect frame, const char *name, const char *text, uint32 flags):BStringView(frame, name, text, flags){}
	private:	
};


#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BStringView_Create_1(TCppObject RectFrame, const char *name, const char *text);
TCppObject BStringView_Create_2(TCppObject RectFrame, const char *name, const char *text, uint32 flags);
void BStringView_Free(TCppObject StringView);
void BStringView_Show(TCppObject StringView);

void BStringView_SetText(TCppObject StringView, const char *text);
const char *BStringView_Text(TCppObject StringView);


#if defined(__cplusplus)
}
#endif

#endif


