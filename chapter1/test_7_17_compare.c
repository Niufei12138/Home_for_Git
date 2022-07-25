#include <stdio.h>
int compare1 (int num1,int num2)
{
    if (num1>=num2)
        return num1;
    else
        return num2;
}
int main()
{
    int a=0;
    int b=0;
    int result=0;
    scanf("%d%d",&a,&b);
    result=compare1(a,b);
    printf("较大值为：%d",result);
    return 0;
}