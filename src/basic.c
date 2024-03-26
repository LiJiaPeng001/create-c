#include <stdio.h>
#include <string.h>

int main()
{
  int a = 12341;
  char name = 'a';
  char name1[] = "李家朋";
  const double PI = 3.14;
  float num = 1.234;
  double num1 = 1.213213123213123123;
  int numbers[3] = {10, 20, 30};
  numbers[1] = 35;
  printf("a = %d\n", numbers[1]);
  // 指针
  int value = 42;
  int *ptr = &value; // ptr 存储了 value 的内存地址
  // 通过指针访问和修改值
  *ptr = 50;                                    // 通过指针修改 value 的值
  printf("The modified value is: %d\n", value); // 输出：50

  // 定义一个学生结构体
  typedef struct
  {
    char name[50];
    int age;
    float gpa;
  } Student;

  // 创建一个学生实例
  Student student;
  strcpy(student.name, "李家朋");
  student.age = 20;
  student.gpa = 3.5;
  // 访问结构体成员
  printf("Student's Name: %s, Age: %d, GPA: %.2f\n", student.name, student.age, student.gpa);

  // 定义一个联合体
  typedef union
  {
    int intValue;
    float floatValue;
    char charValue[4];
  } DataUnion;
  // 创建一个联合体实例
  DataUnion data;
  // 给不同成员赋值，注意每次赋值都会覆盖之前的数据
  data.intValue = 12345;
  printf("Integer Value: %d\n", data.intValue);

  data.floatValue = 3.14;
  printf("Float Value: %f\n", data.floatValue);

  strcpy(data.charValue, "ABC");
  printf("Character Value: %s\n", data.charValue);

  // 打印
  printf("a = %d\n", 20);
  printf("name = %c\n", 'A');
  printf("name1 = %f\n", 1.1);
  printf("name1 = %lf\n", 1.1);

  int scanfNum;
  scanf("%d", &scanfNum);
  printf("scanfNum = %d\n", scanfNum);

  
  return 0;
}