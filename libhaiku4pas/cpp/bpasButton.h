
#ifndef BPasButton_H
#define BPasButton_H

#include "haikuobj.h"

#include <Button.h>
#include <Rect.h>


class BPasButton : public BButton
{
	public:
		BPasButton(const char *label, BMessage *message):BButton(label, message){}
		BPasButton(const char *name, const char *label, BMessage *message, uint32 flags):BButton(name, label, message, flags){}
		BPasButton(BRect frame, const char *name, const char *label, BMessage *message, uint32 resizingMode, uint32 flags):BButton(frame, name, label, message, resizingMode, flags){}
	private:	
};


#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BButton_Create_1(const char *label, TCppObject message);
TCppObject BButton_Create_2(const char *name, const char *label, TCppObject message);
TCppObject BButton_Create_3(const char *name, const char *label, TCppObject message, uint32 flags);
TCppObject BButton_Create_4(TCppObject RectFrame, const char *name, const char *label, TCppObject message);
TCppObject BButton_Create_5(TCppObject RectFrame, const char *name, const char *label, TCppObject message, uint32 resizingMode, uint32 flags);


void BButton_Free(TCppObject Button);



#if defined(__cplusplus)
}
#endif

#endif


