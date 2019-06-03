#include <stdio.h>

static int a[10000] = {0};

int main(void)
{
  printf("value = %d\n", a[0]);
  printf("value = %d\n", a[1]);
  printf("value = %d\n", a[2]);
  return 0;
}
