#include <stdio.h>

int main(void)
{
  long a;
  unsigned short b;
  unsigned long c, d;
  short e;
  a = -1L; //long int
  b = 1U;  //unsigned int
  d = a + b;
  printf("a = %ldL, b = %uU, d = %luUL, a>b=%d\n", a, b, d, a > b);
  a = -1L;
  c = 1UL;
  d = c + a;
  printf("a = %ldL, c = %luUL, d = %luUL, a>c=%d\n", a, c, d, a > c);
  e = -1;
  c = 1UL;
  d = e + c;
  printf("e = %dL, c = %luUL, d = %luUL, e>b=%d\n", e, c, d, e > c);

  return 0;
}
