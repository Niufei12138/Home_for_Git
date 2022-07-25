#include<stdio.h>//输出1~100之间3的倍数
int main()
{
    int a=1;
    for (a=1;a<=100;a++)
    {
        if (a%3==0)
        {printf("%d ",a);}
    }
    return 0;
}