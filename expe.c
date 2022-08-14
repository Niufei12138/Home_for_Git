#include<stdio.h>
#include<string.h>
int main()
{
int a[3][4] = {0};
printf("%d\n",sizeof(a));         //3*4*4=48
printf("%d\n",sizeof(a[0][0]));   //4
printf("%d\n",sizeof(a[0]));      //4*4=16
printf("%d\n",sizeof(a[0]+1));    //4/8  表示第一行
                            //   第二个元素的地址，与a+1区别
printf("%d\n",sizeof(*(a[0]+1))); //4  第一行第二个元素的大小
printf("%d\n",sizeof(a+1));       //4/8 第二行的地址
printf("%d\n",sizeof(*(a+1)));    //16 第二行的大小
printf("%d\n",sizeof(&a[0]+1));   //4/8  第二行的地址
printf("%d\n",sizeof(*(&a[0]+1)));//16 第二行大小
printf("%d\n",sizeof(*a));        //16 第一行的大小
printf("%d\n",sizeof(a[3]));      //16 第四行大小，这个表达没
                            // 错，参照二维数组的定义，行可以省略
return 0;
}