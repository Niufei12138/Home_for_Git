// 求n的阶乘。（不考虑溢出）
#include <stdio.h>
int fact(int n)
{
    if(n>0)
    {
        return n*fact(n-1);
    }
    else
        return 1;
}
int main()
{
    int a=0;
    printf("请输入需要阶乘的数：");
    scanf("%d",&a);
    printf("\n结果是：%d",fact(a));
    return 0;
}