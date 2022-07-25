// 判断一个数是否是奇数
#include<stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    int m=a%2;
    if(m==0)
    {
        printf("a是偶数");
    }
    else
    {
        printf("a是奇数");
    }
    return 0;
}
