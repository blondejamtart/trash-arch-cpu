#include <stdint.h>

// Registers
uint8_t RGA;
uint8_t RGB;
uint8_t RGO;
uint8_t STA;

// 
uint8_t *MEM;


// load register A from memory
void lda()
{
	RGA = *MEM;
}

// load register B from memory
void ldb()
{
	RGB = *MEM;
}

// write ouput register to memory
void flo()
{
	*MEM = RGO;
}

// set memory address pointer to value from register A
void sma()
{
	MEM = RGA;
}

