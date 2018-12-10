
#ifndef BPASRECT_H
#define BPASRECT_H

#include "haikuobj.h"


#include <Point.h>
#include <Rect.h>


class BPasRect : public BRect
{
	public:
		BPasRect( float left, float top, float right, float bottom): BRect(left, top, right, bottom){}
		BPasRect(BPoint leftTop, BPoint rightBottom): BRect(leftTop, rightBottom){}
};

#if defined(__cplusplus)
extern "C" {
#endif

TCppObject BRect_Create_1(float left, float top, float right, float bottom);
TCppObject BRect_Create_2(BPoint leftTop, BPoint rightBottom);
void BRect_Free(TCppObject rect);
float BRect_left(TCppObject rect);
float BRect_top(TCppObject rect);
float BRect_right(TCppObject rect);
float BRect_bottom(TCppObject rect);


#if defined(__cplusplus)
}
#endif

#endif


