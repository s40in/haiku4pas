#include "haikuobj.h"

#include "bpasMessage.h"




#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BMessage_Create_1()
{
	return new BPasMessage();
}

TCppObject BMessage_Create_2(uint32 what)
{
	return new BPasMessage(what);
}

/*
TCppObject BMessage_Create_3(TCppObject other)
{
	return new BPasMessage(reinterpret_cast<BMessage*>(other));
}
*/

void BMessage_Free(TCppObject cppMessage)
{
	delete reinterpret_cast<BMessage*>(cppMessage);
}

uint32 BMessage_GetWhat(TCppObject cppMessage)
{
	return reinterpret_cast<BMessage*>(cppMessage)->what;
}



#if defined(__cplusplus)
}
#endif


