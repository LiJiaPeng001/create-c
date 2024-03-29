#include <stdio.h>

void hello()
{
  printf("hello c\n");
}

int get(){
    return 10;
}

int main()
{
  hello();
  int a = get();
  printf("%d\n", a);
  return 0;
}