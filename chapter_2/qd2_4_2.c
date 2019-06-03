#include <stdio.h>

int main(void)
{
  static int a[10000];
  printf("adress = %p\n", a);
  return 0;
}
