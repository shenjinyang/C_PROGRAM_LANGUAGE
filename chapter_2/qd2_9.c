#include <stdio.h>

#define CNT 5

void inplace_swap(int *x, int *y)
{
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

int main(void)
{
  int a[CNT] = {1, 2, 3, 4, 5};
  int first, last;

  for(first = 0, last = CNT - 1; first < last; first++, last--)
  {
    inplace_swap(&a[first], &a[last]);
  }

  for(first = 0; first < CNT; first++)
  {
    printf("%2d\n", a[first]);
  }

  return 0;
}
