#include "haikuobj.h"

#include "bpasRect.h"





#if defined(__cplusplus)
extern "C" {
#endif


TCppObject BRect_Create_1(float left, float top, float right, float bottom)
{
  return new BPasRect(left, top, right, bottom);
}

TCppObject BRect_Create_2(BPoint leftTop, BPoint rightBottom)
{
  return new BPasRect(leftTop, rightBottom);
}

void BRect_Free(TCppObject rect)
{
  delete reinterpret_cast<BRect*>(rect);
}


float BRect_left(TCppObject rect)
{
	return reinterpret_cast<BRect*>(rect)->left;
}

float BRect_top(TCppObject rect)
{
	return reinterpret_cast<BRect*>(rect)->top;
}
float BRect_right(TCppObject rect)
{
	return reinterpret_cast<BRect*>(rect)->right;
}
float BRect_bottom(TCppObject rect)
{
	return reinterpret_cast<BRect*>(rect)->bottom;
}

#if defined(__cplusplus)
}
#endif


