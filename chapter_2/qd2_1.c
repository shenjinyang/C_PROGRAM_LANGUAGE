#include <stdio.h>

#define VTAB '\013'

/* 可以用'\ooo'表示任意字节的位模式，我们通常的赋值操作是直接赋真值，而不是位模式，
 * 使用反斜杠可以达到要求。
 */

int main(void)
{
  printf("value = %d\n", VTAB);

  return 0;
}
