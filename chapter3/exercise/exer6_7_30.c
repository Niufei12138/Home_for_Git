// 编写函数不允许创建临时变量，求字符串的长度。
#include<stdio.h>
// 常规方法，使用临时变量
// int string_lenth(char* arr)
// {
//     int i=0;
//     while (*arr!='\0')
//     {i++;
//     arr++;//前一个元素地址++等于后一个元素地址
//     }
//     return i;
// int main()
// {
//     char arr[]="abc";
//     int lenth=string_lenth(arr);
//     printf("%d",lenth);
//     return 0;
// }

//递归方法
int lenth_lenth(char* arr)
{
    if(*arr!='\0')
    {
        return 1+lenth_lenth(arr+1);
    }
    else
        return 0;
}
int main()
{
    char arr[]="abcaaaaa";
    int lenth=lenth_lenth(arr);
    printf("%d",lenth);
    return 0;
}