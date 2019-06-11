#include <stdio.h>
#include <string.h>

int main(void)
{
  int* p = NULL;

  printf("count = %ld\n", sizeof(p) * 8);

  return 0;
}
