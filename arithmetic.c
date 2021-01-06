#include "registers.h"

void add()
{
	RGO = RGA + RGB;
    STA |= (128 & ((RGA >> 1) + (RGB >> 1))) << 4;
}

void neg()
{
	RGO = ~(RGA) + 1;
}
