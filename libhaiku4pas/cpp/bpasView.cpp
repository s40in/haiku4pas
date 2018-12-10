#include "haikuobj.h"

#include "bpasView.h"





#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BView_Create_1(TCppObject RectFrame, const char *name, uint32 resizingMode, uint32 flags)
{
	return new BPasView(*(reinterpret_cast<BRect*>(RectFrame)), name, resizingMode, flags);
}

void BView_Free(TCppObject View)
{
	delete reinterpret_cast<BView*>(View);
}

void BView_Show(TCppObject View)
{
   reinterpret_cast<BView*>(View)->Show();
}

void BView_AddChild(TCppObject View, TCppObject ViewChild, TCppObject ViewBefore)
{
  reinterpret_cast<BView*>(View)->AddChild(reinterpret_cast<BView*>(ViewChild), reinterpret_cast<BView*>(ViewBefore));
}

void BView_SetViewColor_1(TCppObject View, rgb_color color)
{
  reinterpret_cast<BView*>(View)->SetViewColor(color);
}

void BView_SetViewColor_2(TCppObject View, uchar red, uchar green, uchar blue, uchar alpha)
{
  reinterpret_cast<BView*>(View)->SetViewColor(red, green, blue, alpha);
}



#if defined(__cplusplus)
}
#endif


