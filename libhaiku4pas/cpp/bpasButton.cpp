#include "haikuobj.h"

#include "bpasButton.h"



#if defined(__cplusplus)
extern "C" {
#endif


TCppObject BButton_Create_1(const char *label, TCppObject message)
{
	return new BPasButton(label,reinterpret_cast<BMessage*>(message));
}

TCppObject BButton_Create_2(const char *name, const char *label, TCppObject message)
{
	return new BPasButton(name, label,reinterpret_cast<BMessage*>(message), B_WILL_DRAW|B_NAVIGABLE|B_FULL_UPDATE_ON_RESIZE);
}


TCppObject BButton_Create_3(const char *name, const char *label, TCppObject message, uint32 flags)
{
	return new BPasButton(name, label,reinterpret_cast<BMessage*>(message), flags);
}


TCppObject BButton_Create_4(TCppObject RectFrame, const char *name, const char *label, TCppObject message)
{
	return new BPasButton(*(reinterpret_cast<BRect*>(RectFrame)),name, label,reinterpret_cast<BMessage*>(message), B_FOLLOW_LEFT_TOP, B_WILL_DRAW|B_NAVIGABLE|B_FULL_UPDATE_ON_RESIZE);
}


TCppObject BButton_Create_5(TCppObject RectFrame, const char *name, const char *label, TCppObject message, uint32 resizingMode, uint32 flags)
{
	return new BPasButton(*(reinterpret_cast<BRect*>(RectFrame)),name, label,reinterpret_cast<BMessage*>(message), resizingMode, flags);	
}



void BButton_Free(TCppObject Button)
{
	delete reinterpret_cast<BButton*>(Button);
}


#if defined(__cplusplus)
}
#endif


