#include<stdio.h>
// 函数定义
// int Max(int a,int b)
// {
//     int max;
//     return max=(a>b?a:b);
// }
// int main()
// {
//     int a=14;
//     int b=32;
//     int max=Max(a,b);
//     printf("%d",max);
//     return 0;
// }


// 宏定义  将Max(a,b)替换为(a>b?a:b)
#define Max(a,b) (a>b?a:b)
int main()
{
    int a=14;
    int b=3;
    int max=Max(a,b);
    printf("%d",max);
    return 0;
}