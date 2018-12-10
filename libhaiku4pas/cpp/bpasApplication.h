#ifndef BPASAPPLICATION_H
#define BPASAPPLICATIO_H

#include <Application.h>

#include "haikuobj.h"

class BPasApplication : public BApplication
{
public:
	BPasApplication(void);
};


#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BApplication_Create_0();
TCppObject BApplication_Create_1(TPasObject PasObject);
TCppObject BApplication_Create_2(TPasObject PasObject, const char *Signature);
TCppObject BApplication_Create_3(TPasObject PasObject, const char *Signature,	status_t *error);
void BApplication_Free(TCppObject Application);
thread_id BApplication_Run(TCppObject Application);
void BApplication_Quit(TCppObject Application);

status_t be_app_PostMessage_1(uint32 command);


#if defined(__cplusplus)
}
#endif

#endif
