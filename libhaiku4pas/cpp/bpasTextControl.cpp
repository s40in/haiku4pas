#include "haikuobj.h"

#include "bpasTextControl.h"



#if defined(__cplusplus)
extern "C" {
#endif


TCppObject BTextControl_Create_1(const char *label, const char *initialText, TCppObject message)
{
	return new BPasTextControl(label, initialText, reinterpret_cast<BMessage*>(message));
}

TCppObject BTextControl_Create_2(const char *name, const char *label, const char *initialText, TCppObject message)
{
	return new BPasTextControl(name, label, initialText, reinterpret_cast<BMessage*>(message), B_WILL_DRAW|B_NAVIGABLE);
}

TCppObject BTextControl_Create_3(const char *name, const char *label, const char *initialText, TCppObject message, uint32 flags)
{
	return new BPasTextControl(name, label, initialText, reinterpret_cast<BMessage*>(message), flags);
}

TCppObject BTextControl_Create_4(TCppObject RectFrame, const char *name, const char *label, const char *initialText, TCppObject message)
{
	return new BPasTextControl(*(reinterpret_cast<BRect*>(RectFrame)), name, label, initialText, reinterpret_cast<BMessage*>(message), 
								B_FOLLOW_LEFT_TOP, B_WILL_DRAW|B_NAVIGABLE);
}

TCppObject BTextControl_Create_5(TCppObject RectFrame, const char *name, const char *label, const char *initialText,
									TCppObject message, uint32 resizeMask, uint32 flags)
{
	return new BPasTextControl(*(reinterpret_cast<BRect*>(RectFrame)), name, label, initialText, reinterpret_cast<BMessage*>(message), resizeMask, flags);
}

void BTextControl_Free(TCppObject TextControl)
{
	delete reinterpret_cast<BTextControl*>(TextControl);
}

void BTextControl_SetEnabled(TCppObject TextControl, bool enable)
{
}


void BTextControl_SetFlags(TCppObject TextControl, uint32 flags)
{
	reinterpret_cast<BTextControl*>(TextControl)->SetFlags(flags);
}

void BTextControl_SetText(TCppObject TextControl, const char *text)
{
	reinterpret_cast<BTextControl*>(TextControl)->SetText(text);
}


const char *BTextControl_Text(TCppObject TextControl)
{
	return reinterpret_cast<BTextControl*>(TextControl)->Text();
}


TCppObject BTextControl_TextView(TCppObject TextControl)
{
	return reinterpret_cast<BTextView*>(reinterpret_cast<BTextControl*>(TextControl)->TextView());
}


#if defined(__cplusplus)
}
#endif


