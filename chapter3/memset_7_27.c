// memset函数学习
#include<stdio.h>
#include <string.h>
int main()
{
    char arr[]="宝 宝洗澡，皮肤好好";
    memset(arr,97,3);
    printf(arr);
    return 0;
}