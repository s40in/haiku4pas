
#ifndef BPasMessage_H
#define BPasMessage_H

#include "haikuobj.h"

#include <Message.h>


class BPasMessage : public BMessage
{
	public:
		BPasMessage():BMessage(){}
		BPasMessage(uint32 what):BMessage(what){}
	//	BPasMessage(const BMessage &other):BMessage(other){}
	private:	
};


#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BMessage_Create_1();
TCppObject BMessage_Create_2(uint32 what);
//TCppObject BMessage_Create_3(TCppObject other);

void BMessage_Free(TCppObject cppMessage);
uint32 BMessage_GetWhat(TCppObject cppMessage);


#if defined(__cplusplus)
}
#endif

#endif


