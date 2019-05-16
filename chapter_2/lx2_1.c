#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("singed char min = %d\n", -(char)((unsigned char)~0 >> 1));
    printf("singed char max = %d\n", (char)((unsigned char)~0 >> 1));

    printf("singed short min = %d\n", -(short)((unsigned short)~0 >> 1));
    printf("singed short max = %d\n", (short)((unsigned short)~0 >> 1));
    return 0;
}
