
#ifndef BPasTextControl_H
#define BPasTextControl_H

#include "haikuobj.h"

#include <TextControl.h>
#include <Rect.h>


class BPasTextControl : public BTextControl
{
	public:
		BPasTextControl(const char *label, const char *initialText, BMessage *message)
			:BTextControl(label, initialText, message){}
		BPasTextControl(const char *name, const char *label, const char *initialText, BMessage *message, uint32 flags)
			:BTextControl(name, label, initialText, message, flags){}
		BPasTextControl(BRect frame, const char *name, const char *label, const char *initialText, BMessage *message, uint32 resizeMask, uint32 flags)
			:BTextControl(frame, name, label, initialText, message, resizeMask, flags){}
	private:	
};


#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BTextControl_Create_1(const char *label, const char *initialText, TCppObject message);
TCppObject BTextControl_Create_2(const char *name, const char *label, const char *initialText, TCppObject message);
TCppObject BTextControl_Create_3(const char *name, const char *label, const char *initialText, TCppObject message, uint32 flags);
TCppObject BTextControl_Create_4(TCppObject RectFrame, const char *name, const char *label, const char *initialText, TCppObject message);
TCppObject BTextControl_Create_5(TCppObject RectFrame, const char *name, const char *label, const char *initialText, TCppObject message, uint32 resizeMask, uint32 flags);

void BTextControl_Free(TCppObject TextControl);
void BTextControl_SetEnabled(TCppObject TextControl, bool enable);
void BTextControl_SetFlags(TCppObject TextControl, uint32 flags);
void BTextControl_SetText(TCppObject TextControl, const char *text);

const char *BTextControl_Text(TCppObject TextControl);
TCppObject BTextControl_TextView(TCppObject TextControl);



#if defined(__cplusplus)
}
#endif

#endif


