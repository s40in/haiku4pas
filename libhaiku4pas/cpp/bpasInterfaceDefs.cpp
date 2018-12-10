
#include "haikuobj.h"
#include "bpasInterfaceDefs.h"


#if defined(__cplusplus)
extern "C" {
#endif

rgb_color pas_ui_color(uint32 pas_which)
{
	return ui_color((color_which) pas_which);
}


#if defined(__cplusplus)
}
#endif




