#include <stdio.h>

/* 这个例子可以用来理解强制类型转换，在show_int函数中，调用show_bytes时，
 * 取了x的地址，&符号会自动生成一个指向相应类型变量的指针，这里生成的就是
 * int型指针，然后将其强制转换成為unsigned char类型；强制类型转换并不会
 * 改变指针变量中存储的值，而只是告诉编译器以新的数据类型来看待被指向的
 * 数据，转换前，从指针指向的地址开始，就是一个32位int的整体，现在取值是
 * 要按照8位来看的。
 */
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
  size_t i;
  for(i = 0; i < len; i++)
  {
    printf("%.2x", start[i]);
  }

  printf("\n");
}

void show_int(int x)
{
  show_bytes((byte_pointer)&x, sizeof(int));
}

int main(void)
{
  int val = 12345;
  show_int(val);

  return 0;
}
