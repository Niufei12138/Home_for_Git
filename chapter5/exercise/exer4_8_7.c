#include<stdio.h>
int get_diff(int m,int n)
{
    int count;
    int a=(m^n);
    while (a)
    {
        a=a&(a-1);
        count++;
    }
    return count;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int num=get_diff(m,n);
    printf("%d",num);
    return 0;
}