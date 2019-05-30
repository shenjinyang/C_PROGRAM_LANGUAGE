#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    printf("singed char min = %d\n", -(char)((unsigned char)~0 >> 1) - 1);
    printf("singed char min = %d\n", SCHAR_MIN);

    printf("singed char max = %d\n", (char)((unsigned char)~0 >> 1));
    printf("singed char max = %d\n", SCHAR_MAX);

    return 0;
}
