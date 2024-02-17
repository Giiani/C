#include <stdio.h>
#include <stdint.h>

union Address
{
    uint16_t shortAddr;
    uint32_t longAddr;
};

int main (void)
{
    union Address addr;

    addr.shortAddr = 0xABCD;
    addr.longAddr =  0xEEEECCCC;
    
    printf("Short address: %hu\n", addr.shortAddr);
    printf("Shor Address Memory: %#X\n",addr.shortAddr);
    printf("Long address : %lu\n", addr.longAddr);
    printf("Long Address Memory: %#X\n",addr.longAddr);
	return 0;
}