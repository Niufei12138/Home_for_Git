#include<stdio.h>//���������ֵ�ĺ���
int get_max(int a,int b)
{
    if(a>b)
    {return a;}
    else
    {return b;}
}
int main()
{
    int a=10;
    int b=44;
    int max=get_max(a,b);
    printf("%d",max);
    return 0;
}