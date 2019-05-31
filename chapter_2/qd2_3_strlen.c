#include <stdio.h>

/* 把宏定义成字符串，那么该宏就是一个字符串指针 */
#define STR "hello world"

int MyStrlen(char s[]);

int MyStrlen(char s[])
{
  int i = 0;

  while(s[i] != '\0')
    i++;

  return i;
}

int main(void)
{
  int count = 0;
  count = MyStrlen(STR);
  printf("count = %d\n", count);

  return 0;
}
