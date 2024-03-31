#include <stdio.h>
#include <string.h>
#include <math.h>

int getString(int num); // 函数声明
int getEquation(); // 函数声明
void getReduceNum(); // 函数声明

int main()
{
  int isRun = getString(2023);
  // getEquation();
  getReduceNum();
  return 0;
}

// 函数定义
int getString(int num)
{
  if ((num % 4 == 0 && num % 100 != 0) || num % 400 == 0)
    return 1;
  else
    return 0;
}

#include <stdio.h>
#include <math.h> // 导入数学库，以便使用sqrt函数计算平方根

// 函数声明
void solveQuadraticEquation(double a, double b, double c, double *root1, double *root2);

int getEquation() {
    double a, b, c, root1, root2;

    // 获取用户输入的系数
    printf("请输入一元二次方程的系数：\na = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    // 求解方程
    solveQuadraticEquation(a, b, c, &root1, &root2);

    // 输出结果
    if (root1 == root2) { // 实际上这种情况不会出现，这里仅为了演示相同实根的情况
        printf("方程有重根，解为 x = %.2f\n", root1);
    } else {
        printf("方程有两个不同的解：x1 = %.2f, x2 = %.2f\n", root1, root2);
    }

    return 0;
}

// 解一元二次方程函数
void solveQuadraticEquation(double a, double b, double c, double *root1, double *root2) {
    double discriminant = b * b - 4 * a * c; // 计算判别式

    if (discriminant > 0) { // 两个不同实根
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
    } else if (discriminant == 0) { // 一个实根（重根）
        *root1 = *root2 = -b / (2 * a);
    } else { // 无实根，但可能有共轭复根（这里不考虑复数解）
        printf("方程无实数解。\n");
        *root1 = NAN; // 或者赋予其他无效值
        *root2 = NAN;
    }
}

void getReduceNum () {
  int num = 0;
  int i = 1;
  while (i <= 100)
  {
    num += i;
    i++;
  }
  printf("1到100的和为：%d\n", num);
}