#include <stdio.h>

int a[10000] = {1,};

int main(void)
{
  char b = 0xFF;
  printf("value = %d\n", a[0]);
  printf("value = %d\n", a[1]);
  printf("value = %d\n", a[2]);
  printf("%d\n", b);
  return 0;
}
