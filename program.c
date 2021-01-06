
#include <stdint.h>

#define prgrm_head 0
#define umem_head 128

uint8_t *PRGM;
void (*INST)();

// flow instructions

void jmp()
{
	PRGM = RGA;
}

// Main arch

void run(char* GLB)
{
	*PRGM = init;
	INST = (GLB + PRGM++);
	(*INST)();

}

int main()
{
	return 0;
}
