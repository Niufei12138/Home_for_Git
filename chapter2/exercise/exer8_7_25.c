// 将三个值按从大到小打印
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b)
    {
        int tem=a;
        a=b;
        b=tem;
    }    if (a<c)
    {
        int tem=a;
        a=c;
        c=tem;
    }    if (b<c)
    {
        int tem=b;
        b=c;
        c=tem;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}