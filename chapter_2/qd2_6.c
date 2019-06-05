#include <stdio.h>

int main(void)
{
  signed char a = -3;
  /* I think the result should be 253 */
  printf("unsigned char -3 = %d\n", (unsigned char)a);

  return 0;
}
