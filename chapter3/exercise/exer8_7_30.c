// 求第n个斐波那契数。
#include<stdio.h>
// 这种方法当计算的数比较大时，会重复计算大量的值，使其计算速度变慢
// long long int fibo(int a)
// {
//     if(a<=2)
//     {
//         return 1;
//     }
//     else
//     {    
//         return fibo(a-1)+fibo(a-2);
//     }
// } 

long long int fibo(int n)
{
    long long int a=1;  
    long long int b=1;
    long long int c=1;
    while (n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
    
}
int main()
{
    int a=0;
    printf("请输入需要的斐波那契数：");
    scanf("%d",&a);
    printf("\n结果是：%lld",fibo(a));
    return 0;
}