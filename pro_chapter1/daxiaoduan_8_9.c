//判断计算机大小端
// 函数实现，返回1，小端，0，大端
#include<stdio.h>

// 实现1
// int check_keys()//返回1，小端，0，大端
// {
//         int a=1;
//     char *p=(char*) &a;
//     if((*p)==1)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// 优化2——优化步骤
int check_keys()
{
    int a=1;
    return *(char*)(&a);//用char*访问int a的第一个字节
}
int main()
{
    int ret=check_keys();
    if(ret==1)
    {
        printf("小端");
    }
    else
    {
        printf("大端");
    }
    return 0;
}