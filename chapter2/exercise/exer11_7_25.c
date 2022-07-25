#include<stdio.h>
int main()
{
    int year=0;
    int count=0;
    for (year=1000;year<=2000;year++)
    {if ((year%4==0 && year%100!=0)||(year%400==0))
    {printf("%d   ",year);
    count++;
    if (count%15==0)
    {printf("\n");};}
    }
    printf("\n\n闰年总数为：%d",count);
    return 0;
}