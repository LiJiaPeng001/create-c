#include <stdio.h>

int main()
{
  // if else
  int num = 6;
  if (num > 6)
  {
    // printf("Number is positive: %d\n", num);
  }
  else
  {
    // printf("Number is negative:  %d\n", num);
  }
  // for 循环
  int i;

  for (i = 1; i < 11; i++)
  {
    // printf("%d", i);
  }

  // while 循环
  int a = 1;

  while (a <= 5)
  {
    // printf("%d\n", a);
    a++;
  }

  // do...while
  int b = 1;
  do
  {
    b++;
    // printf("%d\n", b);
  } while (b < 5);

  // break和continue
  for (int c = 0; c < 10; c++)
  {
    if (c % 2 == 0)
      continue;
    if (c == 9)
      break;
    // printf("%d\n", c);
  }
  // switch
  char d = 'a';
  switch(d)
  {
    case 'a':
      printf("a\n");
      break;
    case 'b':
      printf("b\n");
      break;
  }
}