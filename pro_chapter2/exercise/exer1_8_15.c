#include<stdio.h>
int main()
{
int a[5] = { 1, 2, 3, 4, 5 };
int *ptr = (int *)(&a + 1);//&a为数组指针
                    // 跨过整个数组，再类型转换
printf("%d\n",a);   //打印出来为地址
printf( "%d,%d", *(a + 1), *(ptr - 1)); 
//          ptr类型为int*，-1后为数组最后一位元素地址
return 0;
}