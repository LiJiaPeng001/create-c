#include <stdio.h>

int main()
{
  float h, r, l, s, sq, vq, vz;
  float pi = 3.141526;
  scanf("%f,%f", &r, &h); // 要求输人圆半径r和圆柱高 h
  l = 2 * pi * r;                  // 计算圆周长 1
  s = r * r * pi;                  // 计算圆面积 s
  sq = 4 * pi * r * r;             // 计算圆球表面积 sq
  vq = 3.0 / 4.0 * pi * r * r * r; // 计算圆球体积 vq
  vz = pi * r * r * h;             // 计算圆柱体积 vz
  printf("圆周长l=%6.2f\n", l);
  printf("圆面积s=%6.2f\n", s);
  printf("圆球表面积sq=%6.2f\n", sq);
  printf("圆球体积vq=%6.2f\n", vq);
  printf("圆柱体积vz=%6.2f\n", vz);
  return 0;
}