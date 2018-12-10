#include "haikuobj.h"

#include "bpasStringView.h"





#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BStringView_Create_1(TCppObject RectFrame, const char *name, const char *text)
{
	return new BPasStringView(*(reinterpret_cast<BRect*>(RectFrame)), name, text, B_WILL_DRAW);
}

TCppObject BStringView_Create_2(TCppObject RectFrame, const char *name, const char *text, uint32 flags)
{
	return new BPasStringView(*(reinterpret_cast<BRect*>(RectFrame)), name, text, flags);
}

void BStringView_Free(TCppObject StringView)
{
	delete reinterpret_cast<BStringView*>(StringView);
}

void BStringView_Show(TCppObject StringView)
{
   reinterpret_cast<BStringView*>(StringView)->Show();
}

void BStringView_SetText(TCppObject StringView, const char *text)
{
	reinterpret_cast<BStringView*>(StringView)->SetText(text);
}

const char *BStringView_Text(TCppObject StringView)
{
	return reinterpret_cast<BStringView*>(StringView)->Text();
}



#if defined(__cplusplus)
}
#endif


