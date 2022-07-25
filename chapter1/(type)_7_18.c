// 强制类型转换
#include <stdio.h>
int main()
{
    int a=(int)3.14;//可以让系统警告跳过，直接把3.14对应的整数赋予a
    printf("%d",a);
    return 0;
}