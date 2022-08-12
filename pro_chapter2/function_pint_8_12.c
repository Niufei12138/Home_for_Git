#include<stdio.h>
void test(int a)
{
    printf("该函数被使用 %d",a);
}
void print(char*str)
{
    printf("%s",str);
}
// int main()
// {
//     printf("%p\n",test);
//     printf("%p\n",&test);//两者完全相同
//     void (*ptst)(int)=test;
//     (*ptst)(8);
//     return 0;
// }

int main()
{
    char arr[]="abcdef";
    void (*p)(char*)=print;
    (*p)(arr);
    return 0;
}