// for(表达式1; 表达式2; 表达式3)
// 循环语句;
#include<stdio.h>
int main()
{
    int i=0;
    for (i=1;i<=50;i+=1)
    {
        if(i<20&&i>10)
            {
                continue;
            }
        printf("%d\n",i);
    }
    return 0;
}