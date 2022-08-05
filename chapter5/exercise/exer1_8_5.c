#include<stdio.h>//不能创建临时变量（第三个变量），实现两个数的交换。
//法1：交错加减
// int main()
// {
//     int a=3;
//     int b=5;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d\n%d",a,b);
//     return 0;
// }

// 法2：异或法
int main()
{
    int a=3;//0000011
    int b=5;//0000101
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);

    return 0;
}