#include<stdio.h>//用函数进行闰年判断
int leap_year(int a)
{if(((a%4==0)&(a%100!=0))||(a%400==0))
{return 1;}
else 
return 0;}
int main()
{
    int year=0;
    for(year=1000;year<=2000;year++)
    {if (leap_year(year)==1)
    printf("%d  ",year);}
    
    return 0;
}