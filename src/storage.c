#include <stdio.h>

/* 函数声明 */
void func1(void);

static int count = 12; /* 全局变量 - static 是默认的 */

int main()
{
  while (count--)
  {
    func1();
  }
  return 0;
}

void func1(void)
{
  /* 'hello' 是 'func1' 的局部变量 - 只初始化一次
   * 每次调用函数 'func1' 'hello' 值不会被重置。
   */
  static int hello = 4;
  hello++;
  printf(" hello 为 %d ， count 为 %d\n", hello, count);
}