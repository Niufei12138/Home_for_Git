// 1. 计算 n的阶乘。
#include<stdio.h>
int main()
{
    int num;
    int i=1;
    int result=1;
    printf("请输入阶乘数；");
    scanf("%d",&num);
    // while (i<=num)
    // {result=result*i;
    // i++;
    // }
    for(i=1;i<=num;i++)
    {result*=i;}
    printf("结果：%d",result);
    return 0;
}