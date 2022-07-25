#include <stdio.h>
int main()
{
    int a=10;
    int* p=&a; //int*——定义指针型变量 
    // &a取a的地址
    printf("%p\n",&a);//打印地址，
    // %p是以地址的形式打印
    printf("%p\n",p);
    *p=20;//解引用操作符
    // 把20存到p地址
    printf("a=%d",a);
    return 0;
}